
#include "Binding_pch.h"


using namespace vk;


namespace vkbinding
{


Function<VkResult, VkDevice, const VkAcquireNextImageInfoKHR*, uint32_t*> Binding::AcquireNextImage2KHR("vkAcquireNextImage2KHR");
Function<VkResult, VkDevice, VkSwapchainKHR, uint64_t, VkSemaphore, VkFence, uint32_t*> Binding::AcquireNextImageKHR("vkAcquireNextImageKHR");
Function<VkResult, VkDevice, const VkPerformanceConfigurationAcquireInfoINTEL*, VkPerformanceConfigurationINTEL*> Binding::AcquirePerformanceConfigurationINTEL("vkAcquirePerformanceConfigurationINTEL");
Function<VkResult, VkDevice, const VkCommandBufferAllocateInfo*, VkCommandBuffer*> Binding::AllocateCommandBuffers("vkAllocateCommandBuffers");
Function<VkResult, VkDevice, const VkDescriptorSetAllocateInfo*, VkDescriptorSet*> Binding::AllocateDescriptorSets("vkAllocateDescriptorSets");
Function<VkResult, VkDevice, const VkMemoryAllocateInfo*, const VkAllocationCallbacks*, VkDeviceMemory*> Binding::AllocateMemory("vkAllocateMemory");


} // namespace vkbinding