
#include "Meta_Maps.h"

#include <vkbinding/Version.h>


using namespace vk;


namespace vkbinding { namespace aux
{


// all functions directly required by features, not indirectly via extensions

const std::map<Version, std::set<std::string>> Meta_FunctionStringsByVersion =
{
    { { 1, 0 }, { "vkAllocateCommandBuffers", "vkAllocateDescriptorSets", "vkAllocateMemory", "vkBeginCommandBuffer", "vkBindBufferMemory", "vkBindImageMemory", "vkCmdBeginQuery", "vkCmdBeginRenderPass", "vkCmdBindDescriptorSets", "vkCmdBindIndexBuffer", "vkCmdBindPipeline", "vkCmdBindVertexBuffers", "vkCmdBlitImage", "vkCmdClearAttachments", "vkCmdClearColorImage", "vkCmdClearDepthStencilImage", "vkCmdCopyBuffer", "vkCmdCopyBufferToImage", "vkCmdCopyImage", "vkCmdCopyImageToBuffer", "vkCmdCopyQueryPoolResults", "vkCmdDispatch", "vkCmdDispatchIndirect", "vkCmdDraw", "vkCmdDrawIndexed", "vkCmdDrawIndexedIndirect", "vkCmdDrawIndirect", "vkCmdEndQuery", "vkCmdEndRenderPass", "vkCmdExecuteCommands", "vkCmdFillBuffer", "vkCmdNextSubpass", "vkCmdPipelineBarrier", "vkCmdPushConstants", "vkCmdResetEvent", "vkCmdResetQueryPool", "vkCmdResolveImage", "vkCmdSetBlendConstants", "vkCmdSetDepthBias", "vkCmdSetDepthBounds", "vkCmdSetEvent", "vkCmdSetLineWidth", "vkCmdSetScissor", "vkCmdSetStencilCompareMask", "vkCmdSetStencilReference", "vkCmdSetStencilWriteMask", "vkCmdSetViewport", "vkCmdUpdateBuffer", "vkCmdWaitEvents", "vkCmdWriteTimestamp", "vkCreateBuffer", "vkCreateBufferView", "vkCreateCommandPool", "vkCreateComputePipelines", "vkCreateDescriptorPool", "vkCreateDescriptorSetLayout", "vkCreateDevice", "vkCreateEvent", "vkCreateFence", "vkCreateFramebuffer", "vkCreateGraphicsPipelines", "vkCreateImage", "vkCreateImageView", "vkCreateInstance", "vkCreatePipelineCache", "vkCreatePipelineLayout", "vkCreateQueryPool", "vkCreateRenderPass", "vkCreateSampler", "vkCreateSemaphore", "vkCreateShaderModule", "vkDestroyBuffer", "vkDestroyBufferView", "vkDestroyCommandPool", "vkDestroyDescriptorPool", "vkDestroyDescriptorSetLayout", "vkDestroyDevice", "vkDestroyEvent", "vkDestroyFence", "vkDestroyFramebuffer", "vkDestroyImage", "vkDestroyImageView", "vkDestroyInstance", "vkDestroyPipeline", "vkDestroyPipelineCache", "vkDestroyPipelineLayout", "vkDestroyQueryPool", "vkDestroyRenderPass", "vkDestroySampler", "vkDestroySemaphore", "vkDestroyShaderModule", "vkDeviceWaitIdle", "vkEndCommandBuffer", "vkEnumerateDeviceExtensionProperties", "vkEnumerateDeviceLayerProperties", "vkEnumerateInstanceExtensionProperties", "vkEnumerateInstanceLayerProperties", "vkEnumeratePhysicalDevices", "vkFlushMappedMemoryRanges", "vkFreeCommandBuffers", "vkFreeDescriptorSets", "vkFreeMemory", "vkGetBufferMemoryRequirements", "vkGetDeviceMemoryCommitment", "vkGetDeviceProcAddr", "vkGetDeviceQueue", "vkGetEventStatus", "vkGetFenceStatus", "vkGetImageMemoryRequirements", "vkGetImageSparseMemoryRequirements", "vkGetImageSubresourceLayout", "vkGetInstanceProcAddr", "vkGetPhysicalDeviceFeatures", "vkGetPhysicalDeviceFormatProperties", "vkGetPhysicalDeviceImageFormatProperties", "vkGetPhysicalDeviceMemoryProperties", "vkGetPhysicalDeviceProperties", "vkGetPhysicalDeviceQueueFamilyProperties", "vkGetPhysicalDeviceSparseImageFormatProperties", "vkGetPipelineCacheData", "vkGetQueryPoolResults", "vkGetRenderAreaGranularity", "vkInvalidateMappedMemoryRanges", "vkMapMemory", "vkMergePipelineCaches", "vkQueueBindSparse", "vkQueueSubmit", "vkQueueWaitIdle", "vkResetCommandBuffer", "vkResetCommandPool", "vkResetDescriptorPool", "vkResetEvent", "vkResetFences", "vkSetEvent", "vkUnmapMemory", "vkUpdateDescriptorSets", "vkWaitForFences" } },
    { { 1, 1 }, { "vkBindBufferMemory2", "vkBindImageMemory2", "vkCmdDispatchBase", "vkCmdSetDeviceMask", "vkCreateDescriptorUpdateTemplate", "vkCreateSamplerYcbcrConversion", "vkDestroyDescriptorUpdateTemplate", "vkDestroySamplerYcbcrConversion", "vkEnumerateInstanceVersion", "vkEnumeratePhysicalDeviceGroups", "vkGetBufferMemoryRequirements2", "vkGetDescriptorSetLayoutSupport", "vkGetDeviceGroupPeerMemoryFeatures", "vkGetDeviceQueue2", "vkGetImageMemoryRequirements2", "vkGetImageSparseMemoryRequirements2", "vkGetPhysicalDeviceExternalBufferProperties", "vkGetPhysicalDeviceExternalFenceProperties", "vkGetPhysicalDeviceExternalSemaphoreProperties", "vkGetPhysicalDeviceFeatures2", "vkGetPhysicalDeviceFormatProperties2", "vkGetPhysicalDeviceImageFormatProperties2", "vkGetPhysicalDeviceMemoryProperties2", "vkGetPhysicalDeviceProperties2", "vkGetPhysicalDeviceQueueFamilyProperties2", "vkGetPhysicalDeviceSparseImageFormatProperties2", "vkTrimCommandPool", "vkUpdateDescriptorSetWithTemplate" } }
};


} } // namespace vkbinding::aux