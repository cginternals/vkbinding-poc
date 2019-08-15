
#include "Binding_pch.h"


using namespace vk;


namespace vkbinding
{


Function<VkResult, VkDevice, const VkDeviceEventInfoEXT*, const VkAllocationCallbacks*, VkFence*> Binding::RegisterDeviceEventEXT("vkRegisterDeviceEventEXT");
Function<VkResult, VkDevice, VkDisplayKHR, const VkDisplayEventInfoEXT*, const VkAllocationCallbacks*, VkFence*> Binding::RegisterDisplayEventEXT("vkRegisterDisplayEventEXT");
Function<VkResult, VkDevice, VkObjectTableNVX, uint32_t, const VkObjectTableEntryNVX* const*, const uint32_t*> Binding::RegisterObjectsNVX("vkRegisterObjectsNVX");
Function<VkResult, VkPhysicalDevice, VkDisplayKHR> Binding::ReleaseDisplayEXT("vkReleaseDisplayEXT");
Function<VkResult, VkDevice, VkPerformanceConfigurationINTEL> Binding::ReleasePerformanceConfigurationINTEL("vkReleasePerformanceConfigurationINTEL");
Function<VkResult, VkCommandBuffer, VkCommandBufferResetFlags> Binding::ResetCommandBuffer("vkResetCommandBuffer");
Function<VkResult, VkDevice, VkCommandPool, VkCommandPoolResetFlags> Binding::ResetCommandPool("vkResetCommandPool");
Function<VkResult, VkDevice, VkDescriptorPool, VkDescriptorPoolResetFlags> Binding::ResetDescriptorPool("vkResetDescriptorPool");
Function<VkResult, VkDevice, VkEvent> Binding::ResetEvent("vkResetEvent");
Function<VkResult, VkDevice, uint32_t, const VkFence*> Binding::ResetFences("vkResetFences");
Function<void, VkDevice, VkQueryPool, uint32_t, uint32_t> Binding::ResetQueryPoolEXT("vkResetQueryPoolEXT");


} // namespace vkbinding