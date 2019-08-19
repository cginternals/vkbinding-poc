
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

extern const std::unordered_map<vk::VkBool32, std::string> Meta_StringsByBoolean;
extern const std::unordered_map<vk::VKenum, std::string> Meta_StringsByEnum;
extern const std::unordered_map<vk::VKextension, std::string> Meta_StringsByExtension;
extern const std::unordered_map<vk::VKextension, std::set<std::string>> Meta_FunctionStringsByExtension;
extern const std::map<Version, std::set<std::string>> Meta_FunctionStringsByVersion;

extern const std::unordered_map<vk::UnusedMask, std::string> Meta_StringsByUnusedMask;
extern const std::unordered_map<vk::VkAccessFlags, std::string> Meta_StringsByVkAccessFlags;
extern const std::unordered_map<vk::VkAttachmentDescriptionFlags, std::string> Meta_StringsByVkAttachmentDescriptionFlags;
extern const std::unordered_map<vk::VkBufferCreateFlags, std::string> Meta_StringsByVkBufferCreateFlags;
extern const std::unordered_map<vk::VkBufferUsageFlags, std::string> Meta_StringsByVkBufferUsageFlags;
extern const std::unordered_map<vk::VkBufferViewCreateFlags, std::string> Meta_StringsByVkBufferViewCreateFlags;
extern const std::unordered_map<vk::VkBuildAccelerationStructureFlagsNV, std::string> Meta_StringsByVkBuildAccelerationStructureFlagsNV;
extern const std::unordered_map<vk::VkColorComponentFlags, std::string> Meta_StringsByVkColorComponentFlags;
extern const std::unordered_map<vk::VkCommandBufferResetFlags, std::string> Meta_StringsByVkCommandBufferResetFlags;
extern const std::unordered_map<vk::VkCommandBufferUsageFlags, std::string> Meta_StringsByVkCommandBufferUsageFlags;
extern const std::unordered_map<vk::VkCommandPoolCreateFlags, std::string> Meta_StringsByVkCommandPoolCreateFlags;
extern const std::unordered_map<vk::VkCommandPoolResetFlags, std::string> Meta_StringsByVkCommandPoolResetFlags;
extern const std::unordered_map<vk::VkCommandPoolTrimFlags, std::string> Meta_StringsByVkCommandPoolTrimFlags;
extern const std::unordered_map<vk::VkCommandPoolTrimFlagsKHR, std::string> Meta_StringsByVkCommandPoolTrimFlagsKHR;
extern const std::unordered_map<vk::VkCompositeAlphaFlagsKHR, std::string> Meta_StringsByVkCompositeAlphaFlagsKHR;
extern const std::unordered_map<vk::VkConditionalRenderingFlagsEXT, std::string> Meta_StringsByVkConditionalRenderingFlagsEXT;
extern const std::unordered_map<vk::VkCullModeFlags, std::string> Meta_StringsByVkCullModeFlags;
extern const std::unordered_map<vk::VkDebugReportFlagsEXT, std::string> Meta_StringsByVkDebugReportFlagsEXT;
extern const std::unordered_map<vk::VkDebugUtilsMessageSeverityFlagsEXT, std::string> Meta_StringsByVkDebugUtilsMessageSeverityFlagsEXT;
extern const std::unordered_map<vk::VkDebugUtilsMessageTypeFlagsEXT, std::string> Meta_StringsByVkDebugUtilsMessageTypeFlagsEXT;
extern const std::unordered_map<vk::VkDebugUtilsMessengerCallbackDataFlagsEXT, std::string> Meta_StringsByVkDebugUtilsMessengerCallbackDataFlagsEXT;
extern const std::unordered_map<vk::VkDependencyFlags, std::string> Meta_StringsByVkDependencyFlags;
extern const std::unordered_map<vk::VkDescriptorPoolCreateFlags, std::string> Meta_StringsByVkDescriptorPoolCreateFlags;
extern const std::unordered_map<vk::VkDescriptorPoolResetFlags, std::string> Meta_StringsByVkDescriptorPoolResetFlags;
extern const std::unordered_map<vk::VkDescriptorSetLayoutCreateFlags, std::string> Meta_StringsByVkDescriptorSetLayoutCreateFlags;
extern const std::unordered_map<vk::VkDescriptorUpdateTemplateCreateFlags, std::string> Meta_StringsByVkDescriptorUpdateTemplateCreateFlags;
extern const std::unordered_map<vk::VkDescriptorUpdateTemplateCreateFlagsKHR, std::string> Meta_StringsByVkDescriptorUpdateTemplateCreateFlagsKHR;
extern const std::unordered_map<vk::VkDeviceCreateFlags, std::string> Meta_StringsByVkDeviceCreateFlags;
extern const std::unordered_map<vk::VkDeviceGroupPresentModeFlagsKHR, std::string> Meta_StringsByVkDeviceGroupPresentModeFlagsKHR;
extern const std::unordered_map<vk::VkDeviceQueueCreateFlags, std::string> Meta_StringsByVkDeviceQueueCreateFlags;
extern const std::unordered_map<vk::VkDisplayModeCreateFlagsKHR, std::string> Meta_StringsByVkDisplayModeCreateFlagsKHR;
extern const std::unordered_map<vk::VkDisplayPlaneAlphaFlagsKHR, std::string> Meta_StringsByVkDisplayPlaneAlphaFlagsKHR;
extern const std::unordered_map<vk::VkDisplaySurfaceCreateFlagsKHR, std::string> Meta_StringsByVkDisplaySurfaceCreateFlagsKHR;
extern const std::unordered_map<vk::VkEventCreateFlags, std::string> Meta_StringsByVkEventCreateFlags;
extern const std::unordered_map<vk::VkExternalFenceFeatureFlagBitsKHR, std::string> Meta_StringsByVkExternalFenceFeatureFlagBitsKHR;
extern const std::unordered_map<vk::VkExternalFenceFeatureFlags, std::string> Meta_StringsByVkExternalFenceFeatureFlags;
extern const std::unordered_map<vk::VkExternalFenceFeatureFlagsKHR, std::string> Meta_StringsByVkExternalFenceFeatureFlagsKHR;
extern const std::unordered_map<vk::VkExternalFenceHandleTypeFlagBitsKHR, std::string> Meta_StringsByVkExternalFenceHandleTypeFlagBitsKHR;
extern const std::unordered_map<vk::VkExternalFenceHandleTypeFlags, std::string> Meta_StringsByVkExternalFenceHandleTypeFlags;
extern const std::unordered_map<vk::VkExternalFenceHandleTypeFlagsKHR, std::string> Meta_StringsByVkExternalFenceHandleTypeFlagsKHR;
extern const std::unordered_map<vk::VkExternalMemoryFeatureFlagBitsKHR, std::string> Meta_StringsByVkExternalMemoryFeatureFlagBitsKHR;
extern const std::unordered_map<vk::VkExternalMemoryFeatureFlags, std::string> Meta_StringsByVkExternalMemoryFeatureFlags;
extern const std::unordered_map<vk::VkExternalMemoryFeatureFlagsKHR, std::string> Meta_StringsByVkExternalMemoryFeatureFlagsKHR;
extern const std::unordered_map<vk::VkExternalMemoryFeatureFlagsNV, std::string> Meta_StringsByVkExternalMemoryFeatureFlagsNV;
extern const std::unordered_map<vk::VkExternalMemoryHandleTypeFlagBitsKHR, std::string> Meta_StringsByVkExternalMemoryHandleTypeFlagBitsKHR;
extern const std::unordered_map<vk::VkExternalMemoryHandleTypeFlags, std::string> Meta_StringsByVkExternalMemoryHandleTypeFlags;
extern const std::unordered_map<vk::VkExternalMemoryHandleTypeFlagsKHR, std::string> Meta_StringsByVkExternalMemoryHandleTypeFlagsKHR;
extern const std::unordered_map<vk::VkExternalMemoryHandleTypeFlagsNV, std::string> Meta_StringsByVkExternalMemoryHandleTypeFlagsNV;
extern const std::unordered_map<vk::VkExternalSemaphoreFeatureFlagBitsKHR, std::string> Meta_StringsByVkExternalSemaphoreFeatureFlagBitsKHR;
extern const std::unordered_map<vk::VkExternalSemaphoreFeatureFlags, std::string> Meta_StringsByVkExternalSemaphoreFeatureFlags;
extern const std::unordered_map<vk::VkExternalSemaphoreFeatureFlagsKHR, std::string> Meta_StringsByVkExternalSemaphoreFeatureFlagsKHR;
extern const std::unordered_map<vk::VkExternalSemaphoreHandleTypeFlagBitsKHR, std::string> Meta_StringsByVkExternalSemaphoreHandleTypeFlagBitsKHR;
extern const std::unordered_map<vk::VkExternalSemaphoreHandleTypeFlags, std::string> Meta_StringsByVkExternalSemaphoreHandleTypeFlags;
extern const std::unordered_map<vk::VkExternalSemaphoreHandleTypeFlagsKHR, std::string> Meta_StringsByVkExternalSemaphoreHandleTypeFlagsKHR;
extern const std::unordered_map<vk::VkFenceCreateFlags, std::string> Meta_StringsByVkFenceCreateFlags;
extern const std::unordered_map<vk::VkFenceImportFlagBitsKHR, std::string> Meta_StringsByVkFenceImportFlagBitsKHR;
extern const std::unordered_map<vk::VkFenceImportFlags, std::string> Meta_StringsByVkFenceImportFlags;
extern const std::unordered_map<vk::VkFenceImportFlagsKHR, std::string> Meta_StringsByVkFenceImportFlagsKHR;
extern const std::unordered_map<vk::VkFormatFeatureFlags, std::string> Meta_StringsByVkFormatFeatureFlags;
extern const std::unordered_map<vk::VkFramebufferCreateFlags, std::string> Meta_StringsByVkFramebufferCreateFlags;
extern const std::unordered_map<vk::VkGeometryFlagsNV, std::string> Meta_StringsByVkGeometryFlagsNV;
extern const std::unordered_map<vk::VkGeometryInstanceFlagsNV, std::string> Meta_StringsByVkGeometryInstanceFlagsNV;
extern const std::unordered_map<vk::VkHeadlessSurfaceCreateFlagsEXT, std::string> Meta_StringsByVkHeadlessSurfaceCreateFlagsEXT;
extern const std::unordered_map<vk::VkImageAspectFlags, std::string> Meta_StringsByVkImageAspectFlags;
extern const std::unordered_map<vk::VkImageCreateFlags, std::string> Meta_StringsByVkImageCreateFlags;
extern const std::unordered_map<vk::VkImageUsageFlags, std::string> Meta_StringsByVkImageUsageFlags;
extern const std::unordered_map<vk::VkImageViewCreateFlags, std::string> Meta_StringsByVkImageViewCreateFlags;
extern const std::unordered_map<vk::VkIndirectCommandsLayoutUsageFlagsNVX, std::string> Meta_StringsByVkIndirectCommandsLayoutUsageFlagsNVX;
extern const std::unordered_map<vk::VkInstanceCreateFlags, std::string> Meta_StringsByVkInstanceCreateFlags;
extern const std::unordered_map<vk::VkMemoryAllocateFlagBitsKHR, std::string> Meta_StringsByVkMemoryAllocateFlagBitsKHR;
extern const std::unordered_map<vk::VkMemoryAllocateFlags, std::string> Meta_StringsByVkMemoryAllocateFlags;
extern const std::unordered_map<vk::VkMemoryAllocateFlagsKHR, std::string> Meta_StringsByVkMemoryAllocateFlagsKHR;
extern const std::unordered_map<vk::VkMemoryHeapFlags, std::string> Meta_StringsByVkMemoryHeapFlags;
extern const std::unordered_map<vk::VkMemoryMapFlags, std::string> Meta_StringsByVkMemoryMapFlags;
extern const std::unordered_map<vk::VkMemoryPropertyFlags, std::string> Meta_StringsByVkMemoryPropertyFlags;
extern const std::unordered_map<vk::VkObjectEntryUsageFlagsNVX, std::string> Meta_StringsByVkObjectEntryUsageFlagsNVX;
extern const std::unordered_map<vk::VkPeerMemoryFeatureFlagBitsKHR, std::string> Meta_StringsByVkPeerMemoryFeatureFlagBitsKHR;
extern const std::unordered_map<vk::VkPeerMemoryFeatureFlags, std::string> Meta_StringsByVkPeerMemoryFeatureFlags;
extern const std::unordered_map<vk::VkPeerMemoryFeatureFlagsKHR, std::string> Meta_StringsByVkPeerMemoryFeatureFlagsKHR;
extern const std::unordered_map<vk::VkPipelineCacheCreateFlags, std::string> Meta_StringsByVkPipelineCacheCreateFlags;
extern const std::unordered_map<vk::VkPipelineColorBlendStateCreateFlags, std::string> Meta_StringsByVkPipelineColorBlendStateCreateFlags;
extern const std::unordered_map<vk::VkPipelineCompilerControlFlagsAMD, std::string> Meta_StringsByVkPipelineCompilerControlFlagsAMD;
extern const std::unordered_map<vk::VkPipelineCoverageModulationStateCreateFlagsNV, std::string> Meta_StringsByVkPipelineCoverageModulationStateCreateFlagsNV;
extern const std::unordered_map<vk::VkPipelineCoverageReductionStateCreateFlagsNV, std::string> Meta_StringsByVkPipelineCoverageReductionStateCreateFlagsNV;
extern const std::unordered_map<vk::VkPipelineCoverageToColorStateCreateFlagsNV, std::string> Meta_StringsByVkPipelineCoverageToColorStateCreateFlagsNV;
extern const std::unordered_map<vk::VkPipelineCreateFlags, std::string> Meta_StringsByVkPipelineCreateFlags;
extern const std::unordered_map<vk::VkPipelineCreationFeedbackFlagsEXT, std::string> Meta_StringsByVkPipelineCreationFeedbackFlagsEXT;
extern const std::unordered_map<vk::VkPipelineDepthStencilStateCreateFlags, std::string> Meta_StringsByVkPipelineDepthStencilStateCreateFlags;
extern const std::unordered_map<vk::VkPipelineDiscardRectangleStateCreateFlagsEXT, std::string> Meta_StringsByVkPipelineDiscardRectangleStateCreateFlagsEXT;
extern const std::unordered_map<vk::VkPipelineDynamicStateCreateFlags, std::string> Meta_StringsByVkPipelineDynamicStateCreateFlags;
extern const std::unordered_map<vk::VkPipelineInputAssemblyStateCreateFlags, std::string> Meta_StringsByVkPipelineInputAssemblyStateCreateFlags;
extern const std::unordered_map<vk::VkPipelineLayoutCreateFlags, std::string> Meta_StringsByVkPipelineLayoutCreateFlags;
extern const std::unordered_map<vk::VkPipelineMultisampleStateCreateFlags, std::string> Meta_StringsByVkPipelineMultisampleStateCreateFlags;
extern const std::unordered_map<vk::VkPipelineRasterizationConservativeStateCreateFlagsEXT, std::string> Meta_StringsByVkPipelineRasterizationConservativeStateCreateFlagsEXT;
extern const std::unordered_map<vk::VkPipelineRasterizationDepthClipStateCreateFlagsEXT, std::string> Meta_StringsByVkPipelineRasterizationDepthClipStateCreateFlagsEXT;
extern const std::unordered_map<vk::VkPipelineRasterizationStateCreateFlags, std::string> Meta_StringsByVkPipelineRasterizationStateCreateFlags;
extern const std::unordered_map<vk::VkPipelineRasterizationStateStreamCreateFlagsEXT, std::string> Meta_StringsByVkPipelineRasterizationStateStreamCreateFlagsEXT;
extern const std::unordered_map<vk::VkPipelineShaderStageCreateFlags, std::string> Meta_StringsByVkPipelineShaderStageCreateFlags;
extern const std::unordered_map<vk::VkPipelineStageFlags, std::string> Meta_StringsByVkPipelineStageFlags;
extern const std::unordered_map<vk::VkPipelineTessellationStateCreateFlags, std::string> Meta_StringsByVkPipelineTessellationStateCreateFlags;
extern const std::unordered_map<vk::VkPipelineVertexInputStateCreateFlags, std::string> Meta_StringsByVkPipelineVertexInputStateCreateFlags;
extern const std::unordered_map<vk::VkPipelineViewportStateCreateFlags, std::string> Meta_StringsByVkPipelineViewportStateCreateFlags;
extern const std::unordered_map<vk::VkPipelineViewportSwizzleStateCreateFlagsNV, std::string> Meta_StringsByVkPipelineViewportSwizzleStateCreateFlagsNV;
extern const std::unordered_map<vk::VkQueryControlFlags, std::string> Meta_StringsByVkQueryControlFlags;
extern const std::unordered_map<vk::VkQueryPipelineStatisticFlags, std::string> Meta_StringsByVkQueryPipelineStatisticFlags;
extern const std::unordered_map<vk::VkQueryPoolCreateFlags, std::string> Meta_StringsByVkQueryPoolCreateFlags;
extern const std::unordered_map<vk::VkQueryResultFlags, std::string> Meta_StringsByVkQueryResultFlags;
extern const std::unordered_map<vk::VkQueueFlags, std::string> Meta_StringsByVkQueueFlags;
extern const std::unordered_map<vk::VkRenderPassCreateFlags, std::string> Meta_StringsByVkRenderPassCreateFlags;
extern const std::unordered_map<vk::VkResolveModeFlagsKHR, std::string> Meta_StringsByVkResolveModeFlagsKHR;
extern const std::unordered_map<vk::VkSampleCountFlags, std::string> Meta_StringsByVkSampleCountFlags;
extern const std::unordered_map<vk::VkSamplerCreateFlags, std::string> Meta_StringsByVkSamplerCreateFlags;
extern const std::unordered_map<vk::VkSemaphoreCreateFlags, std::string> Meta_StringsByVkSemaphoreCreateFlags;
extern const std::unordered_map<vk::VkSemaphoreImportFlagBitsKHR, std::string> Meta_StringsByVkSemaphoreImportFlagBitsKHR;
extern const std::unordered_map<vk::VkSemaphoreImportFlags, std::string> Meta_StringsByVkSemaphoreImportFlags;
extern const std::unordered_map<vk::VkSemaphoreImportFlagsKHR, std::string> Meta_StringsByVkSemaphoreImportFlagsKHR;
extern const std::unordered_map<vk::VkShaderCorePropertiesFlagsAMD, std::string> Meta_StringsByVkShaderCorePropertiesFlagsAMD;
extern const std::unordered_map<vk::VkShaderModuleCreateFlags, std::string> Meta_StringsByVkShaderModuleCreateFlags;
extern const std::unordered_map<vk::VkShaderStageFlags, std::string> Meta_StringsByVkShaderStageFlags;
extern const std::unordered_map<vk::VkSparseImageFormatFlags, std::string> Meta_StringsByVkSparseImageFormatFlags;
extern const std::unordered_map<vk::VkSparseMemoryBindFlags, std::string> Meta_StringsByVkSparseMemoryBindFlags;
extern const std::unordered_map<vk::VkStencilFaceFlags, std::string> Meta_StringsByVkStencilFaceFlags;
extern const std::unordered_map<vk::VkSubgroupFeatureFlags, std::string> Meta_StringsByVkSubgroupFeatureFlags;
extern const std::unordered_map<vk::VkSubpassDescriptionFlags, std::string> Meta_StringsByVkSubpassDescriptionFlags;
extern const std::unordered_map<vk::VkSurfaceCounterFlagsEXT, std::string> Meta_StringsByVkSurfaceCounterFlagsEXT;
extern const std::unordered_map<vk::VkSurfaceTransformFlagsKHR, std::string> Meta_StringsByVkSurfaceTransformFlagsKHR;
extern const std::unordered_map<vk::VkSwapchainCreateFlagsKHR, std::string> Meta_StringsByVkSwapchainCreateFlagsKHR;
extern const std::unordered_map<vk::VkValidationCacheCreateFlagsEXT, std::string> Meta_StringsByVkValidationCacheCreateFlagsEXT;

extern const std::array<std::unordered_map<std::string, vk::VKbitfield>, 27> Meta_BitfieldsByStringMaps;
extern const std::unordered_map<std::string, vk::VkBool32> Meta_BooleansByString;
extern const std::array<std::unordered_map<std::string, vk::VKenum>, 27> Meta_EnumsByStringMaps;
extern const std::array<std::unordered_map<std::string, std::set<vk::VKextension>>, 27> Meta_ExtensionsByFunctionStringMaps;


} } // namespace vkbinding::aux