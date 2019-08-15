
#include "Binding_pch.h"


using namespace vk;


namespace vkbinding
{


Function<VkResult, VkCommandBuffer, const VkCommandBufferBeginInfo*> Binding::BeginCommandBuffer("vkBeginCommandBuffer");
Function<VkResult, VkDevice, uint32_t, const VkBindAccelerationStructureMemoryInfoNV*> Binding::BindAccelerationStructureMemoryNV("vkBindAccelerationStructureMemoryNV");
Function<VkResult, VkDevice, VkBuffer, VkDeviceMemory, VkDeviceSize> Binding::BindBufferMemory("vkBindBufferMemory");
Function<VkResult, VkDevice, uint32_t, const VkBindBufferMemoryInfo*> Binding::BindBufferMemory2("vkBindBufferMemory2");
Function<VkResult, VkDevice, uint32_t, const VkBindBufferMemoryInfo*> Binding::BindBufferMemory2KHR("vkBindBufferMemory2KHR");
Function<VkResult, VkDevice, VkImage, VkDeviceMemory, VkDeviceSize> Binding::BindImageMemory("vkBindImageMemory");
Function<VkResult, VkDevice, uint32_t, const VkBindImageMemoryInfo*> Binding::BindImageMemory2("vkBindImageMemory2");
Function<VkResult, VkDevice, uint32_t, const VkBindImageMemoryInfo*> Binding::BindImageMemory2KHR("vkBindImageMemory2KHR");


} // namespace vkbinding