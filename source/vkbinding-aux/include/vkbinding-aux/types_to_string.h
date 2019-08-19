
#pragma once


#include <string>
#include <iosfwd>

#include <vkbinding-aux/vkbinding-aux_api.h>
#include <vkbinding-aux/vkbinding-aux_features.h>

#include <vkbinding/vk/types.h>
#include <vkbinding/Value.h>


namespace vk
{


VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const UNGROUPED & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkAccelerationStructureMemoryRequirementsTypeNV & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkAccelerationStructureTypeNV & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkAttachmentLoadOp & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkAttachmentStoreOp & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkBlendFactor & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkBlendOp & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkBlendOverlapEXT & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkBool32 & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkBorderColor & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkChromaLocation & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkChromaLocationKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkCoarseSampleOrderTypeNV & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkColorSpaceKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkCommandBufferLevel & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkCompareOp & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkComponentSwizzle & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkComponentTypeNV & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkConservativeRasterizationModeEXT & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkCopyAccelerationStructureModeNV & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkCoverageModulationModeNV & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkCoverageReductionModeNV & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkDebugReportObjectTypeEXT & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkDescriptorType & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkDescriptorUpdateTemplateType & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkDescriptorUpdateTemplateTypeKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkDeviceEventTypeEXT & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkDiscardRectangleModeEXT & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkDisplayEventTypeEXT & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkDisplayPowerStateEXT & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkDriverIdKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkDynamicState & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VKenum & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VKextension & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkFilter & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkFormat & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkFrontFace & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkGeometryTypeNV & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkImageLayout & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkImageTiling & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkImageType & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkImageViewType & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkIndexType & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkIndirectCommandsTokenTypeNVX & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkInternalAllocationType & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkLineRasterizationModeEXT & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkLogicOp & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkMemoryOverallocationBehaviorAMD & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkObjectEntryTypeNVX & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkObjectType & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPerformanceConfigurationTypeINTEL & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPerformanceOverrideTypeINTEL & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPerformanceParameterTypeINTEL & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPerformanceValueTypeINTEL & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPhysicalDeviceType & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineBindPoint & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineCacheHeaderVersion & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineExecutableStatisticFormatKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPointClippingBehavior & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPointClippingBehaviorKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPolygonMode & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPresentModeKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPrimitiveTopology & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkQueryPoolSamplingModeINTEL & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkQueryType & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkQueueGlobalPriorityEXT & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkRasterizationOrderAMD & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkRayTracingShaderGroupTypeNV & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkResult & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkSamplerAddressMode & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkSamplerMipmapMode & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkSamplerReductionModeEXT & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkSamplerYcbcrModelConversion & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkSamplerYcbcrModelConversionKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkSamplerYcbcrRange & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkSamplerYcbcrRangeKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkScopeNV & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkShaderFloatControlsIndependenceKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkShaderInfoTypeAMD & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkShadingRatePaletteEntryNV & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkSharingMode & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkStencilOp & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkStructureType & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkSubpassContents & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkSystemAllocationScope & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkTessellationDomainOrigin & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkTessellationDomainOriginKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkTimeDomainEXT & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkValidationCacheHeaderVersionEXT & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkVendorId & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkVertexInputRate & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkViewportCoordinateSwizzleNV & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const UnusedMask & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkAccessFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkAttachmentDescriptionFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkBufferCreateFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkBufferUsageFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkBufferViewCreateFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkBuildAccelerationStructureFlagsNV & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkColorComponentFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkCommandBufferResetFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkCommandBufferUsageFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkCommandPoolCreateFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkCommandPoolResetFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkCommandPoolTrimFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkCommandPoolTrimFlagsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkCompositeAlphaFlagsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkConditionalRenderingFlagsEXT & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkCullModeFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkDebugReportFlagsEXT & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkDebugUtilsMessageSeverityFlagsEXT & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkDebugUtilsMessageTypeFlagsEXT & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkDebugUtilsMessengerCallbackDataFlagsEXT & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkDependencyFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkDescriptorPoolCreateFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkDescriptorPoolResetFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkDescriptorSetLayoutCreateFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkDescriptorUpdateTemplateCreateFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkDescriptorUpdateTemplateCreateFlagsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkDeviceCreateFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkDeviceGroupPresentModeFlagsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkDeviceQueueCreateFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkDisplayModeCreateFlagsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkDisplayPlaneAlphaFlagsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkDisplaySurfaceCreateFlagsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkEventCreateFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkExternalFenceFeatureFlagBitsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkExternalFenceFeatureFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkExternalFenceFeatureFlagsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkExternalFenceHandleTypeFlagBitsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkExternalFenceHandleTypeFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkExternalFenceHandleTypeFlagsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkExternalMemoryFeatureFlagBitsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkExternalMemoryFeatureFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkExternalMemoryFeatureFlagsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkExternalMemoryFeatureFlagsNV & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkExternalMemoryHandleTypeFlagBitsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkExternalMemoryHandleTypeFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkExternalMemoryHandleTypeFlagsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkExternalMemoryHandleTypeFlagsNV & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkExternalSemaphoreFeatureFlagBitsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkExternalSemaphoreFeatureFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkExternalSemaphoreFeatureFlagsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkExternalSemaphoreHandleTypeFlagBitsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkExternalSemaphoreHandleTypeFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkExternalSemaphoreHandleTypeFlagsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkFenceCreateFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkFenceImportFlagBitsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkFenceImportFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkFenceImportFlagsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkFormatFeatureFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkFramebufferCreateFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkGeometryFlagsNV & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkGeometryInstanceFlagsNV & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkHeadlessSurfaceCreateFlagsEXT & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkImageAspectFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkImageCreateFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkImageUsageFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkImageViewCreateFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkIndirectCommandsLayoutUsageFlagsNVX & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkInstanceCreateFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkMemoryAllocateFlagBitsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkMemoryAllocateFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkMemoryAllocateFlagsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkMemoryHeapFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkMemoryMapFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkMemoryPropertyFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkObjectEntryUsageFlagsNVX & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPeerMemoryFeatureFlagBitsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPeerMemoryFeatureFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPeerMemoryFeatureFlagsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineCacheCreateFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineColorBlendStateCreateFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineCompilerControlFlagsAMD & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineCoverageModulationStateCreateFlagsNV & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineCoverageReductionStateCreateFlagsNV & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineCoverageToColorStateCreateFlagsNV & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineCreateFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineCreationFeedbackFlagsEXT & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineDepthStencilStateCreateFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineDiscardRectangleStateCreateFlagsEXT & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineDynamicStateCreateFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineInputAssemblyStateCreateFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineLayoutCreateFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineMultisampleStateCreateFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineRasterizationConservativeStateCreateFlagsEXT & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineRasterizationDepthClipStateCreateFlagsEXT & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineRasterizationStateCreateFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineRasterizationStateStreamCreateFlagsEXT & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineShaderStageCreateFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineStageFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineTessellationStateCreateFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineVertexInputStateCreateFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineViewportStateCreateFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineViewportSwizzleStateCreateFlagsNV & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkQueryControlFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkQueryPipelineStatisticFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkQueryPoolCreateFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkQueryResultFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkQueueFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkRenderPassCreateFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkResolveModeFlagsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkSampleCountFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkSamplerCreateFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkSemaphoreCreateFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkSemaphoreImportFlagBitsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkSemaphoreImportFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkSemaphoreImportFlagsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkShaderCorePropertiesFlagsAMD & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkShaderModuleCreateFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkShaderStageFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkSparseImageFormatFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkSparseMemoryBindFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkStencilFaceFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkSubgroupFeatureFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkSubpassDescriptionFlags & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkSurfaceCounterFlagsEXT & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkSurfaceTransformFlagsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkSwapchainCreateFlagsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkValidationCacheCreateFlagsEXT & value);


} // namespace vk


namespace vkbinding
{


class Version;


/**
*  @brief
*    Generic ostream operator for the Value template
*/
template <typename T>
VKBINDING_AUX_TEMPLATE_API std::ostream & operator<<(std::ostream & stream, const Value<T> & value);

/**
*  @brief
*    Generic ostream operator for the Value template with pointer types
*/
template <typename T>
VKBINDING_AUX_TEMPLATE_API std::ostream & operator<<(std::ostream & stream, const Value<T *> & value);

/**
*  @brief
*    A specialized ostream operator for the gl::GLenum Value template
*/
template <>
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<vk::VKenum> & value);

/* <- ToDo: Add back second * when implementing this function again
*  @brief
*    A specialized ostream operator for the gl::GLbitfield Value template
*/
/*template <>
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<vk::VKbitfield> & value);*/

/**
*  @brief
*    A specialized ostream operator for the gl::GLenum Value template
*/
template <>
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<vk::VkBool32> & value);

/**
*  @brief
*    The operator to allow Versions to be printed onto a std::ostream
*/
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Version & version);

/**
*  @brief
*    The operator to allow AbstractValues to be printed onto a std::ostream
*/
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const AbstractValue * value);


} // namespace vkbinding


#include <vkbinding-aux/types_to_string.inl>