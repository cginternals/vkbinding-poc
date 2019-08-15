
#include "Binding_pch.h"


using namespace vk;


namespace vkbinding
{


Function<VkResult, VkDevice, const VkImportFenceFdInfoKHR*> Binding::ImportFenceFdKHR("vkImportFenceFdKHR");
Function<VkResult, VkDevice, const VkImportFenceWin32HandleInfoKHR*> Binding::ImportFenceWin32HandleKHR("vkImportFenceWin32HandleKHR");
Function<VkResult, VkDevice, const VkImportSemaphoreFdInfoKHR*> Binding::ImportSemaphoreFdKHR("vkImportSemaphoreFdKHR");
Function<VkResult, VkDevice, const VkImportSemaphoreWin32HandleInfoKHR*> Binding::ImportSemaphoreWin32HandleKHR("vkImportSemaphoreWin32HandleKHR");
Function<VkResult, VkDevice, const VkInitializePerformanceApiInfoINTEL*> Binding::InitializePerformanceApiINTEL("vkInitializePerformanceApiINTEL");
Function<VkResult, VkDevice, uint32_t, const VkMappedMemoryRange*> Binding::InvalidateMappedMemoryRanges("vkInvalidateMappedMemoryRanges");


} // namespace vkbinding