
#include "../Binding_pch.h"

#include <vkbinding/vk/functions.h>


namespace vk
{


void vkUninitializePerformanceApiINTEL(VkDevice device)
{
    return vkbinding::Binding::UninitializePerformanceApiINTEL(device);
}

void vkUnmapMemory(VkDevice device, VkDeviceMemory memory)
{
    return vkbinding::Binding::UnmapMemory(device, memory);
}

VkResult vkUnregisterObjectsNVX(VkDevice device, VkObjectTableNVX objectTable, uint32_t objectCount, const VkObjectEntryTypeNVX* pObjectEntryTypes, const uint32_t* pObjectIndices)
{
    return vkbinding::Binding::UnregisterObjectsNVX(device, objectTable, objectCount, pObjectEntryTypes, pObjectIndices);
}

void vkUpdateDescriptorSets(VkDevice device, uint32_t descriptorWriteCount, const VkWriteDescriptorSet* pDescriptorWrites, uint32_t descriptorCopyCount, const VkCopyDescriptorSet* pDescriptorCopies)
{
    return vkbinding::Binding::UpdateDescriptorSets(device, descriptorWriteCount, pDescriptorWrites, descriptorCopyCount, pDescriptorCopies);
}

void vkUpdateDescriptorSetWithTemplate(VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const void* pData)
{
    return vkbinding::Binding::UpdateDescriptorSetWithTemplate(device, descriptorSet, descriptorUpdateTemplate, pData);
}

void vkUpdateDescriptorSetWithTemplateKHR(VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const void* pData)
{
    return vkbinding::Binding::UpdateDescriptorSetWithTemplateKHR(device, descriptorSet, descriptorUpdateTemplate, pData);
}


} // namespace vk