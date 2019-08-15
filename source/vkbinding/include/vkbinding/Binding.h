
#pragma once


#include <string>
#include <set>
#include <array>
#include <vector>
#include <functional>
#include <unordered_map>

#ifdef VKBINDING_USE_BOOST_THREAD
#include <boost/thread.hpp>
namespace std_boost = boost;
#else
#include <mutex>
namespace std_boost = std;
#endif

#include <vkbinding/vkbinding_api.h>
#include <vkbinding/vkbinding_features.h>

#include <vkbinding/AbstractFunction.h>
#include <vkbinding/ContextHandle.h>
#include <vkbinding/Function.h>
#include <vkbinding/CallbackMask.h>
#include <vkbinding/FunctionCall.h>
#include <vkbinding/ProcAddress.h>

#include <vkbinding/vk/types.h>


namespace vkbinding
{


/**
*  @brief
*    The main interface to handle additional features to OpenGL functions besides regular function calls
*
*  Additional features include binding initialization (even for multi-threaded environments), additional function registration,
*  context switches (for multi-context environments) and basic reflection in form of accessors to the full list of functions
*/
class VKBINDING_API Binding
{
public:
    /**
    *  @brief
    *    The callback type of a simple function callback without parameters and return value
    */
    using SimpleFunctionCallback = std::function<void(const AbstractFunction &)>;

    /**
    *  @brief
    *    The callback type of a function callback with parameters and return value
    */
    using FunctionCallback = std::function<void(const FunctionCall &)>;

    /**
    *  @brief
    *    The callback type of a function log callback with parameters and return value
    */
    using FunctionLogCallback = std::function<void(FunctionCall *)>;
    
    using array_t = std::array<AbstractFunction *, 334>; ///< The type of the build-in functions collection


public:
    /**
    *  @brief
    *    Deleted Constructor as all functions are static
    */
    Binding() = delete;

    /**
    *  @brief
    *    Initializes the binding for the current active OpenGL context
    *
    *  @param[in] functionPointerResolver
    *    A function pointer to resolve binding functions for this context
    *  @param[in] resolveFunctions (optional)
    *    Whether to resolve function pointers lazy (resolveFunctions = false) or immediately
    *
    *  @remarks
    *    After this call, the initialized context is already set active for the current thread.
    *    A functionPointerResolver with value 'nullptr' will get initialized with the function
    *    pointer from the initial thread.
    */
    static void initialize(vkbinding::GetProcAddress functionPointerResolver, bool resolveFunctions = true);

    /**
    *  @brief
    *    Registers an additional function for the additional features
    *
    *  @param[in] function
    *    The function to register
    *
    *  @remarks
    *    The additional features are callbacks, and use in multi-context environments
    */
    static void registerAdditionalFunction(AbstractFunction * function);

    /**
    *  @brief
    *    Resolve a single function pointer by given name
    *
    *  @param[in] name
    *    The name of the function
    */
    static ProcAddress resolveFunction(const char * name);

    /**
    *  @brief
    *    Resolves the funtion pointers of all registered OpenGL functions immediately for the current context
    */
    static void resolveFunctions();

    /**
    *  @brief
    *    Updates the callback mask of all registered OpenGL functions in the current state
    *
    *  @param[in] mask
    *    The new CallbackMask
    */
    static void setCallbackMask(CallbackMask mask);

    /**
    *  @brief
    *    Updates the callback mask of all registered OpenGL functions in the current state, excluding the blacklisted functions
     *
    *  @param[in] mask
    *    The new CallbackMask
    *  @param[in] blackList
    *    The blacklist of functions to exclude in this update
    */
    static void setCallbackMaskExcept(CallbackMask mask, const std::set<std::string> & blackList);

    /**
    *  @brief
    *    Updates the callback mask of all registered OpenGL functions in the current state to include the passed CallbackMask
    *
    *  @param[in] mask
    *    The CallbackMask to include
    */
    static void addCallbackMask(CallbackMask mask);

    /**
    *  @brief
    *    Updates the callback mask of all registered OpenGL functions in the current state to include the passed CallbackMask, excluding the blacklisted functions
    *
    *  @param[in] mask
    *    The CallbackMask to include
    *  @param[in] blackList
    *    The blacklist of functions to exclude in this update
    */
    static void addCallbackMaskExcept(CallbackMask mask, const std::set<std::string> & blackList);

    /**
    *  @brief
    *    Updates the callback mask of all registered OpenGL functions in the current state to exclude the passed CallbackMask
    *
    *  @param[in] mask
    *    The CallbackMask to exclude
    */
    static void removeCallbackMask(CallbackMask mask);

    /**
    *  @brief
    *    Updates the callback mask of all registered OpenGL functions in the current state to exclude the passed CallbackMask, excluding the blacklisted functions
    *
    *  @param[in] mask
    *    The CallbackMask to exclude
    *  @param[in] blackList
    *    The blacklist of functions to exclude in this update
    */
    static void removeCallbackMaskExcept(CallbackMask mask, const std::set<std::string> & blackList);

    /**
    *  @brief
    *    Unresolved callback accessor
    *
    *  @return
    *    The callback to use instead of unresolved function calls
    *
    *  @remarks
    *    Keep in mind that in addition to a registered callback, the callback mask of the current Function has to include the After flag to enable the callback
    */
    static SimpleFunctionCallback unresolvedCallback();

    /**
    *  @brief
    *    Updates the unresolved callback that is called upon invocation of an OpenGL function which have no counterpart in the OpenGL driver
    *
    *  @param[in] callback
    *    The callback to use instead of unresolved function calls
    *
    *  @remarks
    *    This callback is registered globally across all states.
    *    Keep in mind that in addition to a registered callback, the callback mask of the current Function has to include the Unresolved flag to enable the callback
    */
    static void setUnresolvedCallback(SimpleFunctionCallback callback);

    /**
    *  @brief
    *    Before callback accessor
    *
    *  @return
    *    The callback to use before an OpenGL function call
    *
    *  @remarks
    *    Keep in mind that in addition to a registered callback, the callback mask of the current Function has to include the After flag to enable the callback
    */
    static FunctionCallback beforeCallback();

    /**
    *  @brief
    *    Updates the before callback that is called before the actual OpenGL function invocation
    *
    *  @param[in] callback
    *    The callback to use before an OpenGL function call
    *
    *  @remarks
    *    This callback is registered globally across all states.
    *    Keep in mind that in addition to a registered callback, the callback mask of the current Function has to include the Before flag to enable the callback
    */
    static void setBeforeCallback(FunctionCallback callback);

    /**
    *  @brief
    *    After callback accessor
    *
    *  @return
    *    The callback to use after an OpenGL function call
    *
    *  @remarks
    *    Keep in mind that in addition to a registered callback, the callback mask of the current Function has to include the After flag to enable the callback
    */
    static FunctionCallback afterCallback();

    /**
    *  @brief
    *    Updates the after callback that is called after the actual OpenGL function invocation
    *
    *  @param[in] callback
    *    The callback to use after an OpenGL function call
    *
    *  @remarks
    *    This callback is registered globally across all states.
    *    Keep in mind that in addition to a registered callback, the callback mask of the current Function has to include the After flag to enable the callback
    */
    static void setAfterCallback(FunctionCallback callback);

    static FunctionLogCallback logCallback();
    static void setLogCallback(FunctionLogCallback callback);
    
    /**
    *  @brief
    *    The accessor for all build-in functions
    * 
    *  @return
    *    The list of all build-in functions
    */
    static const array_t & functions();

    static const std::vector<AbstractFunction *> & additionalFunctions();

    static size_t size();

    static void unresolved(const AbstractFunction * function);
    static void before(const FunctionCall & call);
    static void after(const FunctionCall & call);
    static void log(FunctionCall && call);

