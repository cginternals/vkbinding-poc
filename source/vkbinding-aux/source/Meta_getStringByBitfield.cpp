
#include <vkbinding-aux/Meta.h>

#include <vkbinding/vk/bitfield.h>

#include "Meta_Maps.h"


using namespace vk;


namespace
{


const auto none = std::string{};


} // namespace


namespace vkbinding { namespace aux
{


const std::string & Meta::getString(const UnusedMask vkbitfield)
{
    const auto i = Meta_StringsByUnusedMask.find(vkbitfield);
    if (i != Meta_StringsByUnusedMask.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkAccessFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkAccessFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkAccessFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkAttachmentDescriptionFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkAttachmentDescriptionFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkAttachmentDescriptionFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkBufferCreateFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkBufferCreateFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkBufferCreateFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkBufferUsageFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkBufferUsageFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkBufferUsageFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkBufferViewCreateFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkBufferViewCreateFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkBufferViewCreateFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkBuildAccelerationStructureFlagBitsNV vkbitfield)
{
    const auto i = Meta_StringsByVkBuildAccelerationStructureFlagBitsNV.find(vkbitfield);
    if (i != Meta_StringsByVkBuildAccelerationStructureFlagBitsNV.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkColorComponentFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkColorComponentFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkColorComponentFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkCommandBufferResetFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkCommandBufferResetFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkCommandBufferResetFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkCommandBufferUsageFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkCommandBufferUsageFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkCommandBufferUsageFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkCommandPoolCreateFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkCommandPoolCreateFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkCommandPoolCreateFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkCommandPoolResetFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkCommandPoolResetFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkCommandPoolResetFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkCompositeAlphaFlagBitsKHR vkbitfield)
{
    const auto i = Meta_StringsByVkCompositeAlphaFlagBitsKHR.find(vkbitfield);
    if (i != Meta_StringsByVkCompositeAlphaFlagBitsKHR.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkConditionalRenderingFlagBitsEXT vkbitfield)
{
    const auto i = Meta_StringsByVkConditionalRenderingFlagBitsEXT.find(vkbitfield);
    if (i != Meta_StringsByVkConditionalRenderingFlagBitsEXT.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkCullModeFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkCullModeFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkCullModeFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkDebugReportFlagBitsEXT vkbitfield)
{
    const auto i = Meta_StringsByVkDebugReportFlagBitsEXT.find(vkbitfield);
    if (i != Meta_StringsByVkDebugReportFlagBitsEXT.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkDebugUtilsMessageSeverityFlagBitsEXT vkbitfield)
{
    const auto i = Meta_StringsByVkDebugUtilsMessageSeverityFlagBitsEXT.find(vkbitfield);
    if (i != Meta_StringsByVkDebugUtilsMessageSeverityFlagBitsEXT.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkDebugUtilsMessageTypeFlagBitsEXT vkbitfield)
{
    const auto i = Meta_StringsByVkDebugUtilsMessageTypeFlagBitsEXT.find(vkbitfield);
    if (i != Meta_StringsByVkDebugUtilsMessageTypeFlagBitsEXT.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkDependencyFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkDependencyFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkDependencyFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkDescriptorBindingFlagBitsEXT vkbitfield)
{
    const auto i = Meta_StringsByVkDescriptorBindingFlagBitsEXT.find(vkbitfield);
    if (i != Meta_StringsByVkDescriptorBindingFlagBitsEXT.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkDescriptorPoolCreateFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkDescriptorPoolCreateFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkDescriptorPoolCreateFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkDescriptorSetLayoutCreateFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkDescriptorSetLayoutCreateFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkDescriptorSetLayoutCreateFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkDeviceCreateFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkDeviceCreateFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkDeviceCreateFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkDeviceGroupPresentModeFlagBitsKHR vkbitfield)
{
    const auto i = Meta_StringsByVkDeviceGroupPresentModeFlagBitsKHR.find(vkbitfield);
    if (i != Meta_StringsByVkDeviceGroupPresentModeFlagBitsKHR.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkDeviceQueueCreateFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkDeviceQueueCreateFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkDeviceQueueCreateFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkDisplayPlaneAlphaFlagBitsKHR vkbitfield)
{
    const auto i = Meta_StringsByVkDisplayPlaneAlphaFlagBitsKHR.find(vkbitfield);
    if (i != Meta_StringsByVkDisplayPlaneAlphaFlagBitsKHR.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkExternalFenceFeatureFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkExternalFenceFeatureFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkExternalFenceFeatureFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkExternalFenceFeatureFlagBitsKHR vkbitfield)
{
    const auto i = Meta_StringsByVkExternalFenceFeatureFlagBitsKHR.find(vkbitfield);
    if (i != Meta_StringsByVkExternalFenceFeatureFlagBitsKHR.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkExternalFenceHandleTypeFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkExternalFenceHandleTypeFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkExternalFenceHandleTypeFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkExternalFenceHandleTypeFlagBitsKHR vkbitfield)
{
    const auto i = Meta_StringsByVkExternalFenceHandleTypeFlagBitsKHR.find(vkbitfield);
    if (i != Meta_StringsByVkExternalFenceHandleTypeFlagBitsKHR.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkExternalMemoryFeatureFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkExternalMemoryFeatureFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkExternalMemoryFeatureFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkExternalMemoryFeatureFlagBitsKHR vkbitfield)
{
    const auto i = Meta_StringsByVkExternalMemoryFeatureFlagBitsKHR.find(vkbitfield);
    if (i != Meta_StringsByVkExternalMemoryFeatureFlagBitsKHR.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkExternalMemoryFeatureFlagBitsNV vkbitfield)
{
    const auto i = Meta_StringsByVkExternalMemoryFeatureFlagBitsNV.find(vkbitfield);
    if (i != Meta_StringsByVkExternalMemoryFeatureFlagBitsNV.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkExternalMemoryHandleTypeFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkExternalMemoryHandleTypeFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkExternalMemoryHandleTypeFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkExternalMemoryHandleTypeFlagBitsKHR vkbitfield)
{
    const auto i = Meta_StringsByVkExternalMemoryHandleTypeFlagBitsKHR.find(vkbitfield);
    if (i != Meta_StringsByVkExternalMemoryHandleTypeFlagBitsKHR.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkExternalMemoryHandleTypeFlagBitsNV vkbitfield)
{
    const auto i = Meta_StringsByVkExternalMemoryHandleTypeFlagBitsNV.find(vkbitfield);
    if (i != Meta_StringsByVkExternalMemoryHandleTypeFlagBitsNV.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkExternalSemaphoreFeatureFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkExternalSemaphoreFeatureFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkExternalSemaphoreFeatureFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkExternalSemaphoreFeatureFlagBitsKHR vkbitfield)
{
    const auto i = Meta_StringsByVkExternalSemaphoreFeatureFlagBitsKHR.find(vkbitfield);
    if (i != Meta_StringsByVkExternalSemaphoreFeatureFlagBitsKHR.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkExternalSemaphoreHandleTypeFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkExternalSemaphoreHandleTypeFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkExternalSemaphoreHandleTypeFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkExternalSemaphoreHandleTypeFlagBitsKHR vkbitfield)
{
    const auto i = Meta_StringsByVkExternalSemaphoreHandleTypeFlagBitsKHR.find(vkbitfield);
    if (i != Meta_StringsByVkExternalSemaphoreHandleTypeFlagBitsKHR.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkFenceCreateFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkFenceCreateFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkFenceCreateFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkFenceImportFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkFenceImportFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkFenceImportFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkFenceImportFlagBitsKHR vkbitfield)
{
    const auto i = Meta_StringsByVkFenceImportFlagBitsKHR.find(vkbitfield);
    if (i != Meta_StringsByVkFenceImportFlagBitsKHR.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkFormatFeatureFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkFormatFeatureFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkFormatFeatureFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkFramebufferCreateFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkFramebufferCreateFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkFramebufferCreateFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkGeometryFlagBitsNV vkbitfield)
{
    const auto i = Meta_StringsByVkGeometryFlagBitsNV.find(vkbitfield);
    if (i != Meta_StringsByVkGeometryFlagBitsNV.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkGeometryInstanceFlagBitsNV vkbitfield)
{
    const auto i = Meta_StringsByVkGeometryInstanceFlagBitsNV.find(vkbitfield);
    if (i != Meta_StringsByVkGeometryInstanceFlagBitsNV.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkImageAspectFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkImageAspectFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkImageAspectFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkImageCreateFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkImageCreateFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkImageCreateFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkImageUsageFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkImageUsageFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkImageUsageFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkImageViewCreateFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkImageViewCreateFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkImageViewCreateFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkIndirectCommandsLayoutUsageFlagBitsNVX vkbitfield)
{
    const auto i = Meta_StringsByVkIndirectCommandsLayoutUsageFlagBitsNVX.find(vkbitfield);
    if (i != Meta_StringsByVkIndirectCommandsLayoutUsageFlagBitsNVX.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkInstanceCreateFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkInstanceCreateFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkInstanceCreateFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkMemoryAllocateFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkMemoryAllocateFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkMemoryAllocateFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkMemoryAllocateFlagBitsKHR vkbitfield)
{
    const auto i = Meta_StringsByVkMemoryAllocateFlagBitsKHR.find(vkbitfield);
    if (i != Meta_StringsByVkMemoryAllocateFlagBitsKHR.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkMemoryHeapFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkMemoryHeapFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkMemoryHeapFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkMemoryPropertyFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkMemoryPropertyFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkMemoryPropertyFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkObjectEntryUsageFlagBitsNVX vkbitfield)
{
    const auto i = Meta_StringsByVkObjectEntryUsageFlagBitsNVX.find(vkbitfield);
    if (i != Meta_StringsByVkObjectEntryUsageFlagBitsNVX.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPeerMemoryFeatureFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkPeerMemoryFeatureFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkPeerMemoryFeatureFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPeerMemoryFeatureFlagBitsKHR vkbitfield)
{
    const auto i = Meta_StringsByVkPeerMemoryFeatureFlagBitsKHR.find(vkbitfield);
    if (i != Meta_StringsByVkPeerMemoryFeatureFlagBitsKHR.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPipelineCacheCreateFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkPipelineCacheCreateFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkPipelineCacheCreateFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPipelineColorBlendStateCreateFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkPipelineColorBlendStateCreateFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkPipelineColorBlendStateCreateFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPipelineCreateFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkPipelineCreateFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkPipelineCreateFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPipelineCreationFeedbackFlagBitsEXT vkbitfield)
{
    const auto i = Meta_StringsByVkPipelineCreationFeedbackFlagBitsEXT.find(vkbitfield);
    if (i != Meta_StringsByVkPipelineCreationFeedbackFlagBitsEXT.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPipelineDepthStencilStateCreateFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkPipelineDepthStencilStateCreateFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkPipelineDepthStencilStateCreateFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPipelineDynamicStateCreateFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkPipelineDynamicStateCreateFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkPipelineDynamicStateCreateFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPipelineInputAssemblyStateCreateFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkPipelineInputAssemblyStateCreateFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkPipelineInputAssemblyStateCreateFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPipelineLayoutCreateFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkPipelineLayoutCreateFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkPipelineLayoutCreateFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPipelineMultisampleStateCreateFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkPipelineMultisampleStateCreateFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkPipelineMultisampleStateCreateFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPipelineRasterizationStateCreateFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkPipelineRasterizationStateCreateFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkPipelineRasterizationStateCreateFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPipelineShaderStageCreateFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkPipelineShaderStageCreateFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkPipelineShaderStageCreateFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPipelineStageFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkPipelineStageFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkPipelineStageFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPipelineTessellationStateCreateFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkPipelineTessellationStateCreateFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkPipelineTessellationStateCreateFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPipelineVertexInputStateCreateFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkPipelineVertexInputStateCreateFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkPipelineVertexInputStateCreateFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPipelineViewportStateCreateFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkPipelineViewportStateCreateFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkPipelineViewportStateCreateFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkQueryControlFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkQueryControlFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkQueryControlFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkQueryPipelineStatisticFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkQueryPipelineStatisticFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkQueryPipelineStatisticFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkQueryPoolCreateFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkQueryPoolCreateFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkQueryPoolCreateFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkQueryResultFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkQueryResultFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkQueryResultFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkQueueFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkQueueFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkQueueFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkRenderPassCreateFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkRenderPassCreateFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkRenderPassCreateFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkResolveModeFlagBitsKHR vkbitfield)
{
    const auto i = Meta_StringsByVkResolveModeFlagBitsKHR.find(vkbitfield);
    if (i != Meta_StringsByVkResolveModeFlagBitsKHR.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkSampleCountFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkSampleCountFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkSampleCountFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkSamplerCreateFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkSamplerCreateFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkSamplerCreateFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkSemaphoreImportFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkSemaphoreImportFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkSemaphoreImportFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkSemaphoreImportFlagBitsKHR vkbitfield)
{
    const auto i = Meta_StringsByVkSemaphoreImportFlagBitsKHR.find(vkbitfield);
    if (i != Meta_StringsByVkSemaphoreImportFlagBitsKHR.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkShaderModuleCreateFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkShaderModuleCreateFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkShaderModuleCreateFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkShaderStageFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkShaderStageFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkShaderStageFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkSparseImageFormatFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkSparseImageFormatFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkSparseImageFormatFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkSparseMemoryBindFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkSparseMemoryBindFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkSparseMemoryBindFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkStencilFaceFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkStencilFaceFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkStencilFaceFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkSubgroupFeatureFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkSubgroupFeatureFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkSubgroupFeatureFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkSubpassDescriptionFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkSubpassDescriptionFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkSubpassDescriptionFlagBits.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkSurfaceCounterFlagBitsEXT vkbitfield)
{
    const auto i = Meta_StringsByVkSurfaceCounterFlagBitsEXT.find(vkbitfield);
    if (i != Meta_StringsByVkSurfaceCounterFlagBitsEXT.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkSurfaceTransformFlagBitsKHR vkbitfield)
{
    const auto i = Meta_StringsByVkSurfaceTransformFlagBitsKHR.find(vkbitfield);
    if (i != Meta_StringsByVkSurfaceTransformFlagBitsKHR.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkSwapchainCreateFlagBitsKHR vkbitfield)
{
    const auto i = Meta_StringsByVkSwapchainCreateFlagBitsKHR.find(vkbitfield);
    if (i != Meta_StringsByVkSwapchainCreateFlagBitsKHR.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkSwapchainImageUsageFlagBitsANDROID vkbitfield)
{
    const auto i = Meta_StringsByVkSwapchainImageUsageFlagBitsANDROID.find(vkbitfield);
    if (i != Meta_StringsByVkSwapchainImageUsageFlagBitsANDROID.end())
    {
        return i->second;
    }
    return none;
}


} } // namespace vkbinding::aux