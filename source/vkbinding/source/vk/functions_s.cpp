
#include "../Binding_pch.h"

#include <vkbinding/vk/functions.h>


namespace vk
{


VkResult vkSetDebugUtilsObjectNameEXT(VkDevice device, const VkDebugUtilsObjectNameInfoEXT* pNameInfo)
{
    return vkbinding::Binding::SetDebugUtilsObjectNameEXT(device, pNameInfo);
}

VkResult vkSetDebugUtilsObjectTagEXT(VkDevice device, const VkDebugUtilsObjectTagInfoEXT* pTagInfo)
{
    return vkbinding::Binding::SetDebugUtilsObjectTagEXT(device, pTagInfo);
}

VkResult vkSetEvent(VkDevice device, VkEvent event)
{
    return vkbinding::Binding::SetEvent(device, event);
}

void vkSetHdrMetadataEXT(VkDevice device, uint32_t swapchainCount, const VkSwapchainKHR* pSwapchains, const VkHdrMetadataEXT* pMetadata)
{
    return vkbinding::Binding::SetHdrMetadataEXT(device, swapchainCount, pSwapchains, pMetadata);
}

void vkSetLocalDimmingAMD(VkDevice device, VkSwapchainKHR swapChain, VkBool32 localDimmingEnable)
{
    return vkbinding::Binding::SetLocalDimmingAMD(device, swapChain, localDimmingEnable);
}

void vkSubmitDebugUtilsMessageEXT(VkInstance instance, VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity, VkDebugUtilsMessageTypeFlagsEXT messageTypes, const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData)
{
    return vkbinding::Binding::SubmitDebugUtilsMessageEXT(instance, messageSeverity, messageTypes, pCallbackData);
}


} // namespace vk