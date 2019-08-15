
#include "Binding_pch.h"


using namespace vk;


namespace vkbinding
{


Function<VkResult, VkDevice, const VkDebugMarkerObjectNameInfoEXT*> Binding::DebugMarkerSetObjectNameEXT("vkDebugMarkerSetObjectNameEXT");
Function<VkResult, VkDevice, const VkDebugMarkerObjectTagInfoEXT*> Binding::DebugMarkerSetObjectTagEXT("vkDebugMarkerSetObjectTagEXT");
Function<void, VkInstance, VkDebugReportFlagsEXT, VkDebugReportObjectTypeEXT, uint64_t, size_t, int32_t, const char*, const char*> Binding::DebugReportMessageEXT("vkDebugReportMessageEXT");
Function<void, VkDevice, VkAccelerationStructureNV, const VkAllocationCallbacks*> Binding::DestroyAccelerationStructureNV("vkDestroyAccelerationStructureNV");
Function<void, VkDevice, VkBuffer, const VkAllocationCallbacks*> Binding::DestroyBuffer("vkDestroyBuffer");
Function<void, VkDevice, VkBufferView, const VkAllocationCallbacks*> Binding::DestroyBufferView("vkDestroyBufferView");
Function<void, VkDevice, VkCommandPool, const VkAllocationCallbacks*> Binding::DestroyCommandPool("vkDestroyCommandPool");
Function<void, VkInstance, VkDebugReportCallbackEXT, const VkAllocationCallbacks*> Binding::DestroyDebugReportCallbackEXT("vkDestroyDebugReportCallbackEXT");
Function<void, VkInstance, VkDebugUtilsMessengerEXT, const VkAllocationCallbacks*> Binding::DestroyDebugUtilsMessengerEXT("vkDestroyDebugUtilsMessengerEXT");
Function<void, VkDevice, VkDescriptorPool, const VkAllocationCallbacks*> Binding::DestroyDescriptorPool("vkDestroyDescriptorPool");
Function<void, VkDevice, VkDescriptorSetLayout, const VkAllocationCallbacks*> Binding::DestroyDescriptorSetLayout("vkDestroyDescriptorSetLayout");
Function<void, VkDevice, VkDescriptorUpdateTemplate, const VkAllocationCallbacks*> Binding::DestroyDescriptorUpdateTemplate("vkDestroyDescriptorUpdateTemplate");
Function<void, VkDevice, VkDescriptorUpdateTemplate, const VkAllocationCallbacks*> Binding::DestroyDescriptorUpdateTemplateKHR("vkDestroyDescriptorUpdateTemplateKHR");
Function<void, VkDevice, const VkAllocationCallbacks*> Binding::DestroyDevice("vkDestroyDevice");
Function<void, VkDevice, VkEvent, const VkAllocationCallbacks*> Binding::DestroyEvent("vkDestroyEvent");
Function<void, VkDevice, VkFence, const VkAllocationCallbacks*> Binding::DestroyFence("vkDestroyFence");
Function<void, VkDevice, VkFramebuffer, const VkAllocationCallbacks*> Binding::DestroyFramebuffer("vkDestroyFramebuffer");
Function<void, VkDevice, VkImage, const VkAllocationCallbacks*> Binding::DestroyImage("vkDestroyImage");
Function<void, VkDevice, VkImageView, const VkAllocationCallbacks*> Binding::DestroyImageView("vkDestroyImageView");
Function<void, VkDevice, VkIndirectCommandsLayoutNVX, const VkAllocationCallbacks*> Binding::DestroyIndirectCommandsLayoutNVX("vkDestroyIndirectCommandsLayoutNVX");
Function<void, VkInstance, const VkAllocationCallbacks*> Binding::DestroyInstance("vkDestroyInstance");
Function<void, VkDevice, VkObjectTableNVX, const VkAllocationCallbacks*> Binding::DestroyObjectTableNVX("vkDestroyObjectTableNVX");
Function<void, VkDevice, VkPipeline, const VkAllocationCallbacks*> Binding::DestroyPipeline("vkDestroyPipeline");
Function<void, VkDevice, VkPipelineCache, const VkAllocationCallbacks*> Binding::DestroyPipelineCache("vkDestroyPipelineCache");
Function<void, VkDevice, VkPipelineLayout, const VkAllocationCallbacks*> Binding::DestroyPipelineLayout("vkDestroyPipelineLayout");
Function<void, VkDevice, VkQueryPool, const VkAllocationCallbacks*> Binding::DestroyQueryPool("vkDestroyQueryPool");
Function<void, VkDevice, VkRenderPass, const VkAllocationCallbacks*> Binding::DestroyRenderPass("vkDestroyRenderPass");
Function<void, VkDevice, VkSampler, const VkAllocationCallbacks*> Binding::DestroySampler("vkDestroySampler");
Function<void, VkDevice, VkSamplerYcbcrConversion, const VkAllocationCallbacks*> Binding::DestroySamplerYcbcrConversion("vkDestroySamplerYcbcrConversion");
Function<void, VkDevice, VkSamplerYcbcrConversion, const VkAllocationCallbacks*> Binding::DestroySamplerYcbcrConversionKHR("vkDestroySamplerYcbcrConversionKHR");
Function<void, VkDevice, VkSemaphore, const VkAllocationCallbacks*> Binding::DestroySemaphore("vkDestroySemaphore");
Function<void, VkDevice, VkShaderModule, const VkAllocationCallbacks*> Binding::DestroyShaderModule("vkDestroyShaderModule");
Function<void, VkInstance, VkSurfaceKHR, const VkAllocationCallbacks*> Binding::DestroySurfaceKHR("vkDestroySurfaceKHR");
Function<void, VkDevice, VkSwapchainKHR, const VkAllocationCallbacks*> Binding::DestroySwapchainKHR("vkDestroySwapchainKHR");
Function<void, VkDevice, VkValidationCacheEXT, const VkAllocationCallbacks*> Binding::DestroyValidationCacheEXT("vkDestroyValidationCacheEXT");
Function<VkResult, VkDevice> Binding::DeviceWaitIdle("vkDeviceWaitIdle");
Function<VkResult, VkDevice, VkDisplayKHR, const VkDisplayPowerInfoEXT*> Binding::DisplayPowerControlEXT("vkDisplayPowerControlEXT");


} // namespace vkbinding