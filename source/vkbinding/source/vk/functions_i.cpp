
#include "../Binding_pch.h"

#include <vkbinding/vk/functions.h>


namespace vk
{


VkResult vkImportFenceFdKHR(VkDevice device, const VkImportFenceFdInfoKHR* pImportFenceFdInfo)
{
    return vkbinding::Binding::ImportFenceFdKHR(device, pImportFenceFdInfo);
}

VkResult vkImportSemaphoreFdKHR(VkDevice device, const VkImportSemaphoreFdInfoKHR* pImportSemaphoreFdInfo)
{
    return vkbinding::Binding::ImportSemaphoreFdKHR(device, pImportSemaphoreFdInfo);
}

VkResult vkInitializePerformanceApiINTEL(VkDevice device, const VkInitializePerformanceApiInfoINTEL* pInitializeInfo)
{
    return vkbinding::Binding::InitializePerformanceApiINTEL(device, pInitializeInfo);
}

VkResult vkInvalidateMappedMemoryRanges(VkDevice device, uint32_t memoryRangeCount, const VkMappedMemoryRange* pMemoryRanges)
{
    return vkbinding::Binding::InvalidateMappedMemoryRanges(device, memoryRangeCount, pMemoryRanges);
}


} // namespace vk