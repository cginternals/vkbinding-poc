
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
    
    using array_t = std::array<AbstractFunction *, 337>; ///< The type of the build-in functions collection


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
    static Function<vk::VkResult, vk::VkDevice, const vk::VkAcquireNextImageInfoKHR*, uint32_t*> AcquireNextImage2KHR; ///< Wrapper for vkAcquireNextImage2KHR
    static Function<vk::VkResult, vk::VkDevice, vk::VkSwapchainKHR, uint64_t, vk::VkSemaphore, vk::VkFence, uint32_t*> AcquireNextImageKHR; ///< Wrapper for vkAcquireNextImageKHR
    static Function<vk::VkResult, vk::VkDevice, const vk::VkPerformanceConfigurationAcquireInfoINTEL*, vk::VkPerformanceConfigurationINTEL*> AcquirePerformanceConfigurationINTEL; ///< Wrapper for vkAcquirePerformanceConfigurationINTEL
    static Function<vk::VkResult, vk::VkDevice, const vk::VkCommandBufferAllocateInfo*, vk::VkCommandBuffer*> AllocateCommandBuffers; ///< Wrapper for vkAllocateCommandBuffers
    static Function<vk::VkResult, vk::VkDevice, const vk::VkDescriptorSetAllocateInfo*, vk::VkDescriptorSet*> AllocateDescriptorSets; ///< Wrapper for vkAllocateDescriptorSets
    static Function<vk::VkResult, vk::VkDevice, const vk::VkMemoryAllocateInfo*, const vk::VkAllocationCallbacks*, vk::VkDeviceMemory*> AllocateMemory; ///< Wrapper for vkAllocateMemory
    static Function<vk::VkResult, vk::VkCommandBuffer, const vk::VkCommandBufferBeginInfo*> BeginCommandBuffer; ///< Wrapper for vkBeginCommandBuffer
    static Function<vk::VkResult, vk::VkDevice, uint32_t, const vk::VkBindAccelerationStructureMemoryInfoNV*> BindAccelerationStructureMemoryNV; ///< Wrapper for vkBindAccelerationStructureMemoryNV
    static Function<vk::VkResult, vk::VkDevice, vk::VkBuffer, vk::VkDeviceMemory, vk::VkDeviceSize> BindBufferMemory; ///< Wrapper for vkBindBufferMemory
    static Function<vk::VkResult, vk::VkDevice, uint32_t, const vk::VkBindBufferMemoryInfo*> BindBufferMemory2; ///< Wrapper for vkBindBufferMemory2
    static Function<vk::VkResult, vk::VkDevice, uint32_t, const vk::VkBindBufferMemoryInfo*> BindBufferMemory2KHR; ///< Wrapper for vkBindBufferMemory2KHR
    static Function<vk::VkResult, vk::VkDevice, vk::VkImage, vk::VkDeviceMemory, vk::VkDeviceSize> BindImageMemory; ///< Wrapper for vkBindImageMemory
    static Function<vk::VkResult, vk::VkDevice, uint32_t, const vk::VkBindImageMemoryInfo*> BindImageMemory2; ///< Wrapper for vkBindImageMemory2
    static Function<vk::VkResult, vk::VkDevice, uint32_t, const vk::VkBindImageMemoryInfo*> BindImageMemory2KHR; ///< Wrapper for vkBindImageMemory2KHR
    static Function<void, vk::VkCommandBuffer, const vk::VkConditionalRenderingBeginInfoEXT*> CmdBeginConditionalRenderingEXT; ///< Wrapper for vkCmdBeginConditionalRenderingEXT
    static Function<void, vk::VkCommandBuffer, const vk::VkDebugUtilsLabelEXT*> CmdBeginDebugUtilsLabelEXT; ///< Wrapper for vkCmdBeginDebugUtilsLabelEXT
    static Function<void, vk::VkCommandBuffer, vk::VkQueryPool, uint32_t, vk::VkQueryControlFlags> CmdBeginQuery; ///< Wrapper for vkCmdBeginQuery
    static Function<void, vk::VkCommandBuffer, vk::VkQueryPool, uint32_t, vk::VkQueryControlFlags, uint32_t> CmdBeginQueryIndexedEXT; ///< Wrapper for vkCmdBeginQueryIndexedEXT
    static Function<void, vk::VkCommandBuffer, const vk::VkRenderPassBeginInfo*, vk::VkSubpassContents> CmdBeginRenderPass; ///< Wrapper for vkCmdBeginRenderPass
    static Function<void, vk::VkCommandBuffer, const vk::VkRenderPassBeginInfo*, const vk::VkSubpassBeginInfoKHR*> CmdBeginRenderPass2KHR; ///< Wrapper for vkCmdBeginRenderPass2KHR
    static Function<void, vk::VkCommandBuffer, uint32_t, uint32_t, const vk::VkBuffer*, const vk::VkDeviceSize*> CmdBeginTransformFeedbackEXT; ///< Wrapper for vkCmdBeginTransformFeedbackEXT
    static Function<void, vk::VkCommandBuffer, vk::VkPipelineBindPoint, vk::VkPipelineLayout, uint32_t, uint32_t, const vk::VkDescriptorSet*, uint32_t, const uint32_t*> CmdBindDescriptorSets; ///< Wrapper for vkCmdBindDescriptorSets
    static Function<void, vk::VkCommandBuffer, vk::VkBuffer, vk::VkDeviceSize, vk::VkIndexType> CmdBindIndexBuffer; ///< Wrapper for vkCmdBindIndexBuffer
    static Function<void, vk::VkCommandBuffer, vk::VkPipelineBindPoint, vk::VkPipeline> CmdBindPipeline; ///< Wrapper for vkCmdBindPipeline
    static Function<void, vk::VkCommandBuffer, vk::VkImageView, vk::VkImageLayout> CmdBindShadingRateImageNV; ///< Wrapper for vkCmdBindShadingRateImageNV
    static Function<void, vk::VkCommandBuffer, uint32_t, uint32_t, const vk::VkBuffer*, const vk::VkDeviceSize*, const vk::VkDeviceSize*> CmdBindTransformFeedbackBuffersEXT; ///< Wrapper for vkCmdBindTransformFeedbackBuffersEXT
    static Function<void, vk::VkCommandBuffer, uint32_t, uint32_t, const vk::VkBuffer*, const vk::VkDeviceSize*> CmdBindVertexBuffers; ///< Wrapper for vkCmdBindVertexBuffers
    static Function<void, vk::VkCommandBuffer, vk::VkImage, vk::VkImageLayout, vk::VkImage, vk::VkImageLayout, uint32_t, const vk::VkImageBlit*, vk::VkFilter> CmdBlitImage; ///< Wrapper for vkCmdBlitImage
    static Function<void, vk::VkCommandBuffer, const vk::VkAccelerationStructureInfoNV*, vk::VkBuffer, vk::VkDeviceSize, vk::VkBool32, vk::VkAccelerationStructureNV, vk::VkAccelerationStructureNV, vk::VkBuffer, vk::VkDeviceSize> CmdBuildAccelerationStructureNV; ///< Wrapper for vkCmdBuildAccelerationStructureNV
    static Function<void, vk::VkCommandBuffer, uint32_t, const vk::VkClearAttachment*, uint32_t, const vk::VkClearRect*> CmdClearAttachments; ///< Wrapper for vkCmdClearAttachments
    static Function<void, vk::VkCommandBuffer, vk::VkImage, vk::VkImageLayout, const vk::VkClearColorValue*, uint32_t, const vk::VkImageSubresourceRange*> CmdClearColorImage; ///< Wrapper for vkCmdClearColorImage
    static Function<void, vk::VkCommandBuffer, vk::VkImage, vk::VkImageLayout, const vk::VkClearDepthStencilValue*, uint32_t, const vk::VkImageSubresourceRange*> CmdClearDepthStencilImage; ///< Wrapper for vkCmdClearDepthStencilImage
    static Function<void, vk::VkCommandBuffer, vk::VkAccelerationStructureNV, vk::VkAccelerationStructureNV, vk::VkCopyAccelerationStructureModeNV> CmdCopyAccelerationStructureNV; ///< Wrapper for vkCmdCopyAccelerationStructureNV
    static Function<void, vk::VkCommandBuffer, vk::VkBuffer, vk::VkBuffer, uint32_t, const vk::VkBufferCopy*> CmdCopyBuffer; ///< Wrapper for vkCmdCopyBuffer
    static Function<void, vk::VkCommandBuffer, vk::VkBuffer, vk::VkImage, vk::VkImageLayout, uint32_t, const vk::VkBufferImageCopy*> CmdCopyBufferToImage; ///< Wrapper for vkCmdCopyBufferToImage
    static Function<void, vk::VkCommandBuffer, vk::VkImage, vk::VkImageLayout, vk::VkImage, vk::VkImageLayout, uint32_t, const vk::VkImageCopy*> CmdCopyImage; ///< Wrapper for vkCmdCopyImage
    static Function<void, vk::VkCommandBuffer, vk::VkImage, vk::VkImageLayout, vk::VkBuffer, uint32_t, const vk::VkBufferImageCopy*> CmdCopyImageToBuffer; ///< Wrapper for vkCmdCopyImageToBuffer
    static Function<void, vk::VkCommandBuffer, vk::VkQueryPool, uint32_t, uint32_t, vk::VkBuffer, vk::VkDeviceSize, vk::VkDeviceSize, vk::VkQueryResultFlags> CmdCopyQueryPoolResults; ///< Wrapper for vkCmdCopyQueryPoolResults
    static Function<void, vk::VkCommandBuffer, const vk::VkDebugMarkerMarkerInfoEXT*> CmdDebugMarkerBeginEXT; ///< Wrapper for vkCmdDebugMarkerBeginEXT
    static Function<void, vk::VkCommandBuffer> CmdDebugMarkerEndEXT; ///< Wrapper for vkCmdDebugMarkerEndEXT
    static Function<void, vk::VkCommandBuffer, const vk::VkDebugMarkerMarkerInfoEXT*> CmdDebugMarkerInsertEXT; ///< Wrapper for vkCmdDebugMarkerInsertEXT
    static Function<void, vk::VkCommandBuffer, uint32_t, uint32_t, uint32_t> CmdDispatch; ///< Wrapper for vkCmdDispatch
    static Function<void, vk::VkCommandBuffer, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t> CmdDispatchBase; ///< Wrapper for vkCmdDispatchBase
    static Function<void, vk::VkCommandBuffer, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t> CmdDispatchBaseKHR; ///< Wrapper for vkCmdDispatchBaseKHR
    static Function<void, vk::VkCommandBuffer, vk::VkBuffer, vk::VkDeviceSize> CmdDispatchIndirect; ///< Wrapper for vkCmdDispatchIndirect
    static Function<void, vk::VkCommandBuffer, uint32_t, uint32_t, uint32_t, uint32_t> CmdDraw; ///< Wrapper for vkCmdDraw
    static Function<void, vk::VkCommandBuffer, uint32_t, uint32_t, uint32_t, int32_t, uint32_t> CmdDrawIndexed; ///< Wrapper for vkCmdDrawIndexed
    static Function<void, vk::VkCommandBuffer, vk::VkBuffer, vk::VkDeviceSize, uint32_t, uint32_t> CmdDrawIndexedIndirect; ///< Wrapper for vkCmdDrawIndexedIndirect
    static Function<void, vk::VkCommandBuffer, vk::VkBuffer, vk::VkDeviceSize, vk::VkBuffer, vk::VkDeviceSize, uint32_t, uint32_t> CmdDrawIndexedIndirectCountAMD; ///< Wrapper for vkCmdDrawIndexedIndirectCountAMD
    static Function<void, vk::VkCommandBuffer, vk::VkBuffer, vk::VkDeviceSize, vk::VkBuffer, vk::VkDeviceSize, uint32_t, uint32_t> CmdDrawIndexedIndirectCountKHR; ///< Wrapper for vkCmdDrawIndexedIndirectCountKHR
    static Function<void, vk::VkCommandBuffer, vk::VkBuffer, vk::VkDeviceSize, uint32_t, uint32_t> CmdDrawIndirect; ///< Wrapper for vkCmdDrawIndirect
    static Function<void, vk::VkCommandBuffer, uint32_t, uint32_t, vk::VkBuffer, vk::VkDeviceSize, uint32_t, uint32_t> CmdDrawIndirectByteCountEXT; ///< Wrapper for vkCmdDrawIndirectByteCountEXT
    static Function<void, vk::VkCommandBuffer, vk::VkBuffer, vk::VkDeviceSize, vk::VkBuffer, vk::VkDeviceSize, uint32_t, uint32_t> CmdDrawIndirectCountAMD; ///< Wrapper for vkCmdDrawIndirectCountAMD
    static Function<void, vk::VkCommandBuffer, vk::VkBuffer, vk::VkDeviceSize, vk::VkBuffer, vk::VkDeviceSize, uint32_t, uint32_t> CmdDrawIndirectCountKHR; ///< Wrapper for vkCmdDrawIndirectCountKHR
    static Function<void, vk::VkCommandBuffer, vk::VkBuffer, vk::VkDeviceSize, vk::VkBuffer, vk::VkDeviceSize, uint32_t, uint32_t> CmdDrawMeshTasksIndirectCountNV; ///< Wrapper for vkCmdDrawMeshTasksIndirectCountNV
    static Function<void, vk::VkCommandBuffer, vk::VkBuffer, vk::VkDeviceSize, uint32_t, uint32_t> CmdDrawMeshTasksIndirectNV; ///< Wrapper for vkCmdDrawMeshTasksIndirectNV
    static Function<void, vk::VkCommandBuffer, uint32_t, uint32_t> CmdDrawMeshTasksNV; ///< Wrapper for vkCmdDrawMeshTasksNV
    static Function<void, vk::VkCommandBuffer> CmdEndConditionalRenderingEXT; ///< Wrapper for vkCmdEndConditionalRenderingEXT
    static Function<void, vk::VkCommandBuffer> CmdEndDebugUtilsLabelEXT; ///< Wrapper for vkCmdEndDebugUtilsLabelEXT
    static Function<void, vk::VkCommandBuffer, vk::VkQueryPool, uint32_t> CmdEndQuery; ///< Wrapper for vkCmdEndQuery
    static Function<void, vk::VkCommandBuffer, vk::VkQueryPool, uint32_t, uint32_t> CmdEndQueryIndexedEXT; ///< Wrapper for vkCmdEndQueryIndexedEXT
    static Function<void, vk::VkCommandBuffer> CmdEndRenderPass; ///< Wrapper for vkCmdEndRenderPass
    static Function<void, vk::VkCommandBuffer, const vk::VkSubpassEndInfoKHR*> CmdEndRenderPass2KHR; ///< Wrapper for vkCmdEndRenderPass2KHR
    static Function<void, vk::VkCommandBuffer, uint32_t, uint32_t, const vk::VkBuffer*, const vk::VkDeviceSize*> CmdEndTransformFeedbackEXT; ///< Wrapper for vkCmdEndTransformFeedbackEXT
    static Function<void, vk::VkCommandBuffer, uint32_t, const vk::VkCommandBuffer*> CmdExecuteCommands; ///< Wrapper for vkCmdExecuteCommands
    static Function<void, vk::VkCommandBuffer, vk::VkBuffer, vk::VkDeviceSize, vk::VkDeviceSize, uint32_t> CmdFillBuffer; ///< Wrapper for vkCmdFillBuffer
    static Function<void, vk::VkCommandBuffer, const vk::VkDebugUtilsLabelEXT*> CmdInsertDebugUtilsLabelEXT; ///< Wrapper for vkCmdInsertDebugUtilsLabelEXT
    static Function<void, vk::VkCommandBuffer, vk::VkSubpassContents> CmdNextSubpass; ///< Wrapper for vkCmdNextSubpass
    static Function<void, vk::VkCommandBuffer, const vk::VkSubpassBeginInfoKHR*, const vk::VkSubpassEndInfoKHR*> CmdNextSubpass2KHR; ///< Wrapper for vkCmdNextSubpass2KHR
    static Function<void, vk::VkCommandBuffer, vk::VkPipelineStageFlags, vk::VkPipelineStageFlags, vk::VkDependencyFlags, uint32_t, const vk::VkMemoryBarrier*, uint32_t, const vk::VkBufferMemoryBarrier*, uint32_t, const vk::VkImageMemoryBarrier*> CmdPipelineBarrier; ///< Wrapper for vkCmdPipelineBarrier
    static Function<void, vk::VkCommandBuffer, const vk::VkCmdProcessCommandsInfoNVX*> CmdProcessCommandsNVX; ///< Wrapper for vkCmdProcessCommandsNVX
    static Function<void, vk::VkCommandBuffer, vk::VkPipelineLayout, vk::VkShaderStageFlags, uint32_t, uint32_t, const void*> CmdPushConstants; ///< Wrapper for vkCmdPushConstants
    static Function<void, vk::VkCommandBuffer, vk::VkPipelineBindPoint, vk::VkPipelineLayout, uint32_t, uint32_t, const vk::VkWriteDescriptorSet*> CmdPushDescriptorSetKHR; ///< Wrapper for vkCmdPushDescriptorSetKHR
    static Function<void, vk::VkCommandBuffer, vk::VkDescriptorUpdateTemplate, vk::VkPipelineLayout, uint32_t, const void*> CmdPushDescriptorSetWithTemplateKHR; ///< Wrapper for vkCmdPushDescriptorSetWithTemplateKHR
    static Function<void, vk::VkCommandBuffer, const vk::VkCmdReserveSpaceForCommandsInfoNVX*> CmdReserveSpaceForCommandsNVX; ///< Wrapper for vkCmdReserveSpaceForCommandsNVX
    static Function<void, vk::VkCommandBuffer, vk::VkEvent, vk::VkPipelineStageFlags> CmdResetEvent; ///< Wrapper for vkCmdResetEvent
    static Function<void, vk::VkCommandBuffer, vk::VkQueryPool, uint32_t, uint32_t> CmdResetQueryPool; ///< Wrapper for vkCmdResetQueryPool
    static Function<void, vk::VkCommandBuffer, vk::VkImage, vk::VkImageLayout, vk::VkImage, vk::VkImageLayout, uint32_t, const vk::VkImageResolve*> CmdResolveImage; ///< Wrapper for vkCmdResolveImage
    static Function<void, vk::VkCommandBuffer, const float> CmdSetBlendConstants; ///< Wrapper for vkCmdSetBlendConstants
    static Function<void, vk::VkCommandBuffer, const void*> CmdSetCheckpointNV; ///< Wrapper for vkCmdSetCheckpointNV
    static Function<void, vk::VkCommandBuffer, vk::VkCoarseSampleOrderTypeNV, uint32_t, const vk::VkCoarseSampleOrderCustomNV*> CmdSetCoarseSampleOrderNV; ///< Wrapper for vkCmdSetCoarseSampleOrderNV
    static Function<void, vk::VkCommandBuffer, float, float, float> CmdSetDepthBias; ///< Wrapper for vkCmdSetDepthBias
    static Function<void, vk::VkCommandBuffer, float, float> CmdSetDepthBounds; ///< Wrapper for vkCmdSetDepthBounds
    static Function<void, vk::VkCommandBuffer, uint32_t> CmdSetDeviceMask; ///< Wrapper for vkCmdSetDeviceMask
    static Function<void, vk::VkCommandBuffer, uint32_t> CmdSetDeviceMaskKHR; ///< Wrapper for vkCmdSetDeviceMaskKHR
    static Function<void, vk::VkCommandBuffer, uint32_t, uint32_t, const vk::VkRect2D*> CmdSetDiscardRectangleEXT; ///< Wrapper for vkCmdSetDiscardRectangleEXT
    static Function<void, vk::VkCommandBuffer, vk::VkEvent, vk::VkPipelineStageFlags> CmdSetEvent; ///< Wrapper for vkCmdSetEvent
    static Function<void, vk::VkCommandBuffer, uint32_t, uint32_t, const vk::VkRect2D*> CmdSetExclusiveScissorNV; ///< Wrapper for vkCmdSetExclusiveScissorNV
    static Function<void, vk::VkCommandBuffer, uint32_t, uint16_t> CmdSetLineStippleEXT; ///< Wrapper for vkCmdSetLineStippleEXT
    static Function<void, vk::VkCommandBuffer, float> CmdSetLineWidth; ///< Wrapper for vkCmdSetLineWidth
    static Function<vk::VkResult, vk::VkCommandBuffer, const vk::VkPerformanceMarkerInfoINTEL*> CmdSetPerformanceMarkerINTEL; ///< Wrapper for vkCmdSetPerformanceMarkerINTEL
    static Function<vk::VkResult, vk::VkCommandBuffer, const vk::VkPerformanceOverrideInfoINTEL*> CmdSetPerformanceOverrideINTEL; ///< Wrapper for vkCmdSetPerformanceOverrideINTEL
    static Function<vk::VkResult, vk::VkCommandBuffer, const vk::VkPerformanceStreamMarkerInfoINTEL*> CmdSetPerformanceStreamMarkerINTEL; ///< Wrapper for vkCmdSetPerformanceStreamMarkerINTEL
    static Function<void, vk::VkCommandBuffer, const vk::VkSampleLocationsInfoEXT*> CmdSetSampleLocationsEXT; ///< Wrapper for vkCmdSetSampleLocationsEXT
    static Function<void, vk::VkCommandBuffer, uint32_t, uint32_t, const vk::VkRect2D*> CmdSetScissor; ///< Wrapper for vkCmdSetScissor
    static Function<void, vk::VkCommandBuffer, vk::VkStencilFaceFlags, uint32_t> CmdSetStencilCompareMask; ///< Wrapper for vkCmdSetStencilCompareMask
    static Function<void, vk::VkCommandBuffer, vk::VkStencilFaceFlags, uint32_t> CmdSetStencilReference; ///< Wrapper for vkCmdSetStencilReference
    static Function<void, vk::VkCommandBuffer, vk::VkStencilFaceFlags, uint32_t> CmdSetStencilWriteMask; ///< Wrapper for vkCmdSetStencilWriteMask
    static Function<void, vk::VkCommandBuffer, uint32_t, uint32_t, const vk::VkViewport*> CmdSetViewport; ///< Wrapper for vkCmdSetViewport
    static Function<void, vk::VkCommandBuffer, uint32_t, uint32_t, const vk::VkShadingRatePaletteNV*> CmdSetViewportShadingRatePaletteNV; ///< Wrapper for vkCmdSetViewportShadingRatePaletteNV
    static Function<void, vk::VkCommandBuffer, uint32_t, uint32_t, const vk::VkViewportWScalingNV*> CmdSetViewportWScalingNV; ///< Wrapper for vkCmdSetViewportWScalingNV
    static Function<void, vk::VkCommandBuffer, vk::VkBuffer, vk::VkDeviceSize, vk::VkBuffer, vk::VkDeviceSize, vk::VkDeviceSize, vk::VkBuffer, vk::VkDeviceSize, vk::VkDeviceSize, vk::VkBuffer, vk::VkDeviceSize, vk::VkDeviceSize, uint32_t, uint32_t, uint32_t> CmdTraceRaysNV; ///< Wrapper for vkCmdTraceRaysNV
    static Function<void, vk::VkCommandBuffer, vk::VkBuffer, vk::VkDeviceSize, vk::VkDeviceSize, const void*> CmdUpdateBuffer; ///< Wrapper for vkCmdUpdateBuffer
    static Function<void, vk::VkCommandBuffer, uint32_t, const vk::VkEvent*, vk::VkPipelineStageFlags, vk::VkPipelineStageFlags, uint32_t, const vk::VkMemoryBarrier*, uint32_t, const vk::VkBufferMemoryBarrier*, uint32_t, const vk::VkImageMemoryBarrier*> CmdWaitEvents; ///< Wrapper for vkCmdWaitEvents
    static Function<void, vk::VkCommandBuffer, uint32_t, const vk::VkAccelerationStructureNV*, vk::VkQueryType, vk::VkQueryPool, uint32_t> CmdWriteAccelerationStructuresPropertiesNV; ///< Wrapper for vkCmdWriteAccelerationStructuresPropertiesNV
    static Function<void, vk::VkCommandBuffer, vk::VkPipelineStageFlagBits, vk::VkBuffer, vk::VkDeviceSize, uint32_t> CmdWriteBufferMarkerAMD; ///< Wrapper for vkCmdWriteBufferMarkerAMD
    static Function<void, vk::VkCommandBuffer, vk::VkPipelineStageFlagBits, vk::VkQueryPool, uint32_t> CmdWriteTimestamp; ///< Wrapper for vkCmdWriteTimestamp
    static Function<vk::VkResult, vk::VkDevice, vk::VkPipeline, uint32_t> CompileDeferredNV; ///< Wrapper for vkCompileDeferredNV
    static Function<vk::VkResult, vk::VkDevice, const vk::VkAccelerationStructureCreateInfoNV*, const vk::VkAllocationCallbacks*, vk::VkAccelerationStructureNV*> CreateAccelerationStructureNV; ///< Wrapper for vkCreateAccelerationStructureNV
    static Function<vk::VkResult, vk::VkDevice, const vk::VkBufferCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkBuffer*> CreateBuffer; ///< Wrapper for vkCreateBuffer
    static Function<vk::VkResult, vk::VkDevice, const vk::VkBufferViewCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkBufferView*> CreateBufferView; ///< Wrapper for vkCreateBufferView
    static Function<vk::VkResult, vk::VkDevice, const vk::VkCommandPoolCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkCommandPool*> CreateCommandPool; ///< Wrapper for vkCreateCommandPool
    static Function<vk::VkResult, vk::VkDevice, vk::VkPipelineCache, uint32_t, const vk::VkComputePipelineCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkPipeline*> CreateComputePipelines; ///< Wrapper for vkCreateComputePipelines
    static Function<vk::VkResult, vk::VkInstance, const vk::VkDebugReportCallbackCreateInfoEXT*, const vk::VkAllocationCallbacks*, vk::VkDebugReportCallbackEXT*> CreateDebugReportCallbackEXT; ///< Wrapper for vkCreateDebugReportCallbackEXT
    static Function<vk::VkResult, vk::VkInstance, const vk::VkDebugUtilsMessengerCreateInfoEXT*, const vk::VkAllocationCallbacks*, vk::VkDebugUtilsMessengerEXT*> CreateDebugUtilsMessengerEXT; ///< Wrapper for vkCreateDebugUtilsMessengerEXT
    static Function<vk::VkResult, vk::VkDevice, const vk::VkDescriptorPoolCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkDescriptorPool*> CreateDescriptorPool; ///< Wrapper for vkCreateDescriptorPool
    static Function<vk::VkResult, vk::VkDevice, const vk::VkDescriptorSetLayoutCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkDescriptorSetLayout*> CreateDescriptorSetLayout; ///< Wrapper for vkCreateDescriptorSetLayout
    static Function<vk::VkResult, vk::VkDevice, const vk::VkDescriptorUpdateTemplateCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkDescriptorUpdateTemplate*> CreateDescriptorUpdateTemplate; ///< Wrapper for vkCreateDescriptorUpdateTemplate
    static Function<vk::VkResult, vk::VkDevice, const vk::VkDescriptorUpdateTemplateCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkDescriptorUpdateTemplate*> CreateDescriptorUpdateTemplateKHR; ///< Wrapper for vkCreateDescriptorUpdateTemplateKHR
    static Function<vk::VkResult, vk::VkPhysicalDevice, const vk::VkDeviceCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkDevice*> CreateDevice; ///< Wrapper for vkCreateDevice
    static Function<vk::VkResult, vk::VkPhysicalDevice, vk::VkDisplayKHR, const vk::VkDisplayModeCreateInfoKHR*, const vk::VkAllocationCallbacks*, vk::VkDisplayModeKHR*> CreateDisplayModeKHR; ///< Wrapper for vkCreateDisplayModeKHR
    static Function<vk::VkResult, vk::VkInstance, const vk::VkDisplaySurfaceCreateInfoKHR*, const vk::VkAllocationCallbacks*, vk::VkSurfaceKHR*> CreateDisplayPlaneSurfaceKHR; ///< Wrapper for vkCreateDisplayPlaneSurfaceKHR
    static Function<vk::VkResult, vk::VkDevice, const vk::VkEventCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkEvent*> CreateEvent; ///< Wrapper for vkCreateEvent
    static Function<vk::VkResult, vk::VkDevice, const vk::VkFenceCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkFence*> CreateFence; ///< Wrapper for vkCreateFence
    static Function<vk::VkResult, vk::VkDevice, const vk::VkFramebufferCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkFramebuffer*> CreateFramebuffer; ///< Wrapper for vkCreateFramebuffer
    static Function<vk::VkResult, vk::VkDevice, vk::VkPipelineCache, uint32_t, const vk::VkGraphicsPipelineCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkPipeline*> CreateGraphicsPipelines; ///< Wrapper for vkCreateGraphicsPipelines
    static Function<vk::VkResult, vk::VkInstance, const vk::VkHeadlessSurfaceCreateInfoEXT*, const vk::VkAllocationCallbacks*, vk::VkSurfaceKHR*> CreateHeadlessSurfaceEXT; ///< Wrapper for vkCreateHeadlessSurfaceEXT
    static Function<vk::VkResult, vk::VkDevice, const vk::VkImageCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkImage*> CreateImage; ///< Wrapper for vkCreateImage
    static Function<vk::VkResult, vk::VkDevice, const vk::VkImageViewCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkImageView*> CreateImageView; ///< Wrapper for vkCreateImageView
    static Function<vk::VkResult, vk::VkDevice, const vk::VkIndirectCommandsLayoutCreateInfoNVX*, const vk::VkAllocationCallbacks*, vk::VkIndirectCommandsLayoutNVX*> CreateIndirectCommandsLayoutNVX; ///< Wrapper for vkCreateIndirectCommandsLayoutNVX
    static Function<vk::VkResult, const vk::VkInstanceCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkInstance*> CreateInstance; ///< Wrapper for vkCreateInstance
    static Function<vk::VkResult, vk::VkDevice, const vk::VkObjectTableCreateInfoNVX*, const vk::VkAllocationCallbacks*, vk::VkObjectTableNVX*> CreateObjectTableNVX; ///< Wrapper for vkCreateObjectTableNVX
    static Function<vk::VkResult, vk::VkDevice, const vk::VkPipelineCacheCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkPipelineCache*> CreatePipelineCache; ///< Wrapper for vkCreatePipelineCache
    static Function<vk::VkResult, vk::VkDevice, const vk::VkPipelineLayoutCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkPipelineLayout*> CreatePipelineLayout; ///< Wrapper for vkCreatePipelineLayout
    static Function<vk::VkResult, vk::VkDevice, const vk::VkQueryPoolCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkQueryPool*> CreateQueryPool; ///< Wrapper for vkCreateQueryPool
    static Function<vk::VkResult, vk::VkDevice, vk::VkPipelineCache, uint32_t, const vk::VkRayTracingPipelineCreateInfoNV*, const vk::VkAllocationCallbacks*, vk::VkPipeline*> CreateRayTracingPipelinesNV; ///< Wrapper for vkCreateRayTracingPipelinesNV
    static Function<vk::VkResult, vk::VkDevice, const vk::VkRenderPassCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkRenderPass*> CreateRenderPass; ///< Wrapper for vkCreateRenderPass
    static Function<vk::VkResult, vk::VkDevice, const vk::VkRenderPassCreateInfo2KHR*, const vk::VkAllocationCallbacks*, vk::VkRenderPass*> CreateRenderPass2KHR; ///< Wrapper for vkCreateRenderPass2KHR
    static Function<vk::VkResult, vk::VkDevice, const vk::VkSamplerCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkSampler*> CreateSampler; ///< Wrapper for vkCreateSampler
    static Function<vk::VkResult, vk::VkDevice, const vk::VkSamplerYcbcrConversionCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkSamplerYcbcrConversion*> CreateSamplerYcbcrConversion; ///< Wrapper for vkCreateSamplerYcbcrConversion
    static Function<vk::VkResult, vk::VkDevice, const vk::VkSamplerYcbcrConversionCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkSamplerYcbcrConversion*> CreateSamplerYcbcrConversionKHR; ///< Wrapper for vkCreateSamplerYcbcrConversionKHR
    static Function<vk::VkResult, vk::VkDevice, const vk::VkSemaphoreCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkSemaphore*> CreateSemaphore; ///< Wrapper for vkCreateSemaphore
    static Function<vk::VkResult, vk::VkDevice, const vk::VkShaderModuleCreateInfo*, const vk::VkAllocationCallbacks*, vk::VkShaderModule*> CreateShaderModule; ///< Wrapper for vkCreateShaderModule
    static Function<vk::VkResult, vk::VkDevice, uint32_t, const vk::VkSwapchainCreateInfoKHR*, const vk::VkAllocationCallbacks*, vk::VkSwapchainKHR*> CreateSharedSwapchainsKHR; ///< Wrapper for vkCreateSharedSwapchainsKHR
    static Function<vk::VkResult, vk::VkDevice, const vk::VkSwapchainCreateInfoKHR*, const vk::VkAllocationCallbacks*, vk::VkSwapchainKHR*> CreateSwapchainKHR; ///< Wrapper for vkCreateSwapchainKHR
    static Function<vk::VkResult, vk::VkDevice, const vk::VkValidationCacheCreateInfoEXT*, const vk::VkAllocationCallbacks*, vk::VkValidationCacheEXT*> CreateValidationCacheEXT; ///< Wrapper for vkCreateValidationCacheEXT
    static Function<vk::VkResult, vk::VkDevice, const vk::VkDebugMarkerObjectNameInfoEXT*> DebugMarkerSetObjectNameEXT; ///< Wrapper for vkDebugMarkerSetObjectNameEXT
    static Function<vk::VkResult, vk::VkDevice, const vk::VkDebugMarkerObjectTagInfoEXT*> DebugMarkerSetObjectTagEXT; ///< Wrapper for vkDebugMarkerSetObjectTagEXT
    static Function<void, vk::VkInstance, vk::VkDebugReportFlagsEXT, vk::VkDebugReportObjectTypeEXT, uint64_t, size_t, int32_t, const char*, const char*> DebugReportMessageEXT; ///< Wrapper for vkDebugReportMessageEXT
    static Function<void, vk::VkDevice, vk::VkAccelerationStructureNV, const vk::VkAllocationCallbacks*> DestroyAccelerationStructureNV; ///< Wrapper for vkDestroyAccelerationStructureNV
    static Function<void, vk::VkDevice, vk::VkBuffer, const vk::VkAllocationCallbacks*> DestroyBuffer; ///< Wrapper for vkDestroyBuffer
    static Function<void, vk::VkDevice, vk::VkBufferView, const vk::VkAllocationCallbacks*> DestroyBufferView; ///< Wrapper for vkDestroyBufferView
    static Function<void, vk::VkDevice, vk::VkCommandPool, const vk::VkAllocationCallbacks*> DestroyCommandPool; ///< Wrapper for vkDestroyCommandPool
    static Function<void, vk::VkInstance, vk::VkDebugReportCallbackEXT, const vk::VkAllocationCallbacks*> DestroyDebugReportCallbackEXT; ///< Wrapper for vkDestroyDebugReportCallbackEXT
    static Function<void, vk::VkInstance, vk::VkDebugUtilsMessengerEXT, const vk::VkAllocationCallbacks*> DestroyDebugUtilsMessengerEXT; ///< Wrapper for vkDestroyDebugUtilsMessengerEXT
    static Function<void, vk::VkDevice, vk::VkDescriptorPool, const vk::VkAllocationCallbacks*> DestroyDescriptorPool; ///< Wrapper for vkDestroyDescriptorPool
    static Function<void, vk::VkDevice, vk::VkDescriptorSetLayout, const vk::VkAllocationCallbacks*> DestroyDescriptorSetLayout; ///< Wrapper for vkDestroyDescriptorSetLayout
    static Function<void, vk::VkDevice, vk::VkDescriptorUpdateTemplate, const vk::VkAllocationCallbacks*> DestroyDescriptorUpdateTemplate; ///< Wrapper for vkDestroyDescriptorUpdateTemplate
    static Function<void, vk::VkDevice, vk::VkDescriptorUpdateTemplate, const vk::VkAllocationCallbacks*> DestroyDescriptorUpdateTemplateKHR; ///< Wrapper for vkDestroyDescriptorUpdateTemplateKHR
    static Function<void, vk::VkDevice, const vk::VkAllocationCallbacks*> DestroyDevice; ///< Wrapper for vkDestroyDevice
    static Function<void, vk::VkDevice, vk::VkEvent, const vk::VkAllocationCallbacks*> DestroyEvent; ///< Wrapper for vkDestroyEvent
    static Function<void, vk::VkDevice, vk::VkFence, const vk::VkAllocationCallbacks*> DestroyFence; ///< Wrapper for vkDestroyFence
    static Function<void, vk::VkDevice, vk::VkFramebuffer, const vk::VkAllocationCallbacks*> DestroyFramebuffer; ///< Wrapper for vkDestroyFramebuffer
    static Function<void, vk::VkDevice, vk::VkImage, const vk::VkAllocationCallbacks*> DestroyImage; ///< Wrapper for vkDestroyImage
    static Function<void, vk::VkDevice, vk::VkImageView, const vk::VkAllocationCallbacks*> DestroyImageView; ///< Wrapper for vkDestroyImageView
    static Function<void, vk::VkDevice, vk::VkIndirectCommandsLayoutNVX, const vk::VkAllocationCallbacks*> DestroyIndirectCommandsLayoutNVX; ///< Wrapper for vkDestroyIndirectCommandsLayoutNVX
    static Function<void, vk::VkInstance, const vk::VkAllocationCallbacks*> DestroyInstance; ///< Wrapper for vkDestroyInstance
    static Function<void, vk::VkDevice, vk::VkObjectTableNVX, const vk::VkAllocationCallbacks*> DestroyObjectTableNVX; ///< Wrapper for vkDestroyObjectTableNVX
    static Function<void, vk::VkDevice, vk::VkPipeline, const vk::VkAllocationCallbacks*> DestroyPipeline; ///< Wrapper for vkDestroyPipeline
    static Function<void, vk::VkDevice, vk::VkPipelineCache, const vk::VkAllocationCallbacks*> DestroyPipelineCache; ///< Wrapper for vkDestroyPipelineCache
    static Function<void, vk::VkDevice, vk::VkPipelineLayout, const vk::VkAllocationCallbacks*> DestroyPipelineLayout; ///< Wrapper for vkDestroyPipelineLayout
    static Function<void, vk::VkDevice, vk::VkQueryPool, const vk::VkAllocationCallbacks*> DestroyQueryPool; ///< Wrapper for vkDestroyQueryPool
    static Function<void, vk::VkDevice, vk::VkRenderPass, const vk::VkAllocationCallbacks*> DestroyRenderPass; ///< Wrapper for vkDestroyRenderPass
    static Function<void, vk::VkDevice, vk::VkSampler, const vk::VkAllocationCallbacks*> DestroySampler; ///< Wrapper for vkDestroySampler
    static Function<void, vk::VkDevice, vk::VkSamplerYcbcrConversion, const vk::VkAllocationCallbacks*> DestroySamplerYcbcrConversion; ///< Wrapper for vkDestroySamplerYcbcrConversion
    static Function<void, vk::VkDevice, vk::VkSamplerYcbcrConversion, const vk::VkAllocationCallbacks*> DestroySamplerYcbcrConversionKHR; ///< Wrapper for vkDestroySamplerYcbcrConversionKHR
    static Function<void, vk::VkDevice, vk::VkSemaphore, const vk::VkAllocationCallbacks*> DestroySemaphore; ///< Wrapper for vkDestroySemaphore
    static Function<void, vk::VkDevice, vk::VkShaderModule, const vk::VkAllocationCallbacks*> DestroyShaderModule; ///< Wrapper for vkDestroyShaderModule
    static Function<void, vk::VkInstance, vk::VkSurfaceKHR, const vk::VkAllocationCallbacks*> DestroySurfaceKHR; ///< Wrapper for vkDestroySurfaceKHR
    static Function<void, vk::VkDevice, vk::VkSwapchainKHR, const vk::VkAllocationCallbacks*> DestroySwapchainKHR; ///< Wrapper for vkDestroySwapchainKHR
    static Function<void, vk::VkDevice, vk::VkValidationCacheEXT, const vk::VkAllocationCallbacks*> DestroyValidationCacheEXT; ///< Wrapper for vkDestroyValidationCacheEXT
    static Function<vk::VkResult, vk::VkDevice> DeviceWaitIdle; ///< Wrapper for vkDeviceWaitIdle
    static Function<vk::VkResult, vk::VkDevice, vk::VkDisplayKHR, const vk::VkDisplayPowerInfoEXT*> DisplayPowerControlEXT; ///< Wrapper for vkDisplayPowerControlEXT
    static Function<vk::VkResult, vk::VkCommandBuffer> EndCommandBuffer; ///< Wrapper for vkEndCommandBuffer
    static Function<vk::VkResult, vk::VkPhysicalDevice, const char*, uint32_t*, vk::VkExtensionProperties*> EnumerateDeviceExtensionProperties; ///< Wrapper for vkEnumerateDeviceExtensionProperties
    static Function<vk::VkResult, vk::VkPhysicalDevice, uint32_t*, vk::VkLayerProperties*> EnumerateDeviceLayerProperties; ///< Wrapper for vkEnumerateDeviceLayerProperties
    static Function<vk::VkResult, const char*, uint32_t*, vk::VkExtensionProperties*> EnumerateInstanceExtensionProperties; ///< Wrapper for vkEnumerateInstanceExtensionProperties
    static Function<vk::VkResult, uint32_t*, vk::VkLayerProperties*> EnumerateInstanceLayerProperties; ///< Wrapper for vkEnumerateInstanceLayerProperties
    static Function<vk::VkResult, uint32_t*> EnumerateInstanceVersion; ///< Wrapper for vkEnumerateInstanceVersion
    static Function<vk::VkResult, vk::VkInstance, uint32_t*, vk::VkPhysicalDeviceGroupProperties*> EnumeratePhysicalDeviceGroups; ///< Wrapper for vkEnumeratePhysicalDeviceGroups
    static Function<vk::VkResult, vk::VkInstance, uint32_t*, vk::VkPhysicalDeviceGroupProperties*> EnumeratePhysicalDeviceGroupsKHR; ///< Wrapper for vkEnumeratePhysicalDeviceGroupsKHR
    static Function<vk::VkResult, vk::VkInstance, uint32_t*, vk::VkPhysicalDevice*> EnumeratePhysicalDevices; ///< Wrapper for vkEnumeratePhysicalDevices
    static Function<vk::VkResult, vk::VkDevice, uint32_t, const vk::VkMappedMemoryRange*> FlushMappedMemoryRanges; ///< Wrapper for vkFlushMappedMemoryRanges
    static Function<void, vk::VkDevice, vk::VkCommandPool, uint32_t, const vk::VkCommandBuffer*> FreeCommandBuffers; ///< Wrapper for vkFreeCommandBuffers
    static Function<vk::VkResult, vk::VkDevice, vk::VkDescriptorPool, uint32_t, const vk::VkDescriptorSet*> FreeDescriptorSets; ///< Wrapper for vkFreeDescriptorSets
    static Function<void, vk::VkDevice, vk::VkDeviceMemory, const vk::VkAllocationCallbacks*> FreeMemory; ///< Wrapper for vkFreeMemory
    static Function<vk::VkResult, vk::VkDevice, vk::VkAccelerationStructureNV, size_t, void*> GetAccelerationStructureHandleNV; ///< Wrapper for vkGetAccelerationStructureHandleNV
    static Function<void, vk::VkDevice, const vk::VkAccelerationStructureMemoryRequirementsInfoNV*, vk::VkMemoryRequirements2KHR*> GetAccelerationStructureMemoryRequirementsNV; ///< Wrapper for vkGetAccelerationStructureMemoryRequirementsNV
    static Function<vk::VkDeviceAddress, vk::VkDevice, const vk::VkBufferDeviceAddressInfoEXT*> GetBufferDeviceAddressEXT; ///< Wrapper for vkGetBufferDeviceAddressEXT
    static Function<void, vk::VkDevice, vk::VkBuffer, vk::VkMemoryRequirements*> GetBufferMemoryRequirements; ///< Wrapper for vkGetBufferMemoryRequirements
    static Function<void, vk::VkDevice, const vk::VkBufferMemoryRequirementsInfo2*, vk::VkMemoryRequirements2*> GetBufferMemoryRequirements2; ///< Wrapper for vkGetBufferMemoryRequirements2
    static Function<void, vk::VkDevice, const vk::VkBufferMemoryRequirementsInfo2*, vk::VkMemoryRequirements2*> GetBufferMemoryRequirements2KHR; ///< Wrapper for vkGetBufferMemoryRequirements2KHR
    static Function<vk::VkResult, vk::VkDevice, uint32_t, const vk::VkCalibratedTimestampInfoEXT*, uint64_t*, uint64_t*> GetCalibratedTimestampsEXT; ///< Wrapper for vkGetCalibratedTimestampsEXT
    static Function<void, vk::VkDevice, const vk::VkDescriptorSetLayoutCreateInfo*, vk::VkDescriptorSetLayoutSupport*> GetDescriptorSetLayoutSupport; ///< Wrapper for vkGetDescriptorSetLayoutSupport
    static Function<void, vk::VkDevice, const vk::VkDescriptorSetLayoutCreateInfo*, vk::VkDescriptorSetLayoutSupport*> GetDescriptorSetLayoutSupportKHR; ///< Wrapper for vkGetDescriptorSetLayoutSupportKHR
    static Function<void, vk::VkDevice, uint32_t, uint32_t, uint32_t, vk::VkPeerMemoryFeatureFlags*> GetDeviceGroupPeerMemoryFeatures; ///< Wrapper for vkGetDeviceGroupPeerMemoryFeatures
    static Function<void, vk::VkDevice, uint32_t, uint32_t, uint32_t, vk::VkPeerMemoryFeatureFlags*> GetDeviceGroupPeerMemoryFeaturesKHR; ///< Wrapper for vkGetDeviceGroupPeerMemoryFeaturesKHR
    static Function<vk::VkResult, vk::VkDevice, vk::VkDeviceGroupPresentCapabilitiesKHR*> GetDeviceGroupPresentCapabilitiesKHR; ///< Wrapper for vkGetDeviceGroupPresentCapabilitiesKHR
    static Function<vk::VkResult, vk::VkDevice, vk::VkSurfaceKHR, vk::VkDeviceGroupPresentModeFlagsKHR*> GetDeviceGroupSurfacePresentModesKHR; ///< Wrapper for vkGetDeviceGroupSurfacePresentModesKHR
    static Function<void, vk::VkDevice, vk::VkDeviceMemory, vk::VkDeviceSize*> GetDeviceMemoryCommitment; ///< Wrapper for vkGetDeviceMemoryCommitment
    static Function<vk::PFN_vkVoidFunction, vk::VkDevice, const char*> GetDeviceProcAddr; ///< Wrapper for vkGetDeviceProcAddr
    static Function<void, vk::VkDevice, uint32_t, uint32_t, vk::VkQueue*> GetDeviceQueue; ///< Wrapper for vkGetDeviceQueue
    static Function<void, vk::VkDevice, const vk::VkDeviceQueueInfo2*, vk::VkQueue*> GetDeviceQueue2; ///< Wrapper for vkGetDeviceQueue2
    static Function<vk::VkResult, vk::VkPhysicalDevice, vk::VkDisplayKHR, uint32_t*, vk::VkDisplayModeProperties2KHR*> GetDisplayModeProperties2KHR; ///< Wrapper for vkGetDisplayModeProperties2KHR
    static Function<vk::VkResult, vk::VkPhysicalDevice, vk::VkDisplayKHR, uint32_t*, vk::VkDisplayModePropertiesKHR*> GetDisplayModePropertiesKHR; ///< Wrapper for vkGetDisplayModePropertiesKHR
    static Function<vk::VkResult, vk::VkPhysicalDevice, const vk::VkDisplayPlaneInfo2KHR*, vk::VkDisplayPlaneCapabilities2KHR*> GetDisplayPlaneCapabilities2KHR; ///< Wrapper for vkGetDisplayPlaneCapabilities2KHR
    static Function<vk::VkResult, vk::VkPhysicalDevice, vk::VkDisplayModeKHR, uint32_t, vk::VkDisplayPlaneCapabilitiesKHR*> GetDisplayPlaneCapabilitiesKHR; ///< Wrapper for vkGetDisplayPlaneCapabilitiesKHR
    static Function<vk::VkResult, vk::VkPhysicalDevice, uint32_t, uint32_t*, vk::VkDisplayKHR*> GetDisplayPlaneSupportedDisplaysKHR; ///< Wrapper for vkGetDisplayPlaneSupportedDisplaysKHR
    static Function<vk::VkResult, vk::VkDevice, vk::VkEvent> GetEventStatus; ///< Wrapper for vkGetEventStatus
    static Function<vk::VkResult, vk::VkDevice, const vk::VkFenceGetFdInfoKHR*, int*> GetFenceFdKHR; ///< Wrapper for vkGetFenceFdKHR
    static Function<vk::VkResult, vk::VkDevice, vk::VkFence> GetFenceStatus; ///< Wrapper for vkGetFenceStatus
    static Function<vk::VkResult, vk::VkDevice, vk::VkImage, vk::VkImageDrmFormatModifierPropertiesEXT*> GetImageDrmFormatModifierPropertiesEXT; ///< Wrapper for vkGetImageDrmFormatModifierPropertiesEXT
    static Function<void, vk::VkDevice, vk::VkImage, vk::VkMemoryRequirements*> GetImageMemoryRequirements; ///< Wrapper for vkGetImageMemoryRequirements
    static Function<void, vk::VkDevice, const vk::VkImageMemoryRequirementsInfo2*, vk::VkMemoryRequirements2*> GetImageMemoryRequirements2; ///< Wrapper for vkGetImageMemoryRequirements2
    static Function<void, vk::VkDevice, const vk::VkImageMemoryRequirementsInfo2*, vk::VkMemoryRequirements2*> GetImageMemoryRequirements2KHR; ///< Wrapper for vkGetImageMemoryRequirements2KHR
    static Function<void, vk::VkDevice, vk::VkImage, uint32_t*, vk::VkSparseImageMemoryRequirements*> GetImageSparseMemoryRequirements; ///< Wrapper for vkGetImageSparseMemoryRequirements
    static Function<void, vk::VkDevice, const vk::VkImageSparseMemoryRequirementsInfo2*, uint32_t*, vk::VkSparseImageMemoryRequirements2*> GetImageSparseMemoryRequirements2; ///< Wrapper for vkGetImageSparseMemoryRequirements2
    static Function<void, vk::VkDevice, const vk::VkImageSparseMemoryRequirementsInfo2*, uint32_t*, vk::VkSparseImageMemoryRequirements2*> GetImageSparseMemoryRequirements2KHR; ///< Wrapper for vkGetImageSparseMemoryRequirements2KHR
    static Function<void, vk::VkDevice, vk::VkImage, const vk::VkImageSubresource*, vk::VkSubresourceLayout*> GetImageSubresourceLayout; ///< Wrapper for vkGetImageSubresourceLayout
    static Function<uint32_t, vk::VkDevice, const vk::VkImageViewHandleInfoNVX*> GetImageViewHandleNVX; ///< Wrapper for vkGetImageViewHandleNVX
    static Function<vk::PFN_vkVoidFunction, vk::VkInstance, const char*> GetInstanceProcAddr; ///< Wrapper for vkGetInstanceProcAddr
    static Function<vk::VkResult, vk::VkDevice, const vk::VkMemoryGetFdInfoKHR*, int*> GetMemoryFdKHR; ///< Wrapper for vkGetMemoryFdKHR
    static Function<vk::VkResult, vk::VkDevice, vk::VkExternalMemoryHandleTypeFlagBits, int, vk::VkMemoryFdPropertiesKHR*> GetMemoryFdPropertiesKHR; ///< Wrapper for vkGetMemoryFdPropertiesKHR
    static Function<vk::VkResult, vk::VkDevice, vk::VkExternalMemoryHandleTypeFlagBits, const void*, vk::VkMemoryHostPointerPropertiesEXT*> GetMemoryHostPointerPropertiesEXT; ///< Wrapper for vkGetMemoryHostPointerPropertiesEXT
    static Function<vk::VkResult, vk::VkDevice, vk::VkSwapchainKHR, uint32_t*, vk::VkPastPresentationTimingGOOGLE*> GetPastPresentationTimingGOOGLE; ///< Wrapper for vkGetPastPresentationTimingGOOGLE
    static Function<vk::VkResult, vk::VkDevice, vk::VkPerformanceParameterTypeINTEL, vk::VkPerformanceValueINTEL*> GetPerformanceParameterINTEL; ///< Wrapper for vkGetPerformanceParameterINTEL
    static Function<vk::VkResult, vk::VkPhysicalDevice, uint32_t*, vk::VkTimeDomainEXT*> GetPhysicalDeviceCalibrateableTimeDomainsEXT; ///< Wrapper for vkGetPhysicalDeviceCalibrateableTimeDomainsEXT
    static Function<vk::VkResult, vk::VkPhysicalDevice, uint32_t*, vk::VkCooperativeMatrixPropertiesNV*> GetPhysicalDeviceCooperativeMatrixPropertiesNV; ///< Wrapper for vkGetPhysicalDeviceCooperativeMatrixPropertiesNV
    static Function<vk::VkResult, vk::VkPhysicalDevice, uint32_t*, vk::VkDisplayPlaneProperties2KHR*> GetPhysicalDeviceDisplayPlaneProperties2KHR; ///< Wrapper for vkGetPhysicalDeviceDisplayPlaneProperties2KHR
    static Function<vk::VkResult, vk::VkPhysicalDevice, uint32_t*, vk::VkDisplayPlanePropertiesKHR*> GetPhysicalDeviceDisplayPlanePropertiesKHR; ///< Wrapper for vkGetPhysicalDeviceDisplayPlanePropertiesKHR
    static Function<vk::VkResult, vk::VkPhysicalDevice, uint32_t*, vk::VkDisplayProperties2KHR*> GetPhysicalDeviceDisplayProperties2KHR; ///< Wrapper for vkGetPhysicalDeviceDisplayProperties2KHR
    static Function<vk::VkResult, vk::VkPhysicalDevice, uint32_t*, vk::VkDisplayPropertiesKHR*> GetPhysicalDeviceDisplayPropertiesKHR; ///< Wrapper for vkGetPhysicalDeviceDisplayPropertiesKHR
    static Function<void, vk::VkPhysicalDevice, const vk::VkPhysicalDeviceExternalBufferInfo*, vk::VkExternalBufferProperties*> GetPhysicalDeviceExternalBufferProperties; ///< Wrapper for vkGetPhysicalDeviceExternalBufferProperties
    static Function<void, vk::VkPhysicalDevice, const vk::VkPhysicalDeviceExternalBufferInfo*, vk::VkExternalBufferProperties*> GetPhysicalDeviceExternalBufferPropertiesKHR; ///< Wrapper for vkGetPhysicalDeviceExternalBufferPropertiesKHR
    static Function<void, vk::VkPhysicalDevice, const vk::VkPhysicalDeviceExternalFenceInfo*, vk::VkExternalFenceProperties*> GetPhysicalDeviceExternalFenceProperties; ///< Wrapper for vkGetPhysicalDeviceExternalFenceProperties
    static Function<void, vk::VkPhysicalDevice, const vk::VkPhysicalDeviceExternalFenceInfo*, vk::VkExternalFenceProperties*> GetPhysicalDeviceExternalFencePropertiesKHR; ///< Wrapper for vkGetPhysicalDeviceExternalFencePropertiesKHR
    static Function<vk::VkResult, vk::VkPhysicalDevice, vk::VkFormat, vk::VkImageType, vk::VkImageTiling, vk::VkImageUsageFlags, vk::VkImageCreateFlags, vk::VkExternalMemoryHandleTypeFlagsNV, vk::VkExternalImageFormatPropertiesNV*> GetPhysicalDeviceExternalImageFormatPropertiesNV; ///< Wrapper for vkGetPhysicalDeviceExternalImageFormatPropertiesNV
    static Function<void, vk::VkPhysicalDevice, const vk::VkPhysicalDeviceExternalSemaphoreInfo*, vk::VkExternalSemaphoreProperties*> GetPhysicalDeviceExternalSemaphoreProperties; ///< Wrapper for vkGetPhysicalDeviceExternalSemaphoreProperties
    static Function<void, vk::VkPhysicalDevice, const vk::VkPhysicalDeviceExternalSemaphoreInfo*, vk::VkExternalSemaphoreProperties*> GetPhysicalDeviceExternalSemaphorePropertiesKHR; ///< Wrapper for vkGetPhysicalDeviceExternalSemaphorePropertiesKHR
    static Function<void, vk::VkPhysicalDevice, vk::VkPhysicalDeviceFeatures*> GetPhysicalDeviceFeatures; ///< Wrapper for vkGetPhysicalDeviceFeatures
    static Function<void, vk::VkPhysicalDevice, vk::VkPhysicalDeviceFeatures2*> GetPhysicalDeviceFeatures2; ///< Wrapper for vkGetPhysicalDeviceFeatures2
    static Function<void, vk::VkPhysicalDevice, vk::VkPhysicalDeviceFeatures2*> GetPhysicalDeviceFeatures2KHR; ///< Wrapper for vkGetPhysicalDeviceFeatures2KHR
    static Function<void, vk::VkPhysicalDevice, vk::VkFormat, vk::VkFormatProperties*> GetPhysicalDeviceFormatProperties; ///< Wrapper for vkGetPhysicalDeviceFormatProperties
    static Function<void, vk::VkPhysicalDevice, vk::VkFormat, vk::VkFormatProperties2*> GetPhysicalDeviceFormatProperties2; ///< Wrapper for vkGetPhysicalDeviceFormatProperties2
    static Function<void, vk::VkPhysicalDevice, vk::VkFormat, vk::VkFormatProperties2*> GetPhysicalDeviceFormatProperties2KHR; ///< Wrapper for vkGetPhysicalDeviceFormatProperties2KHR
    static Function<void, vk::VkPhysicalDevice, vk::VkDeviceGeneratedCommandsFeaturesNVX*, vk::VkDeviceGeneratedCommandsLimitsNVX*> GetPhysicalDeviceGeneratedCommandsPropertiesNVX; ///< Wrapper for vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX
    static Function<vk::VkResult, vk::VkPhysicalDevice, vk::VkFormat, vk::VkImageType, vk::VkImageTiling, vk::VkImageUsageFlags, vk::VkImageCreateFlags, vk::VkImageFormatProperties*> GetPhysicalDeviceImageFormatProperties; ///< Wrapper for vkGetPhysicalDeviceImageFormatProperties
    static Function<vk::VkResult, vk::VkPhysicalDevice, const vk::VkPhysicalDeviceImageFormatInfo2*, vk::VkImageFormatProperties2*> GetPhysicalDeviceImageFormatProperties2; ///< Wrapper for vkGetPhysicalDeviceImageFormatProperties2
    static Function<vk::VkResult, vk::VkPhysicalDevice, const vk::VkPhysicalDeviceImageFormatInfo2*, vk::VkImageFormatProperties2*> GetPhysicalDeviceImageFormatProperties2KHR; ///< Wrapper for vkGetPhysicalDeviceImageFormatProperties2KHR
    static Function<void, vk::VkPhysicalDevice, vk::VkPhysicalDeviceMemoryProperties*> GetPhysicalDeviceMemoryProperties; ///< Wrapper for vkGetPhysicalDeviceMemoryProperties
    static Function<void, vk::VkPhysicalDevice, vk::VkPhysicalDeviceMemoryProperties2*> GetPhysicalDeviceMemoryProperties2; ///< Wrapper for vkGetPhysicalDeviceMemoryProperties2
    static Function<void, vk::VkPhysicalDevice, vk::VkPhysicalDeviceMemoryProperties2*> GetPhysicalDeviceMemoryProperties2KHR; ///< Wrapper for vkGetPhysicalDeviceMemoryProperties2KHR
    static Function<void, vk::VkPhysicalDevice, vk::VkSampleCountFlagBits, vk::VkMultisamplePropertiesEXT*> GetPhysicalDeviceMultisamplePropertiesEXT; ///< Wrapper for vkGetPhysicalDeviceMultisamplePropertiesEXT
    static Function<vk::VkResult, vk::VkPhysicalDevice, vk::VkSurfaceKHR, uint32_t*, vk::VkRect2D*> GetPhysicalDevicePresentRectanglesKHR; ///< Wrapper for vkGetPhysicalDevicePresentRectanglesKHR
    static Function<void, vk::VkPhysicalDevice, vk::VkPhysicalDeviceProperties*> GetPhysicalDeviceProperties; ///< Wrapper for vkGetPhysicalDeviceProperties
    static Function<void, vk::VkPhysicalDevice, vk::VkPhysicalDeviceProperties2*> GetPhysicalDeviceProperties2; ///< Wrapper for vkGetPhysicalDeviceProperties2
    static Function<void, vk::VkPhysicalDevice, vk::VkPhysicalDeviceProperties2*> GetPhysicalDeviceProperties2KHR; ///< Wrapper for vkGetPhysicalDeviceProperties2KHR
    static Function<void, vk::VkPhysicalDevice, uint32_t*, vk::VkQueueFamilyProperties*> GetPhysicalDeviceQueueFamilyProperties; ///< Wrapper for vkGetPhysicalDeviceQueueFamilyProperties
    static Function<void, vk::VkPhysicalDevice, uint32_t*, vk::VkQueueFamilyProperties2*> GetPhysicalDeviceQueueFamilyProperties2; ///< Wrapper for vkGetPhysicalDeviceQueueFamilyProperties2
    static Function<void, vk::VkPhysicalDevice, uint32_t*, vk::VkQueueFamilyProperties2*> GetPhysicalDeviceQueueFamilyProperties2KHR; ///< Wrapper for vkGetPhysicalDeviceQueueFamilyProperties2KHR
    static Function<void, vk::VkPhysicalDevice, vk::VkFormat, vk::VkImageType, vk::VkSampleCountFlagBits, vk::VkImageUsageFlags, vk::VkImageTiling, uint32_t*, vk::VkSparseImageFormatProperties*> GetPhysicalDeviceSparseImageFormatProperties; ///< Wrapper for vkGetPhysicalDeviceSparseImageFormatProperties
    static Function<void, vk::VkPhysicalDevice, const vk::VkPhysicalDeviceSparseImageFormatInfo2*, uint32_t*, vk::VkSparseImageFormatProperties2*> GetPhysicalDeviceSparseImageFormatProperties2; ///< Wrapper for vkGetPhysicalDeviceSparseImageFormatProperties2
    static Function<void, vk::VkPhysicalDevice, const vk::VkPhysicalDeviceSparseImageFormatInfo2*, uint32_t*, vk::VkSparseImageFormatProperties2*> GetPhysicalDeviceSparseImageFormatProperties2KHR; ///< Wrapper for vkGetPhysicalDeviceSparseImageFormatProperties2KHR
    static Function<vk::VkResult, vk::VkPhysicalDevice, uint32_t*, vk::VkFramebufferMixedSamplesCombinationNV*> GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV; ///< Wrapper for vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV
    static Function<vk::VkResult, vk::VkPhysicalDevice, vk::VkSurfaceKHR, vk::VkSurfaceCapabilities2EXT*> GetPhysicalDeviceSurfaceCapabilities2EXT; ///< Wrapper for vkGetPhysicalDeviceSurfaceCapabilities2EXT
    static Function<vk::VkResult, vk::VkPhysicalDevice, const vk::VkPhysicalDeviceSurfaceInfo2KHR*, vk::VkSurfaceCapabilities2KHR*> GetPhysicalDeviceSurfaceCapabilities2KHR; ///< Wrapper for vkGetPhysicalDeviceSurfaceCapabilities2KHR
    static Function<vk::VkResult, vk::VkPhysicalDevice, vk::VkSurfaceKHR, vk::VkSurfaceCapabilitiesKHR*> GetPhysicalDeviceSurfaceCapabilitiesKHR; ///< Wrapper for vkGetPhysicalDeviceSurfaceCapabilitiesKHR
    static Function<vk::VkResult, vk::VkPhysicalDevice, const vk::VkPhysicalDeviceSurfaceInfo2KHR*, uint32_t*, vk::VkSurfaceFormat2KHR*> GetPhysicalDeviceSurfaceFormats2KHR; ///< Wrapper for vkGetPhysicalDeviceSurfaceFormats2KHR
    static Function<vk::VkResult, vk::VkPhysicalDevice, vk::VkSurfaceKHR, uint32_t*, vk::VkSurfaceFormatKHR*> GetPhysicalDeviceSurfaceFormatsKHR; ///< Wrapper for vkGetPhysicalDeviceSurfaceFormatsKHR
    static Function<vk::VkResult, vk::VkPhysicalDevice, vk::VkSurfaceKHR, uint32_t*, vk::VkPresentModeKHR*> GetPhysicalDeviceSurfacePresentModesKHR; ///< Wrapper for vkGetPhysicalDeviceSurfacePresentModesKHR
    static Function<vk::VkResult, vk::VkPhysicalDevice, uint32_t, vk::VkSurfaceKHR, vk::VkBool32*> GetPhysicalDeviceSurfaceSupportKHR; ///< Wrapper for vkGetPhysicalDeviceSurfaceSupportKHR
    static Function<vk::VkResult, vk::VkDevice, vk::VkPipelineCache, size_t*, void*> GetPipelineCacheData; ///< Wrapper for vkGetPipelineCacheData
    static Function<vk::VkResult, vk::VkDevice, const vk::VkPipelineExecutableInfoKHR*, uint32_t*, vk::VkPipelineExecutableInternalRepresentationKHR*> GetPipelineExecutableInternalRepresentationsKHR; ///< Wrapper for vkGetPipelineExecutableInternalRepresentationsKHR
    static Function<vk::VkResult, vk::VkDevice, const vk::VkPipelineInfoKHR*, uint32_t*, vk::VkPipelineExecutablePropertiesKHR*> GetPipelineExecutablePropertiesKHR; ///< Wrapper for vkGetPipelineExecutablePropertiesKHR
    static Function<vk::VkResult, vk::VkDevice, const vk::VkPipelineExecutableInfoKHR*, uint32_t*, vk::VkPipelineExecutableStatisticKHR*> GetPipelineExecutableStatisticsKHR; ///< Wrapper for vkGetPipelineExecutableStatisticsKHR
    static Function<vk::VkResult, vk::VkDevice, vk::VkQueryPool, uint32_t, uint32_t, size_t, void*, vk::VkDeviceSize, vk::VkQueryResultFlags> GetQueryPoolResults; ///< Wrapper for vkGetQueryPoolResults
    static Function<void, vk::VkQueue, uint32_t*, vk::VkCheckpointDataNV*> GetQueueCheckpointDataNV; ///< Wrapper for vkGetQueueCheckpointDataNV
    static Function<vk::VkResult, vk::VkDevice, vk::VkPipeline, uint32_t, uint32_t, size_t, void*> GetRayTracingShaderGroupHandlesNV; ///< Wrapper for vkGetRayTracingShaderGroupHandlesNV
    static Function<vk::VkResult, vk::VkDevice, vk::VkSwapchainKHR, vk::VkRefreshCycleDurationGOOGLE*> GetRefreshCycleDurationGOOGLE; ///< Wrapper for vkGetRefreshCycleDurationGOOGLE
    static Function<void, vk::VkDevice, vk::VkRenderPass, vk::VkExtent2D*> GetRenderAreaGranularity; ///< Wrapper for vkGetRenderAreaGranularity
    static Function<vk::VkResult, vk::VkDevice, const vk::VkSemaphoreGetFdInfoKHR*, int*> GetSemaphoreFdKHR; ///< Wrapper for vkGetSemaphoreFdKHR
    static Function<vk::VkResult, vk::VkDevice, vk::VkPipeline, vk::VkShaderStageFlagBits, vk::VkShaderInfoTypeAMD, size_t*, void*> GetShaderInfoAMD; ///< Wrapper for vkGetShaderInfoAMD
    static Function<vk::VkResult, vk::VkDevice, vk::VkSwapchainKHR, vk::VkSurfaceCounterFlagBitsEXT, uint64_t*> GetSwapchainCounterEXT; ///< Wrapper for vkGetSwapchainCounterEXT
    static Function<vk::VkResult, vk::VkDevice, vk::VkSwapchainKHR, uint32_t*, vk::VkImage*> GetSwapchainImagesKHR; ///< Wrapper for vkGetSwapchainImagesKHR
    static Function<vk::VkResult, vk::VkDevice, vk::VkSwapchainKHR> GetSwapchainStatusKHR; ///< Wrapper for vkGetSwapchainStatusKHR
    static Function<vk::VkResult, vk::VkDevice, vk::VkValidationCacheEXT, size_t*, void*> GetValidationCacheDataEXT; ///< Wrapper for vkGetValidationCacheDataEXT
    static Function<vk::VkResult, vk::VkDevice, const vk::VkImportFenceFdInfoKHR*> ImportFenceFdKHR; ///< Wrapper for vkImportFenceFdKHR
    static Function<vk::VkResult, vk::VkDevice, const vk::VkImportSemaphoreFdInfoKHR*> ImportSemaphoreFdKHR; ///< Wrapper for vkImportSemaphoreFdKHR
    static Function<vk::VkResult, vk::VkDevice, const vk::VkInitializePerformanceApiInfoINTEL*> InitializePerformanceApiINTEL; ///< Wrapper for vkInitializePerformanceApiINTEL
    static Function<vk::VkResult, vk::VkDevice, uint32_t, const vk::VkMappedMemoryRange*> InvalidateMappedMemoryRanges; ///< Wrapper for vkInvalidateMappedMemoryRanges
    static Function<vk::VkResult, vk::VkDevice, vk::VkDeviceMemory, vk::VkDeviceSize, vk::VkDeviceSize, vk::VkMemoryMapFlags, void**> MapMemory; ///< Wrapper for vkMapMemory
    static Function<vk::VkResult, vk::VkDevice, vk::VkPipelineCache, uint32_t, const vk::VkPipelineCache*> MergePipelineCaches; ///< Wrapper for vkMergePipelineCaches
    static Function<vk::VkResult, vk::VkDevice, vk::VkValidationCacheEXT, uint32_t, const vk::VkValidationCacheEXT*> MergeValidationCachesEXT; ///< Wrapper for vkMergeValidationCachesEXT
    static Function<void, vk::VkQueue, const vk::VkDebugUtilsLabelEXT*> QueueBeginDebugUtilsLabelEXT; ///< Wrapper for vkQueueBeginDebugUtilsLabelEXT
    static Function<vk::VkResult, vk::VkQueue, uint32_t, const vk::VkBindSparseInfo*, vk::VkFence> QueueBindSparse; ///< Wrapper for vkQueueBindSparse
    static Function<void, vk::VkQueue> QueueEndDebugUtilsLabelEXT; ///< Wrapper for vkQueueEndDebugUtilsLabelEXT
    static Function<void, vk::VkQueue, const vk::VkDebugUtilsLabelEXT*> QueueInsertDebugUtilsLabelEXT; ///< Wrapper for vkQueueInsertDebugUtilsLabelEXT
    static Function<vk::VkResult, vk::VkQueue, const vk::VkPresentInfoKHR*> QueuePresentKHR; ///< Wrapper for vkQueuePresentKHR
    static Function<vk::VkResult, vk::VkQueue, vk::VkPerformanceConfigurationINTEL> QueueSetPerformanceConfigurationINTEL; ///< Wrapper for vkQueueSetPerformanceConfigurationINTEL
    static Function<vk::VkResult, vk::VkQueue, uint32_t, const vk::VkSubmitInfo*, vk::VkFence> QueueSubmit; ///< Wrapper for vkQueueSubmit
    static Function<vk::VkResult, vk::VkQueue> QueueWaitIdle; ///< Wrapper for vkQueueWaitIdle
    static Function<vk::VkResult, vk::VkDevice, const vk::VkDeviceEventInfoEXT*, const vk::VkAllocationCallbacks*, vk::VkFence*> RegisterDeviceEventEXT; ///< Wrapper for vkRegisterDeviceEventEXT
    static Function<vk::VkResult, vk::VkDevice, vk::VkDisplayKHR, const vk::VkDisplayEventInfoEXT*, const vk::VkAllocationCallbacks*, vk::VkFence*> RegisterDisplayEventEXT; ///< Wrapper for vkRegisterDisplayEventEXT
    static Function<vk::VkResult, vk::VkDevice, vk::VkObjectTableNVX, uint32_t, const vk::VkObjectTableEntryNVX* const*, const uint32_t*> RegisterObjectsNVX; ///< Wrapper for vkRegisterObjectsNVX
    static Function<vk::VkResult, vk::VkPhysicalDevice, vk::VkDisplayKHR> ReleaseDisplayEXT; ///< Wrapper for vkReleaseDisplayEXT
    static Function<vk::VkResult, vk::VkDevice, vk::VkPerformanceConfigurationINTEL> ReleasePerformanceConfigurationINTEL; ///< Wrapper for vkReleasePerformanceConfigurationINTEL
    static Function<vk::VkResult, vk::VkCommandBuffer, vk::VkCommandBufferResetFlags> ResetCommandBuffer; ///< Wrapper for vkResetCommandBuffer
    static Function<vk::VkResult, vk::VkDevice, vk::VkCommandPool, vk::VkCommandPoolResetFlags> ResetCommandPool; ///< Wrapper for vkResetCommandPool
    static Function<vk::VkResult, vk::VkDevice, vk::VkDescriptorPool, vk::VkDescriptorPoolResetFlags> ResetDescriptorPool; ///< Wrapper for vkResetDescriptorPool
    static Function<vk::VkResult, vk::VkDevice, vk::VkEvent> ResetEvent; ///< Wrapper for vkResetEvent
    static Function<vk::VkResult, vk::VkDevice, uint32_t, const vk::VkFence*> ResetFences; ///< Wrapper for vkResetFences
    static Function<void, vk::VkDevice, vk::VkQueryPool, uint32_t, uint32_t> ResetQueryPoolEXT; ///< Wrapper for vkResetQueryPoolEXT
    static Function<vk::VkResult, vk::VkDevice, const vk::VkDebugUtilsObjectNameInfoEXT*> SetDebugUtilsObjectNameEXT; ///< Wrapper for vkSetDebugUtilsObjectNameEXT
    static Function<vk::VkResult, vk::VkDevice, const vk::VkDebugUtilsObjectTagInfoEXT*> SetDebugUtilsObjectTagEXT; ///< Wrapper for vkSetDebugUtilsObjectTagEXT
    static Function<vk::VkResult, vk::VkDevice, vk::VkEvent> SetEvent; ///< Wrapper for vkSetEvent
    static Function<void, vk::VkDevice, uint32_t, const vk::VkSwapchainKHR*, const vk::VkHdrMetadataEXT*> SetHdrMetadataEXT; ///< Wrapper for vkSetHdrMetadataEXT
    static Function<void, vk::VkDevice, vk::VkSwapchainKHR, vk::VkBool32> SetLocalDimmingAMD; ///< Wrapper for vkSetLocalDimmingAMD
    static Function<void, vk::VkInstance, vk::VkDebugUtilsMessageSeverityFlagBitsEXT, vk::VkDebugUtilsMessageTypeFlagsEXT, const vk::VkDebugUtilsMessengerCallbackDataEXT*> SubmitDebugUtilsMessageEXT; ///< Wrapper for vkSubmitDebugUtilsMessageEXT
    static Function<void, vk::VkDevice, vk::VkCommandPool, vk::VkCommandPoolTrimFlags> TrimCommandPool; ///< Wrapper for vkTrimCommandPool
    static Function<void, vk::VkDevice, vk::VkCommandPool, vk::VkCommandPoolTrimFlags> TrimCommandPoolKHR; ///< Wrapper for vkTrimCommandPoolKHR
    static Function<void, vk::VkDevice> UninitializePerformanceApiINTEL; ///< Wrapper for vkUninitializePerformanceApiINTEL
    static Function<void, vk::VkDevice, vk::VkDeviceMemory> UnmapMemory; ///< Wrapper for vkUnmapMemory
    static Function<vk::VkResult, vk::VkDevice, vk::VkObjectTableNVX, uint32_t, const vk::VkObjectEntryTypeNVX*, const uint32_t*> UnregisterObjectsNVX; ///< Wrapper for vkUnregisterObjectsNVX
    static Function<void, vk::VkDevice, uint32_t, const vk::VkWriteDescriptorSet*, uint32_t, const vk::VkCopyDescriptorSet*> UpdateDescriptorSets; ///< Wrapper for vkUpdateDescriptorSets
    static Function<void, vk::VkDevice, vk::VkDescriptorSet, vk::VkDescriptorUpdateTemplate, const void*> UpdateDescriptorSetWithTemplate; ///< Wrapper for vkUpdateDescriptorSetWithTemplate
    static Function<void, vk::VkDevice, vk::VkDescriptorSet, vk::VkDescriptorUpdateTemplate, const void*> UpdateDescriptorSetWithTemplateKHR; ///< Wrapper for vkUpdateDescriptorSetWithTemplateKHR
    static Function<vk::VkResult, vk::VkDevice, uint32_t, const vk::VkFence*, vk::VkBool32, uint64_t> WaitForFences; ///< Wrapper for vkWaitForFences


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