
#include <vkbinding-aux/types_to_string.h>

#include <ostream>
#include <bitset>
#include <sstream>

#include <vkbinding/Version.h>
#include <vkbinding-aux/Meta.h>

#include "types_to_string_private.h"


namespace vk
{


std::ostream & operator<<(std::ostream & stream, const VkBool32 & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VKenum & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VKextension & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const UnusedMask & value)
{
    stream << vkbinding::aux::bitfieldString<UnusedMask>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkAccessFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkAccessFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkAttachmentDescriptionFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkAttachmentDescriptionFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkBufferCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkBufferCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkBufferUsageFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkBufferUsageFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkBufferViewCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkBufferViewCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkBuildAccelerationStructureFlagsNV & value)
{
    stream << vkbinding::aux::bitfieldString<VkBuildAccelerationStructureFlagsNV>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkColorComponentFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkColorComponentFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkCommandBufferResetFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkCommandBufferResetFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkCommandBufferUsageFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkCommandBufferUsageFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkCommandPoolCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkCommandPoolCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkCommandPoolResetFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkCommandPoolResetFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkCommandPoolTrimFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkCommandPoolTrimFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkCommandPoolTrimFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkCommandPoolTrimFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkCompositeAlphaFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkCompositeAlphaFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkConditionalRenderingFlagsEXT & value)
{
    stream << vkbinding::aux::bitfieldString<VkConditionalRenderingFlagsEXT>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkCullModeFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkCullModeFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDebugReportFlagsEXT & value)
{
    stream << vkbinding::aux::bitfieldString<VkDebugReportFlagsEXT>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDebugUtilsMessageSeverityFlagsEXT & value)
{
    stream << vkbinding::aux::bitfieldString<VkDebugUtilsMessageSeverityFlagsEXT>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDebugUtilsMessageTypeFlagsEXT & value)
{
    stream << vkbinding::aux::bitfieldString<VkDebugUtilsMessageTypeFlagsEXT>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDebugUtilsMessengerCallbackDataFlagsEXT & value)
{
    stream << vkbinding::aux::bitfieldString<VkDebugUtilsMessengerCallbackDataFlagsEXT>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDependencyFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkDependencyFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDescriptorPoolCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkDescriptorPoolCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDescriptorPoolResetFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkDescriptorPoolResetFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDescriptorSetLayoutCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkDescriptorSetLayoutCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDescriptorUpdateTemplateCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkDescriptorUpdateTemplateCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDescriptorUpdateTemplateCreateFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkDescriptorUpdateTemplateCreateFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDeviceCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkDeviceCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDeviceGroupPresentModeFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkDeviceGroupPresentModeFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDeviceQueueCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkDeviceQueueCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDisplayModeCreateFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkDisplayModeCreateFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDisplayPlaneAlphaFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkDisplayPlaneAlphaFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDisplaySurfaceCreateFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkDisplaySurfaceCreateFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkEventCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkEventCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalFenceFeatureFlagBitsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalFenceFeatureFlagBitsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalFenceFeatureFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalFenceFeatureFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalFenceFeatureFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalFenceFeatureFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalFenceHandleTypeFlagBitsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalFenceHandleTypeFlagBitsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalFenceHandleTypeFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalFenceHandleTypeFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalFenceHandleTypeFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalFenceHandleTypeFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalMemoryFeatureFlagBitsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalMemoryFeatureFlagBitsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalMemoryFeatureFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalMemoryFeatureFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalMemoryFeatureFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalMemoryFeatureFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalMemoryFeatureFlagsNV & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalMemoryFeatureFlagsNV>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalMemoryHandleTypeFlagBitsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalMemoryHandleTypeFlagBitsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalMemoryHandleTypeFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalMemoryHandleTypeFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalMemoryHandleTypeFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalMemoryHandleTypeFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalMemoryHandleTypeFlagsNV & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalMemoryHandleTypeFlagsNV>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalSemaphoreFeatureFlagBitsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalSemaphoreFeatureFlagBitsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalSemaphoreFeatureFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalSemaphoreFeatureFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalSemaphoreFeatureFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalSemaphoreFeatureFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalSemaphoreHandleTypeFlagBitsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalSemaphoreHandleTypeFlagBitsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalSemaphoreHandleTypeFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalSemaphoreHandleTypeFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalSemaphoreHandleTypeFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalSemaphoreHandleTypeFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkFenceCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkFenceCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkFenceImportFlagBitsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkFenceImportFlagBitsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkFenceImportFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkFenceImportFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkFenceImportFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkFenceImportFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkFormatFeatureFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkFormatFeatureFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkFramebufferCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkFramebufferCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkGeometryFlagsNV & value)
{
    stream << vkbinding::aux::bitfieldString<VkGeometryFlagsNV>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkGeometryInstanceFlagsNV & value)
{
    stream << vkbinding::aux::bitfieldString<VkGeometryInstanceFlagsNV>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkHeadlessSurfaceCreateFlagsEXT & value)
{
    stream << vkbinding::aux::bitfieldString<VkHeadlessSurfaceCreateFlagsEXT>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkImageAspectFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkImageAspectFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkImageCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkImageCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkImageUsageFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkImageUsageFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkImageViewCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkImageViewCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkIndirectCommandsLayoutUsageFlagsNVX & value)
{
    stream << vkbinding::aux::bitfieldString<VkIndirectCommandsLayoutUsageFlagsNVX>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkInstanceCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkInstanceCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkMemoryAllocateFlagBitsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkMemoryAllocateFlagBitsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkMemoryAllocateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkMemoryAllocateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkMemoryAllocateFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkMemoryAllocateFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkMemoryHeapFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkMemoryHeapFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkMemoryMapFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkMemoryMapFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkMemoryPropertyFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkMemoryPropertyFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkObjectEntryUsageFlagsNVX & value)
{
    stream << vkbinding::aux::bitfieldString<VkObjectEntryUsageFlagsNVX>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPeerMemoryFeatureFlagBitsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkPeerMemoryFeatureFlagBitsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPeerMemoryFeatureFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkPeerMemoryFeatureFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPeerMemoryFeatureFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkPeerMemoryFeatureFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineCacheCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineCacheCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineColorBlendStateCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineColorBlendStateCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineCompilerControlFlagsAMD & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineCompilerControlFlagsAMD>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineCoverageModulationStateCreateFlagsNV & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineCoverageModulationStateCreateFlagsNV>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineCoverageReductionStateCreateFlagsNV & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineCoverageReductionStateCreateFlagsNV>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineCoverageToColorStateCreateFlagsNV & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineCoverageToColorStateCreateFlagsNV>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineCreationFeedbackFlagsEXT & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineCreationFeedbackFlagsEXT>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineDepthStencilStateCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineDepthStencilStateCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineDiscardRectangleStateCreateFlagsEXT & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineDiscardRectangleStateCreateFlagsEXT>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineDynamicStateCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineDynamicStateCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineInputAssemblyStateCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineInputAssemblyStateCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineLayoutCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineLayoutCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineMultisampleStateCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineMultisampleStateCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineRasterizationConservativeStateCreateFlagsEXT & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineRasterizationConservativeStateCreateFlagsEXT>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineRasterizationDepthClipStateCreateFlagsEXT & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineRasterizationDepthClipStateCreateFlagsEXT>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineRasterizationStateCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineRasterizationStateCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineRasterizationStateStreamCreateFlagsEXT & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineRasterizationStateStreamCreateFlagsEXT>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineShaderStageCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineShaderStageCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineStageFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineStageFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineTessellationStateCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineTessellationStateCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineVertexInputStateCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineVertexInputStateCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineViewportStateCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineViewportStateCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineViewportSwizzleStateCreateFlagsNV & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineViewportSwizzleStateCreateFlagsNV>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkQueryControlFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkQueryControlFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkQueryPipelineStatisticFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkQueryPipelineStatisticFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkQueryPoolCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkQueryPoolCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkQueryResultFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkQueryResultFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkQueueFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkQueueFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkRenderPassCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkRenderPassCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkResolveModeFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkResolveModeFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSampleCountFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkSampleCountFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSamplerCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkSamplerCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSemaphoreCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkSemaphoreCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSemaphoreImportFlagBitsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkSemaphoreImportFlagBitsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSemaphoreImportFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkSemaphoreImportFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSemaphoreImportFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkSemaphoreImportFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkShaderCorePropertiesFlagsAMD & value)
{
    stream << vkbinding::aux::bitfieldString<VkShaderCorePropertiesFlagsAMD>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkShaderModuleCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkShaderModuleCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkShaderStageFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkShaderStageFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSparseImageFormatFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkSparseImageFormatFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSparseMemoryBindFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkSparseMemoryBindFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkStencilFaceFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkStencilFaceFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSubgroupFeatureFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkSubgroupFeatureFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSubpassDescriptionFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkSubpassDescriptionFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSurfaceCounterFlagsEXT & value)
{
    stream << vkbinding::aux::bitfieldString<VkSurfaceCounterFlagsEXT>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSurfaceTransformFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkSurfaceTransformFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSwapchainCreateFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkSwapchainCreateFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkValidationCacheCreateFlagsEXT & value)
{
    stream << vkbinding::aux::bitfieldString<VkValidationCacheCreateFlagsEXT>(value);
    return stream;
}


} // namespace vk


