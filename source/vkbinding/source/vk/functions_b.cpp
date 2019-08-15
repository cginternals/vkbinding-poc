
#include "../Binding_pch.h"

#include <vkbinding/vk/functions.h>


namespace vk
{


VkResult vkBeginCommandBuffer(VkCommandBuffer commandBuffer, const VkCommandBufferBeginInfo* pBeginInfo)
{
    return vkbinding::Binding::BeginCommandBuffer(commandBuffer, pBeginInfo);
}

VkResult vkBindAccelerationStructureMemoryNV(VkDevice device, uint32_t bindInfoCount, const VkBindAccelerationStructureMemoryInfoNV* pBindInfos)
{
    return vkbinding::Binding::BindAccelerationStructureMemoryNV(device, bindInfoCount, pBindInfos);
}

VkResult vkBindBufferMemory(VkDevice device, VkBuffer buffer, VkDeviceMemory memory, VkDeviceSize memoryOffset)
{
    return vkbinding::Binding::BindBufferMemory(device, buffer, memory, memoryOffset);
}

VkResult vkBindBufferMemory2(VkDevice device, uint32_t bindInfoCount, const VkBindBufferMemoryInfo* pBindInfos)
{
    return vkbinding::Binding::BindBufferMemory2(device, bindInfoCount, pBindInfos);
}

VkResult vkBindBufferMemory2KHR(VkDevice device, uint32_t bindInfoCount, const VkBindBufferMemoryInfo* pBindInfos)
{
    return vkbinding::Binding::BindBufferMemory2KHR(device, bindInfoCount, pBindInfos);
}

VkResult vkBindImageMemory(VkDevice device, VkImage image, VkDeviceMemory memory, VkDeviceSize memoryOffset)
{
    return vkbinding::Binding::BindImageMemory(device, image, memory, memoryOffset);
}

VkResult vkBindImageMemory2(VkDevice device, uint32_t bindInfoCount, const VkBindImageMemoryInfo* pBindInfos)
{
    return vkbinding::Binding::BindImageMemory2(device, bindInfoCount, pBindInfos);
}

VkResult vkBindImageMemory2KHR(VkDevice device, uint32_t bindInfoCount, const VkBindImageMemoryInfo* pBindInfos)
{
    return vkbinding::Binding::BindImageMemory2KHR(device, bindInfoCount, pBindInfos);
}


} // namespace vk