
#include "Binding_pch.h"


using namespace vk;


namespace vkbinding
{


Function<VkResult, VkDevice, VkDeviceMemory, VkDeviceSize, VkDeviceSize, VkMemoryMapFlags, void**> Binding::MapMemory("vkMapMemory");
Function<VkResult, VkDevice, VkPipelineCache, uint32_t, const VkPipelineCache*> Binding::MergePipelineCaches("vkMergePipelineCaches");
Function<VkResult, VkDevice, VkValidationCacheEXT, uint32_t, const VkValidationCacheEXT*> Binding::MergeValidationCachesEXT("vkMergeValidationCachesEXT");


} // namespace vkbinding