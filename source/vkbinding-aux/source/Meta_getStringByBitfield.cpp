
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

const std::string & Meta::getString(const VkAccessFlags vkbitfield)
{
    const auto i = Meta_StringsByVkAccessFlags.find(vkbitfield);
    if (i != Meta_StringsByVkAccessFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkAttachmentDescriptionFlags vkbitfield)
{
    const auto i = Meta_StringsByVkAttachmentDescriptionFlags.find(vkbitfield);
    if (i != Meta_StringsByVkAttachmentDescriptionFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkBufferCreateFlags vkbitfield)
{
    const auto i = Meta_StringsByVkBufferCreateFlags.find(vkbitfield);
    if (i != Meta_StringsByVkBufferCreateFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkBufferUsageFlags vkbitfield)
{
    const auto i = Meta_StringsByVkBufferUsageFlags.find(vkbitfield);
    if (i != Meta_StringsByVkBufferUsageFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkBufferViewCreateFlags vkbitfield)
{
    const auto i = Meta_StringsByVkBufferViewCreateFlags.find(vkbitfield);
    if (i != Meta_StringsByVkBufferViewCreateFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkBuildAccelerationStructureFlagsNV vkbitfield)
{
    const auto i = Meta_StringsByVkBuildAccelerationStructureFlagsNV.find(vkbitfield);
    if (i != Meta_StringsByVkBuildAccelerationStructureFlagsNV.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkColorComponentFlags vkbitfield)
{
    const auto i = Meta_StringsByVkColorComponentFlags.find(vkbitfield);
    if (i != Meta_StringsByVkColorComponentFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkCommandBufferResetFlags vkbitfield)
{
    const auto i = Meta_StringsByVkCommandBufferResetFlags.find(vkbitfield);
    if (i != Meta_StringsByVkCommandBufferResetFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkCommandBufferUsageFlags vkbitfield)
{
    const auto i = Meta_StringsByVkCommandBufferUsageFlags.find(vkbitfield);
    if (i != Meta_StringsByVkCommandBufferUsageFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkCommandPoolCreateFlags vkbitfield)
{
    const auto i = Meta_StringsByVkCommandPoolCreateFlags.find(vkbitfield);
    if (i != Meta_StringsByVkCommandPoolCreateFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkCommandPoolResetFlags vkbitfield)
{
    const auto i = Meta_StringsByVkCommandPoolResetFlags.find(vkbitfield);
    if (i != Meta_StringsByVkCommandPoolResetFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkCommandPoolTrimFlags vkbitfield)
{
    const auto i = Meta_StringsByVkCommandPoolTrimFlags.find(vkbitfield);
    if (i != Meta_StringsByVkCommandPoolTrimFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkCommandPoolTrimFlagsKHR vkbitfield)
{
    const auto i = Meta_StringsByVkCommandPoolTrimFlagsKHR.find(vkbitfield);
    if (i != Meta_StringsByVkCommandPoolTrimFlagsKHR.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkCompositeAlphaFlagsKHR vkbitfield)
{
    const auto i = Meta_StringsByVkCompositeAlphaFlagsKHR.find(vkbitfield);
    if (i != Meta_StringsByVkCompositeAlphaFlagsKHR.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkConditionalRenderingFlagsEXT vkbitfield)
{
    const auto i = Meta_StringsByVkConditionalRenderingFlagsEXT.find(vkbitfield);
    if (i != Meta_StringsByVkConditionalRenderingFlagsEXT.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkCullModeFlags vkbitfield)
{
    const auto i = Meta_StringsByVkCullModeFlags.find(vkbitfield);
    if (i != Meta_StringsByVkCullModeFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkDebugReportFlagsEXT vkbitfield)
{
    const auto i = Meta_StringsByVkDebugReportFlagsEXT.find(vkbitfield);
    if (i != Meta_StringsByVkDebugReportFlagsEXT.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkDebugUtilsMessageSeverityFlagsEXT vkbitfield)
{
    const auto i = Meta_StringsByVkDebugUtilsMessageSeverityFlagsEXT.find(vkbitfield);
    if (i != Meta_StringsByVkDebugUtilsMessageSeverityFlagsEXT.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkDebugUtilsMessageTypeFlagsEXT vkbitfield)
{
    const auto i = Meta_StringsByVkDebugUtilsMessageTypeFlagsEXT.find(vkbitfield);
    if (i != Meta_StringsByVkDebugUtilsMessageTypeFlagsEXT.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkDebugUtilsMessengerCallbackDataFlagsEXT vkbitfield)
{
    const auto i = Meta_StringsByVkDebugUtilsMessengerCallbackDataFlagsEXT.find(vkbitfield);
    if (i != Meta_StringsByVkDebugUtilsMessengerCallbackDataFlagsEXT.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkDependencyFlags vkbitfield)
{
    const auto i = Meta_StringsByVkDependencyFlags.find(vkbitfield);
    if (i != Meta_StringsByVkDependencyFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkDescriptorPoolCreateFlags vkbitfield)
{
    const auto i = Meta_StringsByVkDescriptorPoolCreateFlags.find(vkbitfield);
    if (i != Meta_StringsByVkDescriptorPoolCreateFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkDescriptorPoolResetFlags vkbitfield)
{
    const auto i = Meta_StringsByVkDescriptorPoolResetFlags.find(vkbitfield);
    if (i != Meta_StringsByVkDescriptorPoolResetFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkDescriptorSetLayoutCreateFlags vkbitfield)
{
    const auto i = Meta_StringsByVkDescriptorSetLayoutCreateFlags.find(vkbitfield);
    if (i != Meta_StringsByVkDescriptorSetLayoutCreateFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkDescriptorUpdateTemplateCreateFlags vkbitfield)
{
    const auto i = Meta_StringsByVkDescriptorUpdateTemplateCreateFlags.find(vkbitfield);
    if (i != Meta_StringsByVkDescriptorUpdateTemplateCreateFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkDescriptorUpdateTemplateCreateFlagsKHR vkbitfield)
{
    const auto i = Meta_StringsByVkDescriptorUpdateTemplateCreateFlagsKHR.find(vkbitfield);
    if (i != Meta_StringsByVkDescriptorUpdateTemplateCreateFlagsKHR.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkDeviceCreateFlags vkbitfield)
{
    const auto i = Meta_StringsByVkDeviceCreateFlags.find(vkbitfield);
    if (i != Meta_StringsByVkDeviceCreateFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkDeviceGroupPresentModeFlagsKHR vkbitfield)
{
    const auto i = Meta_StringsByVkDeviceGroupPresentModeFlagsKHR.find(vkbitfield);
    if (i != Meta_StringsByVkDeviceGroupPresentModeFlagsKHR.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkDeviceQueueCreateFlags vkbitfield)
{
    const auto i = Meta_StringsByVkDeviceQueueCreateFlags.find(vkbitfield);
    if (i != Meta_StringsByVkDeviceQueueCreateFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkDisplayModeCreateFlagsKHR vkbitfield)
{
    const auto i = Meta_StringsByVkDisplayModeCreateFlagsKHR.find(vkbitfield);
    if (i != Meta_StringsByVkDisplayModeCreateFlagsKHR.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkDisplayPlaneAlphaFlagsKHR vkbitfield)
{
    const auto i = Meta_StringsByVkDisplayPlaneAlphaFlagsKHR.find(vkbitfield);
    if (i != Meta_StringsByVkDisplayPlaneAlphaFlagsKHR.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkDisplaySurfaceCreateFlagsKHR vkbitfield)
{
    const auto i = Meta_StringsByVkDisplaySurfaceCreateFlagsKHR.find(vkbitfield);
    if (i != Meta_StringsByVkDisplaySurfaceCreateFlagsKHR.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkEventCreateFlags vkbitfield)
{
    const auto i = Meta_StringsByVkEventCreateFlags.find(vkbitfield);
    if (i != Meta_StringsByVkEventCreateFlags.end())
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

const std::string & Meta::getString(const VkExternalFenceFeatureFlags vkbitfield)
{
    const auto i = Meta_StringsByVkExternalFenceFeatureFlags.find(vkbitfield);
    if (i != Meta_StringsByVkExternalFenceFeatureFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkExternalFenceFeatureFlagsKHR vkbitfield)
{
    const auto i = Meta_StringsByVkExternalFenceFeatureFlagsKHR.find(vkbitfield);
    if (i != Meta_StringsByVkExternalFenceFeatureFlagsKHR.end())
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

const std::string & Meta::getString(const VkExternalFenceHandleTypeFlags vkbitfield)
{
    const auto i = Meta_StringsByVkExternalFenceHandleTypeFlags.find(vkbitfield);
    if (i != Meta_StringsByVkExternalFenceHandleTypeFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkExternalFenceHandleTypeFlagsKHR vkbitfield)
{
    const auto i = Meta_StringsByVkExternalFenceHandleTypeFlagsKHR.find(vkbitfield);
    if (i != Meta_StringsByVkExternalFenceHandleTypeFlagsKHR.end())
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

const std::string & Meta::getString(const VkExternalMemoryFeatureFlags vkbitfield)
{
    const auto i = Meta_StringsByVkExternalMemoryFeatureFlags.find(vkbitfield);
    if (i != Meta_StringsByVkExternalMemoryFeatureFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkExternalMemoryFeatureFlagsKHR vkbitfield)
{
    const auto i = Meta_StringsByVkExternalMemoryFeatureFlagsKHR.find(vkbitfield);
    if (i != Meta_StringsByVkExternalMemoryFeatureFlagsKHR.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkExternalMemoryFeatureFlagsNV vkbitfield)
{
    const auto i = Meta_StringsByVkExternalMemoryFeatureFlagsNV.find(vkbitfield);
    if (i != Meta_StringsByVkExternalMemoryFeatureFlagsNV.end())
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

const std::string & Meta::getString(const VkExternalMemoryHandleTypeFlags vkbitfield)
{
    const auto i = Meta_StringsByVkExternalMemoryHandleTypeFlags.find(vkbitfield);
    if (i != Meta_StringsByVkExternalMemoryHandleTypeFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkExternalMemoryHandleTypeFlagsKHR vkbitfield)
{
    const auto i = Meta_StringsByVkExternalMemoryHandleTypeFlagsKHR.find(vkbitfield);
    if (i != Meta_StringsByVkExternalMemoryHandleTypeFlagsKHR.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkExternalMemoryHandleTypeFlagsNV vkbitfield)
{
    const auto i = Meta_StringsByVkExternalMemoryHandleTypeFlagsNV.find(vkbitfield);
    if (i != Meta_StringsByVkExternalMemoryHandleTypeFlagsNV.end())
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

const std::string & Meta::getString(const VkExternalSemaphoreFeatureFlags vkbitfield)
{
    const auto i = Meta_StringsByVkExternalSemaphoreFeatureFlags.find(vkbitfield);
    if (i != Meta_StringsByVkExternalSemaphoreFeatureFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkExternalSemaphoreFeatureFlagsKHR vkbitfield)
{
    const auto i = Meta_StringsByVkExternalSemaphoreFeatureFlagsKHR.find(vkbitfield);
    if (i != Meta_StringsByVkExternalSemaphoreFeatureFlagsKHR.end())
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

const std::string & Meta::getString(const VkExternalSemaphoreHandleTypeFlags vkbitfield)
{
    const auto i = Meta_StringsByVkExternalSemaphoreHandleTypeFlags.find(vkbitfield);
    if (i != Meta_StringsByVkExternalSemaphoreHandleTypeFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkExternalSemaphoreHandleTypeFlagsKHR vkbitfield)
{
    const auto i = Meta_StringsByVkExternalSemaphoreHandleTypeFlagsKHR.find(vkbitfield);
    if (i != Meta_StringsByVkExternalSemaphoreHandleTypeFlagsKHR.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkFenceCreateFlags vkbitfield)
{
    const auto i = Meta_StringsByVkFenceCreateFlags.find(vkbitfield);
    if (i != Meta_StringsByVkFenceCreateFlags.end())
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

const std::string & Meta::getString(const VkFenceImportFlags vkbitfield)
{
    const auto i = Meta_StringsByVkFenceImportFlags.find(vkbitfield);
    if (i != Meta_StringsByVkFenceImportFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkFenceImportFlagsKHR vkbitfield)
{
    const auto i = Meta_StringsByVkFenceImportFlagsKHR.find(vkbitfield);
    if (i != Meta_StringsByVkFenceImportFlagsKHR.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkFormatFeatureFlags vkbitfield)
{
    const auto i = Meta_StringsByVkFormatFeatureFlags.find(vkbitfield);
    if (i != Meta_StringsByVkFormatFeatureFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkFramebufferCreateFlags vkbitfield)
{
    const auto i = Meta_StringsByVkFramebufferCreateFlags.find(vkbitfield);
    if (i != Meta_StringsByVkFramebufferCreateFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkGeometryFlagsNV vkbitfield)
{
    const auto i = Meta_StringsByVkGeometryFlagsNV.find(vkbitfield);
    if (i != Meta_StringsByVkGeometryFlagsNV.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkGeometryInstanceFlagsNV vkbitfield)
{
    const auto i = Meta_StringsByVkGeometryInstanceFlagsNV.find(vkbitfield);
    if (i != Meta_StringsByVkGeometryInstanceFlagsNV.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkHeadlessSurfaceCreateFlagsEXT vkbitfield)
{
    const auto i = Meta_StringsByVkHeadlessSurfaceCreateFlagsEXT.find(vkbitfield);
    if (i != Meta_StringsByVkHeadlessSurfaceCreateFlagsEXT.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkImageAspectFlags vkbitfield)
{
    const auto i = Meta_StringsByVkImageAspectFlags.find(vkbitfield);
    if (i != Meta_StringsByVkImageAspectFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkImageCreateFlags vkbitfield)
{
    const auto i = Meta_StringsByVkImageCreateFlags.find(vkbitfield);
    if (i != Meta_StringsByVkImageCreateFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkImageUsageFlags vkbitfield)
{
    const auto i = Meta_StringsByVkImageUsageFlags.find(vkbitfield);
    if (i != Meta_StringsByVkImageUsageFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkImageViewCreateFlags vkbitfield)
{
    const auto i = Meta_StringsByVkImageViewCreateFlags.find(vkbitfield);
    if (i != Meta_StringsByVkImageViewCreateFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkIndirectCommandsLayoutUsageFlagsNVX vkbitfield)
{
    const auto i = Meta_StringsByVkIndirectCommandsLayoutUsageFlagsNVX.find(vkbitfield);
    if (i != Meta_StringsByVkIndirectCommandsLayoutUsageFlagsNVX.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkInstanceCreateFlags vkbitfield)
{
    const auto i = Meta_StringsByVkInstanceCreateFlags.find(vkbitfield);
    if (i != Meta_StringsByVkInstanceCreateFlags.end())
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

const std::string & Meta::getString(const VkMemoryAllocateFlags vkbitfield)
{
    const auto i = Meta_StringsByVkMemoryAllocateFlags.find(vkbitfield);
    if (i != Meta_StringsByVkMemoryAllocateFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkMemoryAllocateFlagsKHR vkbitfield)
{
    const auto i = Meta_StringsByVkMemoryAllocateFlagsKHR.find(vkbitfield);
    if (i != Meta_StringsByVkMemoryAllocateFlagsKHR.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkMemoryHeapFlags vkbitfield)
{
    const auto i = Meta_StringsByVkMemoryHeapFlags.find(vkbitfield);
    if (i != Meta_StringsByVkMemoryHeapFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkMemoryMapFlags vkbitfield)
{
    const auto i = Meta_StringsByVkMemoryMapFlags.find(vkbitfield);
    if (i != Meta_StringsByVkMemoryMapFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkMemoryPropertyFlags vkbitfield)
{
    const auto i = Meta_StringsByVkMemoryPropertyFlags.find(vkbitfield);
    if (i != Meta_StringsByVkMemoryPropertyFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkObjectEntryUsageFlagsNVX vkbitfield)
{
    const auto i = Meta_StringsByVkObjectEntryUsageFlagsNVX.find(vkbitfield);
    if (i != Meta_StringsByVkObjectEntryUsageFlagsNVX.end())
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

const std::string & Meta::getString(const VkPeerMemoryFeatureFlags vkbitfield)
{
    const auto i = Meta_StringsByVkPeerMemoryFeatureFlags.find(vkbitfield);
    if (i != Meta_StringsByVkPeerMemoryFeatureFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPeerMemoryFeatureFlagsKHR vkbitfield)
{
    const auto i = Meta_StringsByVkPeerMemoryFeatureFlagsKHR.find(vkbitfield);
    if (i != Meta_StringsByVkPeerMemoryFeatureFlagsKHR.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPipelineCacheCreateFlags vkbitfield)
{
    const auto i = Meta_StringsByVkPipelineCacheCreateFlags.find(vkbitfield);
    if (i != Meta_StringsByVkPipelineCacheCreateFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPipelineColorBlendStateCreateFlags vkbitfield)
{
    const auto i = Meta_StringsByVkPipelineColorBlendStateCreateFlags.find(vkbitfield);
    if (i != Meta_StringsByVkPipelineColorBlendStateCreateFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPipelineCompilerControlFlagsAMD vkbitfield)
{
    const auto i = Meta_StringsByVkPipelineCompilerControlFlagsAMD.find(vkbitfield);
    if (i != Meta_StringsByVkPipelineCompilerControlFlagsAMD.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPipelineCoverageModulationStateCreateFlagsNV vkbitfield)
{
    const auto i = Meta_StringsByVkPipelineCoverageModulationStateCreateFlagsNV.find(vkbitfield);
    if (i != Meta_StringsByVkPipelineCoverageModulationStateCreateFlagsNV.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPipelineCoverageReductionStateCreateFlagsNV vkbitfield)
{
    const auto i = Meta_StringsByVkPipelineCoverageReductionStateCreateFlagsNV.find(vkbitfield);
    if (i != Meta_StringsByVkPipelineCoverageReductionStateCreateFlagsNV.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPipelineCoverageToColorStateCreateFlagsNV vkbitfield)
{
    const auto i = Meta_StringsByVkPipelineCoverageToColorStateCreateFlagsNV.find(vkbitfield);
    if (i != Meta_StringsByVkPipelineCoverageToColorStateCreateFlagsNV.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPipelineCreateFlags vkbitfield)
{
    const auto i = Meta_StringsByVkPipelineCreateFlags.find(vkbitfield);
    if (i != Meta_StringsByVkPipelineCreateFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPipelineCreationFeedbackFlagsEXT vkbitfield)
{
    const auto i = Meta_StringsByVkPipelineCreationFeedbackFlagsEXT.find(vkbitfield);
    if (i != Meta_StringsByVkPipelineCreationFeedbackFlagsEXT.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPipelineDepthStencilStateCreateFlags vkbitfield)
{
    const auto i = Meta_StringsByVkPipelineDepthStencilStateCreateFlags.find(vkbitfield);
    if (i != Meta_StringsByVkPipelineDepthStencilStateCreateFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPipelineDiscardRectangleStateCreateFlagsEXT vkbitfield)
{
    const auto i = Meta_StringsByVkPipelineDiscardRectangleStateCreateFlagsEXT.find(vkbitfield);
    if (i != Meta_StringsByVkPipelineDiscardRectangleStateCreateFlagsEXT.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPipelineDynamicStateCreateFlags vkbitfield)
{
    const auto i = Meta_StringsByVkPipelineDynamicStateCreateFlags.find(vkbitfield);
    if (i != Meta_StringsByVkPipelineDynamicStateCreateFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPipelineInputAssemblyStateCreateFlags vkbitfield)
{
    const auto i = Meta_StringsByVkPipelineInputAssemblyStateCreateFlags.find(vkbitfield);
    if (i != Meta_StringsByVkPipelineInputAssemblyStateCreateFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPipelineLayoutCreateFlags vkbitfield)
{
    const auto i = Meta_StringsByVkPipelineLayoutCreateFlags.find(vkbitfield);
    if (i != Meta_StringsByVkPipelineLayoutCreateFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPipelineMultisampleStateCreateFlags vkbitfield)
{
    const auto i = Meta_StringsByVkPipelineMultisampleStateCreateFlags.find(vkbitfield);
    if (i != Meta_StringsByVkPipelineMultisampleStateCreateFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPipelineRasterizationConservativeStateCreateFlagsEXT vkbitfield)
{
    const auto i = Meta_StringsByVkPipelineRasterizationConservativeStateCreateFlagsEXT.find(vkbitfield);
    if (i != Meta_StringsByVkPipelineRasterizationConservativeStateCreateFlagsEXT.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPipelineRasterizationDepthClipStateCreateFlagsEXT vkbitfield)
{
    const auto i = Meta_StringsByVkPipelineRasterizationDepthClipStateCreateFlagsEXT.find(vkbitfield);
    if (i != Meta_StringsByVkPipelineRasterizationDepthClipStateCreateFlagsEXT.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPipelineRasterizationStateCreateFlags vkbitfield)
{
    const auto i = Meta_StringsByVkPipelineRasterizationStateCreateFlags.find(vkbitfield);
    if (i != Meta_StringsByVkPipelineRasterizationStateCreateFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPipelineRasterizationStateStreamCreateFlagsEXT vkbitfield)
{
    const auto i = Meta_StringsByVkPipelineRasterizationStateStreamCreateFlagsEXT.find(vkbitfield);
    if (i != Meta_StringsByVkPipelineRasterizationStateStreamCreateFlagsEXT.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPipelineShaderStageCreateFlags vkbitfield)
{
    const auto i = Meta_StringsByVkPipelineShaderStageCreateFlags.find(vkbitfield);
    if (i != Meta_StringsByVkPipelineShaderStageCreateFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPipelineStageFlags vkbitfield)
{
    const auto i = Meta_StringsByVkPipelineStageFlags.find(vkbitfield);
    if (i != Meta_StringsByVkPipelineStageFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPipelineTessellationStateCreateFlags vkbitfield)
{
    const auto i = Meta_StringsByVkPipelineTessellationStateCreateFlags.find(vkbitfield);
    if (i != Meta_StringsByVkPipelineTessellationStateCreateFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPipelineVertexInputStateCreateFlags vkbitfield)
{
    const auto i = Meta_StringsByVkPipelineVertexInputStateCreateFlags.find(vkbitfield);
    if (i != Meta_StringsByVkPipelineVertexInputStateCreateFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPipelineViewportStateCreateFlags vkbitfield)
{
    const auto i = Meta_StringsByVkPipelineViewportStateCreateFlags.find(vkbitfield);
    if (i != Meta_StringsByVkPipelineViewportStateCreateFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkPipelineViewportSwizzleStateCreateFlagsNV vkbitfield)
{
    const auto i = Meta_StringsByVkPipelineViewportSwizzleStateCreateFlagsNV.find(vkbitfield);
    if (i != Meta_StringsByVkPipelineViewportSwizzleStateCreateFlagsNV.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkQueryControlFlags vkbitfield)
{
    const auto i = Meta_StringsByVkQueryControlFlags.find(vkbitfield);
    if (i != Meta_StringsByVkQueryControlFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkQueryPipelineStatisticFlags vkbitfield)
{
    const auto i = Meta_StringsByVkQueryPipelineStatisticFlags.find(vkbitfield);
    if (i != Meta_StringsByVkQueryPipelineStatisticFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkQueryPoolCreateFlags vkbitfield)
{
    const auto i = Meta_StringsByVkQueryPoolCreateFlags.find(vkbitfield);
    if (i != Meta_StringsByVkQueryPoolCreateFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkQueryResultFlags vkbitfield)
{
    const auto i = Meta_StringsByVkQueryResultFlags.find(vkbitfield);
    if (i != Meta_StringsByVkQueryResultFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkQueueFlags vkbitfield)
{
    const auto i = Meta_StringsByVkQueueFlags.find(vkbitfield);
    if (i != Meta_StringsByVkQueueFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkRenderPassCreateFlags vkbitfield)
{
    const auto i = Meta_StringsByVkRenderPassCreateFlags.find(vkbitfield);
    if (i != Meta_StringsByVkRenderPassCreateFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkResolveModeFlagsKHR vkbitfield)
{
    const auto i = Meta_StringsByVkResolveModeFlagsKHR.find(vkbitfield);
    if (i != Meta_StringsByVkResolveModeFlagsKHR.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkSampleCountFlags vkbitfield)
{
    const auto i = Meta_StringsByVkSampleCountFlags.find(vkbitfield);
    if (i != Meta_StringsByVkSampleCountFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkSamplerCreateFlags vkbitfield)
{
    const auto i = Meta_StringsByVkSamplerCreateFlags.find(vkbitfield);
    if (i != Meta_StringsByVkSamplerCreateFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkSemaphoreCreateFlags vkbitfield)
{
    const auto i = Meta_StringsByVkSemaphoreCreateFlags.find(vkbitfield);
    if (i != Meta_StringsByVkSemaphoreCreateFlags.end())
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

const std::string & Meta::getString(const VkSemaphoreImportFlags vkbitfield)
{
    const auto i = Meta_StringsByVkSemaphoreImportFlags.find(vkbitfield);
    if (i != Meta_StringsByVkSemaphoreImportFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkSemaphoreImportFlagsKHR vkbitfield)
{
    const auto i = Meta_StringsByVkSemaphoreImportFlagsKHR.find(vkbitfield);
    if (i != Meta_StringsByVkSemaphoreImportFlagsKHR.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkShaderCorePropertiesFlagsAMD vkbitfield)
{
    const auto i = Meta_StringsByVkShaderCorePropertiesFlagsAMD.find(vkbitfield);
    if (i != Meta_StringsByVkShaderCorePropertiesFlagsAMD.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkShaderModuleCreateFlags vkbitfield)
{
    const auto i = Meta_StringsByVkShaderModuleCreateFlags.find(vkbitfield);
    if (i != Meta_StringsByVkShaderModuleCreateFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkShaderStageFlags vkbitfield)
{
    const auto i = Meta_StringsByVkShaderStageFlags.find(vkbitfield);
    if (i != Meta_StringsByVkShaderStageFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkSparseImageFormatFlags vkbitfield)
{
    const auto i = Meta_StringsByVkSparseImageFormatFlags.find(vkbitfield);
    if (i != Meta_StringsByVkSparseImageFormatFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkSparseMemoryBindFlags vkbitfield)
{
    const auto i = Meta_StringsByVkSparseMemoryBindFlags.find(vkbitfield);
    if (i != Meta_StringsByVkSparseMemoryBindFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkStencilFaceFlags vkbitfield)
{
    const auto i = Meta_StringsByVkStencilFaceFlags.find(vkbitfield);
    if (i != Meta_StringsByVkStencilFaceFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkSubgroupFeatureFlags vkbitfield)
{
    const auto i = Meta_StringsByVkSubgroupFeatureFlags.find(vkbitfield);
    if (i != Meta_StringsByVkSubgroupFeatureFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkSubpassDescriptionFlags vkbitfield)
{
    const auto i = Meta_StringsByVkSubpassDescriptionFlags.find(vkbitfield);
    if (i != Meta_StringsByVkSubpassDescriptionFlags.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkSurfaceCounterFlagsEXT vkbitfield)
{
    const auto i = Meta_StringsByVkSurfaceCounterFlagsEXT.find(vkbitfield);
    if (i != Meta_StringsByVkSurfaceCounterFlagsEXT.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkSurfaceTransformFlagsKHR vkbitfield)
{
    const auto i = Meta_StringsByVkSurfaceTransformFlagsKHR.find(vkbitfield);
    if (i != Meta_StringsByVkSurfaceTransformFlagsKHR.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkSwapchainCreateFlagsKHR vkbitfield)
{
    const auto i = Meta_StringsByVkSwapchainCreateFlagsKHR.find(vkbitfield);
    if (i != Meta_StringsByVkSwapchainCreateFlagsKHR.end())
    {
        return i->second;
    }
    return none;
}

const std::string & Meta::getString(const VkValidationCacheCreateFlagsEXT vkbitfield)
{
    const auto i = Meta_StringsByVkValidationCacheCreateFlagsEXT.find(vkbitfield);
    if (i != Meta_StringsByVkValidationCacheCreateFlagsEXT.end())
    {
        return i->second;
    }
    return none;
}


} } // namespace vkbinding::aux