
#include "Binding_pch.h"


using namespace vk;


namespace vkbinding
{


Function<VkResult, VkCommandBuffer> Binding::EndCommandBuffer("vkEndCommandBuffer");
Function<VkResult, VkPhysicalDevice, const char*, uint32_t*, VkExtensionProperties*> Binding::EnumerateDeviceExtensionProperties("vkEnumerateDeviceExtensionProperties");
Function<VkResult, VkPhysicalDevice, uint32_t*, VkLayerProperties*> Binding::EnumerateDeviceLayerProperties("vkEnumerateDeviceLayerProperties");
Function<VkResult, const char*, uint32_t*, VkExtensionProperties*> Binding::EnumerateInstanceExtensionProperties("vkEnumerateInstanceExtensionProperties");
Function<VkResult, uint32_t*, VkLayerProperties*> Binding::EnumerateInstanceLayerProperties("vkEnumerateInstanceLayerProperties");
Function<VkResult, uint32_t*> Binding::EnumerateInstanceVersion("vkEnumerateInstanceVersion");
Function<VkResult, VkInstance, uint32_t*, VkPhysicalDeviceGroupProperties*> Binding::EnumeratePhysicalDeviceGroups("vkEnumeratePhysicalDeviceGroups");
Function<VkResult, VkInstance, uint32_t*, VkPhysicalDeviceGroupProperties*> Binding::EnumeratePhysicalDeviceGroupsKHR("vkEnumeratePhysicalDeviceGroupsKHR");
Function<VkResult, VkInstance, uint32_t*, VkPhysicalDevice*> Binding::EnumeratePhysicalDevices("vkEnumeratePhysicalDevices");


} // namespace vkbinding