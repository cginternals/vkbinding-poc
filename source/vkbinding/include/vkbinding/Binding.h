
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
    
    using array_t = std::array<AbstractFunction *, 368>; ///< The type of the build-in functions collection


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
    static Function<VkResult, VkDevice, VkSwapchainKHR> AcquireFullScreenExclusiveModeEXT; ///< Wrapper for vkAcquireFullScreenExclusiveModeEXT
    static Function<VkResult, VkDevice, VkImage, int, VkSemaphore, VkFence> AcquireImageANDROID; ///< Wrapper for vkAcquireImageANDROID
    static Function<VkResult, VkDevice, const VkAcquireNextImageInfoKHR*, uint32_t*> AcquireNextImage2KHR; ///< Wrapper for vkAcquireNextImage2KHR
    static Function<VkResult, VkDevice, VkSwapchainKHR, uint64_t, VkSemaphore, VkFence, uint32_t*> AcquireNextImageKHR; ///< Wrapper for vkAcquireNextImageKHR
    static Function<VkResult, VkDevice, const VkPerformanceConfigurationAcquireInfoINTEL*, VkPerformanceConfigurationINTEL*> AcquirePerformanceConfigurationINTEL; ///< Wrapper for vkAcquirePerformanceConfigurationINTEL
    static Function<VkResult, VkPhysicalDevice, Display*, VkDisplayKHR> AcquireXlibDisplayEXT; ///< Wrapper for vkAcquireXlibDisplayEXT
    static Function<VkResult, VkDevice, const VkCommandBufferAllocateInfo*, VkCommandBuffer*> AllocateCommandBuffers; ///< Wrapper for vkAllocateCommandBuffers
    static Function<VkResult, VkDevice, const VkDescriptorSetAllocateInfo*, VkDescriptorSet*> AllocateDescriptorSets; ///< Wrapper for vkAllocateDescriptorSets
    static Function<VkResult, VkDevice, const VkMemoryAllocateInfo*, const VkAllocationCallbacks*, VkDeviceMemory*> AllocateMemory; ///< Wrapper for vkAllocateMemory
    static Function<VkResult, VkCommandBuffer, const VkCommandBufferBeginInfo*> BeginCommandBuffer; ///< Wrapper for vkBeginCommandBuffer
    static Function<VkResult, VkDevice, uint32_t, const VkBindAccelerationStructureMemoryInfoNV*> BindAccelerationStructureMemoryNV; ///< Wrapper for vkBindAccelerationStructureMemoryNV
    static Function<VkResult, VkDevice, VkBuffer, VkDeviceMemory, VkDeviceSize> BindBufferMemory; ///< Wrapper for vkBindBufferMemory
    static Function<VkResult, VkDevice, uint32_t, const VkBindBufferMemoryInfo*> BindBufferMemory2; ///< Wrapper for vkBindBufferMemory2
    static Function<VkResult, VkDevice, uint32_t, const VkBindBufferMemoryInfo*> BindBufferMemory2KHR; ///< Wrapper for vkBindBufferMemory2KHR
    static Function<VkResult, VkDevice, VkImage, VkDeviceMemory, VkDeviceSize> BindImageMemory; ///< Wrapper for vkBindImageMemory
    static Function<VkResult, VkDevice, uint32_t, const VkBindImageMemoryInfo*> BindImageMemory2; ///< Wrapper for vkBindImageMemory2
    static Function<VkResult, VkDevice, uint32_t, const VkBindImageMemoryInfo*> BindImageMemory2KHR; ///< Wrapper for vkBindImageMemory2KHR
    static Function<void, VkCommandBuffer, const VkConditionalRenderingBeginInfoEXT*> CmdBeginConditionalRenderingEXT; ///< Wrapper for vkCmdBeginConditionalRenderingEXT
    static Function<void, VkCommandBuffer, const VkDebugUtilsLabelEXT*> CmdBeginDebugUtilsLabelEXT; ///< Wrapper for vkCmdBeginDebugUtilsLabelEXT
    static Function<void, VkCommandBuffer, VkQueryPool, uint32_t, VkQueryControlFlags> CmdBeginQuery; ///< Wrapper for vkCmdBeginQuery
    static Function<void, VkCommandBuffer, VkQueryPool, uint32_t, VkQueryControlFlags, uint32_t> CmdBeginQueryIndexedEXT; ///< Wrapper for vkCmdBeginQueryIndexedEXT
    static Function<void, VkCommandBuffer, const VkRenderPassBeginInfo*, VkSubpassContents> CmdBeginRenderPass; ///< Wrapper for vkCmdBeginRenderPass
    static Function<void, VkCommandBuffer, const VkRenderPassBeginInfo*, const VkSubpassBeginInfoKHR*> CmdBeginRenderPass2KHR; ///< Wrapper for vkCmdBeginRenderPass2KHR
    static Function<void, VkCommandBuffer, uint32_t, uint32_t, const VkBuffer*, const VkDeviceSize*> CmdBeginTransformFeedbackEXT; ///< Wrapper for vkCmdBeginTransformFeedbackEXT
    static Function<void, VkCommandBuffer, VkPipelineBindPoint, VkPipelineLayout, uint32_t, uint32_t, const VkDescriptorSet*, uint32_t, const uint32_t*> CmdBindDescriptorSets; ///< Wrapper for vkCmdBindDescriptorSets
    static Function<void, VkCommandBuffer, VkBuffer, VkDeviceSize, VkIndexType> CmdBindIndexBuffer; ///< Wrapper for vkCmdBindIndexBuffer
    static Function<void, VkCommandBuffer, VkPipelineBindPoint, VkPipeline> CmdBindPipeline; ///< Wrapper for vkCmdBindPipeline
    static Function<void, VkCommandBuffer, VkImageView, VkImageLayout> CmdBindShadingRateImageNV; ///< Wrapper for vkCmdBindShadingRateImageNV
    static Function<void, VkCommandBuffer, uint32_t, uint32_t, const VkBuffer*, const VkDeviceSize*, const VkDeviceSize*> CmdBindTransformFeedbackBuffersEXT; ///< Wrapper for vkCmdBindTransformFeedbackBuffersEXT
    static Function<void, VkCommandBuffer, uint32_t, uint32_t, const VkBuffer*, const VkDeviceSize*> CmdBindVertexBuffers; ///< Wrapper for vkCmdBindVertexBuffers
    static Function<void, VkCommandBuffer, VkImage, VkImageLayout, VkImage, VkImageLayout, uint32_t, const VkImageBlit*, VkFilter> CmdBlitImage; ///< Wrapper for vkCmdBlitImage
    static Function<void, VkCommandBuffer, const VkAccelerationStructureInfoNV*, VkBuffer, VkDeviceSize, VkBool32, VkAccelerationStructureNV, VkAccelerationStructureNV, VkBuffer, VkDeviceSize> CmdBuildAccelerationStructureNV; ///< Wrapper for vkCmdBuildAccelerationStructureNV
    static Function<void, VkCommandBuffer, uint32_t, const VkClearAttachment*, uint32_t, const VkClearRect*> CmdClearAttachments; ///< Wrapper for vkCmdClearAttachments
    static Function<void, VkCommandBuffer, VkImage, VkImageLayout, const VkClearColorValue*, uint32_t, const VkImageSubresourceRange*> CmdClearColorImage; ///< Wrapper for vkCmdClearColorImage
    static Function<void, VkCommandBuffer, VkImage, VkImageLayout, const VkClearDepthStencilValue*, uint32_t, const VkImageSubresourceRange*> CmdClearDepthStencilImage; ///< Wrapper for vkCmdClearDepthStencilImage
    static Function<void, VkCommandBuffer, VkAccelerationStructureNV, VkAccelerationStructureNV, VkCopyAccelerationStructureModeNV> CmdCopyAccelerationStructureNV; ///< Wrapper for vkCmdCopyAccelerationStructureNV
    static Function<void, VkCommandBuffer, VkBuffer, VkBuffer, uint32_t, const VkBufferCopy*> CmdCopyBuffer; ///< Wrapper for vkCmdCopyBuffer
    static Function<void, VkCommandBuffer, VkBuffer, VkImage, VkImageLayout, uint32_t, const VkBufferImageCopy*> CmdCopyBufferToImage; ///< Wrapper for vkCmdCopyBufferToImage
    static Function<void, VkCommandBuffer, VkImage, VkImageLayout, VkImage, VkImageLayout, uint32_t, const VkImageCopy*> CmdCopyImage; ///< Wrapper for vkCmdCopyImage
    static Function<void, VkCommandBuffer, VkImage, VkImageLayout, VkBuffer, uint32_t, const VkBufferImageCopy*> CmdCopyImageToBuffer; ///< Wrapper for vkCmdCopyImageToBuffer
    static Function<void, VkCommandBuffer, VkQueryPool, uint32_t, uint32_t, VkBuffer, VkDeviceSize, VkDeviceSize, VkQueryResultFlags> CmdCopyQueryPoolResults; ///< Wrapper for vkCmdCopyQueryPoolResults
    static Function<void, VkCommandBuffer, const VkDebugMarkerMarkerInfoEXT*> CmdDebugMarkerBeginEXT; ///< Wrapper for vkCmdDebugMarkerBeginEXT
    static Function<void, VkCommandBuffer> CmdDebugMarkerEndEXT; ///< Wrapper for vkCmdDebugMarkerEndEXT
    static Function<void, VkCommandBuffer, const VkDebugMarkerMarkerInfoEXT*> CmdDebugMarkerInsertEXT; ///< Wrapper for vkCmdDebugMarkerInsertEXT
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
    static Function<void, VkCommandBuffer, const VkSubpassEndInfoKHR*> CmdEndRenderPass2KHR; ///< Wrapper for vkCmdEndRenderPass2KHR
    static Function<void, VkCommandBuffer, uint32_t, uint32_t, const VkBuffer*, const VkDeviceSize*> CmdEndTransformFeedbackEXT; ///< Wrapper for vkCmdEndTransformFeedbackEXT
    static Function<void, VkCommandBuffer, uint32_t, const VkCommandBuffer*> CmdExecuteCommands; ///< Wrapper for vkCmdExecuteCommands
    static Function<void, VkCommandBuffer, VkBuffer, VkDeviceSize, VkDeviceSize, uint32_t> CmdFillBuffer; ///< Wrapper for vkCmdFillBuffer
    static Function<void, VkCommandBuffer, const VkDebugUtilsLabelEXT*> CmdInsertDebugUtilsLabelEXT; ///< Wrapper for vkCmdInsertDebugUtilsLabelEXT
    static Function<void, VkCommandBuffer, VkSubpassContents> CmdNextSubpass; ///< Wrapper for vkCmdNextSubpass
    static Function<void, VkCommandBuffer, const VkSubpassBeginInfoKHR*, const VkSubpassEndInfoKHR*> CmdNextSubpass2KHR; ///< Wrapper for vkCmdNextSubpass2KHR
    static Function<void, VkCommandBuffer, VkPipelineStageFlags, VkPipelineStageFlags, VkDependencyFlags, uint32_t, const VkMemoryBarrier*, uint32_t, const VkBufferMemoryBarrier*, uint32_t, const VkImageMemoryBarrier*> CmdPipelineBarrier; ///< Wrapper for vkCmdPipelineBarrier
    static Function<void, VkCommandBuffer, const VkCmdProcessCommandsInfoNVX*> CmdProcessCommandsNVX; ///< Wrapper for vkCmdProcessCommandsNVX
    static Function<void, VkCommandBuffer, VkPipelineLayout, VkShaderStageFlags, uint32_t, uint32_t, const void*> CmdPushConstants; ///< Wrapper for vkCmdPushConstants
    static Function<void, VkCommandBuffer, VkPipelineBindPoint, VkPipelineLayout, uint32_t, uint32_t, const VkWriteDescriptorSet*> CmdPushDescriptorSetKHR; ///< Wrapper for vkCmdPushDescriptorSetKHR
    static Function<void, VkCommandBuffer, VkDescriptorUpdateTemplate, VkPipelineLayout, uint32_t, const void*> CmdPushDescriptorSetWithTemplateKHR; ///< Wrapper for vkCmdPushDescriptorSetWithTemplateKHR
    static Function<void, VkCommandBuffer, const VkCmdReserveSpaceForCommandsInfoNVX*> CmdReserveSpaceForCommandsNVX; ///< Wrapper for vkCmdReserveSpaceForCommandsNVX
    static Function<void, VkCommandBuffer, VkEvent, VkPipelineStageFlags> CmdResetEvent; ///< Wrapper for vkCmdResetEvent
    static Function<void, VkCommandBuffer, VkQueryPool, uint32_t, uint32_t> CmdResetQueryPool; ///< Wrapper for vkCmdResetQueryPool
    static Function<void, VkCommandBuffer, VkImage, VkImageLayout, VkImage, VkImageLayout, uint32_t, const VkImageResolve*> CmdResolveImage; ///< Wrapper for vkCmdResolveImage
    static Function<void, VkCommandBuffer, const float> CmdSetBlendConstants; ///< Wrapper for vkCmdSetBlendConstants
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
    static Function<VkResult, VkCommandBuffer, const VkPerformanceMarkerInfoINTEL*> CmdSetPerformanceMarkerINTEL; ///< Wrapper for vkCmdSetPerformanceMarkerINTEL
    static Function<VkResult, VkCommandBuffer, const VkPerformanceOverrideInfoINTEL*> CmdSetPerformanceOverrideINTEL; ///< Wrapper for vkCmdSetPerformanceOverrideINTEL
    static Function<VkResult, VkCommandBuffer, const VkPerformanceStreamMarkerInfoINTEL*> CmdSetPerformanceStreamMarkerINTEL; ///< Wrapper for vkCmdSetPerformanceStreamMarkerINTEL
    static Function<void, VkCommandBuffer, const VkSampleLocationsInfoEXT*> CmdSetSampleLocationsEXT; ///< Wrapper for vkCmdSetSampleLocationsEXT
    static Function<void, VkCommandBuffer, uint32_t, uint32_t, const VkRect2D*> CmdSetScissor; ///< Wrapper for vkCmdSetScissor
    static Function<void, VkCommandBuffer, VkStencilFaceFlags, uint32_t> CmdSetStencilCompareMask; ///< Wrapper for vkCmdSetStencilCompareMask
    static Function<void, VkCommandBuffer, VkStencilFaceFlags, uint32_t> CmdSetStencilReference; ///< Wrapper for vkCmdSetStencilReference
    static Function<void, VkCommandBuffer, VkStencilFaceFlags, uint32_t> CmdSetStencilWriteMask; ///< Wrapper for vkCmdSetStencilWriteMask
    static Function<void, VkCommandBuffer, uint32_t, uint32_t, const VkViewport*> CmdSetViewport; ///< Wrapper for vkCmdSetViewport
    static Function<void, VkCommandBuffer, uint32_t, uint32_t, const VkShadingRatePaletteNV*> CmdSetViewportShadingRatePaletteNV; ///< Wrapper for vkCmdSetViewportShadingRatePaletteNV
    static Function<void, VkCommandBuffer, uint32_t, uint32_t, const VkViewportWScalingNV*> CmdSetViewportWScalingNV; ///< Wrapper for vkCmdSetViewportWScalingNV
    static Function<void, VkCommandBuffer, VkBuffer, VkDeviceSize, VkBuffer, VkDeviceSize, VkDeviceSize, VkBuffer, VkDeviceSize, VkDeviceSize, VkBuffer, VkDeviceSize, VkDeviceSize, uint32_t, uint32_t, uint32_t> CmdTraceRaysNV; ///< Wrapper for vkCmdTraceRaysNV
    static Function<void, VkCommandBuffer, VkBuffer, VkDeviceSize, VkDeviceSize, const void*> CmdUpdateBuffer; ///< Wrapper for vkCmdUpdateBuffer
    static Function<void, VkCommandBuffer, uint32_t, const VkEvent*, VkPipelineStageFlags, VkPipelineStageFlags, uint32_t, const VkMemoryBarrier*, uint32_t, const VkBufferMemoryBarrier*, uint32_t, const VkImageMemoryBarrier*> CmdWaitEvents; ///< Wrapper for vkCmdWaitEvents
    static Function<void, VkCommandBuffer, uint32_t, const VkAccelerationStructureNV*, VkQueryType, VkQueryPool, uint32_t> CmdWriteAccelerationStructuresPropertiesNV; ///< Wrapper for vkCmdWriteAccelerationStructuresPropertiesNV
    static Function<void, VkCommandBuffer, VkPipelineStageFlagBits, VkBuffer, VkDeviceSize, uint32_t> CmdWriteBufferMarkerAMD; ///< Wrapper for vkCmdWriteBufferMarkerAMD
    static Function<void, VkCommandBuffer, VkPipelineStageFlagBits, VkQueryPool, uint32_t> CmdWriteTimestamp; ///< Wrapper for vkCmdWriteTimestamp
    static Function<VkResult, VkDevice, VkPipeline, uint32_t> CompileDeferredNV; ///< Wrapper for vkCompileDeferredNV
    static Function<VkResult, VkDevice, const VkAccelerationStructureCreateInfoNV*, const VkAllocationCallbacks*, VkAccelerationStructureNV*> CreateAccelerationStructureNV; ///< Wrapper for vkCreateAccelerationStructureNV
    static Function<VkResult, VkInstance, const VkAndroidSurfaceCreateInfoKHR*, const VkAllocationCallbacks*, VkSurfaceKHR*> CreateAndroidSurfaceKHR; ///< Wrapper for vkCreateAndroidSurfaceKHR
    static Function<VkResult, VkDevice, const VkBufferCreateInfo*, const VkAllocationCallbacks*, VkBuffer*> CreateBuffer; ///< Wrapper for vkCreateBuffer
    static Function<VkResult, VkDevice, const VkBufferViewCreateInfo*, const VkAllocationCallbacks*, VkBufferView*> CreateBufferView; ///< Wrapper for vkCreateBufferView
    static Function<VkResult, VkDevice, const VkCommandPoolCreateInfo*, const VkAllocationCallbacks*, VkCommandPool*> CreateCommandPool; ///< Wrapper for vkCreateCommandPool
    static Function<VkResult, VkDevice, VkPipelineCache, uint32_t, const VkComputePipelineCreateInfo*, const VkAllocationCallbacks*, VkPipeline*> CreateComputePipelines; ///< Wrapper for vkCreateComputePipelines
    static Function<VkResult, VkInstance, const VkDebugReportCallbackCreateInfoEXT*, const VkAllocationCallbacks*, VkDebugReportCallbackEXT*> CreateDebugReportCallbackEXT; ///< Wrapper for vkCreateDebugReportCallbackEXT
    static Function<VkResult, VkInstance, const VkDebugUtilsMessengerCreateInfoEXT*, const VkAllocationCallbacks*, VkDebugUtilsMessengerEXT*> CreateDebugUtilsMessengerEXT; ///< Wrapper for vkCreateDebugUtilsMessengerEXT
    static Function<VkResult, VkDevice, const VkDescriptorPoolCreateInfo*, const VkAllocationCallbacks*, VkDescriptorPool*> CreateDescriptorPool; ///< Wrapper for vkCreateDescriptorPool
    static Function<VkResult, VkDevice, const VkDescriptorSetLayoutCreateInfo*, const VkAllocationCallbacks*, VkDescriptorSetLayout*> CreateDescriptorSetLayout; ///< Wrapper for vkCreateDescriptorSetLayout
    static Function<VkResult, VkDevice, const VkDescriptorUpdateTemplateCreateInfo*, const VkAllocationCallbacks*, VkDescriptorUpdateTemplate*> CreateDescriptorUpdateTemplate; ///< Wrapper for vkCreateDescriptorUpdateTemplate
    static Function<VkResult, VkDevice, const VkDescriptorUpdateTemplateCreateInfo*, const VkAllocationCallbacks*, VkDescriptorUpdateTemplate*> CreateDescriptorUpdateTemplateKHR; ///< Wrapper for vkCreateDescriptorUpdateTemplateKHR
    static Function<VkResult, VkPhysicalDevice, const VkDeviceCreateInfo*, const VkAllocationCallbacks*, VkDevice*> CreateDevice; ///< Wrapper for vkCreateDevice
    static Function<VkResult, VkPhysicalDevice, VkDisplayKHR, const VkDisplayModeCreateInfoKHR*, const VkAllocationCallbacks*, VkDisplayModeKHR*> CreateDisplayModeKHR; ///< Wrapper for vkCreateDisplayModeKHR
    static Function<VkResult, VkInstance, const VkDisplaySurfaceCreateInfoKHR*, const VkAllocationCallbacks*, VkSurfaceKHR*> CreateDisplayPlaneSurfaceKHR; ///< Wrapper for vkCreateDisplayPlaneSurfaceKHR
    static Function<VkResult, VkDevice, const VkEventCreateInfo*, const VkAllocationCallbacks*, VkEvent*> CreateEvent; ///< Wrapper for vkCreateEvent
    static Function<VkResult, VkDevice, const VkFenceCreateInfo*, const VkAllocationCallbacks*, VkFence*> CreateFence; ///< Wrapper for vkCreateFence
    static Function<VkResult, VkDevice, const VkFramebufferCreateInfo*, const VkAllocationCallbacks*, VkFramebuffer*> CreateFramebuffer; ///< Wrapper for vkCreateFramebuffer
    static Function<VkResult, VkDevice, VkPipelineCache, uint32_t, const VkGraphicsPipelineCreateInfo*, const VkAllocationCallbacks*, VkPipeline*> CreateGraphicsPipelines; ///< Wrapper for vkCreateGraphicsPipelines
    static Function<VkResult, VkInstance, const VkHeadlessSurfaceCreateInfoEXT*, const VkAllocationCallbacks*, VkSurfaceKHR*> CreateHeadlessSurfaceEXT; ///< Wrapper for vkCreateHeadlessSurfaceEXT
    static Function<VkResult, VkDevice, const VkImageCreateInfo*, const VkAllocationCallbacks*, VkImage*> CreateImage; ///< Wrapper for vkCreateImage
    static Function<VkResult, VkInstance, const VkImagePipeSurfaceCreateInfoFUCHSIA*, const VkAllocationCallbacks*, VkSurfaceKHR*> CreateImagePipeSurfaceFUCHSIA; ///< Wrapper for vkCreateImagePipeSurfaceFUCHSIA
    static Function<VkResult, VkDevice, const VkImageViewCreateInfo*, const VkAllocationCallbacks*, VkImageView*> CreateImageView; ///< Wrapper for vkCreateImageView
    static Function<VkResult, VkDevice, const VkIndirectCommandsLayoutCreateInfoNVX*, const VkAllocationCallbacks*, VkIndirectCommandsLayoutNVX*> CreateIndirectCommandsLayoutNVX; ///< Wrapper for vkCreateIndirectCommandsLayoutNVX
    static Function<VkResult, const VkInstanceCreateInfo*, const VkAllocationCallbacks*, VkInstance*> CreateInstance; ///< Wrapper for vkCreateInstance
    static Function<VkResult, VkInstance, const VkIOSSurfaceCreateInfoMVK*, const VkAllocationCallbacks*, VkSurfaceKHR*> CreateIOSSurfaceMVK; ///< Wrapper for vkCreateIOSSurfaceMVK
    static Function<VkResult, VkInstance, const VkMacOSSurfaceCreateInfoMVK*, const VkAllocationCallbacks*, VkSurfaceKHR*> CreateMacOSSurfaceMVK; ///< Wrapper for vkCreateMacOSSurfaceMVK
    static Function<VkResult, VkInstance, const VkMetalSurfaceCreateInfoEXT*, const VkAllocationCallbacks*, VkSurfaceKHR*> CreateMetalSurfaceEXT; ///< Wrapper for vkCreateMetalSurfaceEXT
    static Function<VkResult, VkDevice, const VkObjectTableCreateInfoNVX*, const VkAllocationCallbacks*, VkObjectTableNVX*> CreateObjectTableNVX; ///< Wrapper for vkCreateObjectTableNVX
    static Function<VkResult, VkDevice, const VkPipelineCacheCreateInfo*, const VkAllocationCallbacks*, VkPipelineCache*> CreatePipelineCache; ///< Wrapper for vkCreatePipelineCache
    static Function<VkResult, VkDevice, const VkPipelineLayoutCreateInfo*, const VkAllocationCallbacks*, VkPipelineLayout*> CreatePipelineLayout; ///< Wrapper for vkCreatePipelineLayout
    static Function<VkResult, VkDevice, const VkQueryPoolCreateInfo*, const VkAllocationCallbacks*, VkQueryPool*> CreateQueryPool; ///< Wrapper for vkCreateQueryPool
    static Function<VkResult, VkDevice, VkPipelineCache, uint32_t, const VkRayTracingPipelineCreateInfoNV*, const VkAllocationCallbacks*, VkPipeline*> CreateRayTracingPipelinesNV; ///< Wrapper for vkCreateRayTracingPipelinesNV
    static Function<VkResult, VkDevice, const VkRenderPassCreateInfo*, const VkAllocationCallbacks*, VkRenderPass*> CreateRenderPass; ///< Wrapper for vkCreateRenderPass
    static Function<VkResult, VkDevice, const VkRenderPassCreateInfo2KHR*, const VkAllocationCallbacks*, VkRenderPass*> CreateRenderPass2KHR; ///< Wrapper for vkCreateRenderPass2KHR
    static Function<VkResult, VkDevice, const VkSamplerCreateInfo*, const VkAllocationCallbacks*, VkSampler*> CreateSampler; ///< Wrapper for vkCreateSampler
    static Function<VkResult, VkDevice, const VkSamplerYcbcrConversionCreateInfo*, const VkAllocationCallbacks*, VkSamplerYcbcrConversion*> CreateSamplerYcbcrConversion; ///< Wrapper for vkCreateSamplerYcbcrConversion
    static Function<VkResult, VkDevice, const VkSamplerYcbcrConversionCreateInfo*, const VkAllocationCallbacks*, VkSamplerYcbcrConversion*> CreateSamplerYcbcrConversionKHR; ///< Wrapper for vkCreateSamplerYcbcrConversionKHR
    static Function<VkResult, VkDevice, const VkSemaphoreCreateInfo*, const VkAllocationCallbacks*, VkSemaphore*> CreateSemaphore; ///< Wrapper for vkCreateSemaphore
    static Function<VkResult, VkDevice, const VkShaderModuleCreateInfo*, const VkAllocationCallbacks*, VkShaderModule*> CreateShaderModule; ///< Wrapper for vkCreateShaderModule
    static Function<VkResult, VkDevice, uint32_t, const VkSwapchainCreateInfoKHR*, const VkAllocationCallbacks*, VkSwapchainKHR*> CreateSharedSwapchainsKHR; ///< Wrapper for vkCreateSharedSwapchainsKHR
    static Function<VkResult, VkInstance, const VkStreamDescriptorSurfaceCreateInfoGGP*, const VkAllocationCallbacks*, VkSurfaceKHR*> CreateStreamDescriptorSurfaceGGP; ///< Wrapper for vkCreateStreamDescriptorSurfaceGGP
    static Function<VkResult, VkDevice, const VkSwapchainCreateInfoKHR*, const VkAllocationCallbacks*, VkSwapchainKHR*> CreateSwapchainKHR; ///< Wrapper for vkCreateSwapchainKHR
    static Function<VkResult, VkDevice, const VkValidationCacheCreateInfoEXT*, const VkAllocationCallbacks*, VkValidationCacheEXT*> CreateValidationCacheEXT; ///< Wrapper for vkCreateValidationCacheEXT
    static Function<VkResult, VkInstance, const VkViSurfaceCreateInfoNN*, const VkAllocationCallbacks*, VkSurfaceKHR*> CreateViSurfaceNN; ///< Wrapper for vkCreateViSurfaceNN
    static Function<VkResult, VkInstance, const VkWaylandSurfaceCreateInfoKHR*, const VkAllocationCallbacks*, VkSurfaceKHR*> CreateWaylandSurfaceKHR; ///< Wrapper for vkCreateWaylandSurfaceKHR
    static Function<VkResult, VkInstance, const VkWin32SurfaceCreateInfoKHR*, const VkAllocationCallbacks*, VkSurfaceKHR*> CreateWin32SurfaceKHR; ///< Wrapper for vkCreateWin32SurfaceKHR
    static Function<VkResult, VkInstance, const VkXcbSurfaceCreateInfoKHR*, const VkAllocationCallbacks*, VkSurfaceKHR*> CreateXcbSurfaceKHR; ///< Wrapper for vkCreateXcbSurfaceKHR
    static Function<VkResult, VkInstance, const VkXlibSurfaceCreateInfoKHR*, const VkAllocationCallbacks*, VkSurfaceKHR*> CreateXlibSurfaceKHR; ///< Wrapper for vkCreateXlibSurfaceKHR
    static Function<VkResult, VkDevice, const VkDebugMarkerObjectNameInfoEXT*> DebugMarkerSetObjectNameEXT; ///< Wrapper for vkDebugMarkerSetObjectNameEXT
    static Function<VkResult, VkDevice, const VkDebugMarkerObjectTagInfoEXT*> DebugMarkerSetObjectTagEXT; ///< Wrapper for vkDebugMarkerSetObjectTagEXT
    static Function<void, VkInstance, VkDebugReportFlagsEXT, VkDebugReportObjectTypeEXT, uint64_t, size_t, int32_t, const char*, const char*> DebugReportMessageEXT; ///< Wrapper for vkDebugReportMessageEXT
    static Function<void, VkDevice, VkAccelerationStructureNV, const VkAllocationCallbacks*> DestroyAccelerationStructureNV; ///< Wrapper for vkDestroyAccelerationStructureNV
    static Function<void, VkDevice, VkBuffer, const VkAllocationCallbacks*> DestroyBuffer; ///< Wrapper for vkDestroyBuffer
    static Function<void, VkDevice, VkBufferView, const VkAllocationCallbacks*> DestroyBufferView; ///< Wrapper for vkDestroyBufferView
    static Function<void, VkDevice, VkCommandPool, const VkAllocationCallbacks*> DestroyCommandPool; ///< Wrapper for vkDestroyCommandPool
    static Function<void, VkInstance, VkDebugReportCallbackEXT, const VkAllocationCallbacks*> DestroyDebugReportCallbackEXT; ///< Wrapper for vkDestroyDebugReportCallbackEXT
    static Function<void, VkInstance, VkDebugUtilsMessengerEXT, const VkAllocationCallbacks*> DestroyDebugUtilsMessengerEXT; ///< Wrapper for vkDestroyDebugUtilsMessengerEXT
    static Function<void, VkDevice, VkDescriptorPool, const VkAllocationCallbacks*> DestroyDescriptorPool; ///< Wrapper for vkDestroyDescriptorPool
    static Function<void, VkDevice, VkDescriptorSetLayout, const VkAllocationCallbacks*> DestroyDescriptorSetLayout; ///< Wrapper for vkDestroyDescriptorSetLayout
    static Function<void, VkDevice, VkDescriptorUpdateTemplate, const VkAllocationCallbacks*> DestroyDescriptorUpdateTemplate; ///< Wrapper for vkDestroyDescriptorUpdateTemplate
    static Function<void, VkDevice, VkDescriptorUpdateTemplate, const VkAllocationCallbacks*> DestroyDescriptorUpdateTemplateKHR; ///< Wrapper for vkDestroyDescriptorUpdateTemplateKHR
    static Function<void, VkDevice, const VkAllocationCallbacks*> DestroyDevice; ///< Wrapper for vkDestroyDevice
    static Function<void, VkDevice, VkEvent, const VkAllocationCallbacks*> DestroyEvent; ///< Wrapper for vkDestroyEvent
    static Function<void, VkDevice, VkFence, const VkAllocationCallbacks*> DestroyFence; ///< Wrapper for vkDestroyFence
    static Function<void, VkDevice, VkFramebuffer, const VkAllocationCallbacks*> DestroyFramebuffer; ///< Wrapper for vkDestroyFramebuffer
    static Function<void, VkDevice, VkImage, const VkAllocationCallbacks*> DestroyImage; ///< Wrapper for vkDestroyImage
    static Function<void, VkDevice, VkImageView, const VkAllocationCallbacks*> DestroyImageView; ///< Wrapper for vkDestroyImageView
    static Function<void, VkDevice, VkIndirectCommandsLayoutNVX, const VkAllocationCallbacks*> DestroyIndirectCommandsLayoutNVX; ///< Wrapper for vkDestroyIndirectCommandsLayoutNVX
    static Function<void, VkInstance, const VkAllocationCallbacks*> DestroyInstance; ///< Wrapper for vkDestroyInstance
    static Function<void, VkDevice, VkObjectTableNVX, const VkAllocationCallbacks*> DestroyObjectTableNVX; ///< Wrapper for vkDestroyObjectTableNVX
    static Function<void, VkDevice, VkPipeline, const VkAllocationCallbacks*> DestroyPipeline; ///< Wrapper for vkDestroyPipeline
    static Function<void, VkDevice, VkPipelineCache, const VkAllocationCallbacks*> DestroyPipelineCache; ///< Wrapper for vkDestroyPipelineCache
    static Function<void, VkDevice, VkPipelineLayout, const VkAllocationCallbacks*> DestroyPipelineLayout; ///< Wrapper for vkDestroyPipelineLayout
    static Function<void, VkDevice, VkQueryPool, const VkAllocationCallbacks*> DestroyQueryPool; ///< Wrapper for vkDestroyQueryPool
    static Function<void, VkDevice, VkRenderPass, const VkAllocationCallbacks*> DestroyRenderPass; ///< Wrapper for vkDestroyRenderPass
    static Function<void, VkDevice, VkSampler, const VkAllocationCallbacks*> DestroySampler; ///< Wrapper for vkDestroySampler
    static Function<void, VkDevice, VkSamplerYcbcrConversion, const VkAllocationCallbacks*> DestroySamplerYcbcrConversion; ///< Wrapper for vkDestroySamplerYcbcrConversion
    static Function<void, VkDevice, VkSamplerYcbcrConversion, const VkAllocationCallbacks*> DestroySamplerYcbcrConversionKHR; ///< Wrapper for vkDestroySamplerYcbcrConversionKHR
    static Function<void, VkDevice, VkSemaphore, const VkAllocationCallbacks*> DestroySemaphore; ///< Wrapper for vkDestroySemaphore
    static Function<void, VkDevice, VkShaderModule, const VkAllocationCallbacks*> DestroyShaderModule; ///< Wrapper for vkDestroyShaderModule
    static Function<void, VkInstance, VkSurfaceKHR, const VkAllocationCallbacks*> DestroySurfaceKHR; ///< Wrapper for vkDestroySurfaceKHR
    static Function<void, VkDevice, VkSwapchainKHR, const VkAllocationCallbacks*> DestroySwapchainKHR; ///< Wrapper for vkDestroySwapchainKHR
    static Function<void, VkDevice, VkValidationCacheEXT, const VkAllocationCallbacks*> DestroyValidationCacheEXT; ///< Wrapper for vkDestroyValidationCacheEXT
    static Function<VkResult, VkDevice> DeviceWaitIdle; ///< Wrapper for vkDeviceWaitIdle
    static Function<VkResult, VkDevice, VkDisplayKHR, const VkDisplayPowerInfoEXT*> DisplayPowerControlEXT; ///< Wrapper for vkDisplayPowerControlEXT
    static Function<VkResult, VkCommandBuffer> EndCommandBuffer; ///< Wrapper for vkEndCommandBuffer
    static Function<VkResult, VkPhysicalDevice, const char*, uint32_t*, VkExtensionProperties*> EnumerateDeviceExtensionProperties; ///< Wrapper for vkEnumerateDeviceExtensionProperties
    static Function<VkResult, VkPhysicalDevice, uint32_t*, VkLayerProperties*> EnumerateDeviceLayerProperties; ///< Wrapper for vkEnumerateDeviceLayerProperties
    static Function<VkResult, const char*, uint32_t*, VkExtensionProperties*> EnumerateInstanceExtensionProperties; ///< Wrapper for vkEnumerateInstanceExtensionProperties
    static Function<VkResult, uint32_t*, VkLayerProperties*> EnumerateInstanceLayerProperties; ///< Wrapper for vkEnumerateInstanceLayerProperties
    static Function<VkResult, uint32_t*> EnumerateInstanceVersion; ///< Wrapper for vkEnumerateInstanceVersion
    static Function<VkResult, VkInstance, uint32_t*, VkPhysicalDeviceGroupProperties*> EnumeratePhysicalDeviceGroups; ///< Wrapper for vkEnumeratePhysicalDeviceGroups
    static Function<VkResult, VkInstance, uint32_t*, VkPhysicalDeviceGroupProperties*> EnumeratePhysicalDeviceGroupsKHR; ///< Wrapper for vkEnumeratePhysicalDeviceGroupsKHR
    static Function<VkResult, VkInstance, uint32_t*, VkPhysicalDevice*> EnumeratePhysicalDevices; ///< Wrapper for vkEnumeratePhysicalDevices
    static Function<VkResult, VkDevice, uint32_t, const VkMappedMemoryRange*> FlushMappedMemoryRanges; ///< Wrapper for vkFlushMappedMemoryRanges
    static Function<void, VkDevice, VkCommandPool, uint32_t, const VkCommandBuffer*> FreeCommandBuffers; ///< Wrapper for vkFreeCommandBuffers
    static Function<VkResult, VkDevice, VkDescriptorPool, uint32_t, const VkDescriptorSet*> FreeDescriptorSets; ///< Wrapper for vkFreeDescriptorSets
    static Function<void, VkDevice, VkDeviceMemory, const VkAllocationCallbacks*> FreeMemory; ///< Wrapper for vkFreeMemory
    static Function<VkResult, VkDevice, VkAccelerationStructureNV, size_t, void*> GetAccelerationStructureHandleNV; ///< Wrapper for vkGetAccelerationStructureHandleNV
    static Function<void, VkDevice, const VkAccelerationStructureMemoryRequirementsInfoNV*, VkMemoryRequirements2KHR*> GetAccelerationStructureMemoryRequirementsNV; ///< Wrapper for vkGetAccelerationStructureMemoryRequirementsNV
    static Function<VkResult, VkDevice, const struct AHardwareBuffer*, VkAndroidHardwareBufferPropertiesANDROID*> GetAndroidHardwareBufferPropertiesANDROID; ///< Wrapper for vkGetAndroidHardwareBufferPropertiesANDROID
    static Function<VkDeviceAddress, VkDevice, const VkBufferDeviceAddressInfoEXT*> GetBufferDeviceAddressEXT; ///< Wrapper for vkGetBufferDeviceAddressEXT
    static Function<void, VkDevice, VkBuffer, VkMemoryRequirements*> GetBufferMemoryRequirements; ///< Wrapper for vkGetBufferMemoryRequirements
    static Function<void, VkDevice, const VkBufferMemoryRequirementsInfo2*, VkMemoryRequirements2*> GetBufferMemoryRequirements2; ///< Wrapper for vkGetBufferMemoryRequirements2
    static Function<void, VkDevice, const VkBufferMemoryRequirementsInfo2*, VkMemoryRequirements2*> GetBufferMemoryRequirements2KHR; ///< Wrapper for vkGetBufferMemoryRequirements2KHR
    static Function<VkResult, VkDevice, uint32_t, const VkCalibratedTimestampInfoEXT*, uint64_t*, uint64_t*> GetCalibratedTimestampsEXT; ///< Wrapper for vkGetCalibratedTimestampsEXT
    static Function<void, VkDevice, const VkDescriptorSetLayoutCreateInfo*, VkDescriptorSetLayoutSupport*> GetDescriptorSetLayoutSupport; ///< Wrapper for vkGetDescriptorSetLayoutSupport
    static Function<void, VkDevice, const VkDescriptorSetLayoutCreateInfo*, VkDescriptorSetLayoutSupport*> GetDescriptorSetLayoutSupportKHR; ///< Wrapper for vkGetDescriptorSetLayoutSupportKHR
    static Function<void, VkDevice, uint32_t, uint32_t, uint32_t, VkPeerMemoryFeatureFlags*> GetDeviceGroupPeerMemoryFeatures; ///< Wrapper for vkGetDeviceGroupPeerMemoryFeatures
    static Function<void, VkDevice, uint32_t, uint32_t, uint32_t, VkPeerMemoryFeatureFlags*> GetDeviceGroupPeerMemoryFeaturesKHR; ///< Wrapper for vkGetDeviceGroupPeerMemoryFeaturesKHR
    static Function<VkResult, VkDevice, VkDeviceGroupPresentCapabilitiesKHR*> GetDeviceGroupPresentCapabilitiesKHR; ///< Wrapper for vkGetDeviceGroupPresentCapabilitiesKHR
    static Function<VkResult, VkDevice, const VkPhysicalDeviceSurfaceInfo2KHR*, VkDeviceGroupPresentModeFlagsKHR*> GetDeviceGroupSurfacePresentModes2EXT; ///< Wrapper for vkGetDeviceGroupSurfacePresentModes2EXT
    static Function<VkResult, VkDevice, VkSurfaceKHR, VkDeviceGroupPresentModeFlagsKHR*> GetDeviceGroupSurfacePresentModesKHR; ///< Wrapper for vkGetDeviceGroupSurfacePresentModesKHR
    static Function<void, VkDevice, VkDeviceMemory, VkDeviceSize*> GetDeviceMemoryCommitment; ///< Wrapper for vkGetDeviceMemoryCommitment
    static Function<PFN_vkVoidFunction, VkDevice, const char*> GetDeviceProcAddr; ///< Wrapper for vkGetDeviceProcAddr
    static Function<void, VkDevice, uint32_t, uint32_t, VkQueue*> GetDeviceQueue; ///< Wrapper for vkGetDeviceQueue
    static Function<void, VkDevice, const VkDeviceQueueInfo2*, VkQueue*> GetDeviceQueue2; ///< Wrapper for vkGetDeviceQueue2
    static Function<VkResult, VkPhysicalDevice, VkDisplayKHR, uint32_t*, VkDisplayModeProperties2KHR*> GetDisplayModeProperties2KHR; ///< Wrapper for vkGetDisplayModeProperties2KHR
    static Function<VkResult, VkPhysicalDevice, VkDisplayKHR, uint32_t*, VkDisplayModePropertiesKHR*> GetDisplayModePropertiesKHR; ///< Wrapper for vkGetDisplayModePropertiesKHR
    static Function<VkResult, VkPhysicalDevice, const VkDisplayPlaneInfo2KHR*, VkDisplayPlaneCapabilities2KHR*> GetDisplayPlaneCapabilities2KHR; ///< Wrapper for vkGetDisplayPlaneCapabilities2KHR
    static Function<VkResult, VkPhysicalDevice, VkDisplayModeKHR, uint32_t, VkDisplayPlaneCapabilitiesKHR*> GetDisplayPlaneCapabilitiesKHR; ///< Wrapper for vkGetDisplayPlaneCapabilitiesKHR
    static Function<VkResult, VkPhysicalDevice, uint32_t, uint32_t*, VkDisplayKHR*> GetDisplayPlaneSupportedDisplaysKHR; ///< Wrapper for vkGetDisplayPlaneSupportedDisplaysKHR
    static Function<VkResult, VkDevice, VkEvent> GetEventStatus; ///< Wrapper for vkGetEventStatus
    static Function<VkResult, VkDevice, const VkFenceGetFdInfoKHR*, int*> GetFenceFdKHR; ///< Wrapper for vkGetFenceFdKHR
    static Function<VkResult, VkDevice, VkFence> GetFenceStatus; ///< Wrapper for vkGetFenceStatus
    static Function<VkResult, VkDevice, const VkFenceGetWin32HandleInfoKHR*, HANDLE*> GetFenceWin32HandleKHR; ///< Wrapper for vkGetFenceWin32HandleKHR
    static Function<VkResult, VkDevice, VkImage, VkImageDrmFormatModifierPropertiesEXT*> GetImageDrmFormatModifierPropertiesEXT; ///< Wrapper for vkGetImageDrmFormatModifierPropertiesEXT
    static Function<void, VkDevice, VkImage, VkMemoryRequirements*> GetImageMemoryRequirements; ///< Wrapper for vkGetImageMemoryRequirements
    static Function<void, VkDevice, const VkImageMemoryRequirementsInfo2*, VkMemoryRequirements2*> GetImageMemoryRequirements2; ///< Wrapper for vkGetImageMemoryRequirements2
    static Function<void, VkDevice, const VkImageMemoryRequirementsInfo2*, VkMemoryRequirements2*> GetImageMemoryRequirements2KHR; ///< Wrapper for vkGetImageMemoryRequirements2KHR
    static Function<void, VkDevice, VkImage, uint32_t*, VkSparseImageMemoryRequirements*> GetImageSparseMemoryRequirements; ///< Wrapper for vkGetImageSparseMemoryRequirements
    static Function<void, VkDevice, const VkImageSparseMemoryRequirementsInfo2*, uint32_t*, VkSparseImageMemoryRequirements2*> GetImageSparseMemoryRequirements2; ///< Wrapper for vkGetImageSparseMemoryRequirements2
    static Function<void, VkDevice, const VkImageSparseMemoryRequirementsInfo2*, uint32_t*, VkSparseImageMemoryRequirements2*> GetImageSparseMemoryRequirements2KHR; ///< Wrapper for vkGetImageSparseMemoryRequirements2KHR
    static Function<void, VkDevice, VkImage, const VkImageSubresource*, VkSubresourceLayout*> GetImageSubresourceLayout; ///< Wrapper for vkGetImageSubresourceLayout
    static Function<uint32_t, VkDevice, const VkImageViewHandleInfoNVX*> GetImageViewHandleNVX; ///< Wrapper for vkGetImageViewHandleNVX
    static Function<PFN_vkVoidFunction, VkInstance, const char*> GetInstanceProcAddr; ///< Wrapper for vkGetInstanceProcAddr
    static Function<VkResult, VkDevice, const VkMemoryGetAndroidHardwareBufferInfoANDROID*, struct AHardwareBuffer**> GetMemoryAndroidHardwareBufferANDROID; ///< Wrapper for vkGetMemoryAndroidHardwareBufferANDROID
    static Function<VkResult, VkDevice, const VkMemoryGetFdInfoKHR*, int*> GetMemoryFdKHR; ///< Wrapper for vkGetMemoryFdKHR
    static Function<VkResult, VkDevice, VkExternalMemoryHandleTypeFlagBits, int, VkMemoryFdPropertiesKHR*> GetMemoryFdPropertiesKHR; ///< Wrapper for vkGetMemoryFdPropertiesKHR
    static Function<VkResult, VkDevice, VkExternalMemoryHandleTypeFlagBits, const void*, VkMemoryHostPointerPropertiesEXT*> GetMemoryHostPointerPropertiesEXT; ///< Wrapper for vkGetMemoryHostPointerPropertiesEXT
    static Function<VkResult, VkDevice, const VkMemoryGetWin32HandleInfoKHR*, HANDLE*> GetMemoryWin32HandleKHR; ///< Wrapper for vkGetMemoryWin32HandleKHR
    static Function<VkResult, VkDevice, VkDeviceMemory, VkExternalMemoryHandleTypeFlagsNV, HANDLE*> GetMemoryWin32HandleNV; ///< Wrapper for vkGetMemoryWin32HandleNV
    static Function<VkResult, VkDevice, VkExternalMemoryHandleTypeFlagBits, HANDLE, VkMemoryWin32HandlePropertiesKHR*> GetMemoryWin32HandlePropertiesKHR; ///< Wrapper for vkGetMemoryWin32HandlePropertiesKHR
    static Function<VkResult, VkDevice, VkSwapchainKHR, uint32_t*, VkPastPresentationTimingGOOGLE*> GetPastPresentationTimingGOOGLE; ///< Wrapper for vkGetPastPresentationTimingGOOGLE
    static Function<VkResult, VkDevice, VkPerformanceParameterTypeINTEL, VkPerformanceValueINTEL*> GetPerformanceParameterINTEL; ///< Wrapper for vkGetPerformanceParameterINTEL
    static Function<VkResult, VkPhysicalDevice, uint32_t*, VkTimeDomainEXT*> GetPhysicalDeviceCalibrateableTimeDomainsEXT; ///< Wrapper for vkGetPhysicalDeviceCalibrateableTimeDomainsEXT
    static Function<VkResult, VkPhysicalDevice, uint32_t*, VkCooperativeMatrixPropertiesNV*> GetPhysicalDeviceCooperativeMatrixPropertiesNV; ///< Wrapper for vkGetPhysicalDeviceCooperativeMatrixPropertiesNV
    static Function<VkResult, VkPhysicalDevice, uint32_t*, VkDisplayPlaneProperties2KHR*> GetPhysicalDeviceDisplayPlaneProperties2KHR; ///< Wrapper for vkGetPhysicalDeviceDisplayPlaneProperties2KHR
    static Function<VkResult, VkPhysicalDevice, uint32_t*, VkDisplayPlanePropertiesKHR*> GetPhysicalDeviceDisplayPlanePropertiesKHR; ///< Wrapper for vkGetPhysicalDeviceDisplayPlanePropertiesKHR
    static Function<VkResult, VkPhysicalDevice, uint32_t*, VkDisplayProperties2KHR*> GetPhysicalDeviceDisplayProperties2KHR; ///< Wrapper for vkGetPhysicalDeviceDisplayProperties2KHR
    static Function<VkResult, VkPhysicalDevice, uint32_t*, VkDisplayPropertiesKHR*> GetPhysicalDeviceDisplayPropertiesKHR; ///< Wrapper for vkGetPhysicalDeviceDisplayPropertiesKHR
    static Function<void, VkPhysicalDevice, const VkPhysicalDeviceExternalBufferInfo*, VkExternalBufferProperties*> GetPhysicalDeviceExternalBufferProperties; ///< Wrapper for vkGetPhysicalDeviceExternalBufferProperties
    static Function<void, VkPhysicalDevice, const VkPhysicalDeviceExternalBufferInfo*, VkExternalBufferProperties*> GetPhysicalDeviceExternalBufferPropertiesKHR; ///< Wrapper for vkGetPhysicalDeviceExternalBufferPropertiesKHR
    static Function<void, VkPhysicalDevice, const VkPhysicalDeviceExternalFenceInfo*, VkExternalFenceProperties*> GetPhysicalDeviceExternalFenceProperties; ///< Wrapper for vkGetPhysicalDeviceExternalFenceProperties
    static Function<void, VkPhysicalDevice, const VkPhysicalDeviceExternalFenceInfo*, VkExternalFenceProperties*> GetPhysicalDeviceExternalFencePropertiesKHR; ///< Wrapper for vkGetPhysicalDeviceExternalFencePropertiesKHR
    static Function<VkResult, VkPhysicalDevice, VkFormat, VkImageType, VkImageTiling, VkImageUsageFlags, VkImageCreateFlags, VkExternalMemoryHandleTypeFlagsNV, VkExternalImageFormatPropertiesNV*> GetPhysicalDeviceExternalImageFormatPropertiesNV; ///< Wrapper for vkGetPhysicalDeviceExternalImageFormatPropertiesNV
    static Function<void, VkPhysicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo*, VkExternalSemaphoreProperties*> GetPhysicalDeviceExternalSemaphoreProperties; ///< Wrapper for vkGetPhysicalDeviceExternalSemaphoreProperties
    static Function<void, VkPhysicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo*, VkExternalSemaphoreProperties*> GetPhysicalDeviceExternalSemaphorePropertiesKHR; ///< Wrapper for vkGetPhysicalDeviceExternalSemaphorePropertiesKHR
    static Function<void, VkPhysicalDevice, VkPhysicalDeviceFeatures*> GetPhysicalDeviceFeatures; ///< Wrapper for vkGetPhysicalDeviceFeatures
    static Function<void, VkPhysicalDevice, VkPhysicalDeviceFeatures2*> GetPhysicalDeviceFeatures2; ///< Wrapper for vkGetPhysicalDeviceFeatures2
    static Function<void, VkPhysicalDevice, VkPhysicalDeviceFeatures2*> GetPhysicalDeviceFeatures2KHR; ///< Wrapper for vkGetPhysicalDeviceFeatures2KHR
    static Function<void, VkPhysicalDevice, VkFormat, VkFormatProperties*> GetPhysicalDeviceFormatProperties; ///< Wrapper for vkGetPhysicalDeviceFormatProperties
    static Function<void, VkPhysicalDevice, VkFormat, VkFormatProperties2*> GetPhysicalDeviceFormatProperties2; ///< Wrapper for vkGetPhysicalDeviceFormatProperties2
    static Function<void, VkPhysicalDevice, VkFormat, VkFormatProperties2*> GetPhysicalDeviceFormatProperties2KHR; ///< Wrapper for vkGetPhysicalDeviceFormatProperties2KHR
    static Function<void, VkPhysicalDevice, VkDeviceGeneratedCommandsFeaturesNVX*, VkDeviceGeneratedCommandsLimitsNVX*> GetPhysicalDeviceGeneratedCommandsPropertiesNVX; ///< Wrapper for vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX
    static Function<VkResult, VkPhysicalDevice, VkFormat, VkImageType, VkImageTiling, VkImageUsageFlags, VkImageCreateFlags, VkImageFormatProperties*> GetPhysicalDeviceImageFormatProperties; ///< Wrapper for vkGetPhysicalDeviceImageFormatProperties
    static Function<VkResult, VkPhysicalDevice, const VkPhysicalDeviceImageFormatInfo2*, VkImageFormatProperties2*> GetPhysicalDeviceImageFormatProperties2; ///< Wrapper for vkGetPhysicalDeviceImageFormatProperties2
    static Function<VkResult, VkPhysicalDevice, const VkPhysicalDeviceImageFormatInfo2*, VkImageFormatProperties2*> GetPhysicalDeviceImageFormatProperties2KHR; ///< Wrapper for vkGetPhysicalDeviceImageFormatProperties2KHR
    static Function<void, VkPhysicalDevice, VkPhysicalDeviceMemoryProperties*> GetPhysicalDeviceMemoryProperties; ///< Wrapper for vkGetPhysicalDeviceMemoryProperties
    static Function<void, VkPhysicalDevice, VkPhysicalDeviceMemoryProperties2*> GetPhysicalDeviceMemoryProperties2; ///< Wrapper for vkGetPhysicalDeviceMemoryProperties2
    static Function<void, VkPhysicalDevice, VkPhysicalDeviceMemoryProperties2*> GetPhysicalDeviceMemoryProperties2KHR; ///< Wrapper for vkGetPhysicalDeviceMemoryProperties2KHR
    static Function<void, VkPhysicalDevice, VkSampleCountFlagBits, VkMultisamplePropertiesEXT*> GetPhysicalDeviceMultisamplePropertiesEXT; ///< Wrapper for vkGetPhysicalDeviceMultisamplePropertiesEXT
    static Function<VkResult, VkPhysicalDevice, VkSurfaceKHR, uint32_t*, VkRect2D*> GetPhysicalDevicePresentRectanglesKHR; ///< Wrapper for vkGetPhysicalDevicePresentRectanglesKHR
    static Function<void, VkPhysicalDevice, VkPhysicalDeviceProperties*> GetPhysicalDeviceProperties; ///< Wrapper for vkGetPhysicalDeviceProperties
    static Function<void, VkPhysicalDevice, VkPhysicalDeviceProperties2*> GetPhysicalDeviceProperties2; ///< Wrapper for vkGetPhysicalDeviceProperties2
    static Function<void, VkPhysicalDevice, VkPhysicalDeviceProperties2*> GetPhysicalDeviceProperties2KHR; ///< Wrapper for vkGetPhysicalDeviceProperties2KHR
    static Function<void, VkPhysicalDevice, uint32_t*, VkQueueFamilyProperties*> GetPhysicalDeviceQueueFamilyProperties; ///< Wrapper for vkGetPhysicalDeviceQueueFamilyProperties
    static Function<void, VkPhysicalDevice, uint32_t*, VkQueueFamilyProperties2*> GetPhysicalDeviceQueueFamilyProperties2; ///< Wrapper for vkGetPhysicalDeviceQueueFamilyProperties2
    static Function<void, VkPhysicalDevice, uint32_t*, VkQueueFamilyProperties2*> GetPhysicalDeviceQueueFamilyProperties2KHR; ///< Wrapper for vkGetPhysicalDeviceQueueFamilyProperties2KHR
    static Function<void, VkPhysicalDevice, VkFormat, VkImageType, VkSampleCountFlagBits, VkImageUsageFlags, VkImageTiling, uint32_t*, VkSparseImageFormatProperties*> GetPhysicalDeviceSparseImageFormatProperties; ///< Wrapper for vkGetPhysicalDeviceSparseImageFormatProperties
    static Function<void, VkPhysicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2*, uint32_t*, VkSparseImageFormatProperties2*> GetPhysicalDeviceSparseImageFormatProperties2; ///< Wrapper for vkGetPhysicalDeviceSparseImageFormatProperties2
    static Function<void, VkPhysicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2*, uint32_t*, VkSparseImageFormatProperties2*> GetPhysicalDeviceSparseImageFormatProperties2KHR; ///< Wrapper for vkGetPhysicalDeviceSparseImageFormatProperties2KHR
    static Function<VkResult, VkPhysicalDevice, uint32_t*, VkFramebufferMixedSamplesCombinationNV*> GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV; ///< Wrapper for vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV
    static Function<VkResult, VkPhysicalDevice, VkSurfaceKHR, VkSurfaceCapabilities2EXT*> GetPhysicalDeviceSurfaceCapabilities2EXT; ///< Wrapper for vkGetPhysicalDeviceSurfaceCapabilities2EXT
    static Function<VkResult, VkPhysicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR*, VkSurfaceCapabilities2KHR*> GetPhysicalDeviceSurfaceCapabilities2KHR; ///< Wrapper for vkGetPhysicalDeviceSurfaceCapabilities2KHR
    static Function<VkResult, VkPhysicalDevice, VkSurfaceKHR, VkSurfaceCapabilitiesKHR*> GetPhysicalDeviceSurfaceCapabilitiesKHR; ///< Wrapper for vkGetPhysicalDeviceSurfaceCapabilitiesKHR
    static Function<VkResult, VkPhysicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR*, uint32_t*, VkSurfaceFormat2KHR*> GetPhysicalDeviceSurfaceFormats2KHR; ///< Wrapper for vkGetPhysicalDeviceSurfaceFormats2KHR
    static Function<VkResult, VkPhysicalDevice, VkSurfaceKHR, uint32_t*, VkSurfaceFormatKHR*> GetPhysicalDeviceSurfaceFormatsKHR; ///< Wrapper for vkGetPhysicalDeviceSurfaceFormatsKHR
    static Function<VkResult, VkPhysicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR*, uint32_t*, VkPresentModeKHR*> GetPhysicalDeviceSurfacePresentModes2EXT; ///< Wrapper for vkGetPhysicalDeviceSurfacePresentModes2EXT
    static Function<VkResult, VkPhysicalDevice, VkSurfaceKHR, uint32_t*, VkPresentModeKHR*> GetPhysicalDeviceSurfacePresentModesKHR; ///< Wrapper for vkGetPhysicalDeviceSurfacePresentModesKHR
    static Function<VkResult, VkPhysicalDevice, uint32_t, VkSurfaceKHR, VkBool32*> GetPhysicalDeviceSurfaceSupportKHR; ///< Wrapper for vkGetPhysicalDeviceSurfaceSupportKHR
    static Function<VkBool32, VkPhysicalDevice, uint32_t, struct wl_display*> GetPhysicalDeviceWaylandPresentationSupportKHR; ///< Wrapper for vkGetPhysicalDeviceWaylandPresentationSupportKHR
    static Function<VkBool32, VkPhysicalDevice, uint32_t> GetPhysicalDeviceWin32PresentationSupportKHR; ///< Wrapper for vkGetPhysicalDeviceWin32PresentationSupportKHR
    static Function<VkBool32, VkPhysicalDevice, uint32_t, xcb_connection_t*, xcb_visualid_t> GetPhysicalDeviceXcbPresentationSupportKHR; ///< Wrapper for vkGetPhysicalDeviceXcbPresentationSupportKHR
    static Function<VkBool32, VkPhysicalDevice, uint32_t, Display*, VisualID> GetPhysicalDeviceXlibPresentationSupportKHR; ///< Wrapper for vkGetPhysicalDeviceXlibPresentationSupportKHR
    static Function<VkResult, VkDevice, VkPipelineCache, size_t*, void*> GetPipelineCacheData; ///< Wrapper for vkGetPipelineCacheData
    static Function<VkResult, VkDevice, VkQueryPool, uint32_t, uint32_t, size_t, void*, VkDeviceSize, VkQueryResultFlags> GetQueryPoolResults; ///< Wrapper for vkGetQueryPoolResults
    static Function<void, VkQueue, uint32_t*, VkCheckpointDataNV*> GetQueueCheckpointDataNV; ///< Wrapper for vkGetQueueCheckpointDataNV
    static Function<VkResult, VkPhysicalDevice, Display*, RROutput, VkDisplayKHR*> GetRandROutputDisplayEXT; ///< Wrapper for vkGetRandROutputDisplayEXT
    static Function<VkResult, VkDevice, VkPipeline, uint32_t, uint32_t, size_t, void*> GetRayTracingShaderGroupHandlesNV; ///< Wrapper for vkGetRayTracingShaderGroupHandlesNV
    static Function<VkResult, VkDevice, VkSwapchainKHR, VkRefreshCycleDurationGOOGLE*> GetRefreshCycleDurationGOOGLE; ///< Wrapper for vkGetRefreshCycleDurationGOOGLE
    static Function<void, VkDevice, VkRenderPass, VkExtent2D*> GetRenderAreaGranularity; ///< Wrapper for vkGetRenderAreaGranularity
    static Function<VkResult, VkDevice, const VkSemaphoreGetFdInfoKHR*, int*> GetSemaphoreFdKHR; ///< Wrapper for vkGetSemaphoreFdKHR
    static Function<VkResult, VkDevice, const VkSemaphoreGetWin32HandleInfoKHR*, HANDLE*> GetSemaphoreWin32HandleKHR; ///< Wrapper for vkGetSemaphoreWin32HandleKHR
    static Function<VkResult, VkDevice, VkPipeline, VkShaderStageFlagBits, VkShaderInfoTypeAMD, size_t*, void*> GetShaderInfoAMD; ///< Wrapper for vkGetShaderInfoAMD
    static Function<VkResult, VkDevice, VkSwapchainKHR, VkSurfaceCounterFlagBitsEXT, uint64_t*> GetSwapchainCounterEXT; ///< Wrapper for vkGetSwapchainCounterEXT
    static Function<VkResult, VkDevice, VkFormat, VkImageUsageFlags, VkSwapchainImageUsageFlagsANDROID, uint64_t*, uint64_t*> GetSwapchainGrallocUsage2ANDROID; ///< Wrapper for vkGetSwapchainGrallocUsage2ANDROID
    static Function<VkResult, VkDevice, VkFormat, VkImageUsageFlags, int*> GetSwapchainGrallocUsageANDROID; ///< Wrapper for vkGetSwapchainGrallocUsageANDROID
    static Function<VkResult, VkDevice, VkSwapchainKHR, uint32_t*, VkImage*> GetSwapchainImagesKHR; ///< Wrapper for vkGetSwapchainImagesKHR
    static Function<VkResult, VkDevice, VkSwapchainKHR> GetSwapchainStatusKHR; ///< Wrapper for vkGetSwapchainStatusKHR
    static Function<VkResult, VkDevice, VkValidationCacheEXT, size_t*, void*> GetValidationCacheDataEXT; ///< Wrapper for vkGetValidationCacheDataEXT
    static Function<VkResult, VkDevice, const VkImportFenceFdInfoKHR*> ImportFenceFdKHR; ///< Wrapper for vkImportFenceFdKHR
    static Function<VkResult, VkDevice, const VkImportFenceWin32HandleInfoKHR*> ImportFenceWin32HandleKHR; ///< Wrapper for vkImportFenceWin32HandleKHR
    static Function<VkResult, VkDevice, const VkImportSemaphoreFdInfoKHR*> ImportSemaphoreFdKHR; ///< Wrapper for vkImportSemaphoreFdKHR
    static Function<VkResult, VkDevice, const VkImportSemaphoreWin32HandleInfoKHR*> ImportSemaphoreWin32HandleKHR; ///< Wrapper for vkImportSemaphoreWin32HandleKHR
    static Function<VkResult, VkDevice, const VkInitializePerformanceApiInfoINTEL*> InitializePerformanceApiINTEL; ///< Wrapper for vkInitializePerformanceApiINTEL
    static Function<VkResult, VkDevice, uint32_t, const VkMappedMemoryRange*> InvalidateMappedMemoryRanges; ///< Wrapper for vkInvalidateMappedMemoryRanges
    static Function<VkResult, VkDevice, VkDeviceMemory, VkDeviceSize, VkDeviceSize, VkMemoryMapFlags, void**> MapMemory; ///< Wrapper for vkMapMemory
    static Function<VkResult, VkDevice, VkPipelineCache, uint32_t, const VkPipelineCache*> MergePipelineCaches; ///< Wrapper for vkMergePipelineCaches
    static Function<VkResult, VkDevice, VkValidationCacheEXT, uint32_t, const VkValidationCacheEXT*> MergeValidationCachesEXT; ///< Wrapper for vkMergeValidationCachesEXT
    static Function<void, VkQueue, const VkDebugUtilsLabelEXT*> QueueBeginDebugUtilsLabelEXT; ///< Wrapper for vkQueueBeginDebugUtilsLabelEXT
    static Function<VkResult, VkQueue, uint32_t, const VkBindSparseInfo*, VkFence> QueueBindSparse; ///< Wrapper for vkQueueBindSparse
    static Function<void, VkQueue> QueueEndDebugUtilsLabelEXT; ///< Wrapper for vkQueueEndDebugUtilsLabelEXT
    static Function<void, VkQueue, const VkDebugUtilsLabelEXT*> QueueInsertDebugUtilsLabelEXT; ///< Wrapper for vkQueueInsertDebugUtilsLabelEXT
    static Function<VkResult, VkQueue, const VkPresentInfoKHR*> QueuePresentKHR; ///< Wrapper for vkQueuePresentKHR
    static Function<VkResult, VkQueue, VkPerformanceConfigurationINTEL> QueueSetPerformanceConfigurationINTEL; ///< Wrapper for vkQueueSetPerformanceConfigurationINTEL
    static Function<VkResult, VkQueue, uint32_t, const VkSemaphore*, VkImage, int*> QueueSignalReleaseImageANDROID; ///< Wrapper for vkQueueSignalReleaseImageANDROID
    static Function<VkResult, VkQueue, uint32_t, const VkSubmitInfo*, VkFence> QueueSubmit; ///< Wrapper for vkQueueSubmit
    static Function<VkResult, VkQueue> QueueWaitIdle; ///< Wrapper for vkQueueWaitIdle
    static Function<VkResult, VkDevice, const VkDeviceEventInfoEXT*, const VkAllocationCallbacks*, VkFence*> RegisterDeviceEventEXT; ///< Wrapper for vkRegisterDeviceEventEXT
    static Function<VkResult, VkDevice, VkDisplayKHR, const VkDisplayEventInfoEXT*, const VkAllocationCallbacks*, VkFence*> RegisterDisplayEventEXT; ///< Wrapper for vkRegisterDisplayEventEXT
    static Function<VkResult, VkDevice, VkObjectTableNVX, uint32_t, const VkObjectTableEntryNVX* const*, const uint32_t*> RegisterObjectsNVX; ///< Wrapper for vkRegisterObjectsNVX
    static Function<VkResult, VkPhysicalDevice, VkDisplayKHR> ReleaseDisplayEXT; ///< Wrapper for vkReleaseDisplayEXT
    static Function<VkResult, VkDevice, VkSwapchainKHR> ReleaseFullScreenExclusiveModeEXT; ///< Wrapper for vkReleaseFullScreenExclusiveModeEXT
    static Function<VkResult, VkDevice, VkPerformanceConfigurationINTEL> ReleasePerformanceConfigurationINTEL; ///< Wrapper for vkReleasePerformanceConfigurationINTEL
    static Function<VkResult, VkCommandBuffer, VkCommandBufferResetFlags> ResetCommandBuffer; ///< Wrapper for vkResetCommandBuffer
    static Function<VkResult, VkDevice, VkCommandPool, VkCommandPoolResetFlags> ResetCommandPool; ///< Wrapper for vkResetCommandPool
    static Function<VkResult, VkDevice, VkDescriptorPool, VkDescriptorPoolResetFlags> ResetDescriptorPool; ///< Wrapper for vkResetDescriptorPool
    static Function<VkResult, VkDevice, VkEvent> ResetEvent; ///< Wrapper for vkResetEvent
    static Function<VkResult, VkDevice, uint32_t, const VkFence*> ResetFences; ///< Wrapper for vkResetFences
    static Function<void, VkDevice, VkQueryPool, uint32_t, uint32_t> ResetQueryPoolEXT; ///< Wrapper for vkResetQueryPoolEXT
    static Function<VkResult, VkDevice, const VkDebugUtilsObjectNameInfoEXT*> SetDebugUtilsObjectNameEXT; ///< Wrapper for vkSetDebugUtilsObjectNameEXT
    static Function<VkResult, VkDevice, const VkDebugUtilsObjectTagInfoEXT*> SetDebugUtilsObjectTagEXT; ///< Wrapper for vkSetDebugUtilsObjectTagEXT
    static Function<VkResult, VkDevice, VkEvent> SetEvent; ///< Wrapper for vkSetEvent
    static Function<void, VkDevice, uint32_t, const VkSwapchainKHR*, const VkHdrMetadataEXT*> SetHdrMetadataEXT; ///< Wrapper for vkSetHdrMetadataEXT
    static Function<void, VkDevice, VkSwapchainKHR, VkBool32> SetLocalDimmingAMD; ///< Wrapper for vkSetLocalDimmingAMD
    static Function<void, VkInstance, VkDebugUtilsMessageSeverityFlagBitsEXT, VkDebugUtilsMessageTypeFlagsEXT, const VkDebugUtilsMessengerCallbackDataEXT*> SubmitDebugUtilsMessageEXT; ///< Wrapper for vkSubmitDebugUtilsMessageEXT
    static Function<void, VkDevice, VkCommandPool, VkCommandPoolTrimFlags> TrimCommandPool; ///< Wrapper for vkTrimCommandPool
    static Function<void, VkDevice, VkCommandPool, VkCommandPoolTrimFlags> TrimCommandPoolKHR; ///< Wrapper for vkTrimCommandPoolKHR
    static Function<void, VkDevice> UninitializePerformanceApiINTEL; ///< Wrapper for vkUninitializePerformanceApiINTEL
    static Function<void, VkDevice, VkDeviceMemory> UnmapMemory; ///< Wrapper for vkUnmapMemory
    static Function<VkResult, VkDevice, VkObjectTableNVX, uint32_t, const VkObjectEntryTypeNVX*, const uint32_t*> UnregisterObjectsNVX; ///< Wrapper for vkUnregisterObjectsNVX
    static Function<void, VkDevice, uint32_t, const VkWriteDescriptorSet*, uint32_t, const VkCopyDescriptorSet*> UpdateDescriptorSets; ///< Wrapper for vkUpdateDescriptorSets
    static Function<void, VkDevice, VkDescriptorSet, VkDescriptorUpdateTemplate, const void*> UpdateDescriptorSetWithTemplate; ///< Wrapper for vkUpdateDescriptorSetWithTemplate
    static Function<void, VkDevice, VkDescriptorSet, VkDescriptorUpdateTemplate, const void*> UpdateDescriptorSetWithTemplateKHR; ///< Wrapper for vkUpdateDescriptorSetWithTemplateKHR
    static Function<VkResult, VkDevice, uint32_t, const VkFence*, VkBool32, uint64_t> WaitForFences; ///< Wrapper for vkWaitForFences


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