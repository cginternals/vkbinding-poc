
#include "../Binding_pch.h"

#include <vkbinding/vk/functions.h>


namespace vk
{


VkResult vkEndCommandBuffer(VkCommandBuffer commandBuffer)
{
    return vkbinding::Binding::EndCommandBuffer(commandBuffer);
}

VkResult vkEnumerateDeviceExtensionProperties(VkPhysicalDevice physicalDevice, const char* pLayerName, uint32_t* pPropertyCount, VkExtensionProperties* pProperties)
{
    return vkbinding::Binding::EnumerateDeviceExtensionProperties(physicalDevice, pLayerName, pPropertyCount, pProperties);
}

VkResult vkEnumerateDeviceLayerProperties(VkPhysicalDevice physicalDevice, uint32_t* pPropertyCount, VkLayerProperties* pProperties)
{
    return vkbinding::Binding::EnumerateDeviceLayerProperties(physicalDevice, pPropertyCount, pProperties);
}

VkResult vkEnumerateInstanceExtensionProperties(const char* pLayerName, uint32_t* pPropertyCount, VkExtensionProperties* pProperties)
{
    return vkbinding::Binding::EnumerateInstanceExtensionProperties(pLayerName, pPropertyCount, pProperties);
}

VkResult vkEnumerateInstanceLayerProperties(uint32_t* pPropertyCount, VkLayerProperties* pProperties)
{
    return vkbinding::Binding::EnumerateInstanceLayerProperties(pPropertyCount, pProperties);
}

VkResult vkEnumerateInstanceVersion(uint32_t* pApiVersion)
{
    return vkbinding::Binding::EnumerateInstanceVersion(pApiVersion);
}

VkResult vkEnumeratePhysicalDeviceGroups(VkInstance instance, uint32_t* pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties)
{
    return vkbinding::Binding::EnumeratePhysicalDeviceGroups(instance, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties);
}

VkResult vkEnumeratePhysicalDeviceGroupsKHR(VkInstance instance, uint32_t* pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties* pPhysicalDeviceGroupProperties)
{
    return vkbinding::Binding::EnumeratePhysicalDeviceGroupsKHR(instance, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties);
}

VkResult vkEnumeratePhysicalDevices(VkInstance instance, uint32_t* pPhysicalDeviceCount, VkPhysicalDevice* pPhysicalDevices)
{
    return vkbinding::Binding::EnumeratePhysicalDevices(instance, pPhysicalDeviceCount, pPhysicalDevices);
}


} // namespace vk