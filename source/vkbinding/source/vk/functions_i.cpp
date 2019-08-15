
#include "../Binding_pch.h"

#include <vkbinding/vk/functions.h>


namespace vk
{


VkResult vkImportFenceFdKHR(VkDevice device, const VkImportFenceFdInfoKHR* pImportFenceFdInfo)
{
    return vkbinding::Binding::ImportFenceFdKHR(device, pImportFenceFdInfo);
}

VkResult vkImportFenceWin32HandleKHR(VkDevice device, const VkImportFenceWin32HandleInfoKHR* pImportFenceWin32HandleInfo)
{
    return vkbinding::Binding::ImportFenceWin32HandleKHR(device, pImportFenceWin32HandleInfo);
}

VkResult vkImportSemaphoreFdKHR(VkDevice device, const VkImportSemaphoreFdInfoKHR* pImportSemaphoreFdInfo)
{
    return vkbinding::Binding::ImportSemaphoreFdKHR(device, pImportSemaphoreFdInfo);
}

VkResult vkImportSemaphoreWin32HandleKHR(VkDevice device, const VkImportSemaphoreWin32HandleInfoKHR* pImportSemaphoreWin32HandleInfo)
{
    return vkbinding::Binding::ImportSemaphoreWin32HandleKHR(device, pImportSemaphoreWin32HandleInfo);
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