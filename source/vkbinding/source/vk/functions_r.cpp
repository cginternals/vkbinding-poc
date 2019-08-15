
#include "../Binding_pch.h"

#include <vkbinding/vk/functions.h>


namespace vk
{


VkResult vkRegisterDeviceEventEXT(VkDevice device, const VkDeviceEventInfoEXT* pDeviceEventInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence)
{
    return vkbinding::Binding::RegisterDeviceEventEXT(device, pDeviceEventInfo, pAllocator, pFence);
}

VkResult vkRegisterDisplayEventEXT(VkDevice device, VkDisplayKHR display, const VkDisplayEventInfoEXT* pDisplayEventInfo, const VkAllocationCallbacks* pAllocator, VkFence* pFence)
{
    return vkbinding::Binding::RegisterDisplayEventEXT(device, display, pDisplayEventInfo, pAllocator, pFence);
}

VkResult vkRegisterObjectsNVX(VkDevice device, VkObjectTableNVX objectTable, uint32_t objectCount, const VkObjectTableEntryNVX* const* ppObjectTableEntries, const uint32_t* pObjectIndices)
{
    return vkbinding::Binding::RegisterObjectsNVX(device, objectTable, objectCount, ppObjectTableEntries, pObjectIndices);
}

VkResult vkReleaseDisplayEXT(VkPhysicalDevice physicalDevice, VkDisplayKHR display)
{
    return vkbinding::Binding::ReleaseDisplayEXT(physicalDevice, display);
}

VkResult vkReleaseFullScreenExclusiveModeEXT(VkDevice device, VkSwapchainKHR swapchain)
{
    return vkbinding::Binding::ReleaseFullScreenExclusiveModeEXT(device, swapchain);
}

VkResult vkReleasePerformanceConfigurationINTEL(VkDevice device, VkPerformanceConfigurationINTEL configuration)
{
    return vkbinding::Binding::ReleasePerformanceConfigurationINTEL(device, configuration);
}

VkResult vkResetCommandBuffer(VkCommandBuffer commandBuffer, VkCommandBufferResetFlags flags)
{
    return vkbinding::Binding::ResetCommandBuffer(commandBuffer, flags);
}

VkResult vkResetCommandPool(VkDevice device, VkCommandPool commandPool, VkCommandPoolResetFlags flags)
{
    return vkbinding::Binding::ResetCommandPool(device, commandPool, flags);
}

VkResult vkResetDescriptorPool(VkDevice device, VkDescriptorPool descriptorPool, VkDescriptorPoolResetFlags flags)
{
    return vkbinding::Binding::ResetDescriptorPool(device, descriptorPool, flags);
}

VkResult vkResetEvent(VkDevice device, VkEvent event)
{
    return vkbinding::Binding::ResetEvent(device, event);
}

VkResult vkResetFences(VkDevice device, uint32_t fenceCount, const VkFence* pFences)
{
    return vkbinding::Binding::ResetFences(device, fenceCount, pFences);
}

void vkResetQueryPoolEXT(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount)
{
    return vkbinding::Binding::ResetQueryPoolEXT(device, queryPool, firstQuery, queryCount);
}


} // namespace vk