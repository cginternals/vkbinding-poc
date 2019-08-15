
#include "../Binding_pch.h"

#include <vkbinding/vk/functions.h>


namespace vk
{


VkResult vkFlushMappedMemoryRanges(VkDevice device, uint32_t memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges)
{
    return vkbinding::Binding::FlushMappedMemoryRanges(device, memoryRangeCount, pMemoryRanges);
}

void vkFreeCommandBuffers(VkDevice device, VkCommandPool commandPool, uint32_t commandBufferCount, const VkCommandBuffer* pCommandBuffers)
{
    return vkbinding::Binding::FreeCommandBuffers(device, commandPool, commandBufferCount, pCommandBuffers);
}

VkResult vkFreeDescriptorSets(VkDevice device, VkDescriptorPool descriptorPool, uint32_t descriptorSetCount, const VkDescriptorSet* pDescriptorSets)
{
    return vkbinding::Binding::FreeDescriptorSets(device, descriptorPool, descriptorSetCount, pDescriptorSets);
}

void vkFreeMemory(VkDevice device, VkDeviceMemory memory, const VkAllocationCallbacks* pAllocator)
{
    return vkbinding::Binding::FreeMemory(device, memory, pAllocator);
}


} // namespace vk