
#include <vkbinding-aux/types_to_string.h>

#include <ostream>
#include <bitset>
#include <sstream>

#include <vkbinding/Version.h>
#include <vkbinding-aux/Meta.h>

#include "types_to_string_private.h"


namespace vk
{


std::ostream & operator<<(std::ostream & stream, const UNGROUPED & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkAccelerationStructureMemoryRequirementsTypeNV & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkAccelerationStructureTypeNV & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkAttachmentLoadOp & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkAttachmentStoreOp & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkBlendFactor & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkBlendOp & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkBlendOverlapEXT & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkBool32 & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkBorderColor & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkChromaLocation & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkChromaLocationKHR & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkCoarseSampleOrderTypeNV & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkColorSpaceKHR & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkCommandBufferLevel & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkCompareOp & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkComponentSwizzle & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkComponentTypeNV & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkConservativeRasterizationModeEXT & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkCopyAccelerationStructureModeNV & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkCoverageModulationModeNV & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkCoverageReductionModeNV & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDebugReportObjectTypeEXT & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDescriptorType & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDescriptorUpdateTemplateType & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDescriptorUpdateTemplateTypeKHR & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDeviceEventTypeEXT & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDiscardRectangleModeEXT & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDisplayEventTypeEXT & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDisplayPowerStateEXT & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDriverIdKHR & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDynamicState & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VKenum & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VKextension & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkFilter & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkFormat & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkFrontFace & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkGeometryTypeNV & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkImageLayout & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkImageTiling & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkImageType & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkImageViewType & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkIndexType & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkIndirectCommandsTokenTypeNVX & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkInternalAllocationType & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkLineRasterizationModeEXT & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkLogicOp & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkMemoryOverallocationBehaviorAMD & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkObjectEntryTypeNVX & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkObjectType & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPerformanceConfigurationTypeINTEL & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPerformanceOverrideTypeINTEL & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPerformanceParameterTypeINTEL & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPerformanceValueTypeINTEL & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPhysicalDeviceType & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineBindPoint & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineCacheHeaderVersion & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineExecutableStatisticFormatKHR & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPointClippingBehavior & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPointClippingBehaviorKHR & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPolygonMode & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPresentModeKHR & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPrimitiveTopology & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkQueryPoolSamplingModeINTEL & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkQueryType & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkQueueGlobalPriorityEXT & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkRasterizationOrderAMD & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkRayTracingShaderGroupTypeNV & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkResult & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSamplerAddressMode & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSamplerMipmapMode & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSamplerReductionModeEXT & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSamplerYcbcrModelConversion & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSamplerYcbcrModelConversionKHR & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSamplerYcbcrRange & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSamplerYcbcrRangeKHR & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkScopeNV & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkShaderFloatControlsIndependenceKHR & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkShaderInfoTypeAMD & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkShadingRatePaletteEntryNV & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSharingMode & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkStencilOp & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkStructureType & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSubpassContents & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSystemAllocationScope & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkTessellationDomainOrigin & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkTessellationDomainOriginKHR & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkTimeDomainEXT & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkValidationCacheHeaderVersionEXT & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkVendorId & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkVertexInputRate & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkViewportCoordinateSwizzleNV & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const UnusedMask & value)
{
    stream << vkbinding::aux::bitfieldString<UnusedMask>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkAccessFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkAccessFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkAttachmentDescriptionFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkAttachmentDescriptionFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkBufferCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkBufferCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkBufferUsageFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkBufferUsageFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkBufferViewCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkBufferViewCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkBuildAccelerationStructureFlagsNV & value)
{
    stream << vkbinding::aux::bitfieldString<VkBuildAccelerationStructureFlagsNV>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkColorComponentFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkColorComponentFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkCommandBufferResetFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkCommandBufferResetFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkCommandBufferUsageFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkCommandBufferUsageFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkCommandPoolCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkCommandPoolCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkCommandPoolResetFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkCommandPoolResetFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkCommandPoolTrimFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkCommandPoolTrimFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkCommandPoolTrimFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkCommandPoolTrimFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkCompositeAlphaFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkCompositeAlphaFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkConditionalRenderingFlagsEXT & value)
{
    stream << vkbinding::aux::bitfieldString<VkConditionalRenderingFlagsEXT>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkCullModeFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkCullModeFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDebugReportFlagsEXT & value)
{
    stream << vkbinding::aux::bitfieldString<VkDebugReportFlagsEXT>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDebugUtilsMessageSeverityFlagsEXT & value)
{
    stream << vkbinding::aux::bitfieldString<VkDebugUtilsMessageSeverityFlagsEXT>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDebugUtilsMessageTypeFlagsEXT & value)
{
    stream << vkbinding::aux::bitfieldString<VkDebugUtilsMessageTypeFlagsEXT>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDebugUtilsMessengerCallbackDataFlagsEXT & value)
{
    stream << vkbinding::aux::bitfieldString<VkDebugUtilsMessengerCallbackDataFlagsEXT>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDependencyFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkDependencyFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDescriptorPoolCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkDescriptorPoolCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDescriptorPoolResetFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkDescriptorPoolResetFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDescriptorSetLayoutCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkDescriptorSetLayoutCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDescriptorUpdateTemplateCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkDescriptorUpdateTemplateCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDescriptorUpdateTemplateCreateFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkDescriptorUpdateTemplateCreateFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDeviceCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkDeviceCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDeviceGroupPresentModeFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkDeviceGroupPresentModeFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDeviceQueueCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkDeviceQueueCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDisplayModeCreateFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkDisplayModeCreateFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDisplayPlaneAlphaFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkDisplayPlaneAlphaFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDisplaySurfaceCreateFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkDisplaySurfaceCreateFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkEventCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkEventCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalFenceFeatureFlagBitsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalFenceFeatureFlagBitsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalFenceFeatureFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalFenceFeatureFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalFenceFeatureFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalFenceFeatureFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalFenceHandleTypeFlagBitsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalFenceHandleTypeFlagBitsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalFenceHandleTypeFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalFenceHandleTypeFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalFenceHandleTypeFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalFenceHandleTypeFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalMemoryFeatureFlagBitsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalMemoryFeatureFlagBitsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalMemoryFeatureFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalMemoryFeatureFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalMemoryFeatureFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalMemoryFeatureFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalMemoryFeatureFlagsNV & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalMemoryFeatureFlagsNV>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalMemoryHandleTypeFlagBitsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalMemoryHandleTypeFlagBitsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalMemoryHandleTypeFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalMemoryHandleTypeFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalMemoryHandleTypeFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalMemoryHandleTypeFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalMemoryHandleTypeFlagsNV & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalMemoryHandleTypeFlagsNV>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalSemaphoreFeatureFlagBitsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalSemaphoreFeatureFlagBitsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalSemaphoreFeatureFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalSemaphoreFeatureFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalSemaphoreFeatureFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalSemaphoreFeatureFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalSemaphoreHandleTypeFlagBitsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalSemaphoreHandleTypeFlagBitsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalSemaphoreHandleTypeFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalSemaphoreHandleTypeFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalSemaphoreHandleTypeFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalSemaphoreHandleTypeFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkFenceCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkFenceCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkFenceImportFlagBitsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkFenceImportFlagBitsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkFenceImportFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkFenceImportFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkFenceImportFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkFenceImportFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkFormatFeatureFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkFormatFeatureFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkFramebufferCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkFramebufferCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkGeometryFlagsNV & value)
{
    stream << vkbinding::aux::bitfieldString<VkGeometryFlagsNV>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkGeometryInstanceFlagsNV & value)
{
    stream << vkbinding::aux::bitfieldString<VkGeometryInstanceFlagsNV>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkHeadlessSurfaceCreateFlagsEXT & value)
{
    stream << vkbinding::aux::bitfieldString<VkHeadlessSurfaceCreateFlagsEXT>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkImageAspectFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkImageAspectFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkImageCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkImageCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkImageUsageFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkImageUsageFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkImageViewCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkImageViewCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkIndirectCommandsLayoutUsageFlagsNVX & value)
{
    stream << vkbinding::aux::bitfieldString<VkIndirectCommandsLayoutUsageFlagsNVX>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkInstanceCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkInstanceCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkMemoryAllocateFlagBitsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkMemoryAllocateFlagBitsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkMemoryAllocateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkMemoryAllocateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkMemoryAllocateFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkMemoryAllocateFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkMemoryHeapFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkMemoryHeapFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkMemoryMapFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkMemoryMapFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkMemoryPropertyFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkMemoryPropertyFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkObjectEntryUsageFlagsNVX & value)
{
    stream << vkbinding::aux::bitfieldString<VkObjectEntryUsageFlagsNVX>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPeerMemoryFeatureFlagBitsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkPeerMemoryFeatureFlagBitsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPeerMemoryFeatureFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkPeerMemoryFeatureFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPeerMemoryFeatureFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkPeerMemoryFeatureFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineCacheCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineCacheCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineColorBlendStateCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineColorBlendStateCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineCompilerControlFlagsAMD & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineCompilerControlFlagsAMD>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineCoverageModulationStateCreateFlagsNV & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineCoverageModulationStateCreateFlagsNV>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineCoverageReductionStateCreateFlagsNV & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineCoverageReductionStateCreateFlagsNV>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineCoverageToColorStateCreateFlagsNV & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineCoverageToColorStateCreateFlagsNV>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineCreationFeedbackFlagsEXT & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineCreationFeedbackFlagsEXT>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineDepthStencilStateCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineDepthStencilStateCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineDiscardRectangleStateCreateFlagsEXT & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineDiscardRectangleStateCreateFlagsEXT>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineDynamicStateCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineDynamicStateCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineInputAssemblyStateCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineInputAssemblyStateCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineLayoutCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineLayoutCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineMultisampleStateCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineMultisampleStateCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineRasterizationConservativeStateCreateFlagsEXT & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineRasterizationConservativeStateCreateFlagsEXT>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineRasterizationDepthClipStateCreateFlagsEXT & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineRasterizationDepthClipStateCreateFlagsEXT>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineRasterizationStateCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineRasterizationStateCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineRasterizationStateStreamCreateFlagsEXT & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineRasterizationStateStreamCreateFlagsEXT>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineShaderStageCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineShaderStageCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineStageFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineStageFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineTessellationStateCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineTessellationStateCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineVertexInputStateCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineVertexInputStateCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineViewportStateCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineViewportStateCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineViewportSwizzleStateCreateFlagsNV & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineViewportSwizzleStateCreateFlagsNV>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkQueryControlFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkQueryControlFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkQueryPipelineStatisticFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkQueryPipelineStatisticFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkQueryPoolCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkQueryPoolCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkQueryResultFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkQueryResultFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkQueueFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkQueueFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkRenderPassCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkRenderPassCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkResolveModeFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkResolveModeFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSampleCountFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkSampleCountFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSamplerCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkSamplerCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSemaphoreCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkSemaphoreCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSemaphoreImportFlagBitsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkSemaphoreImportFlagBitsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSemaphoreImportFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkSemaphoreImportFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSemaphoreImportFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkSemaphoreImportFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkShaderCorePropertiesFlagsAMD & value)
{
    stream << vkbinding::aux::bitfieldString<VkShaderCorePropertiesFlagsAMD>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkShaderModuleCreateFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkShaderModuleCreateFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkShaderStageFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkShaderStageFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSparseImageFormatFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkSparseImageFormatFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSparseMemoryBindFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkSparseMemoryBindFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkStencilFaceFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkStencilFaceFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSubgroupFeatureFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkSubgroupFeatureFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSubpassDescriptionFlags & value)
{
    stream << vkbinding::aux::bitfieldString<VkSubpassDescriptionFlags>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSurfaceCounterFlagsEXT & value)
{
    stream << vkbinding::aux::bitfieldString<VkSurfaceCounterFlagsEXT>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSurfaceTransformFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkSurfaceTransformFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSwapchainCreateFlagsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkSwapchainCreateFlagsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkValidationCacheCreateFlagsEXT & value)
{
    stream << vkbinding::aux::bitfieldString<VkValidationCacheCreateFlagsEXT>(value);
    return stream;
}


} // namespace vk


