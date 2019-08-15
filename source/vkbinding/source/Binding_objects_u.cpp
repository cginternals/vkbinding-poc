
#include "Binding_pch.h"


using namespace vk;


namespace vkbinding
{


Function<void, VkDevice> Binding::UninitializePerformanceApiINTEL("vkUninitializePerformanceApiINTEL");
Function<void, VkDevice, VkDeviceMemory> Binding::UnmapMemory("vkUnmapMemory");
Function<VkResult, VkDevice, VkObjectTableNVX, uint32_t, const VkObjectEntryTypeNVX*, const uint32_t*> Binding::UnregisterObjectsNVX("vkUnregisterObjectsNVX");
Function<void, VkDevice, uint32_t, const VkWriteDescriptorSet*, uint32_t, const VkCopyDescriptorSet*> Binding::UpdateDescriptorSets("vkUpdateDescriptorSets");
Function<void, VkDevice, VkDescriptorSet, VkDescriptorUpdateTemplate, const void*> Binding::UpdateDescriptorSetWithTemplate("vkUpdateDescriptorSetWithTemplate");
Function<void, VkDevice, VkDescriptorSet, VkDescriptorUpdateTemplate, const void*> Binding::UpdateDescriptorSetWithTemplateKHR("vkUpdateDescriptorSetWithTemplateKHR");


} // namespace vkbinding