
#include "Binding_pch.h"


using namespace vk;


namespace vkbinding
{


Function<VkResult, VkDevice, uint32_t, const VkMappedMemoryRange*> Binding::FlushMappedMemoryRanges("vkFlushMappedMemoryRanges");
Function<void, VkDevice, VkCommandPool, uint32_t, const VkCommandBuffer*> Binding::FreeCommandBuffers("vkFreeCommandBuffers");
Function<VkResult, VkDevice, VkDescriptorPool, uint32_t, const VkDescriptorSet*> Binding::FreeDescriptorSets("vkFreeDescriptorSets");
Function<void, VkDevice, VkDeviceMemory, const VkAllocationCallbacks*> Binding::FreeMemory("vkFreeMemory");


} // namespace vkbinding