namespace vkbinding
{


template <>
std::ostream & operator<<(std::ostream & stream, const Value<vk::VKenum> & value)
{
    const auto & name = aux::Meta::getString(value.value());
    stream.write(name.c_str(), static_cast<std::streamsize>(name.size()));

    return stream;
}

/*template <>
std::ostream & operator<<(std::ostream & stream, const Value<vk::VKbitfield> & value)
{
    std::stringstream ss;
    ss << "0x" << std::hex << static_cast<unsigned>(value.value());
    stream << ss.str();

    return stream;
}*/

template <>
std::ostream & operator<<(std::ostream & stream, const Value<vk::VkBool32> & value)
{
    const auto & name = aux::Meta::getString(value.value());
    stream.write(name.c_str(), static_cast<std::streamsize>(name.size()));

    return stream;
}



std::ostream & operator<<(std::ostream & stream, const Version & version)
{
    stream << version.toString();

    return stream;
}

std::ostream & operator<<(std::ostream & stream, const AbstractValue * value)
{
    if (typeid(*value) == typeid(AbstractValue))
    {
        return stream << reinterpret_cast<const void*>(value);
    }

    if (typeid(*value) == typeid(Value<vk::CAMetalLayer *>))
    {
        return stream << *reinterpret_cast<const Value<vk::CAMetalLayer *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::UNGROUPED>))
    {
        return stream << *reinterpret_cast<const Value<vk::UNGROUPED>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::UNGROUPED *>))
    {
        return stream << *reinterpret_cast<const Value<vk::UNGROUPED *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::UnusedMask>))
    {
        return stream << *reinterpret_cast<const Value<vk::UnusedMask>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::UnusedMask *>))
    {
        return stream << *reinterpret_cast<const Value<vk::UnusedMask *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAccelerationStructureMemoryRequirementsTypeNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccelerationStructureMemoryRequirementsTypeNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAccelerationStructureMemoryRequirementsTypeNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccelerationStructureMemoryRequirementsTypeNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAccelerationStructureNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccelerationStructureNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAccelerationStructureNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccelerationStructureNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAccelerationStructureTypeNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccelerationStructureTypeNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAccelerationStructureTypeNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccelerationStructureTypeNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAccessFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccessFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAccessFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccessFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentDescriptionFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentDescriptionFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentDescriptionFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentDescriptionFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentLoadOp>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentLoadOp>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentLoadOp *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentLoadOp *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentStoreOp>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentStoreOp>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentStoreOp *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentStoreOp *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBlendFactor>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBlendFactor>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBlendFactor *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBlendFactor *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBlendOp>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBlendOp>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBlendOp *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBlendOp *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBlendOverlapEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBlendOverlapEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBlendOverlapEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBlendOverlapEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBorderColor>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBorderColor>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBorderColor *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBorderColor *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBuffer>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBuffer>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBuffer *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBuffer *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBufferCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBufferCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBufferUsageFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferUsageFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBufferUsageFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferUsageFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBufferView>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferView>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBufferView *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferView *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBufferViewCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferViewCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBufferViewCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferViewCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBuildAccelerationStructureFlagsNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBuildAccelerationStructureFlagsNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBuildAccelerationStructureFlagsNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBuildAccelerationStructureFlagsNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkChromaLocation>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkChromaLocation>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkChromaLocation *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkChromaLocation *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkChromaLocationKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkChromaLocationKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkChromaLocationKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkChromaLocationKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCoarseSampleOrderTypeNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCoarseSampleOrderTypeNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCoarseSampleOrderTypeNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCoarseSampleOrderTypeNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkColorComponentFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkColorComponentFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkColorComponentFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkColorComponentFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkColorSpaceKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkColorSpaceKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkColorSpaceKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkColorSpaceKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandBuffer>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBuffer>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandBuffer *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBuffer *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandBufferLevel>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBufferLevel>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandBufferLevel *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBufferLevel *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandBufferResetFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBufferResetFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandBufferResetFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBufferResetFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandBufferUsageFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBufferUsageFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandBufferUsageFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBufferUsageFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandPool>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandPool>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandPool *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandPool *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandPoolCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandPoolCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandPoolCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandPoolCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandPoolResetFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandPoolResetFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandPoolResetFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandPoolResetFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandPoolTrimFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandPoolTrimFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandPoolTrimFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandPoolTrimFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandPoolTrimFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandPoolTrimFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandPoolTrimFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandPoolTrimFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCompareOp>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCompareOp>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCompareOp *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCompareOp *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkComponentSwizzle>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkComponentSwizzle>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkComponentSwizzle *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkComponentSwizzle *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkComponentTypeNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkComponentTypeNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkComponentTypeNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkComponentTypeNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCompositeAlphaFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCompositeAlphaFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCompositeAlphaFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCompositeAlphaFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkConditionalRenderingFlagsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkConditionalRenderingFlagsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkConditionalRenderingFlagsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkConditionalRenderingFlagsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkConservativeRasterizationModeEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkConservativeRasterizationModeEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkConservativeRasterizationModeEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkConservativeRasterizationModeEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCopyAccelerationStructureModeNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCopyAccelerationStructureModeNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCopyAccelerationStructureModeNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCopyAccelerationStructureModeNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCoverageModulationModeNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCoverageModulationModeNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCoverageModulationModeNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCoverageModulationModeNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCoverageReductionModeNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCoverageReductionModeNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCoverageReductionModeNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCoverageReductionModeNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCullModeFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCullModeFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCullModeFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCullModeFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugReportCallbackEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugReportCallbackEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugReportCallbackEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugReportCallbackEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugReportFlagsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugReportFlagsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugReportFlagsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugReportFlagsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugReportObjectTypeEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugReportObjectTypeEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugReportObjectTypeEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugReportObjectTypeEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessageSeverityFlagsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessageSeverityFlagsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessageSeverityFlagsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessageSeverityFlagsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessageTypeFlagsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessageTypeFlagsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessageTypeFlagsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessageTypeFlagsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessengerCallbackDataFlagsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessengerCallbackDataFlagsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessengerCallbackDataFlagsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessengerCallbackDataFlagsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessengerEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessengerEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessengerEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessengerEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDependencyFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDependencyFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDependencyFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDependencyFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorPool>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorPool>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorPool *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorPool *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorPoolCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorPoolCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorPoolCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorPoolCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorPoolResetFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorPoolResetFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorPoolResetFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorPoolResetFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSet>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSet>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSet *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSet *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSetLayout>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSetLayout>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSetLayout *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSetLayout *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSetLayoutCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSetLayoutCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSetLayoutCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSetLayoutCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorType>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorType>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorType *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorType *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplate>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplate>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplate *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplate *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplateCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplateCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplateCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplateCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplateCreateFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplateCreateFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplateCreateFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplateCreateFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplateType>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplateType>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplateType *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplateType *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplateTypeKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplateTypeKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplateTypeKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplateTypeKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDevice>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDevice>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDevice *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDevice *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceEventTypeEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceEventTypeEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceEventTypeEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceEventTypeEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupPresentModeFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupPresentModeFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupPresentModeFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupPresentModeFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceMemory>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceMemory>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceMemory *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceMemory *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceQueueCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceQueueCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceQueueCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceQueueCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDiscardRectangleModeEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDiscardRectangleModeEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDiscardRectangleModeEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDiscardRectangleModeEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayEventTypeEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayEventTypeEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayEventTypeEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayEventTypeEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayModeCreateFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayModeCreateFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayModeCreateFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayModeCreateFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayModeKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayModeKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayModeKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayModeKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPlaneAlphaFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPlaneAlphaFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPlaneAlphaFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPlaneAlphaFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPowerStateEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPowerStateEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPowerStateEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPowerStateEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplaySurfaceCreateFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplaySurfaceCreateFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplaySurfaceCreateFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplaySurfaceCreateFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDriverIdKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDriverIdKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDriverIdKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDriverIdKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDynamicState>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDynamicState>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDynamicState *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDynamicState *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VKenum>))
    {
        return stream << *reinterpret_cast<const Value<vk::VKenum>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VKenum *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VKenum *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkEvent>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkEvent>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkEvent *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkEvent *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkEventCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkEventCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkEventCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkEventCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VKextension>))
    {
        return stream << *reinterpret_cast<const Value<vk::VKextension>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VKextension *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VKextension *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceFeatureFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceFeatureFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceFeatureFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceFeatureFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceFeatureFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceFeatureFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceFeatureFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceFeatureFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceFeatureFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceFeatureFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceFeatureFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceFeatureFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceHandleTypeFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceHandleTypeFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceHandleTypeFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceHandleTypeFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceHandleTypeFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceHandleTypeFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceHandleTypeFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceHandleTypeFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceHandleTypeFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceHandleTypeFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceHandleTypeFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceHandleTypeFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryFeatureFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryFeatureFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryFeatureFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryFeatureFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryFeatureFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryFeatureFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryFeatureFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryFeatureFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryFeatureFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryFeatureFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryFeatureFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryFeatureFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryFeatureFlagsNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryFeatureFlagsNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryFeatureFlagsNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryFeatureFlagsNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryHandleTypeFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryHandleTypeFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryHandleTypeFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryHandleTypeFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryHandleTypeFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryHandleTypeFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryHandleTypeFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryHandleTypeFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryHandleTypeFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryHandleTypeFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryHandleTypeFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryHandleTypeFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryHandleTypeFlagsNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryHandleTypeFlagsNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryHandleTypeFlagsNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryHandleTypeFlagsNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreFeatureFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreFeatureFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreFeatureFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreFeatureFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreFeatureFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreFeatureFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreFeatureFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreFeatureFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreFeatureFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreFeatureFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreFeatureFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreFeatureFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreHandleTypeFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreHandleTypeFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreHandleTypeFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreHandleTypeFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreHandleTypeFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreHandleTypeFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreHandleTypeFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreHandleTypeFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreHandleTypeFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreHandleTypeFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreHandleTypeFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreHandleTypeFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFence>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFence>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFence *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFence *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFenceCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFenceCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFenceCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFenceCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFenceImportFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFenceImportFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFenceImportFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFenceImportFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFenceImportFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFenceImportFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFenceImportFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFenceImportFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFenceImportFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFenceImportFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFenceImportFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFenceImportFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFilter>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFilter>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFilter *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFilter *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFormat>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormat>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFormat *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormat *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFormatFeatureFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormatFeatureFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFormatFeatureFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormatFeatureFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFramebuffer>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFramebuffer>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFramebuffer *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFramebuffer *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFramebufferCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFramebufferCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFramebufferCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFramebufferCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFrontFace>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFrontFace>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFrontFace *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFrontFace *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkGeometryFlagsNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryFlagsNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkGeometryFlagsNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryFlagsNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkGeometryInstanceFlagsNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryInstanceFlagsNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkGeometryInstanceFlagsNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryInstanceFlagsNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkGeometryTypeNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryTypeNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkGeometryTypeNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryTypeNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkHeadlessSurfaceCreateFlagsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkHeadlessSurfaceCreateFlagsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkHeadlessSurfaceCreateFlagsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkHeadlessSurfaceCreateFlagsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImage>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImage>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImage *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImage *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageAspectFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageAspectFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageAspectFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageAspectFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageLayout>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageLayout>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageLayout *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageLayout *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageTiling>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageTiling>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageTiling *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageTiling *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageType>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageType>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageType *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageType *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageUsageFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageUsageFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageUsageFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageUsageFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageView>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageView>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageView *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageView *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageViewCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageViewCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageViewCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageViewCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageViewType>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageViewType>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageViewType *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageViewType *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkIndexType>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndexType>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkIndexType *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndexType *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkIndirectCommandsLayoutNVX>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndirectCommandsLayoutNVX>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkIndirectCommandsLayoutNVX *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndirectCommandsLayoutNVX *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkIndirectCommandsLayoutUsageFlagsNVX>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndirectCommandsLayoutUsageFlagsNVX>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkIndirectCommandsLayoutUsageFlagsNVX *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndirectCommandsLayoutUsageFlagsNVX *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkIndirectCommandsTokenTypeNVX>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndirectCommandsTokenTypeNVX>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkIndirectCommandsTokenTypeNVX *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndirectCommandsTokenTypeNVX *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkInstance>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkInstance>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkInstance *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkInstance *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkInstanceCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkInstanceCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkInstanceCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkInstanceCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkInternalAllocationType>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkInternalAllocationType>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkInternalAllocationType *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkInternalAllocationType *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkLineRasterizationModeEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkLineRasterizationModeEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkLineRasterizationModeEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkLineRasterizationModeEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkLogicOp>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkLogicOp>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkLogicOp *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkLogicOp *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryAllocateFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryAllocateFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryAllocateFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryAllocateFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryAllocateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryAllocateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryAllocateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryAllocateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryAllocateFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryAllocateFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryAllocateFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryAllocateFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryHeapFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryHeapFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryHeapFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryHeapFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryMapFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryMapFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryMapFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryMapFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryOverallocationBehaviorAMD>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryOverallocationBehaviorAMD>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryOverallocationBehaviorAMD *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryOverallocationBehaviorAMD *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryPropertyFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryPropertyFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryPropertyFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryPropertyFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkObjectEntryTypeNVX>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectEntryTypeNVX>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkObjectEntryTypeNVX *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectEntryTypeNVX *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkObjectEntryUsageFlagsNVX>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectEntryUsageFlagsNVX>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkObjectEntryUsageFlagsNVX *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectEntryUsageFlagsNVX *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkObjectTableNVX>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectTableNVX>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkObjectTableNVX *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectTableNVX *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkObjectType>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectType>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkObjectType *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectType *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPeerMemoryFeatureFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPeerMemoryFeatureFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPeerMemoryFeatureFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPeerMemoryFeatureFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPeerMemoryFeatureFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPeerMemoryFeatureFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPeerMemoryFeatureFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPeerMemoryFeatureFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPeerMemoryFeatureFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPeerMemoryFeatureFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPeerMemoryFeatureFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPeerMemoryFeatureFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceConfigurationINTEL>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceConfigurationINTEL>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceConfigurationINTEL *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceConfigurationINTEL *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceConfigurationTypeINTEL>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceConfigurationTypeINTEL>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceConfigurationTypeINTEL *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceConfigurationTypeINTEL *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceOverrideTypeINTEL>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceOverrideTypeINTEL>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceOverrideTypeINTEL *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceOverrideTypeINTEL *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceParameterTypeINTEL>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceParameterTypeINTEL>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceParameterTypeINTEL *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceParameterTypeINTEL *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceValueTypeINTEL>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceValueTypeINTEL>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceValueTypeINTEL *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceValueTypeINTEL *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDevice>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDevice>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDevice *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDevice *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceType>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceType>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceType *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceType *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipeline>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipeline>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipeline *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipeline *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineBindPoint>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineBindPoint>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineBindPoint *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineBindPoint *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCache>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCache>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCache *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCache *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCacheCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCacheCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCacheCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCacheCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCacheHeaderVersion>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCacheHeaderVersion>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCacheHeaderVersion *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCacheHeaderVersion *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineColorBlendStateCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineColorBlendStateCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineColorBlendStateCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineColorBlendStateCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCompilerControlFlagsAMD>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCompilerControlFlagsAMD>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCompilerControlFlagsAMD *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCompilerControlFlagsAMD *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCoverageModulationStateCreateFlagsNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCoverageModulationStateCreateFlagsNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCoverageModulationStateCreateFlagsNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCoverageModulationStateCreateFlagsNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCoverageReductionStateCreateFlagsNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCoverageReductionStateCreateFlagsNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCoverageReductionStateCreateFlagsNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCoverageReductionStateCreateFlagsNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCoverageToColorStateCreateFlagsNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCoverageToColorStateCreateFlagsNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCoverageToColorStateCreateFlagsNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCoverageToColorStateCreateFlagsNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCreationFeedbackFlagsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCreationFeedbackFlagsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCreationFeedbackFlagsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCreationFeedbackFlagsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineDepthStencilStateCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineDepthStencilStateCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineDepthStencilStateCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineDepthStencilStateCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineDiscardRectangleStateCreateFlagsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineDiscardRectangleStateCreateFlagsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineDiscardRectangleStateCreateFlagsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineDiscardRectangleStateCreateFlagsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineDynamicStateCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineDynamicStateCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineDynamicStateCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineDynamicStateCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineExecutableStatisticFormatKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineExecutableStatisticFormatKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineExecutableStatisticFormatKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineExecutableStatisticFormatKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineInputAssemblyStateCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineInputAssemblyStateCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineInputAssemblyStateCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineInputAssemblyStateCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineLayout>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineLayout>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineLayout *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineLayout *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineLayoutCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineLayoutCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineLayoutCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineLayoutCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineMultisampleStateCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineMultisampleStateCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineMultisampleStateCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineMultisampleStateCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRasterizationConservativeStateCreateFlagsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRasterizationConservativeStateCreateFlagsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRasterizationConservativeStateCreateFlagsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRasterizationConservativeStateCreateFlagsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRasterizationDepthClipStateCreateFlagsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRasterizationDepthClipStateCreateFlagsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRasterizationDepthClipStateCreateFlagsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRasterizationDepthClipStateCreateFlagsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRasterizationStateCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRasterizationStateCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRasterizationStateCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRasterizationStateCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRasterizationStateStreamCreateFlagsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRasterizationStateStreamCreateFlagsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRasterizationStateStreamCreateFlagsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRasterizationStateStreamCreateFlagsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineShaderStageCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineShaderStageCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineShaderStageCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineShaderStageCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineStageFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineStageFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineStageFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineStageFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineTessellationStateCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineTessellationStateCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineTessellationStateCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineTessellationStateCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineVertexInputStateCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineVertexInputStateCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineVertexInputStateCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineVertexInputStateCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineViewportStateCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineViewportStateCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineViewportStateCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineViewportStateCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineViewportSwizzleStateCreateFlagsNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineViewportSwizzleStateCreateFlagsNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineViewportSwizzleStateCreateFlagsNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineViewportSwizzleStateCreateFlagsNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPointClippingBehavior>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPointClippingBehavior>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPointClippingBehavior *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPointClippingBehavior *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPointClippingBehaviorKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPointClippingBehaviorKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPointClippingBehaviorKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPointClippingBehaviorKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPolygonMode>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPolygonMode>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPolygonMode *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPolygonMode *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPresentModeKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPresentModeKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPresentModeKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPresentModeKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPrimitiveTopology>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPrimitiveTopology>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPrimitiveTopology *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPrimitiveTopology *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueryControlFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryControlFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueryControlFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryControlFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueryPipelineStatisticFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryPipelineStatisticFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueryPipelineStatisticFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryPipelineStatisticFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueryPool>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryPool>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueryPool *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryPool *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueryPoolCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryPoolCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueryPoolCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryPoolCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueryPoolSamplingModeINTEL>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryPoolSamplingModeINTEL>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueryPoolSamplingModeINTEL *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryPoolSamplingModeINTEL *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueryResultFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryResultFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueryResultFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryResultFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueryType>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryType>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueryType *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryType *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueue>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueue>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueue *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueue *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueueFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueueFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueueFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueueFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueueGlobalPriorityEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueueGlobalPriorityEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueueGlobalPriorityEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueueGlobalPriorityEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkRasterizationOrderAMD>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRasterizationOrderAMD>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkRasterizationOrderAMD *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRasterizationOrderAMD *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkRayTracingShaderGroupTypeNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRayTracingShaderGroupTypeNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkRayTracingShaderGroupTypeNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRayTracingShaderGroupTypeNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkRenderPass>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPass>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkRenderPass *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPass *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkRenderPassCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPassCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkRenderPassCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPassCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkResolveModeFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkResolveModeFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkResolveModeFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkResolveModeFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkResult>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkResult>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkResult *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkResult *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSampleCountFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampleCountFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSampleCountFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampleCountFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSampler>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampler>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSampler *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampler *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerAddressMode>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerAddressMode>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerAddressMode *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerAddressMode *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerMipmapMode>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerMipmapMode>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerMipmapMode *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerMipmapMode *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerReductionModeEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerReductionModeEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerReductionModeEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerReductionModeEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrConversion>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrConversion>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrConversion *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrConversion *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrModelConversion>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrModelConversion>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrModelConversion *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrModelConversion *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrModelConversionKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrModelConversionKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrModelConversionKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrModelConversionKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrRange>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrRange>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrRange *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrRange *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrRangeKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrRangeKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrRangeKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrRangeKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkScopeNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkScopeNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkScopeNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkScopeNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSemaphore>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphore>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSemaphore *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphore *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSemaphoreCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphoreCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSemaphoreCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphoreCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSemaphoreImportFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphoreImportFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSemaphoreImportFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphoreImportFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSemaphoreImportFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphoreImportFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSemaphoreImportFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphoreImportFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSemaphoreImportFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphoreImportFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSemaphoreImportFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphoreImportFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShaderCorePropertiesFlagsAMD>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderCorePropertiesFlagsAMD>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShaderCorePropertiesFlagsAMD *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderCorePropertiesFlagsAMD *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShaderFloatControlsIndependenceKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderFloatControlsIndependenceKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShaderFloatControlsIndependenceKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderFloatControlsIndependenceKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShaderInfoTypeAMD>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderInfoTypeAMD>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShaderInfoTypeAMD *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderInfoTypeAMD *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShaderModule>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderModule>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShaderModule *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderModule *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShaderModuleCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderModuleCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShaderModuleCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderModuleCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShaderStageFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderStageFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShaderStageFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderStageFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShadingRatePaletteEntryNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShadingRatePaletteEntryNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShadingRatePaletteEntryNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShadingRatePaletteEntryNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSharingMode>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSharingMode>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSharingMode *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSharingMode *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageFormatFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageFormatFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageFormatFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageFormatFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSparseMemoryBindFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseMemoryBindFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSparseMemoryBindFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseMemoryBindFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkStencilFaceFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkStencilFaceFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkStencilFaceFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkStencilFaceFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkStencilOp>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkStencilOp>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkStencilOp *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkStencilOp *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkStructureType>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkStructureType>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkStructureType *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkStructureType *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSubgroupFeatureFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubgroupFeatureFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSubgroupFeatureFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubgroupFeatureFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSubpassContents>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubpassContents>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSubpassContents *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubpassContents *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSubpassDescriptionFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubpassDescriptionFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSubpassDescriptionFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubpassDescriptionFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceCounterFlagsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceCounterFlagsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceCounterFlagsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceCounterFlagsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceTransformFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceTransformFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceTransformFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceTransformFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSwapchainCreateFlagsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSwapchainCreateFlagsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSwapchainCreateFlagsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSwapchainCreateFlagsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSwapchainKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSwapchainKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSwapchainKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSwapchainKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSystemAllocationScope>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSystemAllocationScope>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSystemAllocationScope *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSystemAllocationScope *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkTessellationDomainOrigin>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkTessellationDomainOrigin>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkTessellationDomainOrigin *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkTessellationDomainOrigin *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkTessellationDomainOriginKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkTessellationDomainOriginKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkTessellationDomainOriginKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkTessellationDomainOriginKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkTimeDomainEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkTimeDomainEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkTimeDomainEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkTimeDomainEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkValidationCacheCreateFlagsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkValidationCacheCreateFlagsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkValidationCacheCreateFlagsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkValidationCacheCreateFlagsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkValidationCacheEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkValidationCacheEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkValidationCacheEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkValidationCacheEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkValidationCacheHeaderVersionEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkValidationCacheHeaderVersionEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkValidationCacheHeaderVersionEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkValidationCacheHeaderVersionEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkVendorId>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkVendorId>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkVendorId *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkVendorId *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkVertexInputRate>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkVertexInputRate>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkVertexInputRate *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkVertexInputRate *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkViewportCoordinateSwizzleNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkViewportCoordinateSwizzleNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkViewportCoordinateSwizzleNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkViewportCoordinateSwizzleNV *>*>(value);
    }

    // expect an AbstractValue with a pointer in first member
    return stream << *reinterpret_cast<const Value<void *>*>(value);
}


} // namespace vkbinding