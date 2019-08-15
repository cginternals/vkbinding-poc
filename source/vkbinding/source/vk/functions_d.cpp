
#include "../Binding_pch.h"

#include <vkbinding/vk/functions.h>


namespace vk
{


VkResult vkDebugMarkerSetObjectNameEXT(VkDevice device, const VkDebugMarkerObjectNameInfoEXT* pNameInfo)
{
    return vkbinding::Binding::DebugMarkerSetObjectNameEXT(device, pNameInfo);
}

VkResult vkDebugMarkerSetObjectTagEXT(VkDevice device, const VkDebugMarkerObjectTagInfoEXT* pTagInfo)
{
    return vkbinding::Binding::DebugMarkerSetObjectTagEXT(device, pTagInfo);
}

void vkDebugReportMessageEXT(VkInstance instance, VkDebugReportFlagsEXT flags, VkDebugReportObjectTypeEXT objectType, uint64_t object, size_t location, int32_t messageCode, const char* pLayerPrefix, const char* pMessage)
{
    return vkbinding::Binding::DebugReportMessageEXT(instance, flags, objectType, object, location, messageCode, pLayerPrefix, pMessage);
}

void vkDestroyAccelerationStructureNV(VkDevice device, VkAccelerationStructureNV accelerationStructure, const VkAllocationCallbacks* pAllocator)
{
    return vkbinding::Binding::DestroyAccelerationStructureNV(device, accelerationStructure, pAllocator);
}

void vkDestroyBuffer(VkDevice device, VkBuffer buffer, const VkAllocationCallbacks* pAllocator)
{
    return vkbinding::Binding::DestroyBuffer(device, buffer, pAllocator);
}

void vkDestroyBufferView(VkDevice device, VkBufferView bufferView, const VkAllocationCallbacks* pAllocator)
{
    return vkbinding::Binding::DestroyBufferView(device, bufferView, pAllocator);
}

void vkDestroyCommandPool(VkDevice device, VkCommandPool commandPool, const VkAllocationCallbacks* pAllocator)
{
    return vkbinding::Binding::DestroyCommandPool(device, commandPool, pAllocator);
}

void vkDestroyDebugReportCallbackEXT(VkInstance instance, VkDebugReportCallbackEXT callback, const VkAllocationCallbacks* pAllocator)
{
    return vkbinding::Binding::DestroyDebugReportCallbackEXT(instance, callback, pAllocator);
}

void vkDestroyDebugUtilsMessengerEXT(VkInstance instance, VkDebugUtilsMessengerEXT messenger, const VkAllocationCallbacks* pAllocator)
{
    return vkbinding::Binding::DestroyDebugUtilsMessengerEXT(instance, messenger, pAllocator);
}

void vkDestroyDescriptorPool(VkDevice device, VkDescriptorPool descriptorPool, const VkAllocationCallbacks* pAllocator)
{
    return vkbinding::Binding::DestroyDescriptorPool(device, descriptorPool, pAllocator);
}

void vkDestroyDescriptorSetLayout(VkDevice device, VkDescriptorSetLayout descriptorSetLayout, const VkAllocationCallbacks* pAllocator)
{
    return vkbinding::Binding::DestroyDescriptorSetLayout(device, descriptorSetLayout, pAllocator);
}

void vkDestroyDescriptorUpdateTemplate(VkDevice device, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const VkAllocationCallbacks* pAllocator)
{
    return vkbinding::Binding::DestroyDescriptorUpdateTemplate(device, descriptorUpdateTemplate, pAllocator);
}

void vkDestroyDescriptorUpdateTemplateKHR(VkDevice device, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const VkAllocationCallbacks* pAllocator)
{
    return vkbinding::Binding::DestroyDescriptorUpdateTemplateKHR(device, descriptorUpdateTemplate, pAllocator);
}

void vkDestroyDevice(VkDevice device, const VkAllocationCallbacks* pAllocator)
{
    return vkbinding::Binding::DestroyDevice(device, pAllocator);
}

void vkDestroyEvent(VkDevice device, VkEvent event, const VkAllocationCallbacks* pAllocator)
{
    return vkbinding::Binding::DestroyEvent(device, event, pAllocator);
}

void vkDestroyFence(VkDevice device, VkFence fence, const VkAllocationCallbacks* pAllocator)
{
    return vkbinding::Binding::DestroyFence(device, fence, pAllocator);
}

void vkDestroyFramebuffer(VkDevice device, VkFramebuffer framebuffer, const VkAllocationCallbacks* pAllocator)
{
    return vkbinding::Binding::DestroyFramebuffer(device, framebuffer, pAllocator);
}

void vkDestroyImage(VkDevice device, VkImage image, const VkAllocationCallbacks* pAllocator)
{
    return vkbinding::Binding::DestroyImage(device, image, pAllocator);
}

void vkDestroyImageView(VkDevice device, VkImageView imageView, const VkAllocationCallbacks* pAllocator)
{
    return vkbinding::Binding::DestroyImageView(device, imageView, pAllocator);
}

void vkDestroyIndirectCommandsLayoutNVX(VkDevice device, VkIndirectCommandsLayoutNVX indirectCommandsLayout, const VkAllocationCallbacks* pAllocator)
{
    return vkbinding::Binding::DestroyIndirectCommandsLayoutNVX(device, indirectCommandsLayout, pAllocator);
}

void vkDestroyInstance(VkInstance instance, const VkAllocationCallbacks* pAllocator)
{
    return vkbinding::Binding::DestroyInstance(instance, pAllocator);
}

void vkDestroyObjectTableNVX(VkDevice device, VkObjectTableNVX objectTable, const VkAllocationCallbacks* pAllocator)
{
    return vkbinding::Binding::DestroyObjectTableNVX(device, objectTable, pAllocator);
}

void vkDestroyPipeline(VkDevice device, VkPipeline pipeline, const VkAllocationCallbacks* pAllocator)
{
    return vkbinding::Binding::DestroyPipeline(device, pipeline, pAllocator);
}

void vkDestroyPipelineCache(VkDevice device, VkPipelineCache pipelineCache, const VkAllocationCallbacks* pAllocator)
{
    return vkbinding::Binding::DestroyPipelineCache(device, pipelineCache, pAllocator);
}

void vkDestroyPipelineLayout(VkDevice device, VkPipelineLayout pipelineLayout, const VkAllocationCallbacks* pAllocator)
{
    return vkbinding::Binding::DestroyPipelineLayout(device, pipelineLayout, pAllocator);
}

void vkDestroyQueryPool(VkDevice device, VkQueryPool queryPool, const VkAllocationCallbacks* pAllocator)
{
    return vkbinding::Binding::DestroyQueryPool(device, queryPool, pAllocator);
}

void vkDestroyRenderPass(VkDevice device, VkRenderPass renderPass, const VkAllocationCallbacks* pAllocator)
{
    return vkbinding::Binding::DestroyRenderPass(device, renderPass, pAllocator);
}

void vkDestroySampler(VkDevice device, VkSampler sampler, const VkAllocationCallbacks* pAllocator)
{
    return vkbinding::Binding::DestroySampler(device, sampler, pAllocator);
}

void vkDestroySamplerYcbcrConversion(VkDevice device, VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks* pAllocator)
{
    return vkbinding::Binding::DestroySamplerYcbcrConversion(device, ycbcrConversion, pAllocator);
}

void vkDestroySamplerYcbcrConversionKHR(VkDevice device, VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks* pAllocator)
{
    return vkbinding::Binding::DestroySamplerYcbcrConversionKHR(device, ycbcrConversion, pAllocator);
}

void vkDestroySemaphore(VkDevice device, VkSemaphore semaphore, const VkAllocationCallbacks* pAllocator)
{
    return vkbinding::Binding::DestroySemaphore(device, semaphore, pAllocator);
}

void vkDestroyShaderModule(VkDevice device, VkShaderModule shaderModule, const VkAllocationCallbacks* pAllocator)
{
    return vkbinding::Binding::DestroyShaderModule(device, shaderModule, pAllocator);
}

void vkDestroySurfaceKHR(VkInstance instance, VkSurfaceKHR surface, const VkAllocationCallbacks* pAllocator)
{
    return vkbinding::Binding::DestroySurfaceKHR(instance, surface, pAllocator);
}

void vkDestroySwapchainKHR(VkDevice device, VkSwapchainKHR swapchain, const VkAllocationCallbacks* pAllocator)
{
    return vkbinding::Binding::DestroySwapchainKHR(device, swapchain, pAllocator);
}

void vkDestroyValidationCacheEXT(VkDevice device, VkValidationCacheEXT validationCache, const VkAllocationCallbacks* pAllocator)
{
    return vkbinding::Binding::DestroyValidationCacheEXT(device, validationCache, pAllocator);
}

VkResult vkDeviceWaitIdle(VkDevice device)
{
    return vkbinding::Binding::DeviceWaitIdle(device);
}

VkResult vkDisplayPowerControlEXT(VkDevice device, VkDisplayKHR display, const VkDisplayPowerInfoEXT* pDisplayPowerInfo)
{
    return vkbinding::Binding::DisplayPowerControlEXT(device, display, pDisplayPowerInfo);
}


} // namespace vk