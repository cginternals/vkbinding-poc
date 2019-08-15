
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

const std::string & Meta::getString(const VkBuildAccelerationStructureFlagBitsNV vkbitfield)
{
    const auto i = Meta_StringsByVkBuildAccelerationStructureFlagBitsNV.find(vkbitfield);
    if (i != Meta_StringsByVkBuildAccelerationStructureFlagBitsNV.end())
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

const std::string & Meta::getString(const VkConditionalRenderingFlagBitsEXT vkbitfield)
{
    const auto i = Meta_StringsByVkConditionalRenderingFlagBitsEXT.find(vkbitfield);
    if (i != Meta_StringsByVkConditionalRenderingFlagBitsEXT.end())
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

const std::string & Meta::getString(const VkDependencyFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkDependencyFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkDependencyFlagBits.end())
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

const std::string & Meta::getString(const VkExternalFenceHandleTypeFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkExternalFenceHandleTypeFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkExternalFenceHandleTypeFlagBits.end())
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

const std::string & Meta::getString(const VkExternalSemaphoreHandleTypeFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkExternalSemaphoreHandleTypeFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkExternalSemaphoreHandleTypeFlagBits.end())
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

const std::string & Meta::getString(const VkMemoryAllocateFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkMemoryAllocateFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkMemoryAllocateFlagBits.end())
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

const std::string & Meta::getString(const VkQueueFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkQueueFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkQueueFlagBits.end())
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

const std::string & Meta::getString(const VkShaderStageFlagBits vkbitfield)
{
    const auto i = Meta_StringsByVkShaderStageFlagBits.find(vkbitfield);
    if (i != Meta_StringsByVkShaderStageFlagBits.end())
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

const std::string & Meta::getString(const VkSwapchainCreateFlagBitsKHR vkbitfield)
{
    const auto i = Meta_StringsByVkSwapchainCreateFlagBitsKHR.find(vkbitfield);
    if (i != Meta_StringsByVkSwapchainCreateFlagBitsKHR.end())
    {
        return i->second;
    }
    return none;
}


} } // namespace vkbinding::aux