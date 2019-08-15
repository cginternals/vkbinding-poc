
#include "../Binding_pch.h"

#include <vkbinding/vk/functions.h>


namespace vk
{


VkResult vkMapMemory(VkDevice device, VkDeviceMemory memory, VkDeviceSize offset, VkDeviceSize size, VkMemoryMapFlags flags, void** ppData)
{
    return vkbinding::Binding::MapMemory(device, memory, offset, size, flags, ppData);
}

VkResult vkMergePipelineCaches(VkDevice device, VkPipelineCache dstCache, uint32_t srcCacheCount, const VkPipelineCache* pSrcCaches)
{
    return vkbinding::Binding::MergePipelineCaches(device, dstCache, srcCacheCount, pSrcCaches);
}

VkResult vkMergeValidationCachesEXT(VkDevice device, VkValidationCacheEXT dstCache, uint32_t srcCacheCount, const VkValidationCacheEXT* pSrcCaches)
{
    return vkbinding::Binding::MergeValidationCachesEXT(device, dstCache, srcCacheCount, pSrcCaches);
}


} // namespace vk