    static int maxPos();
    static int currentPos();


public:
    static Function<VkResult, VkDevice, const vk::VkAcquireNextImageInfoKHR*, vk::uint32_t*> AcquireNextImage2KHR; ///< Wrapper for vkAcquireNextImage2KHR
    static Function<VkResult, VkDevice, VkSwapchainKHR, uint64_t, VkSemaphore, VkFence, vk::uint32_t*> AcquireNextImageKHR; ///< Wrapper for vkAcquireNextImageKHR
    static Function<VkResult, VkDevice, const vk::VkPerformanceConfigurationAcquireInfoINTEL*, vk::VkPerformanceConfigurationINTEL*> AcquirePerformanceConfigurationINTEL; ///< Wrapper for vkAcquirePerformanceConfigurationINTEL
    static Function<VkResult, VkDevice, const vk::VkCommandBufferAllocateInfo*, vk::VkCommandBuffer*> AllocateCommandBuffers; ///< Wrapper for vkAllocateCommandBuffers
    static Function<VkResult, VkDevice, const vk::VkDescriptorSetAllocateInfo*, vk::VkDescriptorSet*> AllocateDescriptorSets; ///< Wrapper for vkAllocateDescriptorSets
    static Function<VkResult, VkDevice, const vk::VkMemoryAllocateInfo*, const vk::VkAllocationCallbacks*, vk::VkDeviceMemory*> AllocateMemory; ///< Wrapper for vkAllocateMemory
    static Function<VkResult, VkCommandBuffer, const vk::VkCommandBufferBeginInfo*> BeginCommandBuffer; ///< Wrapper for vkBeginCommandBuffer
    static Function<VkResult, VkDevice, uint32_t, const vk::VkBindAccelerationStructureMemoryInfoNV*> BindAccelerationStructureMemoryNV; ///< Wrapper for vkBindAccelerationStructureMemoryNV
    static Function<VkResult, VkDevice, VkBuffer, VkDeviceMemory, VkDeviceSize> BindBufferMemory; ///< Wrapper for vkBindBufferMemory
    static Function<VkResult, VkDevice, uint32_t, const vk::VkBindBufferMemoryInfo*> BindBufferMemory2; ///< Wrapper for vkBindBufferMemory2
    static Function<VkResult, VkDevice, uint32_t, const vk::VkBindBufferMemoryInfo*> BindBufferMemory2KHR; ///< Wrapper for vkBindBufferMemory2KHR
    static Function<VkResult, VkDevice, VkImage, VkDeviceMemory, VkDeviceSize> BindImageMemory; ///< Wrapper for vkBindImageMemory
    static Function<VkResult, VkDevice, uint32_t, const vk::VkBindImageMemoryInfo*> BindImageMemory2; ///< Wrapper for vkBindImageMemory2
    static Function<VkResult, VkDevice, uint32_t, const vk::VkBindImageMemoryInfo*> BindImageMemory2KHR; ///< Wrapper for vkBindImageMemory2KHR
    static Function<void, VkCommandBuffer, const vk::VkConditionalRenderingBeginInfoEXT*> CmdBeginConditionalRenderingEXT; ///< Wrapper for vkCmdBeginConditionalRenderingEXT
    static Function<void, VkCommandBuffer, const VkDebugUtilsLabelEXT*> CmdBeginDebugUtilsLabelEXT; ///< Wrapper for vkCmdBeginDebugUtilsLabelEXT
    static Function<void, VkCommandBuffer, VkQueryPool, uint32_t, VkQueryControlFlags> CmdBeginQuery; ///< Wrapper for vkCmdBeginQuery
    static Function<void, VkCommandBuffer, VkQueryPool, uint32_t, VkQueryControlFlags, uint32_t> CmdBeginQueryIndexedEXT; ///< Wrapper for vkCmdBeginQueryIndexedEXT
    static Function<void, VkCommandBuffer, const vk::VkRenderPassBeginInfo*, VkSubpassContents> CmdBeginRenderPass; ///< Wrapper for vkCmdBeginRenderPass
    static Function<void, VkCommandBuffer, const vk::VkRenderPassBeginInfo*, const vk::VkSubpassBeginInfoKHR*> CmdBeginRenderPass2KHR; ///< Wrapper for vkCmdBeginRenderPass2KHR
    static Function<void, VkCommandBuffer, uint32_t, uint32_t, const vk::VkBuffer*, const vk::VkDeviceSize*> CmdBeginTransformFeedbackEXT; ///< Wrapper for vkCmdBeginTransformFeedbackEXT
    static Function<void, VkCommandBuffer, VkPipelineBindPoint, VkPipelineLayout, uint32_t, uint32_t, const vk::VkDescriptorSet*, uint32_t, const uint32_t*> CmdBindDescriptorSets; ///< Wrapper for vkCmdBindDescriptorSets
    static Function<void, VkCommandBuffer, VkBuffer, VkDeviceSize, VkIndexType> CmdBindIndexBuffer; ///< Wrapper for vkCmdBindIndexBuffer
    static Function<void, VkCommandBuffer, VkPipelineBindPoint, VkPipeline> CmdBindPipeline; ///< Wrapper for vkCmdBindPipeline
    static Function<void, VkCommandBuffer, VkImageView, VkImageLayout> CmdBindShadingRateImageNV; ///< Wrapper for vkCmdBindShadingRateImageNV
    static Function<void, VkCommandBuffer, uint32_t, uint32_t, const vk::VkBuffer*, const vk::VkDeviceSize*, const vk::VkDeviceSize*> CmdBindTransformFeedbackBuffersEXT; ///< Wrapper for vkCmdBindTransformFeedbackBuffersEXT
    static Function<void, VkCommandBuffer, uint32_t, uint32_t, const vk::VkBuffer*, const vk::VkDeviceSize*> CmdBindVertexBuffers; ///< Wrapper for vkCmdBindVertexBuffers
    static Function<void, VkCommandBuffer, VkImage, VkImageLayout, VkImage, VkImageLayout, uint32_t, const vk::VkImageBlit*, VkFilter> CmdBlitImage; ///< Wrapper for vkCmdBlitImage
    static Function<void, VkCommandBuffer, const vk::VkAccelerationStructureInfoNV*, VkBuffer, VkDeviceSize, VkBool32, VkAccelerationStructureNV, VkAccelerationStructureNV, VkBuffer, VkDeviceSize> CmdBuildAccelerationStructureNV; ///< Wrapper for vkCmdBuildAccelerationStructureNV
    static Function<void, VkCommandBuffer, uint32_t, const vk::VkClearAttachment*, uint32_t, const vk::VkClearRect*> CmdClearAttachments; ///< Wrapper for vkCmdClearAttachments
    static Function<void, VkCommandBuffer, VkImage, VkImageLayout, const vk::VkClearColorValue*, uint32_t, const vk::VkImageSubresourceRange*> CmdClearColorImage; ///< Wrapper for vkCmdClearColorImage
    static Function<void, VkCommandBuffer, VkImage, VkImageLayout, const vk::VkClearDepthStencilValue*, uint32_t, const vk::VkImageSubresourceRange*> CmdClearDepthStencilImage; ///< Wrapper for vkCmdClearDepthStencilImage
    static Function<void, VkCommandBuffer, VkAccelerationStructureNV, VkAccelerationStructureNV, VkCopyAccelerationStructureModeNV> CmdCopyAccelerationStructureNV; ///< Wrapper for vkCmdCopyAccelerationStructureNV
    static Function<void, VkCommandBuffer, VkBuffer, VkBuffer, uint32_t, const vk::VkBufferCopy*> CmdCopyBuffer; ///< Wrapper for vkCmdCopyBuffer
    static Function<void, VkCommandBuffer, VkBuffer, VkImage, VkImageLayout, uint32_t, const vk::VkBufferImageCopy*> CmdCopyBufferToImage; ///< Wrapper for vkCmdCopyBufferToImage
    static Function<void, VkCommandBuffer, VkImage, VkImageLayout, VkImage, VkImageLayout, uint32_t, const vk::VkImageCopy*> CmdCopyImage; ///< Wrapper for vkCmdCopyImage
    static Function<void, VkCommandBuffer, VkImage, VkImageLayout, VkBuffer, uint32_t, const vk::VkBufferImageCopy*> CmdCopyImageToBuffer; ///< Wrapper for vkCmdCopyImageToBuffer
    static Function<void, VkCommandBuffer, VkQueryPool, uint32_t, uint32_t, VkBuffer, VkDeviceSize, VkDeviceSize, VkQueryResultFlags> CmdCopyQueryPoolResults; ///< Wrapper for vkCmdCopyQueryPoolResults
    static Function<void, VkCommandBuffer, const vk::VkDebugMarkerMarkerInfoEXT*> CmdDebugMarkerBeginEXT; ///< Wrapper for vkCmdDebugMarkerBeginEXT
    static Function<void, VkCommandBuffer> CmdDebugMarkerEndEXT; ///< Wrapper for vkCmdDebugMarkerEndEXT
    static Function<void, VkCommandBuffer, const vk::VkDebugMarkerMarkerInfoEXT*> CmdDebugMarkerInsertEXT; ///< Wrapper for vkCmdDebugMarkerInsertEXT
    static Function<void, VkCommandBuffer, uint32_t, uint32_t, uint32_t> CmdDispatch; ///< Wrapper for vkCmdDispatch
    static Function<void, VkCommandBuffer, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t> CmdDispatchBase; ///< Wrapper for vkCmdDispatchBase
    static Function<void, VkCommandBuffer, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t> CmdDispatchBaseKHR; ///< Wrapper for vkCmdDispatchBaseKHR
    static Function<void, VkCommandBuffer, VkBuffer, VkDeviceSize> CmdDispatchIndirect; ///< Wrapper for vkCmdDispatchIndirect
    static Function<void, VkCommandBuffer, uint32_t, uint32_t, uint32_t, uint32_t> CmdDraw; ///< Wrapper for vkCmdDraw
    static Function<void, VkCommandBuffer, uint32_t, uint32_t, uint32_t, int32_t, uint32_t> CmdDrawIndexed; ///< Wrapper for vkCmdDrawIndexed
    static Function<void, VkCommandBuffer, VkBuffer, VkDeviceSize, uint32_t, uint32_t> CmdDrawIndexedIndirect; ///< Wrapper for vkCmdDrawIndexedIndirect
    static Function<void, VkCommandBuffer, VkBuffer, VkDeviceSize, VkBuffer, VkDeviceSize, uint32_t, uint32_t> CmdDrawIndexedIndirectCountAMD; ///< Wrapper for vkCmdDrawIndexedIndirectCountAMD
    static Function<void, VkCommandBuffer, VkBuffer, VkDeviceSize, VkBuffer, VkDeviceSize, uint32_t, uint32_t> CmdDrawIndexedIndirectCountKHR; ///< Wrapper for vkCmdDrawIndexedIndirectCountKHR
    static Function<void, VkCommandBuffer, VkBuffer, VkDeviceSize, uint32_t, uint32_t> CmdDrawIndirect; ///< Wrapper for vkCmdDrawIndirect
    static Function<void, VkCommandBuffer, uint32_t, uint32_t, VkBuffer, VkDeviceSize, uint32_t, uint32_t> CmdDrawIndirectByteCountEXT; ///< Wrapper for vkCmdDrawIndirectByteCountEXT
    static Function<void, VkCommandBuffer, VkBuffer, VkDeviceSize, VkBuffer, VkDeviceSize, uint32_t, uint32_t> CmdDrawIndirectCountAMD; ///< Wrapper for vkCmdDrawIndirectCountAMD
    static Function<void, VkCommandBuffer, VkBuffer, VkDeviceSize, VkBuffer, VkDeviceSize, uint32_t, uint32_t> CmdDrawIndirectCountKHR; ///< Wrapper for vkCmdDrawIndirectCountKHR
    static Function<void, VkCommandBuffer, VkBuffer, VkDeviceSize, VkBuffer, VkDeviceSize, uint32_t, uint32_t> CmdDrawMeshTasksIndirectCountNV; ///< Wrapper for vkCmdDrawMeshTasksIndirectCountNV
    static Function<void, VkCommandBuffer, VkBuffer, VkDeviceSize, uint32_t, uint32_t> CmdDrawMeshTasksIndirectNV; ///< Wrapper for vkCmdDrawMeshTasksIndirectNV
    static Function<void, VkCommandBuffer, uint32_t, uint32_t> CmdDrawMeshTasksNV; ///< Wrapper for vkCmdDrawMeshTasksNV
    static Function<void, VkCommandBuffer> CmdEndConditionalRenderingEXT; ///< Wrapper for vkCmdEndConditionalRenderingEXT
    static Function<void, VkCommandBuffer> CmdEndDebugUtilsLabelEXT; ///< Wrapper for vkCmdEndDebugUtilsLabelEXT
    static Function<void, VkCommandBuffer, VkQueryPool, uint32_t> CmdEndQuery; ///< Wrapper for vkCmdEndQuery
    static Function<void, VkCommandBuffer, VkQueryPool, uint32_t, uint32_t> CmdEndQueryIndexedEXT; ///< Wrapper for vkCmdEndQueryIndexedEXT
    static Function<void, VkCommandBuffer> CmdEndRenderPass; ///< Wrapper for vkCmdEndRenderPass
    static Function<void, VkCommandBuffer, const vk::VkSubpassEndInfoKHR*> CmdEndRenderPass2KHR; ///< Wrapper for vkCmdEndRenderPass2KHR
    static Function<void, VkCommandBuffer, uint32_t, uint32_t, const vk::VkBuffer*, const vk::VkDeviceSize*> CmdEndTransformFeedbackEXT; ///< Wrapper for vkCmdEndTransformFeedbackEXT
    static Function<void, VkCommandBuffer, uint32_t, const VkCommandBuffer*> CmdExecuteCommands; ///< Wrapper for vkCmdExecuteCommands
    static Function<void, VkCommandBuffer, VkBuffer, VkDeviceSize, VkDeviceSize, uint32_t> CmdFillBuffer; ///< Wrapper for vkCmdFillBuffer
    static Function<void, VkCommandBuffer, const VkDebugUtilsLabelEXT*> CmdInsertDebugUtilsLabelEXT; ///< Wrapper for vkCmdInsertDebugUtilsLabelEXT
    static Function<void, VkCommandBuffer, VkSubpassContents> CmdNextSubpass; ///< Wrapper for vkCmdNextSubpass
    static Function<void, VkCommandBuffer, const vk::VkSubpassBeginInfoKHR*, const vk::VkSubpassEndInfoKHR*> CmdNextSubpass2KHR; ///< Wrapper for vkCmdNextSubpass2KHR
    static Function<void, VkCommandBuffer, VkPipelineStageFlags, VkPipelineStageFlags, VkDependencyFlags, uint32_t, const vk::VkMemoryBarrier*, uint32_t, const vk::VkBufferMemoryBarrier*, uint32_t, const vk::VkImageMemoryBarrier*> CmdPipelineBarrier; ///< Wrapper for vkCmdPipelineBarrier
    static Function<void, VkCommandBuffer, const vk::VkCmdProcessCommandsInfoNVX*> CmdProcessCommandsNVX; ///< Wrapper for vkCmdProcessCommandsNVX
    static Function<void, VkCommandBuffer, VkPipelineLayout, VkShaderStageFlags, uint32_t, uint32_t, const void*> CmdPushConstants; ///< Wrapper for vkCmdPushConstants
    static Function<void, VkCommandBuffer, VkPipelineBindPoint, VkPipelineLayout, uint32_t, uint32_t, const vk::VkWriteDescriptorSet*> CmdPushDescriptorSetKHR; ///< Wrapper for vkCmdPushDescriptorSetKHR
    static Function<void, VkCommandBuffer, VkDescriptorUpdateTemplate, VkPipelineLayout, uint32_t, const void*> CmdPushDescriptorSetWithTemplateKHR; ///< Wrapper for vkCmdPushDescriptorSetWithTemplateKHR
    static Function<void, VkCommandBuffer, const vk::VkCmdReserveSpaceForCommandsInfoNVX*> CmdReserveSpaceForCommandsNVX; ///< Wrapper for vkCmdReserveSpaceForCommandsNVX
    static Function<void, VkCommandBuffer, VkEvent, VkPipelineStageFlags> CmdResetEvent; ///< Wrapper for vkCmdResetEvent
    static Function<void, VkCommandBuffer, VkQueryPool, uint32_t, uint32_t> CmdResetQueryPool; ///< Wrapper for vkCmdResetQueryPool
    static Function<void, VkCommandBuffer, VkImage, VkImageLayout, VkImage, VkImageLayout, uint32_t, const vk::VkImageResolve*> CmdResolveImage; ///< Wrapper for vkCmdResolveImage
    static Function<void, VkCommandBuffer, const vk::float> CmdSetBlendConstants; ///< Wrapper for vkCmdSetBlendConstants
    static Function<void, VkCommandBuffer, const void*> CmdSetCheckpointNV; ///< Wrapper for vkCmdSetCheckpointNV
    static Function<void, VkCommandBuffer, VkCoarseSampleOrderTypeNV, uint32_t, const VkCoarseSampleOrderCustomNV*> CmdSetCoarseSampleOrderNV; ///< Wrapper for vkCmdSetCoarseSampleOrderNV
    static Function<void, VkCommandBuffer, float, float, float> CmdSetDepthBias; ///< Wrapper for vkCmdSetDepthBias
    static Function<void, VkCommandBuffer, float, float> CmdSetDepthBounds; ///< Wrapper for vkCmdSetDepthBounds
    static Function<void, VkCommandBuffer, uint32_t> CmdSetDeviceMask; ///< Wrapper for vkCmdSetDeviceMask
    static Function<void, VkCommandBuffer, uint32_t> CmdSetDeviceMaskKHR; ///< Wrapper for vkCmdSetDeviceMaskKHR
    static Function<void, VkCommandBuffer, uint32_t, uint32_t, const VkRect2D*> CmdSetDiscardRectangleEXT; ///< Wrapper for vkCmdSetDiscardRectangleEXT
    static Function<void, VkCommandBuffer, VkEvent, VkPipelineStageFlags> CmdSetEvent; ///< Wrapper for vkCmdSetEvent
    static Function<void, VkCommandBuffer, uint32_t, uint32_t, const VkRect2D*> CmdSetExclusiveScissorNV; ///< Wrapper for vkCmdSetExclusiveScissorNV
    static Function<void, VkCommandBuffer, uint32_t, uint16_t> CmdSetLineStippleEXT; ///< Wrapper for vkCmdSetLineStippleEXT
    static Function<void, VkCommandBuffer, float> CmdSetLineWidth; ///< Wrapper for vkCmdSetLineWidth
    static Function<VkResult, VkCommandBuffer, const vk::VkPerformanceMarkerInfoINTEL*> CmdSetPerformanceMarkerINTEL; ///< Wrapper for vkCmdSetPerformanceMarkerINTEL
    static Function<VkResult, VkCommandBuffer, const vk::VkPerformanceOverrideInfoINTEL*> CmdSetPerformanceOverrideINTEL; ///< Wrapper for vkCmdSetPerformanceOverrideINTEL
    static Function<VkResult, VkCommandBuffer, const vk::VkPerformanceStreamMarkerInfoINTEL*> CmdSetPerformanceStreamMarkerINTEL; ///< Wrapper for vkCmdSetPerformanceStreamMarkerINTEL
    static Function<void, VkCommandBuffer, const vk::VkSampleLocationsInfoEXT*> CmdSetSampleLocationsEXT; ///< Wrapper for vkCmdSetSampleLocationsEXT
    static Function<void, VkCommandBuffer, uint32_t, uint32_t, const VkRect2D*> CmdSetScissor; ///< Wrapper for vkCmdSetScissor
    static Function<void, VkCommandBuffer, VkStencilFaceFlags, uint32_t> CmdSetStencilCompareMask; ///< Wrapper for vkCmdSetStencilCompareMask
    static Function<void, VkCommandBuffer, VkStencilFaceFlags, uint32_t> CmdSetStencilReference; ///< Wrapper for vkCmdSetStencilReference
    static Function<void, VkCommandBuffer, VkStencilFaceFlags, uint32_t> CmdSetStencilWriteMask; ///< Wrapper for vkCmdSetStencilWriteMask
    static Function<void, VkCommandBuffer, uint32_t, uint32_t, const VkViewport*> CmdSetViewport; ///< Wrapper for vkCmdSetViewport
    static Function<void, VkCommandBuffer, uint32_t, uint32_t, const VkShadingRatePaletteNV*> CmdSetViewportShadingRatePaletteNV; ///< Wrapper for vkCmdSetViewportShadingRatePaletteNV
    static Function<void, VkCommandBuffer, uint32_t, uint32_t, const VkViewportWScalingNV*> CmdSetViewportWScalingNV; ///< Wrapper for vkCmdSetViewportWScalingNV
    static Function<void, VkCommandBuffer, VkBuffer, VkDeviceSize, VkBuffer, VkDeviceSize, VkDeviceSize, VkBuffer, VkDeviceSize, VkDeviceSize, VkBuffer, VkDeviceSize, VkDeviceSize, uint32_t, uint32_t, uint32_t> CmdTraceRaysNV; ///< Wrapper for vkCmdTraceRaysNV
    static Function<void, VkCommandBuffer, VkBuffer, VkDeviceSize, VkDeviceSize, const void*> CmdUpdateBuffer; ///< Wrapper for vkCmdUpdateBuffer
    static Function<void, VkCommandBuffer, uint32_t, const vk::VkEvent*, VkPipelineStageFlags, VkPipelineStageFlags, uint32_t, const vk::VkMemoryBarrier*, uint32_t, const vk::VkBufferMemoryBarrier*, uint32_t, const vk::VkImageMemoryBarrier*> CmdWaitEvents; ///< Wrapper for vkCmdWaitEvents
    static Function<void, VkCommandBuffer, uint32_t, const VkAccelerationStructureNV*, VkQueryType, VkQueryPool, uint32_t> CmdWriteAccelerationStructuresPropertiesNV; ///< Wrapper for vkCmdWriteAccelerationStructuresPropertiesNV
    static Function<void, VkCommandBuffer, VkPipelineStageFlagBits, VkBuffer, VkDeviceSize, uint32_t> CmdWriteBufferMarkerAMD; ///< Wrapper for vkCmdWriteBufferMarkerAMD
    static Function<void, VkCommandBuffer, VkPipelineStageFlagBits, VkQueryPool, uint32_t> CmdWriteTimestamp; ///< Wrapper for vkCmdWriteTimestamp
    static Function<VkResult, VkDevice, VkPipeline, uint32_t> CompileDeferredNV; ///< Wrapper for vkCompileDeferredNV
    static Function<VkResult, VkDevice, const vk::VkAccelerationStructureCreateInfoNV*, const vk::VkAllocationCallbacks*, vk::VkAccelerationStructureNV*> CreateAccelerationStructureNV; ///< Wrapper for vkCreateAccelerationStructureNV
    static Function<VkResult, VkDevice, const vk::VkBufferCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkBuffer*> CreateBuffer; ///< Wrapper for vkCreateBuffer
    static Function<VkResult, VkDevice, const vk::VkBufferViewCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkBufferView*> CreateBufferView; ///< Wrapper for vkCreateBufferView
    static Function<VkResult, VkDevice, const vk::VkCommandPoolCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkCommandPool*> CreateCommandPool; ///< Wrapper for vkCreateCommandPool
    static Function<VkResult, VkDevice, VkPipelineCache, uint32_t, const vk::VkComputePipelineCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkPipeline*> CreateComputePipelines; ///< Wrapper for vkCreateComputePipelines
    static Function<VkResult, VkInstance, const vk::VkDebugReportCallbackCreateInfoEXT*, const vk::VkAllocationCallbacks*, vk::VkDebugReportCallbackEXT*> CreateDebugReportCallbackEXT; ///< Wrapper for vkCreateDebugReportCallbackEXT
    static Function<VkResult, VkInstance, const vk::VkDebugUtilsMessengerCreateInfoEXT*, const vk::VkAllocationCallbacks*, vk::VkDebugUtilsMessengerEXT*> CreateDebugUtilsMessengerEXT; ///< Wrapper for vkCreateDebugUtilsMessengerEXT
    static Function<VkResult, VkDevice, const vk::VkDescriptorPoolCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkDescriptorPool*> CreateDescriptorPool; ///< Wrapper for vkCreateDescriptorPool
    static Function<VkResult, VkDevice, const vk::VkDescriptorSetLayoutCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkDescriptorSetLayout*> CreateDescriptorSetLayout; ///< Wrapper for vkCreateDescriptorSetLayout
    static Function<VkResult, VkDevice, const vk::VkDescriptorUpdateTemplateCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkDescriptorUpdateTemplate*> CreateDescriptorUpdateTemplate; ///< Wrapper for vkCreateDescriptorUpdateTemplate
    static Function<VkResult, VkDevice, const vk::VkDescriptorUpdateTemplateCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkDescriptorUpdateTemplate*> CreateDescriptorUpdateTemplateKHR; ///< Wrapper for vkCreateDescriptorUpdateTemplateKHR
    static Function<VkResult, VkPhysicalDevice, const vk::VkDeviceCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkDevice*> CreateDevice; ///< Wrapper for vkCreateDevice
    static Function<VkResult, VkPhysicalDevice, VkDisplayKHR, const vk::VkDisplayModeCreateInfoKHR*, const vk::VkAllocationCallbacks*, vk::VkDisplayModeKHR*> CreateDisplayModeKHR; ///< Wrapper for vkCreateDisplayModeKHR
    static Function<VkResult, VkInstance, const vk::VkDisplaySurfaceCreateInfoKHR*, const vk::VkAllocationCallbacks*, vk::VkSurfaceKHR*> CreateDisplayPlaneSurfaceKHR; ///< Wrapper for vkCreateDisplayPlaneSurfaceKHR
    static Function<VkResult, VkDevice, const vk::VkEventCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkEvent*> CreateEvent; ///< Wrapper for vkCreateEvent
    static Function<VkResult, VkDevice, const vk::VkFenceCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkFence*> CreateFence; ///< Wrapper for vkCreateFence
    static Function<VkResult, VkDevice, const vk::VkFramebufferCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkFramebuffer*> CreateFramebuffer; ///< Wrapper for vkCreateFramebuffer
    static Function<VkResult, VkDevice, VkPipelineCache, uint32_t, const vk::VkGraphicsPipelineCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkPipeline*> CreateGraphicsPipelines; ///< Wrapper for vkCreateGraphicsPipelines
    static Function<VkResult, VkInstance, const vk::VkHeadlessSurfaceCreateInfoEXT*, const vk::VkAllocationCallbacks*, vk::VkSurfaceKHR*> CreateHeadlessSurfaceEXT; ///< Wrapper for vkCreateHeadlessSurfaceEXT
    static Function<VkResult, VkDevice, const vk::VkImageCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkImage*> CreateImage; ///< Wrapper for vkCreateImage
    static Function<VkResult, VkDevice, const vk::VkImageViewCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkImageView*> CreateImageView; ///< Wrapper for vkCreateImageView
    static Function<VkResult, VkDevice, const vk::VkIndirectCommandsLayoutCreateInfoNVX*, const vk::VkAllocationCallbacks*, vk::VkIndirectCommandsLayoutNVX*> CreateIndirectCommandsLayoutNVX; ///< Wrapper for vkCreateIndirectCommandsLayoutNVX
    static Function<VkResult, const vk::VkInstanceCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkInstance*> CreateInstance; ///< Wrapper for vkCreateInstance
    static Function<VkResult, VkDevice, const vk::VkObjectTableCreateInfoNVX*, const vk::VkAllocationCallbacks*, vk::VkObjectTableNVX*> CreateObjectTableNVX; ///< Wrapper for vkCreateObjectTableNVX
    static Function<VkResult, VkDevice, const vk::VkPipelineCacheCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkPipelineCache*> CreatePipelineCache; ///< Wrapper for vkCreatePipelineCache
    static Function<VkResult, VkDevice, const vk::VkPipelineLayoutCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkPipelineLayout*> CreatePipelineLayout; ///< Wrapper for vkCreatePipelineLayout
    static Function<VkResult, VkDevice, const vk::VkQueryPoolCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkQueryPool*> CreateQueryPool; ///< Wrapper for vkCreateQueryPool
    static Function<VkResult, VkDevice, VkPipelineCache, uint32_t, const vk::VkRayTracingPipelineCreateInfoNV*, const vk::VkAllocationCallbacks*, vk::VkPipeline*> CreateRayTracingPipelinesNV; ///< Wrapper for vkCreateRayTracingPipelinesNV
    static Function<VkResult, VkDevice, const vk::VkRenderPassCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkRenderPass*> CreateRenderPass; ///< Wrapper for vkCreateRenderPass
    static Function<VkResult, VkDevice, const vk::VkRenderPassCreateInfo2KHR*, const vk::VkAllocationCallbacks*, vk::VkRenderPass*> CreateRenderPass2KHR; ///< Wrapper for vkCreateRenderPass2KHR
    static Function<VkResult, VkDevice, const vk::VkSamplerCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkSampler*> CreateSampler; ///< Wrapper for vkCreateSampler
    static Function<VkResult, VkDevice, const vk::VkSamplerYcbcrConversionCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkSamplerYcbcrConversion*> CreateSamplerYcbcrConversion; ///< Wrapper for vkCreateSamplerYcbcrConversion
    static Function<VkResult, VkDevice, const vk::VkSamplerYcbcrConversionCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkSamplerYcbcrConversion*> CreateSamplerYcbcrConversionKHR; ///< Wrapper for vkCreateSamplerYcbcrConversionKHR
    static Function<VkResult, VkDevice, const vk::VkSemaphoreCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkSemaphore*> CreateSemaphore; ///< Wrapper for vkCreateSemaphore
    static Function<VkResult, VkDevice, const vk::VkShaderModuleCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkShaderModule*> CreateShaderModule; ///< Wrapper for vkCreateShaderModule
    static Function<VkResult, VkDevice, uint32_t, const vk::VkSwapchainCreateInfoKHR*, const vk::VkAllocationCallbacks*, vk::VkSwapchainKHR*> CreateSharedSwapchainsKHR; ///< Wrapper for vkCreateSharedSwapchainsKHR
    static Function<VkResult, VkDevice, const vk::VkSwapchainCreateInfoKHR*, const vk::VkAllocationCallbacks*, vk::VkSwapchainKHR*> CreateSwapchainKHR; ///< Wrapper for vkCreateSwapchainKHR
    static Function<VkResult, VkDevice, const vk::VkValidationCacheCreateInfoEXT*, const vk::VkAllocationCallbacks*, vk::VkValidationCacheEXT*> CreateValidationCacheEXT; ///< Wrapper for vkCreateValidationCacheEXT
    static Function<VkResult, VkDevice, const vk::VkDebugMarkerObjectNameInfoEXT*> DebugMarkerSetObjectNameEXT; ///< Wrapper for vkDebugMarkerSetObjectNameEXT
    static Function<VkResult, VkDevice, const vk::VkDebugMarkerObjectTagInfoEXT*> DebugMarkerSetObjectTagEXT; ///< Wrapper for vkDebugMarkerSetObjectTagEXT
    static Function<void, VkInstance, VkDebugReportFlagsEXT, VkDebugReportObjectTypeEXT, uint64_t, size_t, int32_t, const char*, const char*> DebugReportMessageEXT; ///< Wrapper for vkDebugReportMessageEXT
    static Function<void, VkDevice, VkAccelerationStructureNV, const vk::VkAllocationCallbacks*> DestroyAccelerationStructureNV; ///< Wrapper for vkDestroyAccelerationStructureNV
    static Function<void, VkDevice, VkBuffer, const vk::VkAllocationCallbacks*> DestroyBuffer; ///< Wrapper for vkDestroyBuffer
    static Function<void, VkDevice, VkBufferView, const vk::VkAllocationCallbacks*> DestroyBufferView; ///< Wrapper for vkDestroyBufferView
    static Function<void, VkDevice, VkCommandPool, const vk::VkAllocationCallbacks*> DestroyCommandPool; ///< Wrapper for vkDestroyCommandPool
    static Function<void, VkInstance, VkDebugReportCallbackEXT, const vk::VkAllocationCallbacks*> DestroyDebugReportCallbackEXT; ///< Wrapper for vkDestroyDebugReportCallbackEXT
    static Function<void, VkInstance, VkDebugUtilsMessengerEXT, const vk::VkAllocationCallbacks*> DestroyDebugUtilsMessengerEXT; ///< Wrapper for vkDestroyDebugUtilsMessengerEXT
    static Function<void, VkDevice, VkDescriptorPool, const vk::VkAllocationCallbacks*> DestroyDescriptorPool; ///< Wrapper for vkDestroyDescriptorPool
    static Function<void, VkDevice, VkDescriptorSetLayout, const vk::VkAllocationCallbacks*> DestroyDescriptorSetLayout; ///< Wrapper for vkDestroyDescriptorSetLayout
    static Function<void, VkDevice, VkDescriptorUpdateTemplate, const vk::VkAllocationCallbacks*> DestroyDescriptorUpdateTemplate; ///< Wrapper for vkDestroyDescriptorUpdateTemplate
    static Function<void, VkDevice, VkDescriptorUpdateTemplate, const vk::VkAllocationCallbacks*> DestroyDescriptorUpdateTemplateKHR; ///< Wrapper for vkDestroyDescriptorUpdateTemplateKHR
    static Function<void, VkDevice, const vk::VkAllocationCallbacks*> DestroyDevice; ///< Wrapper for vkDestroyDevice
    static Function<void, VkDevice, VkEvent, const vk::VkAllocationCallbacks*> DestroyEvent; ///< Wrapper for vkDestroyEvent
    static Function<void, VkDevice, VkFence, const vk::VkAllocationCallbacks*> DestroyFence; ///< Wrapper for vkDestroyFence
    static Function<void, VkDevice, VkFramebuffer, const vk::VkAllocationCallbacks*> DestroyFramebuffer; ///< Wrapper for vkDestroyFramebuffer
    static Function<void, VkDevice, VkImage, const vk::VkAllocationCallbacks*> DestroyImage; ///< Wrapper for vkDestroyImage
    static Function<void, VkDevice, VkImageView, const vk::VkAllocationCallbacks*> DestroyImageView; ///< Wrapper for vkDestroyImageView
    static Function<void, VkDevice, VkIndirectCommandsLayoutNVX, const vk::VkAllocationCallbacks*> DestroyIndirectCommandsLayoutNVX; ///< Wrapper for vkDestroyIndirectCommandsLayoutNVX
    static Function<void, VkInstance, const vk::VkAllocationCallbacks*> DestroyInstance; ///< Wrapper for vkDestroyInstance
    static Function<void, VkDevice, VkObjectTableNVX, const vk::VkAllocationCallbacks*> DestroyObjectTableNVX; ///< Wrapper for vkDestroyObjectTableNVX
    static Function<void, VkDevice, VkPipeline, const vk::VkAllocationCallbacks*> DestroyPipeline; ///< Wrapper for vkDestroyPipeline
    static Function<void, VkDevice, VkPipelineCache, const vk::VkAllocationCallbacks*> DestroyPipelineCache; ///< Wrapper for vkDestroyPipelineCache
    static Function<void, VkDevice, VkPipelineLayout, const vk::VkAllocationCallbacks*> DestroyPipelineLayout; ///< Wrapper for vkDestroyPipelineLayout
    static Function<void, VkDevice, VkQueryPool, const vk::VkAllocationCallbacks*> DestroyQueryPool; ///< Wrapper for vkDestroyQueryPool
    static Function<void, VkDevice, VkRenderPass, const vk::VkAllocationCallbacks*> DestroyRenderPass; ///< Wrapper for vkDestroyRenderPass
    static Function<void, VkDevice, VkSampler, const vk::VkAllocationCallbacks*> DestroySampler; ///< Wrapper for vkDestroySampler
    static Function<void, VkDevice, VkSamplerYcbcrConversion, const vk::VkAllocationCallbacks*> DestroySamplerYcbcrConversion; ///< Wrapper for vkDestroySamplerYcbcrConversion
    static Function<void, VkDevice, VkSamplerYcbcrConversion, const vk::VkAllocationCallbacks*> DestroySamplerYcbcrConversionKHR; ///< Wrapper for vkDestroySamplerYcbcrConversionKHR
    static Function<void, VkDevice, VkSemaphore, const vk::VkAllocationCallbacks*> DestroySemaphore; ///< Wrapper for vkDestroySemaphore
    static Function<void, VkDevice, VkShaderModule, const vk::VkAllocationCallbacks*> DestroyShaderModule; ///< Wrapper for vkDestroyShaderModule
    static Function<void, VkInstance, VkSurfaceKHR, const vk::VkAllocationCallbacks*> DestroySurfaceKHR; ///< Wrapper for vkDestroySurfaceKHR
    static Function<void, VkDevice, VkSwapchainKHR, const vk::VkAllocationCallbacks*> DestroySwapchainKHR; ///< Wrapper for vkDestroySwapchainKHR
    static Function<void, VkDevice, VkValidationCacheEXT, const vk::VkAllocationCallbacks*> DestroyValidationCacheEXT; ///< Wrapper for vkDestroyValidationCacheEXT
    static Function<VkResult, VkDevice> DeviceWaitIdle; ///< Wrapper for vkDeviceWaitIdle
    static Function<VkResult, VkDevice, VkDisplayKHR, const vk::VkDisplayPowerInfoEXT*> DisplayPowerControlEXT; ///< Wrapper for vkDisplayPowerControlEXT
    static Function<VkResult, VkCommandBuffer> EndCommandBuffer; ///< Wrapper for vkEndCommandBuffer
    static Function<VkResult, VkPhysicalDevice, const char*, vk::uint32_t*, vk::VkExtensionProperties*> EnumerateDeviceExtensionProperties; ///< Wrapper for vkEnumerateDeviceExtensionProperties
    static Function<VkResult, VkPhysicalDevice, vk::uint32_t*, vk::VkLayerProperties*> EnumerateDeviceLayerProperties; ///< Wrapper for vkEnumerateDeviceLayerProperties
    static Function<VkResult, const char*, vk::uint32_t*, vk::VkExtensionProperties*> EnumerateInstanceExtensionProperties; ///< Wrapper for vkEnumerateInstanceExtensionProperties
    static Function<VkResult, vk::uint32_t*, vk::VkLayerProperties*> EnumerateInstanceLayerProperties; ///< Wrapper for vkEnumerateInstanceLayerProperties
    static Function<VkResult, vk::uint32_t*> EnumerateInstanceVersion; ///< Wrapper for vkEnumerateInstanceVersion
    static Function<VkResult, VkInstance, vk::uint32_t*, vk::VkPhysicalDeviceGroupProperties*> EnumeratePhysicalDeviceGroups; ///< Wrapper for vkEnumeratePhysicalDeviceGroups
    static Function<VkResult, VkInstance, vk::uint32_t*, vk::VkPhysicalDeviceGroupProperties*> EnumeratePhysicalDeviceGroupsKHR; ///< Wrapper for vkEnumeratePhysicalDeviceGroupsKHR
    static Function<VkResult, VkInstance, vk::uint32_t*, vk::VkPhysicalDevice*> EnumeratePhysicalDevices; ///< Wrapper for vkEnumeratePhysicalDevices
    static Function<VkResult, VkDevice, uint32_t, const vk::VkMappedMemoryRange*> FlushMappedMemoryRanges; ///< Wrapper for vkFlushMappedMemoryRanges
    static Function<void, VkDevice, VkCommandPool, uint32_t, const VkCommandBuffer*> FreeCommandBuffers; ///< Wrapper for vkFreeCommandBuffers
    static Function<VkResult, VkDevice, VkDescriptorPool, uint32_t, const vk::VkDescriptorSet*> FreeDescriptorSets; ///< Wrapper for vkFreeDescriptorSets
    static Function<void, VkDevice, VkDeviceMemory, const vk::VkAllocationCallbacks*> FreeMemory; ///< Wrapper for vkFreeMemory
    static Function<VkResult, VkDevice, VkAccelerationStructureNV, size_t, void*> GetAccelerationStructureHandleNV; ///< Wrapper for vkGetAccelerationStructureHandleNV
    static Function<void, VkDevice, const vk::VkAccelerationStructureMemoryRequirementsInfoNV*, vk::VkMemoryRequirements2KHR*> GetAccelerationStructureMemoryRequirementsNV; ///< Wrapper for vkGetAccelerationStructureMemoryRequirementsNV
    static Function<VkDeviceAddress, VkDevice, const vk::VkBufferDeviceAddressInfoEXT*> GetBufferDeviceAddressEXT; ///< Wrapper for vkGetBufferDeviceAddressEXT
    static Function<void, VkDevice, VkBuffer, vk::VkMemoryRequirements*> GetBufferMemoryRequirements; ///< Wrapper for vkGetBufferMemoryRequirements
    static Function<void, VkDevice, const vk::VkBufferMemoryRequirementsInfo2*, vk::VkMemoryRequirements2*> GetBufferMemoryRequirements2; ///< Wrapper for vkGetBufferMemoryRequirements2
    static Function<void, VkDevice, const vk::VkBufferMemoryRequirementsInfo2*, vk::VkMemoryRequirements2*> GetBufferMemoryRequirements2KHR; ///< Wrapper for vkGetBufferMemoryRequirements2KHR
    static Function<VkResult, VkDevice, uint32_t, const vk::VkCalibratedTimestampInfoEXT*, vk::uint64_t*, vk::uint64_t*> GetCalibratedTimestampsEXT; ///< Wrapper for vkGetCalibratedTimestampsEXT
    static Function<void, VkDevice, const vk::VkDescriptorSetLayoutCreateInfo*, vk::VkDescriptorSetLayoutSupport*> GetDescriptorSetLayoutSupport; ///< Wrapper for vkGetDescriptorSetLayoutSupport
    static Function<void, VkDevice, const vk::VkDescriptorSetLayoutCreateInfo*, vk::VkDescriptorSetLayoutSupport*> GetDescriptorSetLayoutSupportKHR; ///< Wrapper for vkGetDescriptorSetLayoutSupportKHR
    static Function<void, VkDevice, uint32_t, uint32_t, uint32_t, vk::VkPeerMemoryFeatureFlags*> GetDeviceGroupPeerMemoryFeatures; ///< Wrapper for vkGetDeviceGroupPeerMemoryFeatures
    static Function<void, VkDevice, uint32_t, uint32_t, uint32_t, vk::VkPeerMemoryFeatureFlags*> GetDeviceGroupPeerMemoryFeaturesKHR; ///< Wrapper for vkGetDeviceGroupPeerMemoryFeaturesKHR
    static Function<VkResult, VkDevice, vk::VkDeviceGroupPresentCapabilitiesKHR*> GetDeviceGroupPresentCapabilitiesKHR; ///< Wrapper for vkGetDeviceGroupPresentCapabilitiesKHR
    static Function<VkResult, VkDevice, VkSurfaceKHR, vk::VkDeviceGroupPresentModeFlagsKHR*> GetDeviceGroupSurfacePresentModesKHR; ///< Wrapper for vkGetDeviceGroupSurfacePresentModesKHR
    static Function<void, VkDevice, VkDeviceMemory, vk::VkDeviceSize*> GetDeviceMemoryCommitment; ///< Wrapper for vkGetDeviceMemoryCommitment
    static Function<PFN_vkVoidFunction, VkDevice, const char*> GetDeviceProcAddr; ///< Wrapper for vkGetDeviceProcAddr
    static Function<void, VkDevice, uint32_t, uint32_t, vk::VkQueue*> GetDeviceQueue; ///< Wrapper for vkGetDeviceQueue
    static Function<void, VkDevice, const vk::VkDeviceQueueInfo2*, vk::VkQueue*> GetDeviceQueue2; ///< Wrapper for vkGetDeviceQueue2
    static Function<VkResult, VkPhysicalDevice, VkDisplayKHR, vk::uint32_t*, vk::VkDisplayModeProperties2KHR*> GetDisplayModeProperties2KHR; ///< Wrapper for vkGetDisplayModeProperties2KHR
    static Function<VkResult, VkPhysicalDevice, VkDisplayKHR, vk::uint32_t*, vk::VkDisplayModePropertiesKHR*> GetDisplayModePropertiesKHR; ///< Wrapper for vkGetDisplayModePropertiesKHR
    static Function<VkResult, VkPhysicalDevice, const vk::VkDisplayPlaneInfo2KHR*, vk::VkDisplayPlaneCapabilities2KHR*> GetDisplayPlaneCapabilities2KHR; ///< Wrapper for vkGetDisplayPlaneCapabilities2KHR
    static Function<VkResult, VkPhysicalDevice, VkDisplayModeKHR, uint32_t, vk::VkDisplayPlaneCapabilitiesKHR*> GetDisplayPlaneCapabilitiesKHR; ///< Wrapper for vkGetDisplayPlaneCapabilitiesKHR
    static Function<VkResult, VkPhysicalDevice, uint32_t, vk::uint32_t*, vk::VkDisplayKHR*> GetDisplayPlaneSupportedDisplaysKHR; ///< Wrapper for vkGetDisplayPlaneSupportedDisplaysKHR
    static Function<VkResult, VkDevice, VkEvent> GetEventStatus; ///< Wrapper for vkGetEventStatus
    static Function<VkResult, VkDevice, const vk::VkFenceGetFdInfoKHR*, vk::int*> GetFenceFdKHR; ///< Wrapper for vkGetFenceFdKHR
    static Function<VkResult, VkDevice, VkFence> GetFenceStatus; ///< Wrapper for vkGetFenceStatus
    static Function<VkResult, VkDevice, VkImage, vk::VkImageDrmFormatModifierPropertiesEXT*> GetImageDrmFormatModifierPropertiesEXT; ///< Wrapper for vkGetImageDrmFormatModifierPropertiesEXT
    static Function<void, VkDevice, VkImage, vk::VkMemoryRequirements*> GetImageMemoryRequirements; ///< Wrapper for vkGetImageMemoryRequirements
    static Function<void, VkDevice, const vk::VkImageMemoryRequirementsInfo2*, vk::VkMemoryRequirements2*> GetImageMemoryRequirements2; ///< Wrapper for vkGetImageMemoryRequirements2
    static Function<void, VkDevice, const vk::VkImageMemoryRequirementsInfo2*, vk::VkMemoryRequirements2*> GetImageMemoryRequirements2KHR; ///< Wrapper for vkGetImageMemoryRequirements2KHR
    static Function<void, VkDevice, VkImage, vk::uint32_t*, vk::VkSparseImageMemoryRequirements*> GetImageSparseMemoryRequirements; ///< Wrapper for vkGetImageSparseMemoryRequirements
    static Function<void, VkDevice, const vk::VkImageSparseMemoryRequirementsInfo2*, vk::uint32_t*, vk::VkSparseImageMemoryRequirements2*> GetImageSparseMemoryRequirements2; ///< Wrapper for vkGetImageSparseMemoryRequirements2
    static Function<void, VkDevice, const vk::VkImageSparseMemoryRequirementsInfo2*, vk::uint32_t*, vk::VkSparseImageMemoryRequirements2*> GetImageSparseMemoryRequirements2KHR; ///< Wrapper for vkGetImageSparseMemoryRequirements2KHR
    static Function<void, VkDevice, VkImage, const vk::VkImageSubresource*, vk::VkSubresourceLayout*> GetImageSubresourceLayout; ///< Wrapper for vkGetImageSubresourceLayout
    static Function<uint32_t, VkDevice, const vk::VkImageViewHandleInfoNVX*> GetImageViewHandleNVX; ///< Wrapper for vkGetImageViewHandleNVX
    static Function<PFN_vkVoidFunction, VkInstance, const char*> GetInstanceProcAddr; ///< Wrapper for vkGetInstanceProcAddr
    static Function<VkResult, VkDevice, const vk::VkMemoryGetFdInfoKHR*, vk::int*> GetMemoryFdKHR; ///< Wrapper for vkGetMemoryFdKHR
    static Function<VkResult, VkDevice, VkExternalMemoryHandleTypeFlagBits, int, vk::VkMemoryFdPropertiesKHR*> GetMemoryFdPropertiesKHR; ///< Wrapper for vkGetMemoryFdPropertiesKHR
    static Function<VkResult, VkDevice, VkExternalMemoryHandleTypeFlagBits, const void*, vk::VkMemoryHostPointerPropertiesEXT*> GetMemoryHostPointerPropertiesEXT; ///< Wrapper for vkGetMemoryHostPointerPropertiesEXT
    static Function<VkResult, VkDevice, VkSwapchainKHR, vk::uint32_t*, vk::VkPastPresentationTimingGOOGLE*> GetPastPresentationTimingGOOGLE; ///< Wrapper for vkGetPastPresentationTimingGOOGLE
    static Function<VkResult, VkDevice, VkPerformanceParameterTypeINTEL, vk::VkPerformanceValueINTEL*> GetPerformanceParameterINTEL; ///< Wrapper for vkGetPerformanceParameterINTEL
    static Function<VkResult, VkPhysicalDevice, vk::uint32_t*, vk::VkTimeDomainEXT*> GetPhysicalDeviceCalibrateableTimeDomainsEXT; ///< Wrapper for vkGetPhysicalDeviceCalibrateableTimeDomainsEXT
    static Function<VkResult, VkPhysicalDevice, vk::uint32_t*, vk::VkCooperativeMatrixPropertiesNV*> GetPhysicalDeviceCooperativeMatrixPropertiesNV; ///< Wrapper for vkGetPhysicalDeviceCooperativeMatrixPropertiesNV
    static Function<VkResult, VkPhysicalDevice, vk::uint32_t*, vk::VkDisplayPlaneProperties2KHR*> GetPhysicalDeviceDisplayPlaneProperties2KHR; ///< Wrapper for vkGetPhysicalDeviceDisplayPlaneProperties2KHR
    static Function<VkResult, VkPhysicalDevice, vk::uint32_t*, vk::VkDisplayPlanePropertiesKHR*> GetPhysicalDeviceDisplayPlanePropertiesKHR; ///< Wrapper for vkGetPhysicalDeviceDisplayPlanePropertiesKHR
    static Function<VkResult, VkPhysicalDevice, vk::uint32_t*, vk::VkDisplayProperties2KHR*> GetPhysicalDeviceDisplayProperties2KHR; ///< Wrapper for vkGetPhysicalDeviceDisplayProperties2KHR
    static Function<VkResult, VkPhysicalDevice, vk::uint32_t*, vk::VkDisplayPropertiesKHR*> GetPhysicalDeviceDisplayPropertiesKHR; ///< Wrapper for vkGetPhysicalDeviceDisplayPropertiesKHR
    static Function<void, VkPhysicalDevice, const vk::VkPhysicalDeviceExternalBufferInfo*, vk::VkExternalBufferProperties*> GetPhysicalDeviceExternalBufferProperties; ///< Wrapper for vkGetPhysicalDeviceExternalBufferProperties
    static Function<void, VkPhysicalDevice, const vk::VkPhysicalDeviceExternalBufferInfo*, vk::VkExternalBufferProperties*> GetPhysicalDeviceExternalBufferPropertiesKHR; ///< Wrapper for vkGetPhysicalDeviceExternalBufferPropertiesKHR
    static Function<void, VkPhysicalDevice, const vk::VkPhysicalDeviceExternalFenceInfo*, vk::VkExternalFenceProperties*> GetPhysicalDeviceExternalFenceProperties; ///< Wrapper for vkGetPhysicalDeviceExternalFenceProperties
    static Function<void, VkPhysicalDevice, const vk::VkPhysicalDeviceExternalFenceInfo*, vk::VkExternalFenceProperties*> GetPhysicalDeviceExternalFencePropertiesKHR; ///< Wrapper for vkGetPhysicalDeviceExternalFencePropertiesKHR
    static Function<VkResult, VkPhysicalDevice, VkFormat, VkImageType, VkImageTiling, VkImageUsageFlags, VkImageCreateFlags, VkExternalMemoryHandleTypeFlagsNV, vk::VkExternalImageFormatPropertiesNV*> GetPhysicalDeviceExternalImageFormatPropertiesNV; ///< Wrapper for vkGetPhysicalDeviceExternalImageFormatPropertiesNV
    static Function<void, VkPhysicalDevice, const vk::VkPhysicalDeviceExternalSemaphoreInfo*, vk::VkExternalSemaphoreProperties*> GetPhysicalDeviceExternalSemaphoreProperties; ///< Wrapper for vkGetPhysicalDeviceExternalSemaphoreProperties
    static Function<void, VkPhysicalDevice, const vk::VkPhysicalDeviceExternalSemaphoreInfo*, vk::VkExternalSemaphoreProperties*> GetPhysicalDeviceExternalSemaphorePropertiesKHR; ///< Wrapper for vkGetPhysicalDeviceExternalSemaphorePropertiesKHR
    static Function<void, VkPhysicalDevice, vk::VkPhysicalDeviceFeatures*> GetPhysicalDeviceFeatures; ///< Wrapper for vkGetPhysicalDeviceFeatures
    static Function<void, VkPhysicalDevice, vk::VkPhysicalDeviceFeatures2*> GetPhysicalDeviceFeatures2; ///< Wrapper for vkGetPhysicalDeviceFeatures2
    static Function<void, VkPhysicalDevice, vk::VkPhysicalDeviceFeatures2*> GetPhysicalDeviceFeatures2KHR; ///< Wrapper for vkGetPhysicalDeviceFeatures2KHR
    static Function<void, VkPhysicalDevice, VkFormat, vk::VkFormatProperties*> GetPhysicalDeviceFormatProperties; ///< Wrapper for vkGetPhysicalDeviceFormatProperties
    static Function<void, VkPhysicalDevice, VkFormat, vk::VkFormatProperties2*> GetPhysicalDeviceFormatProperties2; ///< Wrapper for vkGetPhysicalDeviceFormatProperties2
    static Function<void, VkPhysicalDevice, VkFormat, vk::VkFormatProperties2*> GetPhysicalDeviceFormatProperties2KHR; ///< Wrapper for vkGetPhysicalDeviceFormatProperties2KHR
    static Function<void, VkPhysicalDevice, vk::VkDeviceGeneratedCommandsFeaturesNVX*, vk::VkDeviceGeneratedCommandsLimitsNVX*> GetPhysicalDeviceGeneratedCommandsPropertiesNVX; ///< Wrapper for vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX
    static Function<VkResult, VkPhysicalDevice, VkFormat, VkImageType, VkImageTiling, VkImageUsageFlags, VkImageCreateFlags, vk::VkImageFormatProperties*> GetPhysicalDeviceImageFormatProperties; ///< Wrapper for vkGetPhysicalDeviceImageFormatProperties
    static Function<VkResult, VkPhysicalDevice, const vk::VkPhysicalDeviceImageFormatInfo2*, vk::VkImageFormatProperties2*> GetPhysicalDeviceImageFormatProperties2; ///< Wrapper for vkGetPhysicalDeviceImageFormatProperties2
    static Function<VkResult, VkPhysicalDevice, const vk::VkPhysicalDeviceImageFormatInfo2*, vk::VkImageFormatProperties2*> GetPhysicalDeviceImageFormatProperties2KHR; ///< Wrapper for vkGetPhysicalDeviceImageFormatProperties2KHR
    static Function<void, VkPhysicalDevice, vk::VkPhysicalDeviceMemoryProperties*> GetPhysicalDeviceMemoryProperties; ///< Wrapper for vkGetPhysicalDeviceMemoryProperties
    static Function<void, VkPhysicalDevice, vk::VkPhysicalDeviceMemoryProperties2*> GetPhysicalDeviceMemoryProperties2; ///< Wrapper for vkGetPhysicalDeviceMemoryProperties2
    static Function<void, VkPhysicalDevice, vk::VkPhysicalDeviceMemoryProperties2*> GetPhysicalDeviceMemoryProperties2KHR; ///< Wrapper for vkGetPhysicalDeviceMemoryProperties2KHR
    static Function<void, VkPhysicalDevice, VkSampleCountFlagBits, vk::VkMultisamplePropertiesEXT*> GetPhysicalDeviceMultisamplePropertiesEXT; ///< Wrapper for vkGetPhysicalDeviceMultisamplePropertiesEXT
    static Function<VkResult, VkPhysicalDevice, VkSurfaceKHR, vk::uint32_t*, vk::VkRect2D*> GetPhysicalDevicePresentRectanglesKHR; ///< Wrapper for vkGetPhysicalDevicePresentRectanglesKHR
    static Function<void, VkPhysicalDevice, vk::VkPhysicalDeviceProperties*> GetPhysicalDeviceProperties; ///< Wrapper for vkGetPhysicalDeviceProperties
    static Function<void, VkPhysicalDevice, vk::VkPhysicalDeviceProperties2*> GetPhysicalDeviceProperties2; ///< Wrapper for vkGetPhysicalDeviceProperties2
    static Function<void, VkPhysicalDevice, vk::VkPhysicalDeviceProperties2*> GetPhysicalDeviceProperties2KHR; ///< Wrapper for vkGetPhysicalDeviceProperties2KHR
    static Function<void, VkPhysicalDevice, vk::uint32_t*, vk::VkQueueFamilyProperties*> GetPhysicalDeviceQueueFamilyProperties; ///< Wrapper for vkGetPhysicalDeviceQueueFamilyProperties
    static Function<void, VkPhysicalDevice, vk::uint32_t*, vk::VkQueueFamilyProperties2*> GetPhysicalDeviceQueueFamilyProperties2; ///< Wrapper for vkGetPhysicalDeviceQueueFamilyProperties2
    static Function<void, VkPhysicalDevice, vk::uint32_t*, vk::VkQueueFamilyProperties2*> GetPhysicalDeviceQueueFamilyProperties2KHR; ///< Wrapper for vkGetPhysicalDeviceQueueFamilyProperties2KHR
    static Function<void, VkPhysicalDevice, VkFormat, VkImageType, VkSampleCountFlagBits, VkImageUsageFlags, VkImageTiling, vk::uint32_t*, vk::VkSparseImageFormatProperties*> GetPhysicalDeviceSparseImageFormatProperties; ///< Wrapper for vkGetPhysicalDeviceSparseImageFormatProperties
    static Function<void, VkPhysicalDevice, const vk::VkPhysicalDeviceSparseImageFormatInfo2*, vk::uint32_t*, vk::VkSparseImageFormatProperties2*> GetPhysicalDeviceSparseImageFormatProperties2; ///< Wrapper for vkGetPhysicalDeviceSparseImageFormatProperties2
    static Function<void, VkPhysicalDevice, const vk::VkPhysicalDeviceSparseImageFormatInfo2*, vk::uint32_t*, vk::VkSparseImageFormatProperties2*> GetPhysicalDeviceSparseImageFormatProperties2KHR; ///< Wrapper for vkGetPhysicalDeviceSparseImageFormatProperties2KHR
    static Function<VkResult, VkPhysicalDevice, vk::uint32_t*, vk::VkFramebufferMixedSamplesCombinationNV*> GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV; ///< Wrapper for vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV
    static Function<VkResult, VkPhysicalDevice, VkSurfaceKHR, vk::VkSurfaceCapabilities2EXT*> GetPhysicalDeviceSurfaceCapabilities2EXT; ///< Wrapper for vkGetPhysicalDeviceSurfaceCapabilities2EXT
    static Function<VkResult, VkPhysicalDevice, const vk::VkPhysicalDeviceSurfaceInfo2KHR*, vk::VkSurfaceCapabilities2KHR*> GetPhysicalDeviceSurfaceCapabilities2KHR; ///< Wrapper for vkGetPhysicalDeviceSurfaceCapabilities2KHR
    static Function<VkResult, VkPhysicalDevice, VkSurfaceKHR, vk::VkSurfaceCapabilitiesKHR*> GetPhysicalDeviceSurfaceCapabilitiesKHR; ///< Wrapper for vkGetPhysicalDeviceSurfaceCapabilitiesKHR
    static Function<VkResult, VkPhysicalDevice, const vk::VkPhysicalDeviceSurfaceInfo2KHR*, vk::uint32_t*, vk::VkSurfaceFormat2KHR*> GetPhysicalDeviceSurfaceFormats2KHR; ///< Wrapper for vkGetPhysicalDeviceSurfaceFormats2KHR
    static Function<VkResult, VkPhysicalDevice, VkSurfaceKHR, vk::uint32_t*, vk::VkSurfaceFormatKHR*> GetPhysicalDeviceSurfaceFormatsKHR; ///< Wrapper for vkGetPhysicalDeviceSurfaceFormatsKHR
    static Function<VkResult, VkPhysicalDevice, VkSurfaceKHR, vk::uint32_t*, vk::VkPresentModeKHR*> GetPhysicalDeviceSurfacePresentModesKHR; ///< Wrapper for vkGetPhysicalDeviceSurfacePresentModesKHR
    static Function<VkResult, VkPhysicalDevice, uint32_t, VkSurfaceKHR, vk::VkBool32*> GetPhysicalDeviceSurfaceSupportKHR; ///< Wrapper for vkGetPhysicalDeviceSurfaceSupportKHR
    static Function<VkResult, VkDevice, VkPipelineCache, vk::size_t*, void*> GetPipelineCacheData; ///< Wrapper for vkGetPipelineCacheData
    static Function<VkResult, VkDevice, VkQueryPool, uint32_t, uint32_t, size_t, void*, VkDeviceSize, VkQueryResultFlags> GetQueryPoolResults; ///< Wrapper for vkGetQueryPoolResults
    static Function<void, VkQueue, vk::uint32_t*, vk::VkCheckpointDataNV*> GetQueueCheckpointDataNV; ///< Wrapper for vkGetQueueCheckpointDataNV
    static Function<VkResult, VkDevice, VkPipeline, uint32_t, uint32_t, size_t, void*> GetRayTracingShaderGroupHandlesNV; ///< Wrapper for vkGetRayTracingShaderGroupHandlesNV
    static Function<VkResult, VkDevice, VkSwapchainKHR, vk::VkRefreshCycleDurationGOOGLE*> GetRefreshCycleDurationGOOGLE; ///< Wrapper for vkGetRefreshCycleDurationGOOGLE
    static Function<void, VkDevice, VkRenderPass, vk::VkExtent2D*> GetRenderAreaGranularity; ///< Wrapper for vkGetRenderAreaGranularity
    static Function<VkResult, VkDevice, const vk::VkSemaphoreGetFdInfoKHR*, vk::int*> GetSemaphoreFdKHR; ///< Wrapper for vkGetSemaphoreFdKHR
    static Function<VkResult, VkDevice, VkPipeline, VkShaderStageFlagBits, VkShaderInfoTypeAMD, vk::size_t*, void*> GetShaderInfoAMD; ///< Wrapper for vkGetShaderInfoAMD
    static Function<VkResult, VkDevice, VkSwapchainKHR, VkSurfaceCounterFlagBitsEXT, vk::uint64_t*> GetSwapchainCounterEXT; ///< Wrapper for vkGetSwapchainCounterEXT
    static Function<VkResult, VkDevice, VkSwapchainKHR, vk::uint32_t*, vk::VkImage*> GetSwapchainImagesKHR; ///< Wrapper for vkGetSwapchainImagesKHR
    static Function<VkResult, VkDevice, VkSwapchainKHR> GetSwapchainStatusKHR; ///< Wrapper for vkGetSwapchainStatusKHR
    static Function<VkResult, VkDevice, VkValidationCacheEXT, vk::size_t*, void*> GetValidationCacheDataEXT; ///< Wrapper for vkGetValidationCacheDataEXT
    static Function<VkResult, VkDevice, const vk::VkImportFenceFdInfoKHR*> ImportFenceFdKHR; ///< Wrapper for vkImportFenceFdKHR
    static Function<VkResult, VkDevice, const vk::VkImportSemaphoreFdInfoKHR*> ImportSemaphoreFdKHR; ///< Wrapper for vkImportSemaphoreFdKHR
    static Function<VkResult, VkDevice, const vk::VkInitializePerformanceApiInfoINTEL*> InitializePerformanceApiINTEL; ///< Wrapper for vkInitializePerformanceApiINTEL
    static Function<VkResult, VkDevice, uint32_t, const vk::VkMappedMemoryRange*> InvalidateMappedMemoryRanges; ///< Wrapper for vkInvalidateMappedMemoryRanges
    static Function<VkResult, VkDevice, VkDeviceMemory, VkDeviceSize, VkDeviceSize, VkMemoryMapFlags, vk::void**> MapMemory; ///< Wrapper for vkMapMemory
    static Function<VkResult, VkDevice, VkPipelineCache, uint32_t, const vk::VkPipelineCache*> MergePipelineCaches; ///< Wrapper for vkMergePipelineCaches
    static Function<VkResult, VkDevice, VkValidationCacheEXT, uint32_t, const vk::VkValidationCacheEXT*> MergeValidationCachesEXT; ///< Wrapper for vkMergeValidationCachesEXT
    static Function<void, VkQueue, const VkDebugUtilsLabelEXT*> QueueBeginDebugUtilsLabelEXT; ///< Wrapper for vkQueueBeginDebugUtilsLabelEXT
    static Function<VkResult, VkQueue, uint32_t, const vk::VkBindSparseInfo*, VkFence> QueueBindSparse; ///< Wrapper for vkQueueBindSparse
    static Function<void, VkQueue> QueueEndDebugUtilsLabelEXT; ///< Wrapper for vkQueueEndDebugUtilsLabelEXT
    static Function<void, VkQueue, const VkDebugUtilsLabelEXT*> QueueInsertDebugUtilsLabelEXT; ///< Wrapper for vkQueueInsertDebugUtilsLabelEXT
    static Function<VkResult, VkQueue, const vk::VkPresentInfoKHR*> QueuePresentKHR; ///< Wrapper for vkQueuePresentKHR
    static Function<VkResult, VkQueue, VkPerformanceConfigurationINTEL> QueueSetPerformanceConfigurationINTEL; ///< Wrapper for vkQueueSetPerformanceConfigurationINTEL
    static Function<VkResult, VkQueue, uint32_t, const vk::VkSubmitInfo*, VkFence> QueueSubmit; ///< Wrapper for vkQueueSubmit
    static Function<VkResult, VkQueue> QueueWaitIdle; ///< Wrapper for vkQueueWaitIdle
    static Function<VkResult, VkDevice, const vk::VkDeviceEventInfoEXT*, const vk::VkAllocationCallbacks*, vk::VkFence*> RegisterDeviceEventEXT; ///< Wrapper for vkRegisterDeviceEventEXT
    static Function<VkResult, VkDevice, VkDisplayKHR, const vk::VkDisplayEventInfoEXT*, const vk::VkAllocationCallbacks*, vk::VkFence*> RegisterDisplayEventEXT; ///< Wrapper for vkRegisterDisplayEventEXT
    static Function<VkResult, VkDevice, VkObjectTableNVX, uint32_t, const vk::VkObjectTableEntryNVX* const*, const uint32_t*> RegisterObjectsNVX; ///< Wrapper for vkRegisterObjectsNVX
    static Function<VkResult, VkPhysicalDevice, VkDisplayKHR> ReleaseDisplayEXT; ///< Wrapper for vkReleaseDisplayEXT
    static Function<VkResult, VkDevice, VkPerformanceConfigurationINTEL> ReleasePerformanceConfigurationINTEL; ///< Wrapper for vkReleasePerformanceConfigurationINTEL
    static Function<VkResult, VkCommandBuffer, VkCommandBufferResetFlags> ResetCommandBuffer; ///< Wrapper for vkResetCommandBuffer
    static Function<VkResult, VkDevice, VkCommandPool, VkCommandPoolResetFlags> ResetCommandPool; ///< Wrapper for vkResetCommandPool
    static Function<VkResult, VkDevice, VkDescriptorPool, VkDescriptorPoolResetFlags> ResetDescriptorPool; ///< Wrapper for vkResetDescriptorPool
    static Function<VkResult, VkDevice, VkEvent> ResetEvent; ///< Wrapper for vkResetEvent
    static Function<VkResult, VkDevice, uint32_t, const vk::VkFence*> ResetFences; ///< Wrapper for vkResetFences
    static Function<void, VkDevice, VkQueryPool, uint32_t, uint32_t> ResetQueryPoolEXT; ///< Wrapper for vkResetQueryPoolEXT
    static Function<VkResult, VkDevice, const VkDebugUtilsObjectNameInfoEXT*> SetDebugUtilsObjectNameEXT; ///< Wrapper for vkSetDebugUtilsObjectNameEXT
    static Function<VkResult, VkDevice, const vk::VkDebugUtilsObjectTagInfoEXT*> SetDebugUtilsObjectTagEXT; ///< Wrapper for vkSetDebugUtilsObjectTagEXT
    static Function<VkResult, VkDevice, VkEvent> SetEvent; ///< Wrapper for vkSetEvent
    static Function<void, VkDevice, uint32_t, const VkSwapchainKHR*, const vk::VkHdrMetadataEXT*> SetHdrMetadataEXT; ///< Wrapper for vkSetHdrMetadataEXT
    static Function<void, VkDevice, VkSwapchainKHR, VkBool32> SetLocalDimmingAMD; ///< Wrapper for vkSetLocalDimmingAMD
    static Function<void, VkInstance, VkDebugUtilsMessageSeverityFlagBitsEXT, VkDebugUtilsMessageTypeFlagsEXT, const vk::VkDebugUtilsMessengerCallbackDataEXT*> SubmitDebugUtilsMessageEXT; ///< Wrapper for vkSubmitDebugUtilsMessageEXT
    static Function<void, VkDevice, VkCommandPool, VkCommandPoolTrimFlags> TrimCommandPool; ///< Wrapper for vkTrimCommandPool
    static Function<void, VkDevice, VkCommandPool, VkCommandPoolTrimFlags> TrimCommandPoolKHR; ///< Wrapper for vkTrimCommandPoolKHR
    static Function<void, VkDevice> UninitializePerformanceApiINTEL; ///< Wrapper for vkUninitializePerformanceApiINTEL
    static Function<void, VkDevice, VkDeviceMemory> UnmapMemory; ///< Wrapper for vkUnmapMemory
    static Function<VkResult, VkDevice, VkObjectTableNVX, uint32_t, const VkObjectEntryTypeNVX*, const uint32_t*> UnregisterObjectsNVX; ///< Wrapper for vkUnregisterObjectsNVX
    static Function<void, VkDevice, uint32_t, const vk::VkWriteDescriptorSet*, uint32_t, const vk::VkCopyDescriptorSet*> UpdateDescriptorSets; ///< Wrapper for vkUpdateDescriptorSets
    static Function<void, VkDevice, VkDescriptorSet, VkDescriptorUpdateTemplate, const void*> UpdateDescriptorSetWithTemplate; ///< Wrapper for vkUpdateDescriptorSetWithTemplate
    static Function<void, VkDevice, VkDescriptorSet, VkDescriptorUpdateTemplate, const void*> UpdateDescriptorSetWithTemplateKHR; ///< Wrapper for vkUpdateDescriptorSetWithTemplateKHR
    static Function<VkResult, VkDevice, uint32_t, const vk::VkFence*, VkBool32, uint64_t> WaitForFences; ///< Wrapper for vkWaitForFences


protected:
    static const array_t s_functions;           ///< The list of all build-in functions
    static std::vector<AbstractFunction *> & s_additionalFunctions();
    static SimpleFunctionCallback & s_unresolvedCallback();
    static FunctionCallback & s_beforeCallback();
    static FunctionCallback & s_afterCallback();
    static FunctionLogCallback & s_logCallback();
    static vkbinding::GetProcAddress & s_getProcAddress();
    static std_boost::recursive_mutex & s_mutex();
};


} // namespace vkbinding