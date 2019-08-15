
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
extern const std::unordered_map<vk::VkAttachmentDescriptionFlagBits, std::string> Meta_StringsByVkAttachmentDescriptionFlagBits;
extern const std::unordered_map<vk::VkBufferCreateFlagBits, std::string> Meta_StringsByVkBufferCreateFlagBits;
extern const std::unordered_map<vk::VkBufferUsageFlagBits, std::string> Meta_StringsByVkBufferUsageFlagBits;
extern const std::unordered_map<vk::VkBufferViewCreateFlagBits, std::string> Meta_StringsByVkBufferViewCreateFlagBits;
extern const std::unordered_map<vk::VkBuildAccelerationStructureFlagBitsNV, std::string> Meta_StringsByVkBuildAccelerationStructureFlagBitsNV;
extern const std::unordered_map<vk::VkColorComponentFlagBits, std::string> Meta_StringsByVkColorComponentFlagBits;
extern const std::unordered_map<vk::VkCommandBufferResetFlagBits, std::string> Meta_StringsByVkCommandBufferResetFlagBits;
extern const std::unordered_map<vk::VkCommandBufferUsageFlagBits, std::string> Meta_StringsByVkCommandBufferUsageFlagBits;
extern const std::unordered_map<vk::VkCommandPoolCreateFlagBits, std::string> Meta_StringsByVkCommandPoolCreateFlagBits;
extern const std::unordered_map<vk::VkCommandPoolResetFlagBits, std::string> Meta_StringsByVkCommandPoolResetFlagBits;
extern const std::unordered_map<vk::VkCompositeAlphaFlagBitsKHR, std::string> Meta_StringsByVkCompositeAlphaFlagBitsKHR;
extern const std::unordered_map<vk::VkConditionalRenderingFlagBitsEXT, std::string> Meta_StringsByVkConditionalRenderingFlagBitsEXT;
extern const std::unordered_map<vk::VkCullModeFlagBits, std::string> Meta_StringsByVkCullModeFlagBits;
extern const std::unordered_map<vk::VkDebugReportFlagBitsEXT, std::string> Meta_StringsByVkDebugReportFlagBitsEXT;
extern const std::unordered_map<vk::VkDebugUtilsMessageSeverityFlagBitsEXT, std::string> Meta_StringsByVkDebugUtilsMessageSeverityFlagBitsEXT;
extern const std::unordered_map<vk::VkDebugUtilsMessageTypeFlagBitsEXT, std::string> Meta_StringsByVkDebugUtilsMessageTypeFlagBitsEXT;
extern const std::unordered_map<vk::VkDependencyFlagBits, std::string> Meta_StringsByVkDependencyFlagBits;
extern const std::unordered_map<vk::VkDescriptorBindingFlagBitsEXT, std::string> Meta_StringsByVkDescriptorBindingFlagBitsEXT;
extern const std::unordered_map<vk::VkDescriptorPoolCreateFlagBits, std::string> Meta_StringsByVkDescriptorPoolCreateFlagBits;
extern const std::unordered_map<vk::VkDescriptorSetLayoutCreateFlagBits, std::string> Meta_StringsByVkDescriptorSetLayoutCreateFlagBits;
extern const std::unordered_map<vk::VkDeviceCreateFlagBits, std::string> Meta_StringsByVkDeviceCreateFlagBits;
extern const std::unordered_map<vk::VkDeviceGroupPresentModeFlagBitsKHR, std::string> Meta_StringsByVkDeviceGroupPresentModeFlagBitsKHR;
extern const std::unordered_map<vk::VkDeviceQueueCreateFlagBits, std::string> Meta_StringsByVkDeviceQueueCreateFlagBits;
extern const std::unordered_map<vk::VkDisplayPlaneAlphaFlagBitsKHR, std::string> Meta_StringsByVkDisplayPlaneAlphaFlagBitsKHR;
extern const std::unordered_map<vk::VkExternalFenceFeatureFlagBits, std::string> Meta_StringsByVkExternalFenceFeatureFlagBits;
extern const std::unordered_map<vk::VkExternalFenceFeatureFlagBitsKHR, std::string> Meta_StringsByVkExternalFenceFeatureFlagBitsKHR;
extern const std::unordered_map<vk::VkExternalFenceHandleTypeFlagBits, std::string> Meta_StringsByVkExternalFenceHandleTypeFlagBits;
extern const std::unordered_map<vk::VkExternalFenceHandleTypeFlagBitsKHR, std::string> Meta_StringsByVkExternalFenceHandleTypeFlagBitsKHR;
extern const std::unordered_map<vk::VkExternalMemoryFeatureFlagBits, std::string> Meta_StringsByVkExternalMemoryFeatureFlagBits;
extern const std::unordered_map<vk::VkExternalMemoryFeatureFlagBitsKHR, std::string> Meta_StringsByVkExternalMemoryFeatureFlagBitsKHR;
extern const std::unordered_map<vk::VkExternalMemoryFeatureFlagBitsNV, std::string> Meta_StringsByVkExternalMemoryFeatureFlagBitsNV;
extern const std::unordered_map<vk::VkExternalMemoryHandleTypeFlagBits, std::string> Meta_StringsByVkExternalMemoryHandleTypeFlagBits;
extern const std::unordered_map<vk::VkExternalMemoryHandleTypeFlagBitsKHR, std::string> Meta_StringsByVkExternalMemoryHandleTypeFlagBitsKHR;
extern const std::unordered_map<vk::VkExternalMemoryHandleTypeFlagBitsNV, std::string> Meta_StringsByVkExternalMemoryHandleTypeFlagBitsNV;
extern const std::unordered_map<vk::VkExternalSemaphoreFeatureFlagBits, std::string> Meta_StringsByVkExternalSemaphoreFeatureFlagBits;
extern const std::unordered_map<vk::VkExternalSemaphoreFeatureFlagBitsKHR, std::string> Meta_StringsByVkExternalSemaphoreFeatureFlagBitsKHR;
extern const std::unordered_map<vk::VkExternalSemaphoreHandleTypeFlagBits, std::string> Meta_StringsByVkExternalSemaphoreHandleTypeFlagBits;
extern const std::unordered_map<vk::VkExternalSemaphoreHandleTypeFlagBitsKHR, std::string> Meta_StringsByVkExternalSemaphoreHandleTypeFlagBitsKHR;
extern const std::unordered_map<vk::VkFenceCreateFlagBits, std::string> Meta_StringsByVkFenceCreateFlagBits;
extern const std::unordered_map<vk::VkFenceImportFlagBits, std::string> Meta_StringsByVkFenceImportFlagBits;
extern const std::unordered_map<vk::VkFenceImportFlagBitsKHR, std::string> Meta_StringsByVkFenceImportFlagBitsKHR;
extern const std::unordered_map<vk::VkFormatFeatureFlagBits, std::string> Meta_StringsByVkFormatFeatureFlagBits;
extern const std::unordered_map<vk::VkFramebufferCreateFlagBits, std::string> Meta_StringsByVkFramebufferCreateFlagBits;
extern const std::unordered_map<vk::VkGeometryFlagBitsNV, std::string> Meta_StringsByVkGeometryFlagBitsNV;
extern const std::unordered_map<vk::VkGeometryInstanceFlagBitsNV, std::string> Meta_StringsByVkGeometryInstanceFlagBitsNV;
extern const std::unordered_map<vk::VkImageAspectFlagBits, std::string> Meta_StringsByVkImageAspectFlagBits;
extern const std::unordered_map<vk::VkImageCreateFlagBits, std::string> Meta_StringsByVkImageCreateFlagBits;
extern const std::unordered_map<vk::VkImageUsageFlagBits, std::string> Meta_StringsByVkImageUsageFlagBits;
extern const std::unordered_map<vk::VkImageViewCreateFlagBits, std::string> Meta_StringsByVkImageViewCreateFlagBits;
extern const std::unordered_map<vk::VkIndirectCommandsLayoutUsageFlagBitsNVX, std::string> Meta_StringsByVkIndirectCommandsLayoutUsageFlagBitsNVX;
extern const std::unordered_map<vk::VkInstanceCreateFlagBits, std::string> Meta_StringsByVkInstanceCreateFlagBits;
extern const std::unordered_map<vk::VkMemoryAllocateFlagBits, std::string> Meta_StringsByVkMemoryAllocateFlagBits;
extern const std::unordered_map<vk::VkMemoryAllocateFlagBitsKHR, std::string> Meta_StringsByVkMemoryAllocateFlagBitsKHR;
extern const std::unordered_map<vk::VkMemoryHeapFlagBits, std::string> Meta_StringsByVkMemoryHeapFlagBits;
extern const std::unordered_map<vk::VkMemoryPropertyFlagBits, std::string> Meta_StringsByVkMemoryPropertyFlagBits;
extern const std::unordered_map<vk::VkObjectEntryUsageFlagBitsNVX, std::string> Meta_StringsByVkObjectEntryUsageFlagBitsNVX;
extern const std::unordered_map<vk::VkPeerMemoryFeatureFlagBits, std::string> Meta_StringsByVkPeerMemoryFeatureFlagBits;
extern const std::unordered_map<vk::VkPeerMemoryFeatureFlagBitsKHR, std::string> Meta_StringsByVkPeerMemoryFeatureFlagBitsKHR;
extern const std::unordered_map<vk::VkPipelineCacheCreateFlagBits, std::string> Meta_StringsByVkPipelineCacheCreateFlagBits;
extern const std::unordered_map<vk::VkPipelineColorBlendStateCreateFlagBits, std::string> Meta_StringsByVkPipelineColorBlendStateCreateFlagBits;
extern const std::unordered_map<vk::VkPipelineCreateFlagBits, std::string> Meta_StringsByVkPipelineCreateFlagBits;
extern const std::unordered_map<vk::VkPipelineCreationFeedbackFlagBitsEXT, std::string> Meta_StringsByVkPipelineCreationFeedbackFlagBitsEXT;
extern const std::unordered_map<vk::VkPipelineDepthStencilStateCreateFlagBits, std::string> Meta_StringsByVkPipelineDepthStencilStateCreateFlagBits;
extern const std::unordered_map<vk::VkPipelineDynamicStateCreateFlagBits, std::string> Meta_StringsByVkPipelineDynamicStateCreateFlagBits;
extern const std::unordered_map<vk::VkPipelineInputAssemblyStateCreateFlagBits, std::string> Meta_StringsByVkPipelineInputAssemblyStateCreateFlagBits;
extern const std::unordered_map<vk::VkPipelineLayoutCreateFlagBits, std::string> Meta_StringsByVkPipelineLayoutCreateFlagBits;
extern const std::unordered_map<vk::VkPipelineMultisampleStateCreateFlagBits, std::string> Meta_StringsByVkPipelineMultisampleStateCreateFlagBits;
extern const std::unordered_map<vk::VkPipelineRasterizationStateCreateFlagBits, std::string> Meta_StringsByVkPipelineRasterizationStateCreateFlagBits;
extern const std::unordered_map<vk::VkPipelineShaderStageCreateFlagBits, std::string> Meta_StringsByVkPipelineShaderStageCreateFlagBits;
extern const std::unordered_map<vk::VkPipelineStageFlagBits, std::string> Meta_StringsByVkPipelineStageFlagBits;
extern const std::unordered_map<vk::VkPipelineTessellationStateCreateFlagBits, std::string> Meta_StringsByVkPipelineTessellationStateCreateFlagBits;
extern const std::unordered_map<vk::VkPipelineVertexInputStateCreateFlagBits, std::string> Meta_StringsByVkPipelineVertexInputStateCreateFlagBits;
extern const std::unordered_map<vk::VkPipelineViewportStateCreateFlagBits, std::string> Meta_StringsByVkPipelineViewportStateCreateFlagBits;
extern const std::unordered_map<vk::VkQueryControlFlagBits, std::string> Meta_StringsByVkQueryControlFlagBits;
extern const std::unordered_map<vk::VkQueryPipelineStatisticFlagBits, std::string> Meta_StringsByVkQueryPipelineStatisticFlagBits;
extern const std::unordered_map<vk::VkQueryPoolCreateFlagBits, std::string> Meta_StringsByVkQueryPoolCreateFlagBits;
extern const std::unordered_map<vk::VkQueryResultFlagBits, std::string> Meta_StringsByVkQueryResultFlagBits;
extern const std::unordered_map<vk::VkQueueFlagBits, std::string> Meta_StringsByVkQueueFlagBits;
extern const std::unordered_map<vk::VkRenderPassCreateFlagBits, std::string> Meta_StringsByVkRenderPassCreateFlagBits;
extern const std::unordered_map<vk::VkResolveModeFlagBitsKHR, std::string> Meta_StringsByVkResolveModeFlagBitsKHR;
extern const std::unordered_map<vk::VkSampleCountFlagBits, std::string> Meta_StringsByVkSampleCountFlagBits;
extern const std::unordered_map<vk::VkSamplerCreateFlagBits, std::string> Meta_StringsByVkSamplerCreateFlagBits;
extern const std::unordered_map<vk::VkSemaphoreImportFlagBits, std::string> Meta_StringsByVkSemaphoreImportFlagBits;
extern const std::unordered_map<vk::VkSemaphoreImportFlagBitsKHR, std::string> Meta_StringsByVkSemaphoreImportFlagBitsKHR;
extern const std::unordered_map<vk::VkShaderModuleCreateFlagBits, std::string> Meta_StringsByVkShaderModuleCreateFlagBits;
extern const std::unordered_map<vk::VkShaderStageFlagBits, std::string> Meta_StringsByVkShaderStageFlagBits;
extern const std::unordered_map<vk::VkSparseImageFormatFlagBits, std::string> Meta_StringsByVkSparseImageFormatFlagBits;
extern const std::unordered_map<vk::VkSparseMemoryBindFlagBits, std::string> Meta_StringsByVkSparseMemoryBindFlagBits;
extern const std::unordered_map<vk::VkStencilFaceFlagBits, std::string> Meta_StringsByVkStencilFaceFlagBits;
extern const std::unordered_map<vk::VkSubgroupFeatureFlagBits, std::string> Meta_StringsByVkSubgroupFeatureFlagBits;
extern const std::unordered_map<vk::VkSubpassDescriptionFlagBits, std::string> Meta_StringsByVkSubpassDescriptionFlagBits;
extern const std::unordered_map<vk::VkSurfaceCounterFlagBitsEXT, std::string> Meta_StringsByVkSurfaceCounterFlagBitsEXT;
extern const std::unordered_map<vk::VkSurfaceTransformFlagBitsKHR, std::string> Meta_StringsByVkSurfaceTransformFlagBitsKHR;
extern const std::unordered_map<vk::VkSwapchainCreateFlagBitsKHR, std::string> Meta_StringsByVkSwapchainCreateFlagBitsKHR;
extern const std::unordered_map<vk::VkSwapchainImageUsageFlagBitsANDROID, std::string> Meta_StringsByVkSwapchainImageUsageFlagBitsANDROID;

extern const std::array<std::unordered_map<std::string, vk::VKbitfield>, 27> Meta_BitfieldsByStringMaps;
extern const std::unordered_map<std::string, vk::VKboolean> Meta_BooleansByString;
extern const std::array<std::unordered_map<std::string, vk::VKenum>, 27> Meta_EnumsByStringMaps;
extern const std::array<std::unordered_map<std::string, std::set<vk::VKextension>>, 27> Meta_ExtensionsByFunctionStringMaps;


} } // namespace vkbinding::aux