namespace vkbinding
{


template <>
std::ostream & operator<<(std::ostream & stream, const Value<vk::VKenum> & value)
{
    const auto & name = aux::Meta::getString(value.value());
    stream.write(name.c_str(), static_cast<std::streamsize>(name.size()));

    return stream;
}

/*template <>
std::ostream & operator<<(std::ostream & stream, const Value<vk::VKbitfield> & value)
{
    std::stringstream ss;
    ss << "0x" << std::hex << static_cast<unsigned>(value.value());
    stream << ss.str();

    return stream;
}*/

template <>
std::ostream & operator<<(std::ostream & stream, const Value<vk::VkBool32> & value)
{
    const auto & name = aux::Meta::getString(value.value());
    stream.write(name.c_str(), static_cast<std::streamsize>(name.size()));

    return stream;
}



std::ostream & operator<<(std::ostream & stream, const Version & version)
{
    stream << version.toString();

    return stream;
}

std::ostream & operator<<(std::ostream & stream, const AbstractValue * value)
{
    if (typeid(*value) == typeid(AbstractValue))
    {
        return stream << reinterpret_cast<const void*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::CAMetalLayer>))
    {
        return stream << *reinterpret_cast<const Value<vk::CAMetalLayer>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::CAMetalLayer *>))
    {
        return stream << *reinterpret_cast<const Value<vk::CAMetalLayer *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::PFN_vkAllocationFunction>))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkAllocationFunction>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::PFN_vkAllocationFunction *>))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkAllocationFunction *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::PFN_vkFreeFunction>))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkFreeFunction>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::PFN_vkFreeFunction *>))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkFreeFunction *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::PFN_vkInternalAllocationNotification>))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkInternalAllocationNotification>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::PFN_vkInternalAllocationNotification *>))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkInternalAllocationNotification *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::PFN_vkInternalFreeNotification>))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkInternalFreeNotification>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::PFN_vkInternalFreeNotification *>))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkInternalFreeNotification *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::PFN_vkReallocationFunction>))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkReallocationFunction>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::PFN_vkReallocationFunction *>))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkReallocationFunction *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::PFN_vkVoidFunction>))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkVoidFunction>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::PFN_vkVoidFunction *>))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkVoidFunction *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::UNGROUPED>))
    {
        return stream << *reinterpret_cast<const Value<vk::UNGROUPED>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::UNGROUPED *>))
    {
        return stream << *reinterpret_cast<const Value<vk::UNGROUPED *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::UnusedMask>))
    {
        return stream << *reinterpret_cast<const Value<vk::UnusedMask>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::UnusedMask *>))
    {
        return stream << *reinterpret_cast<const Value<vk::UnusedMask *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VK_API_VERSION>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_API_VERSION>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VK_API_VERSION *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_API_VERSION *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VK_API_VERSION_1_0>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_API_VERSION_1_0>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VK_API_VERSION_1_0 *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_API_VERSION_1_0 *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VK_API_VERSION_1_1>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_API_VERSION_1_1>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VK_API_VERSION_1_1 *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_API_VERSION_1_1 *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VK_DEFINE_HANDLE>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_DEFINE_HANDLE>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VK_DEFINE_HANDLE *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_DEFINE_HANDLE *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VK_DEFINE_NON_DISPATCHABLE_HANDLE>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_DEFINE_NON_DISPATCHABLE_HANDLE>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VK_DEFINE_NON_DISPATCHABLE_HANDLE *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_DEFINE_NON_DISPATCHABLE_HANDLE *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VK_HEADER_VERSION>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_HEADER_VERSION>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VK_HEADER_VERSION *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_HEADER_VERSION *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VK_MAKE_VERSION>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_MAKE_VERSION>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VK_MAKE_VERSION *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_MAKE_VERSION *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VK_NULL_HANDLE>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_NULL_HANDLE>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VK_NULL_HANDLE *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_NULL_HANDLE *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VK_VERSION_MAJOR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_VERSION_MAJOR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VK_VERSION_MAJOR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_VERSION_MAJOR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VK_VERSION_MINOR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_VERSION_MINOR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VK_VERSION_MINOR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_VERSION_MINOR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VK_VERSION_PATCH>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_VERSION_PATCH>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VK_VERSION_PATCH *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_VERSION_PATCH *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAccelerationStructureCreateInfoNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccelerationStructureCreateInfoNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAccelerationStructureCreateInfoNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccelerationStructureCreateInfoNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAccelerationStructureInfoNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccelerationStructureInfoNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAccelerationStructureInfoNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccelerationStructureInfoNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAccelerationStructureMemoryRequirementsInfoNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccelerationStructureMemoryRequirementsInfoNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAccelerationStructureMemoryRequirementsInfoNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccelerationStructureMemoryRequirementsInfoNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAccelerationStructureMemoryRequirementsTypeNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccelerationStructureMemoryRequirementsTypeNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAccelerationStructureMemoryRequirementsTypeNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccelerationStructureMemoryRequirementsTypeNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAccelerationStructureNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccelerationStructureNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAccelerationStructureNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccelerationStructureNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAccelerationStructureTypeNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccelerationStructureTypeNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAccelerationStructureTypeNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccelerationStructureTypeNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAccessFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccessFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAccessFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccessFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAcquireNextImageInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAcquireNextImageInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAcquireNextImageInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAcquireNextImageInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAllocationCallbacks>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAllocationCallbacks>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAllocationCallbacks *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAllocationCallbacks *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkApplicationInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkApplicationInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkApplicationInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkApplicationInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentDescription>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentDescription>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentDescription *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentDescription *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentDescription2KHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentDescription2KHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentDescription2KHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentDescription2KHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentDescriptionFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentDescriptionFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentDescriptionFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentDescriptionFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentLoadOp>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentLoadOp>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentLoadOp *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentLoadOp *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentReference>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentReference>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentReference *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentReference *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentReference2KHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentReference2KHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentReference2KHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentReference2KHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentSampleLocationsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentSampleLocationsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentSampleLocationsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentSampleLocationsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentStoreOp>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentStoreOp>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentStoreOp *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentStoreOp *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBaseInStructure>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBaseInStructure>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBaseInStructure *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBaseInStructure *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBaseOutStructure>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBaseOutStructure>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBaseOutStructure *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBaseOutStructure *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBindAccelerationStructureMemoryInfoNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBindAccelerationStructureMemoryInfoNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBindAccelerationStructureMemoryInfoNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBindAccelerationStructureMemoryInfoNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBindBufferMemoryDeviceGroupInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBindBufferMemoryDeviceGroupInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBindBufferMemoryDeviceGroupInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBindBufferMemoryDeviceGroupInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBindBufferMemoryDeviceGroupInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBindBufferMemoryDeviceGroupInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBindBufferMemoryDeviceGroupInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBindBufferMemoryDeviceGroupInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBindBufferMemoryInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBindBufferMemoryInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBindBufferMemoryInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBindBufferMemoryInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBindBufferMemoryInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBindBufferMemoryInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBindBufferMemoryInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBindBufferMemoryInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBindImageMemoryDeviceGroupInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBindImageMemoryDeviceGroupInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBindImageMemoryDeviceGroupInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBindImageMemoryDeviceGroupInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBindImageMemoryDeviceGroupInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBindImageMemoryDeviceGroupInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBindImageMemoryDeviceGroupInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBindImageMemoryDeviceGroupInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBindImageMemoryInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBindImageMemoryInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBindImageMemoryInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBindImageMemoryInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBindImageMemoryInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBindImageMemoryInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBindImageMemoryInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBindImageMemoryInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBindImageMemorySwapchainInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBindImageMemorySwapchainInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBindImageMemorySwapchainInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBindImageMemorySwapchainInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBindImagePlaneMemoryInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBindImagePlaneMemoryInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBindImagePlaneMemoryInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBindImagePlaneMemoryInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBindImagePlaneMemoryInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBindImagePlaneMemoryInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBindImagePlaneMemoryInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBindImagePlaneMemoryInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBindSparseInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBindSparseInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBindSparseInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBindSparseInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VKbitfield>))
    {
        return stream << *reinterpret_cast<const Value<vk::VKbitfield>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VKbitfield *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VKbitfield *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBlendFactor>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBlendFactor>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBlendFactor *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBlendFactor *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBlendOp>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBlendOp>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBlendOp *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBlendOp *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBlendOverlapEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBlendOverlapEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBlendOverlapEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBlendOverlapEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBool32>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBool32>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBool32 *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBool32 *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBorderColor>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBorderColor>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBorderColor *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBorderColor *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBuffer>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBuffer>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBuffer *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBuffer *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBufferCopy>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferCopy>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBufferCopy *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferCopy *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBufferCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBufferCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBufferCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBufferCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBufferDeviceAddressCreateInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferDeviceAddressCreateInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBufferDeviceAddressCreateInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferDeviceAddressCreateInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBufferDeviceAddressInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferDeviceAddressInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBufferDeviceAddressInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferDeviceAddressInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBufferImageCopy>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferImageCopy>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBufferImageCopy *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferImageCopy *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBufferMemoryBarrier>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferMemoryBarrier>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBufferMemoryBarrier *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferMemoryBarrier *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBufferMemoryRequirementsInfo2>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferMemoryRequirementsInfo2>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBufferMemoryRequirementsInfo2 *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferMemoryRequirementsInfo2 *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBufferMemoryRequirementsInfo2KHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferMemoryRequirementsInfo2KHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBufferMemoryRequirementsInfo2KHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferMemoryRequirementsInfo2KHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBufferUsageFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferUsageFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBufferUsageFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferUsageFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBufferView>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferView>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBufferView *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferView *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBufferViewCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferViewCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBufferViewCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferViewCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBufferViewCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferViewCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBufferViewCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferViewCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBuildAccelerationStructureFlagBitsNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBuildAccelerationStructureFlagBitsNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBuildAccelerationStructureFlagBitsNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBuildAccelerationStructureFlagBitsNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBuildAccelerationStructureFlagsNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBuildAccelerationStructureFlagsNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBuildAccelerationStructureFlagsNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBuildAccelerationStructureFlagsNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCalibratedTimestampInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCalibratedTimestampInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCalibratedTimestampInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCalibratedTimestampInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCheckpointDataNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCheckpointDataNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCheckpointDataNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCheckpointDataNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkChromaLocation>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkChromaLocation>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkChromaLocation *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkChromaLocation *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkChromaLocationKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkChromaLocationKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkChromaLocationKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkChromaLocationKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkClearAttachment>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkClearAttachment>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkClearAttachment *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkClearAttachment *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkClearColorValue>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkClearColorValue>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkClearColorValue *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkClearColorValue *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkClearDepthStencilValue>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkClearDepthStencilValue>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkClearDepthStencilValue *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkClearDepthStencilValue *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkClearRect>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkClearRect>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkClearRect *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkClearRect *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkClearValue>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkClearValue>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkClearValue *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkClearValue *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCmdProcessCommandsInfoNVX>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCmdProcessCommandsInfoNVX>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCmdProcessCommandsInfoNVX *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCmdProcessCommandsInfoNVX *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCmdReserveSpaceForCommandsInfoNVX>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCmdReserveSpaceForCommandsInfoNVX>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCmdReserveSpaceForCommandsInfoNVX *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCmdReserveSpaceForCommandsInfoNVX *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCoarseSampleLocationNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCoarseSampleLocationNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCoarseSampleLocationNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCoarseSampleLocationNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCoarseSampleOrderCustomNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCoarseSampleOrderCustomNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCoarseSampleOrderCustomNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCoarseSampleOrderCustomNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCoarseSampleOrderTypeNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCoarseSampleOrderTypeNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCoarseSampleOrderTypeNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCoarseSampleOrderTypeNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkColorComponentFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkColorComponentFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkColorComponentFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkColorComponentFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkColorSpaceKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkColorSpaceKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkColorSpaceKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkColorSpaceKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandBuffer>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBuffer>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandBuffer *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBuffer *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandBufferAllocateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBufferAllocateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandBufferAllocateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBufferAllocateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandBufferBeginInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBufferBeginInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandBufferBeginInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBufferBeginInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandBufferInheritanceConditionalRenderingInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBufferInheritanceConditionalRenderingInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandBufferInheritanceConditionalRenderingInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBufferInheritanceConditionalRenderingInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandBufferInheritanceInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBufferInheritanceInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandBufferInheritanceInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBufferInheritanceInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandBufferLevel>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBufferLevel>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandBufferLevel *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBufferLevel *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandBufferResetFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBufferResetFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandBufferResetFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBufferResetFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandBufferUsageFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBufferUsageFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandBufferUsageFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBufferUsageFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandPool>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandPool>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandPool *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandPool *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandPoolCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandPoolCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandPoolCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandPoolCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandPoolCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandPoolCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandPoolCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandPoolCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandPoolResetFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandPoolResetFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandPoolResetFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandPoolResetFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandPoolTrimFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandPoolTrimFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandPoolTrimFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandPoolTrimFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandPoolTrimFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandPoolTrimFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandPoolTrimFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandPoolTrimFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCompareOp>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCompareOp>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCompareOp *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCompareOp *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkComponentMapping>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkComponentMapping>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkComponentMapping *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkComponentMapping *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkComponentSwizzle>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkComponentSwizzle>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkComponentSwizzle *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkComponentSwizzle *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkComponentTypeNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkComponentTypeNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkComponentTypeNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkComponentTypeNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCompositeAlphaFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCompositeAlphaFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCompositeAlphaFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCompositeAlphaFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCompositeAlphaFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCompositeAlphaFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCompositeAlphaFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCompositeAlphaFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkComputePipelineCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkComputePipelineCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkComputePipelineCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkComputePipelineCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkConditionalRenderingBeginInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkConditionalRenderingBeginInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkConditionalRenderingBeginInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkConditionalRenderingBeginInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkConditionalRenderingFlagBitsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkConditionalRenderingFlagBitsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkConditionalRenderingFlagBitsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkConditionalRenderingFlagBitsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkConditionalRenderingFlagsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkConditionalRenderingFlagsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkConditionalRenderingFlagsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkConditionalRenderingFlagsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkConformanceVersionKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkConformanceVersionKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkConformanceVersionKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkConformanceVersionKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkConservativeRasterizationModeEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkConservativeRasterizationModeEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkConservativeRasterizationModeEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkConservativeRasterizationModeEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCooperativeMatrixPropertiesNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCooperativeMatrixPropertiesNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCooperativeMatrixPropertiesNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCooperativeMatrixPropertiesNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCopyAccelerationStructureModeNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCopyAccelerationStructureModeNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCopyAccelerationStructureModeNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCopyAccelerationStructureModeNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCopyDescriptorSet>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCopyDescriptorSet>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCopyDescriptorSet *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCopyDescriptorSet *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCoverageModulationModeNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCoverageModulationModeNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCoverageModulationModeNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCoverageModulationModeNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCoverageReductionModeNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCoverageReductionModeNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCoverageReductionModeNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCoverageReductionModeNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCullModeFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCullModeFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCullModeFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCullModeFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugMarkerMarkerInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugMarkerMarkerInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugMarkerMarkerInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugMarkerMarkerInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugMarkerObjectNameInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugMarkerObjectNameInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugMarkerObjectNameInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugMarkerObjectNameInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugMarkerObjectTagInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugMarkerObjectTagInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugMarkerObjectTagInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugMarkerObjectTagInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugReportCallbackCreateInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugReportCallbackCreateInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugReportCallbackCreateInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugReportCallbackCreateInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugReportCallbackEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugReportCallbackEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugReportCallbackEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugReportCallbackEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugReportFlagsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugReportFlagsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugReportFlagsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugReportFlagsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugReportObjectTypeEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugReportObjectTypeEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugReportObjectTypeEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugReportObjectTypeEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsLabelEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsLabelEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsLabelEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsLabelEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessageSeverityFlagBitsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessageSeverityFlagBitsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessageSeverityFlagBitsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessageSeverityFlagBitsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessageSeverityFlagsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessageSeverityFlagsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessageSeverityFlagsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessageSeverityFlagsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessageTypeFlagsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessageTypeFlagsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessageTypeFlagsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessageTypeFlagsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessengerCallbackDataEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessengerCallbackDataEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessengerCallbackDataEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessengerCallbackDataEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessengerCallbackDataFlagsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessengerCallbackDataFlagsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessengerCallbackDataFlagsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessengerCallbackDataFlagsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessengerCreateInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessengerCreateInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessengerCreateInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessengerCreateInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessengerEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessengerEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessengerEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessengerEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsObjectNameInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsObjectNameInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsObjectNameInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsObjectNameInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsObjectTagInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsObjectTagInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsObjectTagInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsObjectTagInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDedicatedAllocationBufferCreateInfoNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDedicatedAllocationBufferCreateInfoNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDedicatedAllocationBufferCreateInfoNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDedicatedAllocationBufferCreateInfoNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDedicatedAllocationImageCreateInfoNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDedicatedAllocationImageCreateInfoNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDedicatedAllocationImageCreateInfoNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDedicatedAllocationImageCreateInfoNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDedicatedAllocationMemoryAllocateInfoNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDedicatedAllocationMemoryAllocateInfoNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDedicatedAllocationMemoryAllocateInfoNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDedicatedAllocationMemoryAllocateInfoNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDependencyFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDependencyFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDependencyFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDependencyFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorBufferInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorBufferInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorBufferInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorBufferInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorImageInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorImageInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorImageInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorImageInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorPool>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorPool>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorPool *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorPool *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorPoolCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorPoolCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorPoolCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorPoolCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorPoolCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorPoolCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorPoolCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorPoolCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorPoolInlineUniformBlockCreateInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorPoolInlineUniformBlockCreateInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorPoolInlineUniformBlockCreateInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorPoolInlineUniformBlockCreateInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorPoolResetFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorPoolResetFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorPoolResetFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorPoolResetFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorPoolSize>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorPoolSize>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorPoolSize *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorPoolSize *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSet>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSet>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSet *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSet *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSetAllocateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSetAllocateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSetAllocateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSetAllocateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSetLayout>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSetLayout>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSetLayout *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSetLayout *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSetLayoutBinding>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSetLayoutBinding>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSetLayoutBinding *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSetLayoutBinding *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSetLayoutBindingFlagsCreateInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSetLayoutBindingFlagsCreateInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSetLayoutBindingFlagsCreateInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSetLayoutBindingFlagsCreateInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSetLayoutCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSetLayoutCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSetLayoutCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSetLayoutCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSetLayoutCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSetLayoutCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSetLayoutCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSetLayoutCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSetLayoutSupport>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSetLayoutSupport>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSetLayoutSupport *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSetLayoutSupport *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSetLayoutSupportKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSetLayoutSupportKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSetLayoutSupportKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSetLayoutSupportKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSetVariableDescriptorCountAllocateInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSetVariableDescriptorCountAllocateInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSetVariableDescriptorCountAllocateInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSetVariableDescriptorCountAllocateInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSetVariableDescriptorCountLayoutSupportEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSetVariableDescriptorCountLayoutSupportEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSetVariableDescriptorCountLayoutSupportEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSetVariableDescriptorCountLayoutSupportEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorType>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorType>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorType *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorType *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplate>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplate>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplate *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplate *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplateCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplateCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplateCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplateCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplateCreateFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplateCreateFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplateCreateFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplateCreateFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplateCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplateCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplateCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplateCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplateCreateInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplateCreateInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplateCreateInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplateCreateInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplateEntry>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplateEntry>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplateEntry *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplateEntry *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplateEntryKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplateEntryKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplateEntryKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplateEntryKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplateKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplateKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplateKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplateKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplateType>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplateType>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplateType *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplateType *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplateTypeKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplateTypeKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplateTypeKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplateTypeKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDevice>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDevice>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDevice *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDevice *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceAddress>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceAddress>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceAddress *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceAddress *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceAddress>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceAddress>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceAddress *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceAddress *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceEventInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceEventInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceEventInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceEventInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceEventTypeEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceEventTypeEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceEventTypeEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceEventTypeEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGeneratedCommandsFeaturesNVX>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGeneratedCommandsFeaturesNVX>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGeneratedCommandsFeaturesNVX *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGeneratedCommandsFeaturesNVX *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGeneratedCommandsLimitsNVX>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGeneratedCommandsLimitsNVX>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGeneratedCommandsLimitsNVX *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGeneratedCommandsLimitsNVX *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupBindSparseInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupBindSparseInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupBindSparseInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupBindSparseInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupBindSparseInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupBindSparseInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupBindSparseInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupBindSparseInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupCommandBufferBeginInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupCommandBufferBeginInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupCommandBufferBeginInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupCommandBufferBeginInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupCommandBufferBeginInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupCommandBufferBeginInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupCommandBufferBeginInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupCommandBufferBeginInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupDeviceCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupDeviceCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupDeviceCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupDeviceCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupDeviceCreateInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupDeviceCreateInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupDeviceCreateInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupDeviceCreateInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupPresentCapabilitiesKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupPresentCapabilitiesKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupPresentCapabilitiesKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupPresentCapabilitiesKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupPresentInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupPresentInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupPresentInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupPresentInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupPresentModeFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupPresentModeFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupPresentModeFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupPresentModeFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupPresentModeFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupPresentModeFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupPresentModeFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupPresentModeFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupRenderPassBeginInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupRenderPassBeginInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupRenderPassBeginInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupRenderPassBeginInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupRenderPassBeginInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupRenderPassBeginInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupRenderPassBeginInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupRenderPassBeginInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupSubmitInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupSubmitInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupSubmitInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupSubmitInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupSubmitInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupSubmitInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupSubmitInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupSubmitInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupSwapchainCreateInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupSwapchainCreateInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupSwapchainCreateInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupSwapchainCreateInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceMemory>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceMemory>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceMemory *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceMemory *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceMemoryOverallocationCreateInfoAMD>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceMemoryOverallocationCreateInfoAMD>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceMemoryOverallocationCreateInfoAMD *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceMemoryOverallocationCreateInfoAMD *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceQueueCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceQueueCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceQueueCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceQueueCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceQueueCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceQueueCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceQueueCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceQueueCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceQueueGlobalPriorityCreateInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceQueueGlobalPriorityCreateInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceQueueGlobalPriorityCreateInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceQueueGlobalPriorityCreateInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceQueueInfo2>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceQueueInfo2>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceQueueInfo2 *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceQueueInfo2 *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceSize>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceSize>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceSize *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceSize *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceSize>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceSize>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceSize *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceSize *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDiscardRectangleModeEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDiscardRectangleModeEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDiscardRectangleModeEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDiscardRectangleModeEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDispatchIndirectCommand>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDispatchIndirectCommand>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDispatchIndirectCommand *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDispatchIndirectCommand *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayEventInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayEventInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayEventInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayEventInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayEventTypeEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayEventTypeEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayEventTypeEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayEventTypeEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayModeCreateFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayModeCreateFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayModeCreateFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayModeCreateFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayModeCreateInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayModeCreateInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayModeCreateInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayModeCreateInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayModeKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayModeKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayModeKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayModeKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayModeParametersKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayModeParametersKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayModeParametersKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayModeParametersKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayModeProperties2KHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayModeProperties2KHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayModeProperties2KHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayModeProperties2KHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayModePropertiesKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayModePropertiesKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayModePropertiesKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayModePropertiesKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayNativeHdrSurfaceCapabilitiesAMD>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayNativeHdrSurfaceCapabilitiesAMD>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayNativeHdrSurfaceCapabilitiesAMD *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayNativeHdrSurfaceCapabilitiesAMD *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPlaneAlphaFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPlaneAlphaFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPlaneAlphaFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPlaneAlphaFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPlaneAlphaFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPlaneAlphaFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPlaneAlphaFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPlaneAlphaFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPlaneCapabilities2KHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPlaneCapabilities2KHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPlaneCapabilities2KHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPlaneCapabilities2KHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPlaneCapabilitiesKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPlaneCapabilitiesKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPlaneCapabilitiesKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPlaneCapabilitiesKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPlaneInfo2KHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPlaneInfo2KHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPlaneInfo2KHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPlaneInfo2KHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPlaneProperties2KHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPlaneProperties2KHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPlaneProperties2KHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPlaneProperties2KHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPlanePropertiesKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPlanePropertiesKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPlanePropertiesKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPlanePropertiesKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPowerInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPowerInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPowerInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPowerInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPowerStateEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPowerStateEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPowerStateEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPowerStateEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPresentInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPresentInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPresentInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPresentInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayProperties2KHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayProperties2KHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayProperties2KHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayProperties2KHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPropertiesKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPropertiesKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPropertiesKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPropertiesKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplaySurfaceCreateFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplaySurfaceCreateFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplaySurfaceCreateFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplaySurfaceCreateFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplaySurfaceCreateInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplaySurfaceCreateInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplaySurfaceCreateInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplaySurfaceCreateInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDrawIndexedIndirectCommand>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDrawIndexedIndirectCommand>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDrawIndexedIndirectCommand *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDrawIndexedIndirectCommand *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDrawIndirectCommand>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDrawIndirectCommand>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDrawIndirectCommand *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDrawIndirectCommand *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDrawMeshTasksIndirectCommandNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDrawMeshTasksIndirectCommandNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDrawMeshTasksIndirectCommandNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDrawMeshTasksIndirectCommandNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDriverIdKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDriverIdKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDriverIdKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDriverIdKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDrmFormatModifierPropertiesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDrmFormatModifierPropertiesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDrmFormatModifierPropertiesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDrmFormatModifierPropertiesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDrmFormatModifierPropertiesListEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDrmFormatModifierPropertiesListEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDrmFormatModifierPropertiesListEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDrmFormatModifierPropertiesListEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDynamicState>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDynamicState>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDynamicState *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDynamicState *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VKenum>))
    {
        return stream << *reinterpret_cast<const Value<vk::VKenum>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VKenum *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VKenum *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkEvent>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkEvent>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkEvent *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkEvent *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkEventCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkEventCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkEventCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkEventCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkEventCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkEventCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkEventCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkEventCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExportFenceCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExportFenceCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExportFenceCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExportFenceCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExportFenceCreateInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExportFenceCreateInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExportFenceCreateInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExportFenceCreateInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExportMemoryAllocateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExportMemoryAllocateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExportMemoryAllocateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExportMemoryAllocateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExportMemoryAllocateInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExportMemoryAllocateInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExportMemoryAllocateInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExportMemoryAllocateInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExportMemoryAllocateInfoNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExportMemoryAllocateInfoNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExportMemoryAllocateInfoNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExportMemoryAllocateInfoNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExportSemaphoreCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExportSemaphoreCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExportSemaphoreCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExportSemaphoreCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExportSemaphoreCreateInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExportSemaphoreCreateInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExportSemaphoreCreateInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExportSemaphoreCreateInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VKextension>))
    {
        return stream << *reinterpret_cast<const Value<vk::VKextension>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VKextension *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VKextension *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExtensionProperties>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExtensionProperties>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExtensionProperties *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExtensionProperties *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExtent2D>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExtent2D>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExtent2D *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExtent2D *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExtent3D>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExtent3D>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExtent3D *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExtent3D *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalBufferProperties>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalBufferProperties>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalBufferProperties *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalBufferProperties *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalBufferPropertiesKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalBufferPropertiesKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalBufferPropertiesKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalBufferPropertiesKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceFeatureFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceFeatureFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceFeatureFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceFeatureFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceFeatureFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceFeatureFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceFeatureFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceFeatureFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceFeatureFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceFeatureFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceFeatureFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceFeatureFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceFeatureFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceFeatureFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceFeatureFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceFeatureFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceHandleTypeFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceHandleTypeFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceHandleTypeFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceHandleTypeFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceHandleTypeFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceHandleTypeFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceHandleTypeFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceHandleTypeFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceHandleTypeFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceHandleTypeFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceHandleTypeFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceHandleTypeFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceHandleTypeFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceHandleTypeFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceHandleTypeFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceHandleTypeFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceProperties>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceProperties>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceProperties *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceProperties *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalFencePropertiesKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFencePropertiesKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalFencePropertiesKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFencePropertiesKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalImageFormatProperties>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalImageFormatProperties>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalImageFormatProperties *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalImageFormatProperties *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalImageFormatPropertiesKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalImageFormatPropertiesKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalImageFormatPropertiesKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalImageFormatPropertiesKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalImageFormatPropertiesNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalImageFormatPropertiesNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalImageFormatPropertiesNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalImageFormatPropertiesNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryBufferCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryBufferCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryBufferCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryBufferCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryBufferCreateInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryBufferCreateInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryBufferCreateInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryBufferCreateInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryFeatureFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryFeatureFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryFeatureFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryFeatureFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryFeatureFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryFeatureFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryFeatureFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryFeatureFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryFeatureFlagBitsNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryFeatureFlagBitsNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryFeatureFlagBitsNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryFeatureFlagBitsNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryFeatureFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryFeatureFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryFeatureFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryFeatureFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryFeatureFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryFeatureFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryFeatureFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryFeatureFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryFeatureFlagsNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryFeatureFlagsNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryFeatureFlagsNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryFeatureFlagsNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryHandleTypeFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryHandleTypeFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryHandleTypeFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryHandleTypeFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryHandleTypeFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryHandleTypeFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryHandleTypeFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryHandleTypeFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryHandleTypeFlagBitsNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryHandleTypeFlagBitsNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryHandleTypeFlagBitsNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryHandleTypeFlagBitsNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryHandleTypeFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryHandleTypeFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryHandleTypeFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryHandleTypeFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryHandleTypeFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryHandleTypeFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryHandleTypeFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryHandleTypeFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryHandleTypeFlagsNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryHandleTypeFlagsNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryHandleTypeFlagsNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryHandleTypeFlagsNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryImageCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryImageCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryImageCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryImageCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryImageCreateInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryImageCreateInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryImageCreateInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryImageCreateInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryImageCreateInfoNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryImageCreateInfoNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryImageCreateInfoNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryImageCreateInfoNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryProperties>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryProperties>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryProperties *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryProperties *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryPropertiesKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryPropertiesKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryPropertiesKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryPropertiesKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreFeatureFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreFeatureFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreFeatureFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreFeatureFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreFeatureFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreFeatureFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreFeatureFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreFeatureFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreFeatureFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreFeatureFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreFeatureFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreFeatureFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreFeatureFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreFeatureFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreFeatureFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreFeatureFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreHandleTypeFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreHandleTypeFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreHandleTypeFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreHandleTypeFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreHandleTypeFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreHandleTypeFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreHandleTypeFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreHandleTypeFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreHandleTypeFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreHandleTypeFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreHandleTypeFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreHandleTypeFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreHandleTypeFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreHandleTypeFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreHandleTypeFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreHandleTypeFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreProperties>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreProperties>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreProperties *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreProperties *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphorePropertiesKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphorePropertiesKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphorePropertiesKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphorePropertiesKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFence>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFence>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFence *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFence *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFenceCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFenceCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFenceCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFenceCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFenceCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFenceCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFenceCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFenceCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFenceGetFdInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFenceGetFdInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFenceGetFdInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFenceGetFdInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFenceImportFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFenceImportFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFenceImportFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFenceImportFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFenceImportFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFenceImportFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFenceImportFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFenceImportFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFenceImportFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFenceImportFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFenceImportFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFenceImportFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFenceImportFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFenceImportFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFenceImportFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFenceImportFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFilter>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFilter>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFilter *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFilter *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFilterCubicImageViewImageFormatPropertiesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFilterCubicImageViewImageFormatPropertiesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFilterCubicImageViewImageFormatPropertiesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFilterCubicImageViewImageFormatPropertiesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFormat>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormat>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFormat *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormat *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFormatFeatureFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormatFeatureFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFormatFeatureFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormatFeatureFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFormatProperties>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormatProperties>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFormatProperties *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormatProperties *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFormatProperties2>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormatProperties2>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFormatProperties2 *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormatProperties2 *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFormatProperties2KHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormatProperties2KHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFormatProperties2KHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormatProperties2KHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFramebuffer>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFramebuffer>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFramebuffer *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFramebuffer *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFramebufferAttachmentsCreateInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFramebufferAttachmentsCreateInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFramebufferAttachmentsCreateInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFramebufferAttachmentsCreateInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFramebufferCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFramebufferCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFramebufferCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFramebufferCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFramebufferCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFramebufferCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFramebufferCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFramebufferCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFramebufferMixedSamplesCombinationNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFramebufferMixedSamplesCombinationNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFramebufferMixedSamplesCombinationNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFramebufferMixedSamplesCombinationNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFrontFace>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFrontFace>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFrontFace *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFrontFace *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkGeometryAABBNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryAABBNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkGeometryAABBNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryAABBNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkGeometryDataNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryDataNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkGeometryDataNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryDataNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkGeometryFlagBitsNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryFlagBitsNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkGeometryFlagBitsNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryFlagBitsNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkGeometryFlagsNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryFlagsNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkGeometryFlagsNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryFlagsNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkGeometryInstanceFlagBitsNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryInstanceFlagBitsNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkGeometryInstanceFlagBitsNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryInstanceFlagBitsNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkGeometryInstanceFlagsNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryInstanceFlagsNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkGeometryInstanceFlagsNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryInstanceFlagsNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkGeometryNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkGeometryNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkGeometryTrianglesNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryTrianglesNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkGeometryTrianglesNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryTrianglesNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkGeometryTypeNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryTypeNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkGeometryTypeNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryTypeNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkGraphicsPipelineCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGraphicsPipelineCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkGraphicsPipelineCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGraphicsPipelineCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkHdrMetadataEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkHdrMetadataEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkHdrMetadataEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkHdrMetadataEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkHeadlessSurfaceCreateFlagsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkHeadlessSurfaceCreateFlagsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkHeadlessSurfaceCreateFlagsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkHeadlessSurfaceCreateFlagsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkHeadlessSurfaceCreateInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkHeadlessSurfaceCreateInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkHeadlessSurfaceCreateInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkHeadlessSurfaceCreateInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImage>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImage>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImage *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImage *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageAspectFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageAspectFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageAspectFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageAspectFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageBlit>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageBlit>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageBlit *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageBlit *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageCopy>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageCopy>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageCopy *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageCopy *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageDrmFormatModifierExplicitCreateInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageDrmFormatModifierExplicitCreateInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageDrmFormatModifierExplicitCreateInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageDrmFormatModifierExplicitCreateInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageDrmFormatModifierListCreateInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageDrmFormatModifierListCreateInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageDrmFormatModifierListCreateInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageDrmFormatModifierListCreateInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageDrmFormatModifierPropertiesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageDrmFormatModifierPropertiesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageDrmFormatModifierPropertiesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageDrmFormatModifierPropertiesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageFormatListCreateInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageFormatListCreateInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageFormatListCreateInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageFormatListCreateInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageFormatProperties>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageFormatProperties>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageFormatProperties *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageFormatProperties *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageFormatProperties2>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageFormatProperties2>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageFormatProperties2 *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageFormatProperties2 *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageFormatProperties2KHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageFormatProperties2KHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageFormatProperties2KHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageFormatProperties2KHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageLayout>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageLayout>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageLayout *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageLayout *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageMemoryBarrier>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageMemoryBarrier>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageMemoryBarrier *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageMemoryBarrier *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageMemoryRequirementsInfo2>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageMemoryRequirementsInfo2>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageMemoryRequirementsInfo2 *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageMemoryRequirementsInfo2 *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageMemoryRequirementsInfo2KHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageMemoryRequirementsInfo2KHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageMemoryRequirementsInfo2KHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageMemoryRequirementsInfo2KHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImagePlaneMemoryRequirementsInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImagePlaneMemoryRequirementsInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImagePlaneMemoryRequirementsInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImagePlaneMemoryRequirementsInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImagePlaneMemoryRequirementsInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImagePlaneMemoryRequirementsInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImagePlaneMemoryRequirementsInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImagePlaneMemoryRequirementsInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageResolve>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageResolve>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageResolve *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageResolve *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageSparseMemoryRequirementsInfo2>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageSparseMemoryRequirementsInfo2>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageSparseMemoryRequirementsInfo2 *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageSparseMemoryRequirementsInfo2 *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageSparseMemoryRequirementsInfo2KHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageSparseMemoryRequirementsInfo2KHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageSparseMemoryRequirementsInfo2KHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageSparseMemoryRequirementsInfo2KHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageStencilUsageCreateInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageStencilUsageCreateInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageStencilUsageCreateInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageStencilUsageCreateInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageSubresource>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageSubresource>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageSubresource *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageSubresource *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageSubresourceLayers>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageSubresourceLayers>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageSubresourceLayers *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageSubresourceLayers *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageSubresourceRange>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageSubresourceRange>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageSubresourceRange *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageSubresourceRange *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageSwapchainCreateInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageSwapchainCreateInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageSwapchainCreateInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageSwapchainCreateInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageTiling>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageTiling>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageTiling *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageTiling *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageType>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageType>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageType *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageType *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageUsageFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageUsageFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageUsageFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageUsageFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageView>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageView>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageView *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageView *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageViewASTCDecodeModeEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageViewASTCDecodeModeEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageViewASTCDecodeModeEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageViewASTCDecodeModeEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageViewCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageViewCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageViewCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageViewCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageViewCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageViewCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageViewCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageViewCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageViewHandleInfoNVX>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageViewHandleInfoNVX>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageViewHandleInfoNVX *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageViewHandleInfoNVX *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageViewType>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageViewType>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageViewType *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageViewType *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageViewUsageCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageViewUsageCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageViewUsageCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageViewUsageCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageViewUsageCreateInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageViewUsageCreateInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageViewUsageCreateInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageViewUsageCreateInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImportFenceFdInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImportFenceFdInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImportFenceFdInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImportFenceFdInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImportMemoryFdInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImportMemoryFdInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImportMemoryFdInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImportMemoryFdInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImportMemoryHostPointerInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImportMemoryHostPointerInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImportMemoryHostPointerInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImportMemoryHostPointerInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImportSemaphoreFdInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImportSemaphoreFdInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImportSemaphoreFdInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImportSemaphoreFdInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkIndexType>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndexType>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkIndexType *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndexType *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkIndirectCommandsLayoutCreateInfoNVX>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndirectCommandsLayoutCreateInfoNVX>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkIndirectCommandsLayoutCreateInfoNVX *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndirectCommandsLayoutCreateInfoNVX *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkIndirectCommandsLayoutNVX>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndirectCommandsLayoutNVX>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkIndirectCommandsLayoutNVX *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndirectCommandsLayoutNVX *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkIndirectCommandsLayoutTokenNVX>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndirectCommandsLayoutTokenNVX>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkIndirectCommandsLayoutTokenNVX *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndirectCommandsLayoutTokenNVX *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkIndirectCommandsLayoutUsageFlagBitsNVX>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndirectCommandsLayoutUsageFlagBitsNVX>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkIndirectCommandsLayoutUsageFlagBitsNVX *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndirectCommandsLayoutUsageFlagBitsNVX *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkIndirectCommandsLayoutUsageFlagsNVX>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndirectCommandsLayoutUsageFlagsNVX>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkIndirectCommandsLayoutUsageFlagsNVX *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndirectCommandsLayoutUsageFlagsNVX *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkIndirectCommandsTokenNVX>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndirectCommandsTokenNVX>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkIndirectCommandsTokenNVX *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndirectCommandsTokenNVX *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkIndirectCommandsTokenTypeNVX>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndirectCommandsTokenTypeNVX>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkIndirectCommandsTokenTypeNVX *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndirectCommandsTokenTypeNVX *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkInitializePerformanceApiInfoINTEL>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkInitializePerformanceApiInfoINTEL>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkInitializePerformanceApiInfoINTEL *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkInitializePerformanceApiInfoINTEL *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkInputAttachmentAspectReference>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkInputAttachmentAspectReference>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkInputAttachmentAspectReference *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkInputAttachmentAspectReference *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkInputAttachmentAspectReferenceKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkInputAttachmentAspectReferenceKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkInputAttachmentAspectReferenceKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkInputAttachmentAspectReferenceKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkInstance>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkInstance>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkInstance *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkInstance *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkInstanceCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkInstanceCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkInstanceCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkInstanceCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkInstanceCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkInstanceCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkInstanceCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkInstanceCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkInternalAllocationType>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkInternalAllocationType>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkInternalAllocationType *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkInternalAllocationType *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkLayerProperties>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkLayerProperties>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkLayerProperties *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkLayerProperties *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkLineRasterizationModeEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkLineRasterizationModeEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkLineRasterizationModeEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkLineRasterizationModeEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkLogicOp>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkLogicOp>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkLogicOp *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkLogicOp *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMappedMemoryRange>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMappedMemoryRange>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMappedMemoryRange *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMappedMemoryRange *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryAllocateFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryAllocateFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryAllocateFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryAllocateFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryAllocateFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryAllocateFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryAllocateFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryAllocateFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryAllocateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryAllocateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryAllocateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryAllocateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryAllocateFlagsInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryAllocateFlagsInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryAllocateFlagsInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryAllocateFlagsInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryAllocateFlagsInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryAllocateFlagsInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryAllocateFlagsInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryAllocateFlagsInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryAllocateFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryAllocateFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryAllocateFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryAllocateFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryAllocateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryAllocateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryAllocateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryAllocateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryBarrier>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryBarrier>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryBarrier *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryBarrier *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryDedicatedAllocateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryDedicatedAllocateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryDedicatedAllocateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryDedicatedAllocateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryDedicatedAllocateInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryDedicatedAllocateInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryDedicatedAllocateInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryDedicatedAllocateInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryDedicatedRequirements>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryDedicatedRequirements>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryDedicatedRequirements *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryDedicatedRequirements *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryDedicatedRequirementsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryDedicatedRequirementsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryDedicatedRequirementsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryDedicatedRequirementsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryFdPropertiesKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryFdPropertiesKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryFdPropertiesKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryFdPropertiesKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryGetFdInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryGetFdInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryGetFdInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryGetFdInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryHeap>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryHeap>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryHeap *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryHeap *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryHeapFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryHeapFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryHeapFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryHeapFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryHostPointerPropertiesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryHostPointerPropertiesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryHostPointerPropertiesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryHostPointerPropertiesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryMapFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryMapFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryMapFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryMapFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryOverallocationBehaviorAMD>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryOverallocationBehaviorAMD>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryOverallocationBehaviorAMD *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryOverallocationBehaviorAMD *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryPriorityAllocateInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryPriorityAllocateInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryPriorityAllocateInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryPriorityAllocateInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryPropertyFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryPropertyFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryPropertyFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryPropertyFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryRequirements>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryRequirements>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryRequirements *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryRequirements *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryRequirements2>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryRequirements2>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryRequirements2 *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryRequirements2 *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryRequirements2KHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryRequirements2KHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryRequirements2KHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryRequirements2KHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryType>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryType>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryType *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryType *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMultisamplePropertiesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMultisamplePropertiesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMultisamplePropertiesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMultisamplePropertiesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkObjectEntryTypeNVX>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectEntryTypeNVX>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkObjectEntryTypeNVX *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectEntryTypeNVX *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkObjectEntryUsageFlagBitsNVX>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectEntryUsageFlagBitsNVX>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkObjectEntryUsageFlagBitsNVX *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectEntryUsageFlagBitsNVX *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkObjectEntryUsageFlagsNVX>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectEntryUsageFlagsNVX>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkObjectEntryUsageFlagsNVX *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectEntryUsageFlagsNVX *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkObjectTableCreateInfoNVX>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectTableCreateInfoNVX>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkObjectTableCreateInfoNVX *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectTableCreateInfoNVX *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkObjectTableDescriptorSetEntryNVX>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectTableDescriptorSetEntryNVX>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkObjectTableDescriptorSetEntryNVX *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectTableDescriptorSetEntryNVX *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkObjectTableEntryNVX>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectTableEntryNVX>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkObjectTableEntryNVX *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectTableEntryNVX *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkObjectTableIndexBufferEntryNVX>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectTableIndexBufferEntryNVX>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkObjectTableIndexBufferEntryNVX *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectTableIndexBufferEntryNVX *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkObjectTableNVX>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectTableNVX>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkObjectTableNVX *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectTableNVX *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkObjectTablePipelineEntryNVX>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectTablePipelineEntryNVX>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkObjectTablePipelineEntryNVX *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectTablePipelineEntryNVX *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkObjectTablePushConstantEntryNVX>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectTablePushConstantEntryNVX>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkObjectTablePushConstantEntryNVX *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectTablePushConstantEntryNVX *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkObjectTableVertexBufferEntryNVX>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectTableVertexBufferEntryNVX>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkObjectTableVertexBufferEntryNVX *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectTableVertexBufferEntryNVX *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkObjectType>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectType>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkObjectType *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectType *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkOffset2D>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkOffset2D>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkOffset2D *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkOffset2D *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkOffset3D>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkOffset3D>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkOffset3D *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkOffset3D *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPastPresentationTimingGOOGLE>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPastPresentationTimingGOOGLE>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPastPresentationTimingGOOGLE *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPastPresentationTimingGOOGLE *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPeerMemoryFeatureFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPeerMemoryFeatureFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPeerMemoryFeatureFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPeerMemoryFeatureFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPeerMemoryFeatureFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPeerMemoryFeatureFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPeerMemoryFeatureFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPeerMemoryFeatureFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPeerMemoryFeatureFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPeerMemoryFeatureFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPeerMemoryFeatureFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPeerMemoryFeatureFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPeerMemoryFeatureFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPeerMemoryFeatureFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPeerMemoryFeatureFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPeerMemoryFeatureFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceConfigurationAcquireInfoINTEL>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceConfigurationAcquireInfoINTEL>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceConfigurationAcquireInfoINTEL *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceConfigurationAcquireInfoINTEL *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceConfigurationINTEL>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceConfigurationINTEL>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceConfigurationINTEL *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceConfigurationINTEL *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceConfigurationTypeINTEL>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceConfigurationTypeINTEL>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceConfigurationTypeINTEL *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceConfigurationTypeINTEL *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceMarkerInfoINTEL>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceMarkerInfoINTEL>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceMarkerInfoINTEL *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceMarkerInfoINTEL *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceOverrideInfoINTEL>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceOverrideInfoINTEL>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceOverrideInfoINTEL *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceOverrideInfoINTEL *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceOverrideTypeINTEL>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceOverrideTypeINTEL>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceOverrideTypeINTEL *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceOverrideTypeINTEL *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceParameterTypeINTEL>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceParameterTypeINTEL>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceParameterTypeINTEL *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceParameterTypeINTEL *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceStreamMarkerInfoINTEL>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceStreamMarkerInfoINTEL>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceStreamMarkerInfoINTEL *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceStreamMarkerInfoINTEL *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceValueDataINTEL>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceValueDataINTEL>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceValueDataINTEL *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceValueDataINTEL *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceValueINTEL>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceValueINTEL>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceValueINTEL *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceValueINTEL *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceValueTypeINTEL>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceValueTypeINTEL>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceValueTypeINTEL *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceValueTypeINTEL *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDevice>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDevice>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDevice *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDevice *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDevice16BitStorageFeatures>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDevice16BitStorageFeatures>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDevice16BitStorageFeatures *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDevice16BitStorageFeatures *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDevice16BitStorageFeaturesKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDevice16BitStorageFeaturesKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDevice16BitStorageFeaturesKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDevice16BitStorageFeaturesKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDevice8BitStorageFeaturesKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDevice8BitStorageFeaturesKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDevice8BitStorageFeaturesKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDevice8BitStorageFeaturesKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceASTCDecodeFeaturesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceASTCDecodeFeaturesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceASTCDecodeFeaturesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceASTCDecodeFeaturesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceBufferAddressFeaturesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceBufferAddressFeaturesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceBufferAddressFeaturesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceBufferAddressFeaturesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceBufferDeviceAddressFeaturesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceBufferDeviceAddressFeaturesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceBufferDeviceAddressFeaturesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceBufferDeviceAddressFeaturesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceComputeShaderDerivativesFeaturesNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceComputeShaderDerivativesFeaturesNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceConditionalRenderingFeaturesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceConditionalRenderingFeaturesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceConditionalRenderingFeaturesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceConditionalRenderingFeaturesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceConservativeRasterizationPropertiesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceConservativeRasterizationPropertiesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceConservativeRasterizationPropertiesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceConservativeRasterizationPropertiesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceCooperativeMatrixFeaturesNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceCooperativeMatrixFeaturesNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceCooperativeMatrixFeaturesNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceCooperativeMatrixFeaturesNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceCooperativeMatrixPropertiesNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceCooperativeMatrixPropertiesNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceCooperativeMatrixPropertiesNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceCooperativeMatrixPropertiesNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceCornerSampledImageFeaturesNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceCornerSampledImageFeaturesNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceCornerSampledImageFeaturesNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceCornerSampledImageFeaturesNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceCoverageReductionModeFeaturesNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceCoverageReductionModeFeaturesNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceCoverageReductionModeFeaturesNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceCoverageReductionModeFeaturesNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceDepthClipEnableFeaturesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceDepthClipEnableFeaturesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceDepthClipEnableFeaturesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceDepthClipEnableFeaturesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceDepthStencilResolvePropertiesKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceDepthStencilResolvePropertiesKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceDepthStencilResolvePropertiesKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceDepthStencilResolvePropertiesKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceDescriptorIndexingFeaturesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceDescriptorIndexingFeaturesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceDescriptorIndexingFeaturesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceDescriptorIndexingFeaturesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceDescriptorIndexingPropertiesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceDescriptorIndexingPropertiesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceDescriptorIndexingPropertiesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceDescriptorIndexingPropertiesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceDiscardRectanglePropertiesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceDiscardRectanglePropertiesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceDiscardRectanglePropertiesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceDiscardRectanglePropertiesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceDriverPropertiesKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceDriverPropertiesKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceDriverPropertiesKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceDriverPropertiesKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceExclusiveScissorFeaturesNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceExclusiveScissorFeaturesNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceExclusiveScissorFeaturesNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceExclusiveScissorFeaturesNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceExternalBufferInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceExternalBufferInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceExternalBufferInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceExternalBufferInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceExternalBufferInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceExternalBufferInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceExternalBufferInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceExternalBufferInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceExternalFenceInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceExternalFenceInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceExternalFenceInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceExternalFenceInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceExternalFenceInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceExternalFenceInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceExternalFenceInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceExternalFenceInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceExternalImageFormatInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceExternalImageFormatInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceExternalImageFormatInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceExternalImageFormatInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceExternalImageFormatInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceExternalImageFormatInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceExternalImageFormatInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceExternalImageFormatInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceExternalMemoryHostPropertiesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceExternalMemoryHostPropertiesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceExternalMemoryHostPropertiesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceExternalMemoryHostPropertiesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceExternalSemaphoreInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceExternalSemaphoreInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceExternalSemaphoreInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceExternalSemaphoreInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceExternalSemaphoreInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceExternalSemaphoreInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceExternalSemaphoreInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceExternalSemaphoreInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceFeatures>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceFeatures>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceFeatures *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceFeatures *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceFeatures2>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceFeatures2>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceFeatures2 *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceFeatures2 *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceFeatures2KHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceFeatures2KHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceFeatures2KHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceFeatures2KHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceFloat16Int8FeaturesKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceFloat16Int8FeaturesKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceFloat16Int8FeaturesKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceFloat16Int8FeaturesKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceFloatControlsPropertiesKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceFloatControlsPropertiesKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceFloatControlsPropertiesKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceFloatControlsPropertiesKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceFragmentDensityMapFeaturesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceFragmentDensityMapFeaturesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceFragmentDensityMapFeaturesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceFragmentDensityMapFeaturesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceFragmentDensityMapPropertiesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceFragmentDensityMapPropertiesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceFragmentDensityMapPropertiesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceFragmentDensityMapPropertiesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceGroupProperties>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceGroupProperties>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceGroupProperties *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceGroupProperties *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceGroupPropertiesKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceGroupPropertiesKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceGroupPropertiesKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceGroupPropertiesKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceHostQueryResetFeaturesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceHostQueryResetFeaturesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceHostQueryResetFeaturesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceHostQueryResetFeaturesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceIDProperties>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceIDProperties>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceIDProperties *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceIDProperties *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceIDPropertiesKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceIDPropertiesKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceIDPropertiesKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceIDPropertiesKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceImageDrmFormatModifierInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceImageDrmFormatModifierInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceImageDrmFormatModifierInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceImageDrmFormatModifierInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceImageFormatInfo2>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceImageFormatInfo2>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceImageFormatInfo2 *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceImageFormatInfo2 *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceImageFormatInfo2KHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceImageFormatInfo2KHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceImageFormatInfo2KHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceImageFormatInfo2KHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceImagelessFramebufferFeaturesKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceImagelessFramebufferFeaturesKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceImagelessFramebufferFeaturesKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceImagelessFramebufferFeaturesKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceImageViewImageFormatInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceImageViewImageFormatInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceImageViewImageFormatInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceImageViewImageFormatInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceIndexTypeUint8FeaturesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceIndexTypeUint8FeaturesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceIndexTypeUint8FeaturesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceIndexTypeUint8FeaturesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceInlineUniformBlockFeaturesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceInlineUniformBlockFeaturesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceInlineUniformBlockFeaturesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceInlineUniformBlockFeaturesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceInlineUniformBlockPropertiesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceInlineUniformBlockPropertiesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceInlineUniformBlockPropertiesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceInlineUniformBlockPropertiesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceLimits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceLimits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceLimits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceLimits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceLineRasterizationFeaturesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceLineRasterizationFeaturesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceLineRasterizationFeaturesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceLineRasterizationFeaturesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceLineRasterizationPropertiesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceLineRasterizationPropertiesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceLineRasterizationPropertiesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceLineRasterizationPropertiesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceMaintenance3Properties>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceMaintenance3Properties>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceMaintenance3Properties *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceMaintenance3Properties *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceMaintenance3PropertiesKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceMaintenance3PropertiesKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceMaintenance3PropertiesKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceMaintenance3PropertiesKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceMemoryBudgetPropertiesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceMemoryBudgetPropertiesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceMemoryBudgetPropertiesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceMemoryBudgetPropertiesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceMemoryPriorityFeaturesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceMemoryPriorityFeaturesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceMemoryPriorityFeaturesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceMemoryPriorityFeaturesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceMemoryProperties>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceMemoryProperties>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceMemoryProperties *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceMemoryProperties *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceMemoryProperties2>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceMemoryProperties2>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceMemoryProperties2 *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceMemoryProperties2 *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceMemoryProperties2KHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceMemoryProperties2KHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceMemoryProperties2KHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceMemoryProperties2KHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceMeshShaderFeaturesNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceMeshShaderFeaturesNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceMeshShaderFeaturesNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceMeshShaderFeaturesNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceMeshShaderPropertiesNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceMeshShaderPropertiesNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceMeshShaderPropertiesNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceMeshShaderPropertiesNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceMultiviewFeatures>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceMultiviewFeatures>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceMultiviewFeatures *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceMultiviewFeatures *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceMultiviewFeaturesKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceMultiviewFeaturesKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceMultiviewFeaturesKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceMultiviewFeaturesKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceMultiviewProperties>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceMultiviewProperties>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceMultiviewProperties *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceMultiviewProperties *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceMultiviewPropertiesKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceMultiviewPropertiesKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceMultiviewPropertiesKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceMultiviewPropertiesKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDevicePCIBusInfoPropertiesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDevicePCIBusInfoPropertiesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDevicePCIBusInfoPropertiesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDevicePCIBusInfoPropertiesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDevicePointClippingProperties>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDevicePointClippingProperties>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDevicePointClippingProperties *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDevicePointClippingProperties *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDevicePointClippingPropertiesKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDevicePointClippingPropertiesKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDevicePointClippingPropertiesKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDevicePointClippingPropertiesKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceProperties>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceProperties>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceProperties *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceProperties *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceProperties2>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceProperties2>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceProperties2 *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceProperties2 *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceProperties2KHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceProperties2KHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceProperties2KHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceProperties2KHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceProtectedMemoryFeatures>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceProtectedMemoryFeatures>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceProtectedMemoryFeatures *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceProtectedMemoryFeatures *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceProtectedMemoryProperties>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceProtectedMemoryProperties>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceProtectedMemoryProperties *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceProtectedMemoryProperties *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDevicePushDescriptorPropertiesKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDevicePushDescriptorPropertiesKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDevicePushDescriptorPropertiesKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDevicePushDescriptorPropertiesKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceRayTracingPropertiesNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceRayTracingPropertiesNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceRayTracingPropertiesNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceRayTracingPropertiesNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceSampleLocationsPropertiesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceSampleLocationsPropertiesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceSampleLocationsPropertiesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceSampleLocationsPropertiesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceSamplerYcbcrConversionFeatures>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceSamplerYcbcrConversionFeatures>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceSamplerYcbcrConversionFeatures *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceSamplerYcbcrConversionFeatures *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceScalarBlockLayoutFeaturesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceScalarBlockLayoutFeaturesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceScalarBlockLayoutFeaturesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceScalarBlockLayoutFeaturesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceShaderAtomicInt64FeaturesKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceShaderAtomicInt64FeaturesKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceShaderAtomicInt64FeaturesKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceShaderAtomicInt64FeaturesKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceShaderCoreProperties2AMD>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceShaderCoreProperties2AMD>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceShaderCoreProperties2AMD *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceShaderCoreProperties2AMD *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceShaderCorePropertiesAMD>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceShaderCorePropertiesAMD>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceShaderCorePropertiesAMD *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceShaderCorePropertiesAMD *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceShaderDrawParameterFeatures>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceShaderDrawParameterFeatures>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceShaderDrawParameterFeatures *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceShaderDrawParameterFeatures *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceShaderDrawParametersFeatures>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceShaderDrawParametersFeatures>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceShaderDrawParametersFeatures *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceShaderDrawParametersFeatures *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceShaderFloat16Int8FeaturesKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceShaderFloat16Int8FeaturesKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceShaderFloat16Int8FeaturesKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceShaderFloat16Int8FeaturesKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceShaderImageFootprintFeaturesNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceShaderImageFootprintFeaturesNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceShaderImageFootprintFeaturesNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceShaderImageFootprintFeaturesNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceShaderSMBuiltinsFeaturesNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceShaderSMBuiltinsFeaturesNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceShaderSMBuiltinsFeaturesNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceShaderSMBuiltinsFeaturesNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceShaderSMBuiltinsPropertiesNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceShaderSMBuiltinsPropertiesNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceShaderSMBuiltinsPropertiesNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceShaderSMBuiltinsPropertiesNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceShadingRateImageFeaturesNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceShadingRateImageFeaturesNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceShadingRateImageFeaturesNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceShadingRateImageFeaturesNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceShadingRateImagePropertiesNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceShadingRateImagePropertiesNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceShadingRateImagePropertiesNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceShadingRateImagePropertiesNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceSparseImageFormatInfo2>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceSparseImageFormatInfo2>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceSparseImageFormatInfo2 *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceSparseImageFormatInfo2 *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceSparseImageFormatInfo2KHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceSparseImageFormatInfo2KHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceSparseImageFormatInfo2KHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceSparseImageFormatInfo2KHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceSparseProperties>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceSparseProperties>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceSparseProperties *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceSparseProperties *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceSubgroupProperties>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceSubgroupProperties>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceSubgroupProperties *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceSubgroupProperties *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceSubgroupSizeControlFeaturesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceSubgroupSizeControlFeaturesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceSubgroupSizeControlFeaturesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceSubgroupSizeControlFeaturesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceSubgroupSizeControlPropertiesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceSubgroupSizeControlPropertiesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceSubgroupSizeControlPropertiesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceSubgroupSizeControlPropertiesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceSurfaceInfo2KHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceSurfaceInfo2KHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceSurfaceInfo2KHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceSurfaceInfo2KHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceTransformFeedbackFeaturesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceTransformFeedbackFeaturesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceTransformFeedbackFeaturesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceTransformFeedbackFeaturesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceTransformFeedbackPropertiesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceTransformFeedbackPropertiesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceTransformFeedbackPropertiesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceTransformFeedbackPropertiesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceType>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceType>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceType *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceType *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceVariablePointerFeatures>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceVariablePointerFeatures>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceVariablePointerFeatures *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceVariablePointerFeatures *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceVariablePointersFeatures>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceVariablePointersFeatures>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceVariablePointersFeatures *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceVariablePointersFeatures *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceVulkanMemoryModelFeaturesKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceVulkanMemoryModelFeaturesKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceVulkanMemoryModelFeaturesKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceVulkanMemoryModelFeaturesKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceYcbcrImageArraysFeaturesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceYcbcrImageArraysFeaturesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipeline>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipeline>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipeline *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipeline *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineBindPoint>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineBindPoint>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineBindPoint *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineBindPoint *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCache>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCache>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCache *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCache *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCacheCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCacheCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCacheCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCacheCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCacheCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCacheCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCacheCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCacheCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCacheHeaderVersion>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCacheHeaderVersion>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCacheHeaderVersion *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCacheHeaderVersion *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineColorBlendAdvancedStateCreateInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineColorBlendAdvancedStateCreateInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineColorBlendAdvancedStateCreateInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineColorBlendAdvancedStateCreateInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineColorBlendAttachmentState>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineColorBlendAttachmentState>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineColorBlendAttachmentState *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineColorBlendAttachmentState *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineColorBlendStateCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineColorBlendStateCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineColorBlendStateCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineColorBlendStateCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineColorBlendStateCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineColorBlendStateCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineColorBlendStateCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineColorBlendStateCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCompilerControlCreateInfoAMD>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCompilerControlCreateInfoAMD>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCompilerControlCreateInfoAMD *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCompilerControlCreateInfoAMD *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCompilerControlFlagBitsAMD>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCompilerControlFlagBitsAMD>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCompilerControlFlagBitsAMD *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCompilerControlFlagBitsAMD *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCompilerControlFlagsAMD>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCompilerControlFlagsAMD>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCompilerControlFlagsAMD *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCompilerControlFlagsAMD *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCoverageModulationStateCreateFlagsNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCoverageModulationStateCreateFlagsNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCoverageModulationStateCreateFlagsNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCoverageModulationStateCreateFlagsNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCoverageModulationStateCreateInfoNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCoverageModulationStateCreateInfoNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCoverageModulationStateCreateInfoNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCoverageModulationStateCreateInfoNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCoverageReductionStateCreateFlagsNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCoverageReductionStateCreateFlagsNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCoverageReductionStateCreateFlagsNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCoverageReductionStateCreateFlagsNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCoverageReductionStateCreateInfoNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCoverageReductionStateCreateInfoNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCoverageReductionStateCreateInfoNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCoverageReductionStateCreateInfoNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCoverageToColorStateCreateFlagsNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCoverageToColorStateCreateFlagsNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCoverageToColorStateCreateFlagsNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCoverageToColorStateCreateFlagsNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCoverageToColorStateCreateInfoNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCoverageToColorStateCreateInfoNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCoverageToColorStateCreateInfoNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCoverageToColorStateCreateInfoNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCreationFeedbackCreateInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCreationFeedbackCreateInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCreationFeedbackCreateInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCreationFeedbackCreateInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCreationFeedbackEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCreationFeedbackEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCreationFeedbackEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCreationFeedbackEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCreationFeedbackFlagBitsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCreationFeedbackFlagBitsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCreationFeedbackFlagBitsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCreationFeedbackFlagBitsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCreationFeedbackFlagsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCreationFeedbackFlagsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCreationFeedbackFlagsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCreationFeedbackFlagsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineDepthStencilStateCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineDepthStencilStateCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineDepthStencilStateCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineDepthStencilStateCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineDepthStencilStateCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineDepthStencilStateCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineDepthStencilStateCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineDepthStencilStateCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineDiscardRectangleStateCreateFlagsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineDiscardRectangleStateCreateFlagsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineDiscardRectangleStateCreateFlagsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineDiscardRectangleStateCreateFlagsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineDiscardRectangleStateCreateInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineDiscardRectangleStateCreateInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineDiscardRectangleStateCreateInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineDiscardRectangleStateCreateInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineDynamicStateCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineDynamicStateCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineDynamicStateCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineDynamicStateCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineDynamicStateCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineDynamicStateCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineDynamicStateCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineDynamicStateCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineExecutableInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineExecutableInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineExecutableInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineExecutableInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineExecutableInternalRepresentationKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineExecutableInternalRepresentationKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineExecutableInternalRepresentationKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineExecutableInternalRepresentationKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineExecutablePropertiesKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineExecutablePropertiesKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineExecutablePropertiesKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineExecutablePropertiesKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineExecutableStatisticFormatKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineExecutableStatisticFormatKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineExecutableStatisticFormatKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineExecutableStatisticFormatKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineExecutableStatisticKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineExecutableStatisticKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineExecutableStatisticKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineExecutableStatisticKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineExecutableStatisticValueKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineExecutableStatisticValueKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineExecutableStatisticValueKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineExecutableStatisticValueKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineInputAssemblyStateCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineInputAssemblyStateCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineInputAssemblyStateCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineInputAssemblyStateCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineInputAssemblyStateCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineInputAssemblyStateCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineInputAssemblyStateCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineInputAssemblyStateCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineLayout>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineLayout>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineLayout *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineLayout *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineLayoutCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineLayoutCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineLayoutCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineLayoutCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineLayoutCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineLayoutCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineLayoutCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineLayoutCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineMultisampleStateCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineMultisampleStateCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineMultisampleStateCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineMultisampleStateCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineMultisampleStateCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineMultisampleStateCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineMultisampleStateCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineMultisampleStateCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRasterizationConservativeStateCreateFlagsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRasterizationConservativeStateCreateFlagsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRasterizationConservativeStateCreateFlagsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRasterizationConservativeStateCreateFlagsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRasterizationConservativeStateCreateInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRasterizationConservativeStateCreateInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRasterizationConservativeStateCreateInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRasterizationConservativeStateCreateInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRasterizationDepthClipStateCreateFlagsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRasterizationDepthClipStateCreateFlagsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRasterizationDepthClipStateCreateFlagsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRasterizationDepthClipStateCreateFlagsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRasterizationDepthClipStateCreateInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRasterizationDepthClipStateCreateInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRasterizationDepthClipStateCreateInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRasterizationDepthClipStateCreateInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRasterizationLineStateCreateInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRasterizationLineStateCreateInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRasterizationLineStateCreateInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRasterizationLineStateCreateInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRasterizationStateCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRasterizationStateCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRasterizationStateCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRasterizationStateCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRasterizationStateCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRasterizationStateCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRasterizationStateCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRasterizationStateCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRasterizationStateRasterizationOrderAMD>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRasterizationStateRasterizationOrderAMD>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRasterizationStateRasterizationOrderAMD *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRasterizationStateRasterizationOrderAMD *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRasterizationStateStreamCreateFlagsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRasterizationStateStreamCreateFlagsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRasterizationStateStreamCreateFlagsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRasterizationStateStreamCreateFlagsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRasterizationStateStreamCreateInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRasterizationStateStreamCreateInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRasterizationStateStreamCreateInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRasterizationStateStreamCreateInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRepresentativeFragmentTestStateCreateInfoNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRepresentativeFragmentTestStateCreateInfoNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRepresentativeFragmentTestStateCreateInfoNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRepresentativeFragmentTestStateCreateInfoNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineSampleLocationsStateCreateInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineSampleLocationsStateCreateInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineSampleLocationsStateCreateInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineSampleLocationsStateCreateInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineShaderStageCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineShaderStageCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineShaderStageCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineShaderStageCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineShaderStageCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineShaderStageCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineShaderStageCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineShaderStageCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineStageFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineStageFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineStageFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineStageFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineStageFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineStageFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineStageFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineStageFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineTessellationDomainOriginStateCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineTessellationDomainOriginStateCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineTessellationDomainOriginStateCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineTessellationDomainOriginStateCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineTessellationDomainOriginStateCreateInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineTessellationDomainOriginStateCreateInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineTessellationDomainOriginStateCreateInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineTessellationDomainOriginStateCreateInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineTessellationStateCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineTessellationStateCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineTessellationStateCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineTessellationStateCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineTessellationStateCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineTessellationStateCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineTessellationStateCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineTessellationStateCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineVertexInputDivisorStateCreateInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineVertexInputDivisorStateCreateInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineVertexInputDivisorStateCreateInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineVertexInputDivisorStateCreateInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineVertexInputStateCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineVertexInputStateCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineVertexInputStateCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineVertexInputStateCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineVertexInputStateCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineVertexInputStateCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineVertexInputStateCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineVertexInputStateCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineViewportCoarseSampleOrderStateCreateInfoNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineViewportCoarseSampleOrderStateCreateInfoNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineViewportExclusiveScissorStateCreateInfoNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineViewportExclusiveScissorStateCreateInfoNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineViewportExclusiveScissorStateCreateInfoNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineViewportExclusiveScissorStateCreateInfoNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineViewportShadingRateImageStateCreateInfoNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineViewportShadingRateImageStateCreateInfoNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineViewportShadingRateImageStateCreateInfoNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineViewportShadingRateImageStateCreateInfoNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineViewportStateCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineViewportStateCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineViewportStateCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineViewportStateCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineViewportStateCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineViewportStateCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineViewportStateCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineViewportStateCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineViewportSwizzleStateCreateFlagsNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineViewportSwizzleStateCreateFlagsNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineViewportSwizzleStateCreateFlagsNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineViewportSwizzleStateCreateFlagsNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineViewportSwizzleStateCreateInfoNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineViewportSwizzleStateCreateInfoNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineViewportSwizzleStateCreateInfoNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineViewportSwizzleStateCreateInfoNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineViewportWScalingStateCreateInfoNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineViewportWScalingStateCreateInfoNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineViewportWScalingStateCreateInfoNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineViewportWScalingStateCreateInfoNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPointClippingBehavior>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPointClippingBehavior>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPointClippingBehavior *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPointClippingBehavior *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPointClippingBehaviorKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPointClippingBehaviorKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPointClippingBehaviorKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPointClippingBehaviorKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPolygonMode>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPolygonMode>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPolygonMode *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPolygonMode *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPresentInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPresentInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPresentInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPresentInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPresentModeKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPresentModeKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPresentModeKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPresentModeKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPresentRegionKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPresentRegionKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPresentRegionKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPresentRegionKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPresentRegionsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPresentRegionsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPresentRegionsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPresentRegionsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPresentTimeGOOGLE>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPresentTimeGOOGLE>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPresentTimeGOOGLE *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPresentTimeGOOGLE *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPresentTimesInfoGOOGLE>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPresentTimesInfoGOOGLE>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPresentTimesInfoGOOGLE *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPresentTimesInfoGOOGLE *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPrimitiveTopology>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPrimitiveTopology>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPrimitiveTopology *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPrimitiveTopology *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkProtectedSubmitInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkProtectedSubmitInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkProtectedSubmitInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkProtectedSubmitInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPushConstantRange>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPushConstantRange>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPushConstantRange *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPushConstantRange *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueryControlFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryControlFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueryControlFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryControlFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueryPipelineStatisticFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryPipelineStatisticFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueryPipelineStatisticFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryPipelineStatisticFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueryPool>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryPool>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueryPool *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryPool *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueryPoolCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryPoolCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueryPoolCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryPoolCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueryPoolCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryPoolCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueryPoolCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryPoolCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueryPoolCreateInfoINTEL>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryPoolCreateInfoINTEL>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueryPoolCreateInfoINTEL *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryPoolCreateInfoINTEL *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueryPoolSamplingModeINTEL>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryPoolSamplingModeINTEL>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueryPoolSamplingModeINTEL *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryPoolSamplingModeINTEL *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueryResultFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryResultFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueryResultFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryResultFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueryType>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryType>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueryType *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryType *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueue>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueue>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueue *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueue *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueueFamilyCheckpointPropertiesNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueueFamilyCheckpointPropertiesNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueueFamilyCheckpointPropertiesNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueueFamilyCheckpointPropertiesNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueueFamilyProperties>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueueFamilyProperties>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueueFamilyProperties *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueueFamilyProperties *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueueFamilyProperties2>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueueFamilyProperties2>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueueFamilyProperties2 *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueueFamilyProperties2 *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueueFamilyProperties2KHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueueFamilyProperties2KHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueueFamilyProperties2KHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueueFamilyProperties2KHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueueFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueueFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueueFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueueFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueueGlobalPriorityEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueueGlobalPriorityEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueueGlobalPriorityEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueueGlobalPriorityEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkRasterizationOrderAMD>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRasterizationOrderAMD>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkRasterizationOrderAMD *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRasterizationOrderAMD *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkRayTracingPipelineCreateInfoNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRayTracingPipelineCreateInfoNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkRayTracingPipelineCreateInfoNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRayTracingPipelineCreateInfoNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkRayTracingShaderGroupCreateInfoNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRayTracingShaderGroupCreateInfoNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkRayTracingShaderGroupCreateInfoNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRayTracingShaderGroupCreateInfoNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkRayTracingShaderGroupTypeNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRayTracingShaderGroupTypeNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkRayTracingShaderGroupTypeNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRayTracingShaderGroupTypeNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkRect2D>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRect2D>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkRect2D *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRect2D *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkRectLayerKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRectLayerKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkRectLayerKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRectLayerKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkRefreshCycleDurationGOOGLE>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRefreshCycleDurationGOOGLE>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkRefreshCycleDurationGOOGLE *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRefreshCycleDurationGOOGLE *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkRenderPass>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPass>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkRenderPass *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPass *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkRenderPassAttachmentBeginInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPassAttachmentBeginInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkRenderPassAttachmentBeginInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPassAttachmentBeginInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkRenderPassBeginInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPassBeginInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkRenderPassBeginInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPassBeginInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkRenderPassCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPassCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkRenderPassCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPassCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkRenderPassCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPassCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkRenderPassCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPassCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkRenderPassCreateInfo2KHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPassCreateInfo2KHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkRenderPassCreateInfo2KHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPassCreateInfo2KHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkRenderPassFragmentDensityMapCreateInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPassFragmentDensityMapCreateInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkRenderPassFragmentDensityMapCreateInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPassFragmentDensityMapCreateInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkRenderPassInputAttachmentAspectCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPassInputAttachmentAspectCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkRenderPassInputAttachmentAspectCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPassInputAttachmentAspectCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkRenderPassInputAttachmentAspectCreateInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPassInputAttachmentAspectCreateInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkRenderPassInputAttachmentAspectCreateInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPassInputAttachmentAspectCreateInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkRenderPassMultiviewCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPassMultiviewCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkRenderPassMultiviewCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPassMultiviewCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkRenderPassMultiviewCreateInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPassMultiviewCreateInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkRenderPassMultiviewCreateInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPassMultiviewCreateInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkRenderPassSampleLocationsBeginInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPassSampleLocationsBeginInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkRenderPassSampleLocationsBeginInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPassSampleLocationsBeginInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkResolveModeFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkResolveModeFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkResolveModeFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkResolveModeFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkResolveModeFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkResolveModeFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkResolveModeFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkResolveModeFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkResult>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkResult>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkResult *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkResult *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSampleCountFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampleCountFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSampleCountFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampleCountFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSampleCountFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampleCountFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSampleCountFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampleCountFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSampleLocationEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampleLocationEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSampleLocationEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampleLocationEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSampleLocationsInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampleLocationsInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSampleLocationsInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampleLocationsInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSampleMask>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampleMask>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSampleMask *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampleMask *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSampleMask>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampleMask>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSampleMask *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampleMask *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSampler>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampler>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSampler *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampler *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerAddressMode>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerAddressMode>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerAddressMode *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerAddressMode *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerMipmapMode>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerMipmapMode>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerMipmapMode *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerMipmapMode *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerReductionModeCreateInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerReductionModeCreateInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerReductionModeCreateInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerReductionModeCreateInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerReductionModeEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerReductionModeEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerReductionModeEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerReductionModeEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrConversion>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrConversion>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrConversion *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrConversion *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrConversionCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrConversionCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrConversionCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrConversionCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrConversionCreateInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrConversionCreateInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrConversionCreateInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrConversionCreateInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrConversionImageFormatProperties>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrConversionImageFormatProperties>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrConversionImageFormatProperties *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrConversionImageFormatProperties *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrConversionImageFormatPropertiesKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrConversionImageFormatPropertiesKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrConversionImageFormatPropertiesKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrConversionImageFormatPropertiesKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrConversionInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrConversionInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrConversionInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrConversionInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrConversionInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrConversionInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrConversionInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrConversionInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrConversionKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrConversionKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrConversionKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrConversionKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrModelConversion>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrModelConversion>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrModelConversion *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrModelConversion *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrModelConversionKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrModelConversionKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrModelConversionKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrModelConversionKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrRange>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrRange>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrRange *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrRange *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrRangeKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrRangeKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrRangeKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrRangeKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkScopeNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkScopeNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkScopeNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkScopeNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSemaphore>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphore>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSemaphore *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphore *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSemaphoreCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphoreCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSemaphoreCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphoreCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSemaphoreCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphoreCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSemaphoreCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphoreCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSemaphoreGetFdInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphoreGetFdInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSemaphoreGetFdInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphoreGetFdInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSemaphoreImportFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphoreImportFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSemaphoreImportFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphoreImportFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSemaphoreImportFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphoreImportFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSemaphoreImportFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphoreImportFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSemaphoreImportFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphoreImportFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSemaphoreImportFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphoreImportFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSemaphoreImportFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphoreImportFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSemaphoreImportFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphoreImportFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShaderCorePropertiesFlagBitsAMD>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderCorePropertiesFlagBitsAMD>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShaderCorePropertiesFlagBitsAMD *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderCorePropertiesFlagBitsAMD *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShaderCorePropertiesFlagsAMD>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderCorePropertiesFlagsAMD>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShaderCorePropertiesFlagsAMD *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderCorePropertiesFlagsAMD *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShaderFloatControlsIndependenceKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderFloatControlsIndependenceKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShaderFloatControlsIndependenceKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderFloatControlsIndependenceKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShaderInfoTypeAMD>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderInfoTypeAMD>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShaderInfoTypeAMD *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderInfoTypeAMD *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShaderModule>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderModule>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShaderModule *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderModule *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShaderModuleCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderModuleCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShaderModuleCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderModuleCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShaderModuleCreateInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderModuleCreateInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShaderModuleCreateInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderModuleCreateInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShaderModuleValidationCacheCreateInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderModuleValidationCacheCreateInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShaderModuleValidationCacheCreateInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderModuleValidationCacheCreateInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShaderResourceUsageAMD>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderResourceUsageAMD>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShaderResourceUsageAMD *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderResourceUsageAMD *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShaderStageFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderStageFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShaderStageFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderStageFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShaderStageFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderStageFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShaderStageFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderStageFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShaderStatisticsInfoAMD>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderStatisticsInfoAMD>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShaderStatisticsInfoAMD *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderStatisticsInfoAMD *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShadingRatePaletteEntryNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShadingRatePaletteEntryNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShadingRatePaletteEntryNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShadingRatePaletteEntryNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShadingRatePaletteNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShadingRatePaletteNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShadingRatePaletteNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShadingRatePaletteNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSharedPresentSurfaceCapabilitiesKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSharedPresentSurfaceCapabilitiesKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSharedPresentSurfaceCapabilitiesKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSharedPresentSurfaceCapabilitiesKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSharingMode>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSharingMode>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSharingMode *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSharingMode *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSparseBufferMemoryBindInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseBufferMemoryBindInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSparseBufferMemoryBindInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseBufferMemoryBindInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageFormatFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageFormatFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageFormatFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageFormatFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageFormatProperties>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageFormatProperties>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageFormatProperties *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageFormatProperties *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageFormatProperties2>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageFormatProperties2>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageFormatProperties2 *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageFormatProperties2 *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageFormatProperties2KHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageFormatProperties2KHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageFormatProperties2KHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageFormatProperties2KHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageMemoryBind>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageMemoryBind>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageMemoryBind *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageMemoryBind *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageMemoryBindInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageMemoryBindInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageMemoryBindInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageMemoryBindInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageMemoryRequirements>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageMemoryRequirements>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageMemoryRequirements *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageMemoryRequirements *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageMemoryRequirements2>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageMemoryRequirements2>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageMemoryRequirements2 *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageMemoryRequirements2 *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageMemoryRequirements2KHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageMemoryRequirements2KHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageMemoryRequirements2KHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageMemoryRequirements2KHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageOpaqueMemoryBindInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageOpaqueMemoryBindInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageOpaqueMemoryBindInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageOpaqueMemoryBindInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSparseMemoryBind>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseMemoryBind>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSparseMemoryBind *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseMemoryBind *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSparseMemoryBindFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseMemoryBindFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSparseMemoryBindFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseMemoryBindFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSpecializationInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSpecializationInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSpecializationInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSpecializationInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSpecializationMapEntry>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSpecializationMapEntry>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSpecializationMapEntry *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSpecializationMapEntry *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkStencilFaceFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkStencilFaceFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkStencilFaceFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkStencilFaceFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkStencilOp>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkStencilOp>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkStencilOp *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkStencilOp *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkStencilOpState>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkStencilOpState>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkStencilOpState *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkStencilOpState *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkStructureType>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkStructureType>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkStructureType *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkStructureType *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSubgroupFeatureFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubgroupFeatureFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSubgroupFeatureFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubgroupFeatureFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSubgroupFeatureFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubgroupFeatureFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSubgroupFeatureFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubgroupFeatureFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSubmitInfo>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubmitInfo>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSubmitInfo *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubmitInfo *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSubpassBeginInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubpassBeginInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSubpassBeginInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubpassBeginInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSubpassContents>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubpassContents>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSubpassContents *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubpassContents *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSubpassDependency>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubpassDependency>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSubpassDependency *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubpassDependency *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSubpassDependency2KHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubpassDependency2KHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSubpassDependency2KHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubpassDependency2KHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSubpassDescription>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubpassDescription>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSubpassDescription *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubpassDescription *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSubpassDescription2KHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubpassDescription2KHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSubpassDescription2KHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubpassDescription2KHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSubpassDescriptionDepthStencilResolveKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubpassDescriptionDepthStencilResolveKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSubpassDescriptionDepthStencilResolveKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubpassDescriptionDepthStencilResolveKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSubpassDescriptionFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubpassDescriptionFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSubpassDescriptionFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubpassDescriptionFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSubpassEndInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubpassEndInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSubpassEndInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubpassEndInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSubpassSampleLocationsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubpassSampleLocationsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSubpassSampleLocationsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubpassSampleLocationsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSubresourceLayout>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubresourceLayout>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSubresourceLayout *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubresourceLayout *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceCapabilities2EXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceCapabilities2EXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceCapabilities2EXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceCapabilities2EXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceCapabilities2KHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceCapabilities2KHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceCapabilities2KHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceCapabilities2KHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceCapabilitiesKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceCapabilitiesKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceCapabilitiesKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceCapabilitiesKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceCounterFlagBitsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceCounterFlagBitsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceCounterFlagBitsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceCounterFlagBitsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceCounterFlagsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceCounterFlagsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceCounterFlagsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceCounterFlagsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceFormat2KHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceFormat2KHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceFormat2KHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceFormat2KHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceFormatKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceFormatKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceFormatKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceFormatKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceProtectedCapabilitiesKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceProtectedCapabilitiesKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceProtectedCapabilitiesKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceProtectedCapabilitiesKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceTransformFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceTransformFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceTransformFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceTransformFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceTransformFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceTransformFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceTransformFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceTransformFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSwapchainCounterCreateInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSwapchainCounterCreateInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSwapchainCounterCreateInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSwapchainCounterCreateInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSwapchainCreateFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSwapchainCreateFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSwapchainCreateFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSwapchainCreateFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSwapchainCreateInfoKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSwapchainCreateInfoKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSwapchainCreateInfoKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSwapchainCreateInfoKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSwapchainDisplayNativeHdrCreateInfoAMD>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSwapchainDisplayNativeHdrCreateInfoAMD>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSwapchainDisplayNativeHdrCreateInfoAMD *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSwapchainDisplayNativeHdrCreateInfoAMD *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSwapchainKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSwapchainKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSwapchainKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSwapchainKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSystemAllocationScope>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSystemAllocationScope>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSystemAllocationScope *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSystemAllocationScope *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkTessellationDomainOrigin>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkTessellationDomainOrigin>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkTessellationDomainOrigin *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkTessellationDomainOrigin *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkTessellationDomainOriginKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkTessellationDomainOriginKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkTessellationDomainOriginKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkTessellationDomainOriginKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkTextureLODGatherFormatPropertiesAMD>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkTextureLODGatherFormatPropertiesAMD>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkTextureLODGatherFormatPropertiesAMD *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkTextureLODGatherFormatPropertiesAMD *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkTimeDomainEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkTimeDomainEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkTimeDomainEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkTimeDomainEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkValidationCacheCreateFlagsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkValidationCacheCreateFlagsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkValidationCacheCreateFlagsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkValidationCacheCreateFlagsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkValidationCacheCreateInfoEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkValidationCacheCreateInfoEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkValidationCacheCreateInfoEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkValidationCacheCreateInfoEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkValidationCacheEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkValidationCacheEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkValidationCacheEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkValidationCacheEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkValidationCacheHeaderVersionEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkValidationCacheHeaderVersionEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkValidationCacheHeaderVersionEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkValidationCacheHeaderVersionEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkValidationFeaturesEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkValidationFeaturesEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkValidationFeaturesEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkValidationFeaturesEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkValidationFlagsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkValidationFlagsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkValidationFlagsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkValidationFlagsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkVendorId>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkVendorId>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkVendorId *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkVendorId *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkVertexInputAttributeDescription>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkVertexInputAttributeDescription>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkVertexInputAttributeDescription *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkVertexInputAttributeDescription *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkVertexInputBindingDescription>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkVertexInputBindingDescription>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkVertexInputBindingDescription *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkVertexInputBindingDescription *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkVertexInputBindingDivisorDescriptionEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkVertexInputBindingDivisorDescriptionEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkVertexInputBindingDivisorDescriptionEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkVertexInputBindingDivisorDescriptionEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkVertexInputRate>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkVertexInputRate>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkVertexInputRate *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkVertexInputRate *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkViewport>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkViewport>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkViewport *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkViewport *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkViewportCoordinateSwizzleNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkViewportCoordinateSwizzleNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkViewportCoordinateSwizzleNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkViewportCoordinateSwizzleNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkViewportSwizzleNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkViewportSwizzleNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkViewportSwizzleNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkViewportSwizzleNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkViewportWScalingNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkViewportWScalingNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkViewportWScalingNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkViewportWScalingNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkWriteDescriptorSet>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkWriteDescriptorSet>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkWriteDescriptorSet *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkWriteDescriptorSet *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkWriteDescriptorSetAccelerationStructureNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkWriteDescriptorSetAccelerationStructureNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkWriteDescriptorSetAccelerationStructureNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkWriteDescriptorSetAccelerationStructureNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkWriteDescriptorSetInlineUniformBlockEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkWriteDescriptorSetInlineUniformBlockEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkWriteDescriptorSetInlineUniformBlockEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkWriteDescriptorSetInlineUniformBlockEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkXYColorEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkXYColorEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkXYColorEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkXYColorEXT *>*>(value);
    }

    // expect an AbstractValue with a pointer in first member
    return stream << *reinterpret_cast<const Value<void *>*>(value);
}


} // namespace vkbinding