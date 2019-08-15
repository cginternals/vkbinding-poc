
#include "../Binding_pch.h"

#include <vkbinding/vk/functions.h>


namespace vk
{


VkResult vkAcquireFullScreenExclusiveModeEXT(VkDevice device, VkSwapchainKHR swapchain)
{
    return vkbinding::Binding::AcquireFullScreenExclusiveModeEXT(device, swapchain);
}

VkResult vkAcquireImageANDROID(VkDevice device, VkImage image, int nativeFenceFd, VkSemaphore semaphore, VkFence fence)
{
    return vkbinding::Binding::AcquireImageANDROID(device, image, nativeFenceFd, semaphore, fence);
}

VkResult vkAcquireNextImage2KHR(VkDevice device, const VkAcquireNextImageInfoKHR* pAcquireInfo, uint32_t* pImageIndex)
{
    return vkbinding::Binding::AcquireNextImage2KHR(device, pAcquireInfo, pImageIndex);
}

VkResult vkAcquireNextImageKHR(VkDevice device, VkSwapchainKHR swapchain, uint64_t timeout, VkSemaphore semaphore, VkFence fence, uint32_t* pImageIndex)
{
    return vkbinding::Binding::AcquireNextImageKHR(device, swapchain, timeout, semaphore, fence, pImageIndex);
}

VkResult vkAcquirePerformanceConfigurationINTEL(VkDevice device, const VkPerformanceConfigurationAcquireInfoINTEL* pAcquireInfo, VkPerformanceConfigurationINTEL* pConfiguration)
{
    return vkbinding::Binding::AcquirePerformanceConfigurationINTEL(device, pAcquireInfo, pConfiguration);
}

VkResult vkAcquireXlibDisplayEXT(VkPhysicalDevice physicalDevice, Display* dpy, VkDisplayKHR display)
{
    return vkbinding::Binding::AcquireXlibDisplayEXT(physicalDevice, dpy, display);
}

VkResult vkAllocateCommandBuffers(VkDevice device, const VkCommandBufferAllocateInfo* pAllocateInfo, VkCommandBuffer* pCommandBuffers)
{
    return vkbinding::Binding::AllocateCommandBuffers(device, pAllocateInfo, pCommandBuffers);
}

VkResult vkAllocateDescriptorSets(VkDevice device, const VkDescriptorSetAllocateInfo* pAllocateInfo, VkDescriptorSet* pDescriptorSets)
{
    return vkbinding::Binding::AllocateDescriptorSets(device, pAllocateInfo, pDescriptorSets);
}

VkResult vkAllocateMemory(VkDevice device, const VkMemoryAllocateInfo* pAllocateInfo, const VkAllocationCallbacks* pAllocator, VkDeviceMemory* pMemory)
{
    return vkbinding::Binding::AllocateMemory(device, pAllocateInfo, pAllocator, pMemory);
}


} // namespace vk