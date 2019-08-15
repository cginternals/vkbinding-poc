
#pragma once


#include <string>
#include <map>
#include <unordered_map>
#include <vector>
#include <set>
#include <array>

#include <vkbinding/vk/types.h>
#include <vkbinding/vk/extension.h>


namespace vkbinding
{


class Version;


namespace aux
{


extern const std::array<std::unordered_map<std::string, vk::VKextension>, 27> Meta_ExtensionsByStringMaps;
extern const std::unordered_map<vk::VKextension, Version> Meta_ReqVersionsByExtension;

extern const std::unordered_map<vk::VKboolean, std::string> Meta_StringsByBoolean;
extern const std::unordered_map<vk::VKenum, std::string> Meta_StringsByEnum;
extern const std::unordered_map<vk::VKextension, std::string> Meta_StringsByExtension;
extern const std::unordered_map<vk::VKextension, std::set<std::string>> Meta_FunctionStringsByExtension;
extern const std::map<Version, std::set<std::string>> Meta_FunctionStringsByVersion;

extern const std::unordered_map<vk::UnusedMask, std::string> Meta_StringsByUnusedMask;
extern const std::unordered_map<vk::VkAccessFlagBits, std::string> Meta_StringsByVkAccessFlagBits;
extern const std::unordered_map<vk::VkBufferCreateFlagBits, std::string> Meta_StringsByVkBufferCreateFlagBits;
extern const std::unordered_map<vk::VkBufferUsageFlagBits, std::string> Meta_StringsByVkBufferUsageFlagBits;
extern const std::unordered_map<vk::VkBuildAccelerationStructureFlagBitsNV, std::string> Meta_StringsByVkBuildAccelerationStructureFlagBitsNV;
extern const std::unordered_map<vk::VkCommandPoolCreateFlagBits, std::string> Meta_StringsByVkCommandPoolCreateFlagBits;
extern const std::unordered_map<vk::VkConditionalRenderingFlagBitsEXT, std::string> Meta_StringsByVkConditionalRenderingFlagBitsEXT;
extern const std::unordered_map<vk::VkDebugUtilsMessageSeverityFlagBitsEXT, std::string> Meta_StringsByVkDebugUtilsMessageSeverityFlagBitsEXT;
extern const std::unordered_map<vk::VkDependencyFlagBits, std::string> Meta_StringsByVkDependencyFlagBits;
extern const std::unordered_map<vk::VkDescriptorPoolCreateFlagBits, std::string> Meta_StringsByVkDescriptorPoolCreateFlagBits;
extern const std::unordered_map<vk::VkDescriptorSetLayoutCreateFlagBits, std::string> Meta_StringsByVkDescriptorSetLayoutCreateFlagBits;
extern const std::unordered_map<vk::VkDeviceGroupPresentModeFlagBitsKHR, std::string> Meta_StringsByVkDeviceGroupPresentModeFlagBitsKHR;
extern const std::unordered_map<vk::VkDeviceQueueCreateFlagBits, std::string> Meta_StringsByVkDeviceQueueCreateFlagBits;
extern const std::unordered_map<vk::VkDisplayPlaneAlphaFlagBitsKHR, std::string> Meta_StringsByVkDisplayPlaneAlphaFlagBitsKHR;
extern const std::unordered_map<vk::VkExternalFenceFeatureFlagBits, std::string> Meta_StringsByVkExternalFenceFeatureFlagBits;
extern const std::unordered_map<vk::VkExternalFenceHandleTypeFlagBits, std::string> Meta_StringsByVkExternalFenceHandleTypeFlagBits;
extern const std::unordered_map<vk::VkExternalMemoryFeatureFlagBits, std::string> Meta_StringsByVkExternalMemoryFeatureFlagBits;
extern const std::unordered_map<vk::VkExternalMemoryFeatureFlagBitsNV, std::string> Meta_StringsByVkExternalMemoryFeatureFlagBitsNV;
extern const std::unordered_map<vk::VkExternalMemoryHandleTypeFlagBits, std::string> Meta_StringsByVkExternalMemoryHandleTypeFlagBits;
extern const std::unordered_map<vk::VkExternalMemoryHandleTypeFlagBitsNV, std::string> Meta_StringsByVkExternalMemoryHandleTypeFlagBitsNV;
extern const std::unordered_map<vk::VkExternalSemaphoreFeatureFlagBits, std::string> Meta_StringsByVkExternalSemaphoreFeatureFlagBits;
extern const std::unordered_map<vk::VkExternalSemaphoreHandleTypeFlagBits, std::string> Meta_StringsByVkExternalSemaphoreHandleTypeFlagBits;
extern const std::unordered_map<vk::VkFenceImportFlagBits, std::string> Meta_StringsByVkFenceImportFlagBits;
extern const std::unordered_map<vk::VkFormatFeatureFlagBits, std::string> Meta_StringsByVkFormatFeatureFlagBits;
extern const std::unordered_map<vk::VkFramebufferCreateFlagBits, std::string> Meta_StringsByVkFramebufferCreateFlagBits;
extern const std::unordered_map<vk::VkGeometryFlagBitsNV, std::string> Meta_StringsByVkGeometryFlagBitsNV;
extern const std::unordered_map<vk::VkGeometryInstanceFlagBitsNV, std::string> Meta_StringsByVkGeometryInstanceFlagBitsNV;
extern const std::unordered_map<vk::VkImageAspectFlagBits, std::string> Meta_StringsByVkImageAspectFlagBits;
extern const std::unordered_map<vk::VkImageCreateFlagBits, std::string> Meta_StringsByVkImageCreateFlagBits;
extern const std::unordered_map<vk::VkImageUsageFlagBits, std::string> Meta_StringsByVkImageUsageFlagBits;
extern const std::unordered_map<vk::VkImageViewCreateFlagBits, std::string> Meta_StringsByVkImageViewCreateFlagBits;
extern const std::unordered_map<vk::VkIndirectCommandsLayoutUsageFlagBitsNVX, std::string> Meta_StringsByVkIndirectCommandsLayoutUsageFlagBitsNVX;
extern const std::unordered_map<vk::VkMemoryAllocateFlagBits, std::string> Meta_StringsByVkMemoryAllocateFlagBits;
extern const std::unordered_map<vk::VkMemoryHeapFlagBits, std::string> Meta_StringsByVkMemoryHeapFlagBits;
extern const std::unordered_map<vk::VkMemoryPropertyFlagBits, std::string> Meta_StringsByVkMemoryPropertyFlagBits;
extern const std::unordered_map<vk::VkObjectEntryUsageFlagBitsNVX, std::string> Meta_StringsByVkObjectEntryUsageFlagBitsNVX;
extern const std::unordered_map<vk::VkPeerMemoryFeatureFlagBits, std::string> Meta_StringsByVkPeerMemoryFeatureFlagBits;
extern const std::unordered_map<vk::VkPipelineCreateFlagBits, std::string> Meta_StringsByVkPipelineCreateFlagBits;
extern const std::unordered_map<vk::VkPipelineCreationFeedbackFlagBitsEXT, std::string> Meta_StringsByVkPipelineCreationFeedbackFlagBitsEXT;
extern const std::unordered_map<vk::VkPipelineShaderStageCreateFlagBits, std::string> Meta_StringsByVkPipelineShaderStageCreateFlagBits;
extern const std::unordered_map<vk::VkPipelineStageFlagBits, std::string> Meta_StringsByVkPipelineStageFlagBits;
extern const std::unordered_map<vk::VkQueueFlagBits, std::string> Meta_StringsByVkQueueFlagBits;
extern const std::unordered_map<vk::VkResolveModeFlagBitsKHR, std::string> Meta_StringsByVkResolveModeFlagBitsKHR;
extern const std::unordered_map<vk::VkSampleCountFlagBits, std::string> Meta_StringsByVkSampleCountFlagBits;
extern const std::unordered_map<vk::VkSamplerCreateFlagBits, std::string> Meta_StringsByVkSamplerCreateFlagBits;
extern const std::unordered_map<vk::VkSemaphoreImportFlagBits, std::string> Meta_StringsByVkSemaphoreImportFlagBits;
extern const std::unordered_map<vk::VkShaderStageFlagBits, std::string> Meta_StringsByVkShaderStageFlagBits;
extern const std::unordered_map<vk::VkSubgroupFeatureFlagBits, std::string> Meta_StringsByVkSubgroupFeatureFlagBits;
extern const std::unordered_map<vk::VkSubpassDescriptionFlagBits, std::string> Meta_StringsByVkSubpassDescriptionFlagBits;
extern const std::unordered_map<vk::VkSurfaceCounterFlagBitsEXT, std::string> Meta_StringsByVkSurfaceCounterFlagBitsEXT;
extern const std::unordered_map<vk::VkSwapchainCreateFlagBitsKHR, std::string> Meta_StringsByVkSwapchainCreateFlagBitsKHR;

extern const std::array<std::unordered_map<std::string, vk::VKbitfield>, 27> Meta_BitfieldsByStringMaps;
extern const std::unordered_map<std::string, vk::VKboolean> Meta_BooleansByString;
extern const std::array<std::unordered_map<std::string, vk::VKenum>, 27> Meta_EnumsByStringMaps;
extern const std::array<std::unordered_map<std::string, std::set<vk::VKextension>>, 27> Meta_ExtensionsByFunctionStringMaps;


} } // namespace vkbinding::aux