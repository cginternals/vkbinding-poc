
#include "Binding_pch.h"


using namespace vk;


namespace vkbinding
{


Function<VkResult, VkDevice, const VkDebugUtilsObjectNameInfoEXT*> Binding::SetDebugUtilsObjectNameEXT("vkSetDebugUtilsObjectNameEXT");
Function<VkResult, VkDevice, const VkDebugUtilsObjectTagInfoEXT*> Binding::SetDebugUtilsObjectTagEXT("vkSetDebugUtilsObjectTagEXT");
Function<VkResult, VkDevice, VkEvent> Binding::SetEvent("vkSetEvent");
Function<void, VkDevice, uint32_t, const VkSwapchainKHR*, const VkHdrMetadataEXT*> Binding::SetHdrMetadataEXT("vkSetHdrMetadataEXT");
Function<void, VkDevice, VkSwapchainKHR, VkBool32> Binding::SetLocalDimmingAMD("vkSetLocalDimmingAMD");
Function<void, VkInstance, VkDebugUtilsMessageSeverityFlagBitsEXT, VkDebugUtilsMessageTypeFlagsEXT, const VkDebugUtilsMessengerCallbackDataEXT*> Binding::SubmitDebugUtilsMessageEXT("vkSubmitDebugUtilsMessageEXT");


} // namespace vkbinding