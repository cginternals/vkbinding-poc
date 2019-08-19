
#pragma once


#include <cstddef>
#include <cstdint>
#include <array>
#include <string>


#ifdef _MSC_VER
#define VK_APIENTRY __stdcall
#else
#define VK_APIENTRY
#endif

#include <vkbinding/novk.h>
#include <vkbinding/vkbinding_api.h>
#include <vkbinding/vkbinding_features.h>
#include <vkbinding/vk/boolean.h>


namespace vk
{


using VKbitfield = unsigned int;
enum class VKextension : int;
enum class VKenum : unsigned int;
#define VK_MAKE_VERSION(major, minor, patch) \
    (((major) << 22) | ((minor) << 12) | (patch))
#define VK_VERSION_MAJOR(version) ((uint32_t)(version) >> 22)
#define VK_VERSION_MINOR(version) (((uint32_t)(version) >> 12) & 0x3ff)
#define VK_VERSION_PATCH(version) ((uint32_t)(version) & 0xfff)
// DEPRECATED: This define has been removed. Specific version defines (e.g. VK_API_VERSION_1_0), or the VK_MAKE_VERSION macro, should be used instead.
//#define VK_API_VERSION VK_MAKE_VERSION(1, 0, 0) // Patch version should always be set to 0
// Vulkan 1.0 version number
#define VK_API_VERSION_1_0 VK_MAKE_VERSION(1, 0, 0)// Patch version should always be set to 0
// Vulkan 1.1 version number
#define VK_API_VERSION_1_1 VK_MAKE_VERSION(1, 1, 0)// Patch version should always be set to 0
// Version of this file
#define VK_HEADER_VERSION 119

#define VK_DEFINE_HANDLE(object) typedef struct object##_T* object;

#if !defined(VK_DEFINE_NON_DISPATCHABLE_HANDLE)
#if defined(__LP64__) || defined(_WIN64) || (defined(__x86_64__) && !defined(__ILP32__) ) || defined(_M_X64) || defined(__ia64) || defined (_M_IA64) || defined(__aarch64__) || defined(__powerpc64__)
        #define VK_DEFINE_NON_DISPATCHABLE_HANDLE(object) typedef struct object##_T *object;
#else
        #define VK_DEFINE_NON_DISPATCHABLE_HANDLE(object) typedef uint64_t object;
#endif
#endif

#define VK_NULL_HANDLE 0

#ifdef __OBJC__
@class CAMetalLayer;
#else
typedef void CAMetalLayer;
#endif
// Ignore VkDescriptorUpdateTemplateKHR for now
// Ignore VkSamplerYcbcrConversionKHR for now
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkAccelerationStructureNV)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkBuffer)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkBufferView)
VK_DEFINE_HANDLE(VkCommandBuffer)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkCommandPool)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkDebugReportCallbackEXT)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkDebugUtilsMessengerEXT)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkDescriptorPool)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkDescriptorSet)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkDescriptorSetLayout)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkDescriptorUpdateTemplate)
VK_DEFINE_HANDLE(VkDevice)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkDeviceMemory)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkDisplayKHR)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkDisplayModeKHR)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkEvent)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkFence)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkFramebuffer)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkImage)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkImageView)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkIndirectCommandsLayoutNVX)
VK_DEFINE_HANDLE(VkInstance)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkObjectTableNVX)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkPerformanceConfigurationINTEL)
VK_DEFINE_HANDLE(VkPhysicalDevice)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkPipeline)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkPipelineCache)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkPipelineLayout)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkQueryPool)
VK_DEFINE_HANDLE(VkQueue)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkRenderPass)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkSampler)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkSamplerYcbcrConversion)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkSemaphore)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkShaderModule)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkSurfaceKHR)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkSwapchainKHR)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkValidationCacheEXT)
using VkSampleMask = uint32_t;
using VkDeviceAddress = uint64_t;
using VkDeviceSize = uint64_t;
enum class UNGROUPED : unsigned int;
enum class VkAccelerationStructureMemoryRequirementsTypeNV : unsigned int;
enum class VkAccelerationStructureTypeNV : unsigned int;
enum class VkAttachmentLoadOp : unsigned int;
enum class VkAttachmentStoreOp : unsigned int;
enum class VkBlendFactor : unsigned int;
enum class VkBlendOp : unsigned int;
enum class VkBlendOverlapEXT : unsigned int;
enum class VkBorderColor : unsigned int;
enum class VkChromaLocation : unsigned int;
enum class VkChromaLocationKHR : unsigned int;
enum class VkCoarseSampleOrderTypeNV : unsigned int;
enum class VkColorSpaceKHR : unsigned int;
enum class VkCommandBufferLevel : unsigned int;
enum class VkCompareOp : unsigned int;
enum class VkComponentSwizzle : unsigned int;
enum class VkComponentTypeNV : unsigned int;
enum class VkConservativeRasterizationModeEXT : unsigned int;
enum class VkCopyAccelerationStructureModeNV : unsigned int;
enum class VkCoverageModulationModeNV : unsigned int;
enum class VkCoverageReductionModeNV : unsigned int;
enum class VkDebugReportObjectTypeEXT : unsigned int;
enum class VkDescriptorType : unsigned int;
enum class VkDescriptorUpdateTemplateType : unsigned int;
enum class VkDescriptorUpdateTemplateTypeKHR : unsigned int;
enum class VkDeviceEventTypeEXT : unsigned int;
enum class VkDiscardRectangleModeEXT : unsigned int;
enum class VkDisplayEventTypeEXT : unsigned int;
enum class VkDisplayPowerStateEXT : unsigned int;
enum class VkDriverIdKHR : unsigned int;
enum class VkDynamicState : unsigned int;
enum class VkFilter : unsigned int;
enum class VkFormat : unsigned int;
enum class VkFrontFace : unsigned int;
enum class VkGeometryTypeNV : unsigned int;
enum class VkImageLayout : unsigned int;
enum class VkImageTiling : unsigned int;
enum class VkImageType : unsigned int;
enum class VkImageViewType : unsigned int;
enum class VkIndexType : unsigned int;
enum class VkIndirectCommandsTokenTypeNVX : unsigned int;
enum class VkInternalAllocationType : unsigned int;
enum class VkLineRasterizationModeEXT : unsigned int;
enum class VkLogicOp : unsigned int;
enum class VkMemoryOverallocationBehaviorAMD : unsigned int;
enum class VkObjectEntryTypeNVX : unsigned int;
enum class VkObjectType : unsigned int;
enum class VkPerformanceConfigurationTypeINTEL : unsigned int;
enum class VkPerformanceOverrideTypeINTEL : unsigned int;
enum class VkPerformanceParameterTypeINTEL : unsigned int;
enum class VkPerformanceValueTypeINTEL : unsigned int;
enum class VkPhysicalDeviceType : unsigned int;
enum class VkPipelineBindPoint : unsigned int;
enum class VkPipelineCacheHeaderVersion : unsigned int;
enum class VkPipelineExecutableStatisticFormatKHR : unsigned int;
enum class VkPointClippingBehavior : unsigned int;
enum class VkPointClippingBehaviorKHR : unsigned int;
enum class VkPolygonMode : unsigned int;
enum class VkPresentModeKHR : unsigned int;
enum class VkPrimitiveTopology : unsigned int;
enum class VkQueryPoolSamplingModeINTEL : unsigned int;
enum class VkQueryType : unsigned int;
enum class VkQueueGlobalPriorityEXT : unsigned int;
enum class VkRasterizationOrderAMD : unsigned int;
enum class VkRayTracingShaderGroupTypeNV : unsigned int;
enum class VkResult : unsigned int;
enum class VkSamplerAddressMode : unsigned int;
enum class VkSamplerMipmapMode : unsigned int;
enum class VkSamplerReductionModeEXT : unsigned int;
enum class VkSamplerYcbcrModelConversion : unsigned int;
enum class VkSamplerYcbcrModelConversionKHR : unsigned int;
enum class VkSamplerYcbcrRange : unsigned int;
enum class VkSamplerYcbcrRangeKHR : unsigned int;
enum class VkScopeNV : unsigned int;
enum class VkShaderFloatControlsIndependenceKHR : unsigned int;
enum class VkShaderInfoTypeAMD : unsigned int;
enum class VkShadingRatePaletteEntryNV : unsigned int;
enum class VkSharingMode : unsigned int;
enum class VkStencilOp : unsigned int;
enum class VkStructureType : unsigned int;
enum class VkSubpassContents : unsigned int;
enum class VkSystemAllocationScope : unsigned int;
enum class VkTessellationDomainOrigin : unsigned int;
enum class VkTessellationDomainOriginKHR : unsigned int;
enum class VkTimeDomainEXT : unsigned int;
enum class VkValidationCacheHeaderVersionEXT : unsigned int;
enum class VkVendorId : unsigned int;
enum class VkVertexInputRate : unsigned int;
enum class VkViewportCoordinateSwizzleNV : unsigned int;
enum class VkAccessFlags : unsigned int;
enum class VkAttachmentDescriptionFlags : unsigned int;
enum class VkBufferCreateFlags : unsigned int;
enum class VkBufferUsageFlags : unsigned int;
enum class VkBufferViewCreateFlags : unsigned int;
enum class VkBuildAccelerationStructureFlagsNV : unsigned int;
using VkBuildAccelerationStructureFlagBitsNV = VkBuildAccelerationStructureFlagsNV;
enum class VkColorComponentFlags : unsigned int;
enum class VkCommandBufferResetFlags : unsigned int;
enum class VkCommandBufferUsageFlags : unsigned int;
enum class VkCommandPoolCreateFlags : unsigned int;
enum class VkCommandPoolResetFlags : unsigned int;
enum class VkCommandPoolTrimFlags : unsigned int;
enum class VkCommandPoolTrimFlagsKHR : unsigned int;
enum class VkCompositeAlphaFlagsKHR : unsigned int;
using VkCompositeAlphaFlagBitsKHR = VkCompositeAlphaFlagsKHR;
enum class VkConditionalRenderingFlagsEXT : unsigned int;
using VkConditionalRenderingFlagBitsEXT = VkConditionalRenderingFlagsEXT;
enum class VkCullModeFlags : unsigned int;
enum class VkDebugReportFlagsEXT : unsigned int;
enum class VkDebugUtilsMessageSeverityFlagsEXT : unsigned int;
using VkDebugUtilsMessageSeverityFlagBitsEXT = VkDebugUtilsMessageSeverityFlagsEXT;
enum class VkDebugUtilsMessageTypeFlagsEXT : unsigned int;
enum class VkDebugUtilsMessengerCallbackDataFlagsEXT : unsigned int;
enum class VkDependencyFlags : unsigned int;
enum class VkDescriptorPoolCreateFlags : unsigned int;
enum class VkDescriptorPoolResetFlags : unsigned int;
enum class VkDescriptorSetLayoutCreateFlags : unsigned int;
enum class VkDescriptorUpdateTemplateCreateFlags : unsigned int;
enum class VkDescriptorUpdateTemplateCreateFlagsKHR : unsigned int;
enum class VkDeviceCreateFlags : unsigned int;
enum class VkDeviceGroupPresentModeFlagsKHR : unsigned int;
using VkDeviceGroupPresentModeFlagBitsKHR = VkDeviceGroupPresentModeFlagsKHR;
enum class VkDeviceQueueCreateFlags : unsigned int;
enum class VkDisplayModeCreateFlagsKHR : unsigned int;
enum class VkDisplayPlaneAlphaFlagsKHR : unsigned int;
using VkDisplayPlaneAlphaFlagBitsKHR = VkDisplayPlaneAlphaFlagsKHR;
enum class VkDisplaySurfaceCreateFlagsKHR : unsigned int;
enum class VkEventCreateFlags : unsigned int;
enum class VkExternalFenceFeatureFlagBitsKHR : unsigned int;
enum class VkExternalFenceFeatureFlags : unsigned int;
using VkExternalFenceFeatureFlagBits = VkExternalFenceFeatureFlags;
enum class VkExternalFenceFeatureFlagsKHR : unsigned int;
enum class VkExternalFenceHandleTypeFlagBitsKHR : unsigned int;
enum class VkExternalFenceHandleTypeFlags : unsigned int;
using VkExternalFenceHandleTypeFlagBits = VkExternalFenceHandleTypeFlags;
enum class VkExternalFenceHandleTypeFlagsKHR : unsigned int;
enum class VkExternalMemoryFeatureFlagBitsKHR : unsigned int;
enum class VkExternalMemoryFeatureFlags : unsigned int;
using VkExternalMemoryFeatureFlagBits = VkExternalMemoryFeatureFlags;
enum class VkExternalMemoryFeatureFlagsKHR : unsigned int;
enum class VkExternalMemoryFeatureFlagsNV : unsigned int;
using VkExternalMemoryFeatureFlagBitsNV = VkExternalMemoryFeatureFlagsNV;
enum class VkExternalMemoryHandleTypeFlagBitsKHR : unsigned int;
enum class VkExternalMemoryHandleTypeFlags : unsigned int;
using VkExternalMemoryHandleTypeFlagBits = VkExternalMemoryHandleTypeFlags;
enum class VkExternalMemoryHandleTypeFlagsKHR : unsigned int;
enum class VkExternalMemoryHandleTypeFlagsNV : unsigned int;
using VkExternalMemoryHandleTypeFlagBitsNV = VkExternalMemoryHandleTypeFlagsNV;
enum class VkExternalSemaphoreFeatureFlagBitsKHR : unsigned int;
enum class VkExternalSemaphoreFeatureFlags : unsigned int;
using VkExternalSemaphoreFeatureFlagBits = VkExternalSemaphoreFeatureFlags;
enum class VkExternalSemaphoreFeatureFlagsKHR : unsigned int;
enum class VkExternalSemaphoreHandleTypeFlagBitsKHR : unsigned int;
enum class VkExternalSemaphoreHandleTypeFlags : unsigned int;
using VkExternalSemaphoreHandleTypeFlagBits = VkExternalSemaphoreHandleTypeFlags;
enum class VkExternalSemaphoreHandleTypeFlagsKHR : unsigned int;
enum class VkFenceCreateFlags : unsigned int;
enum class VkFenceImportFlagBitsKHR : unsigned int;
enum class VkFenceImportFlags : unsigned int;
using VkFenceImportFlagBits = VkFenceImportFlags;
enum class VkFenceImportFlagsKHR : unsigned int;
enum class VkFormatFeatureFlags : unsigned int;
enum class VkFramebufferCreateFlags : unsigned int;
enum class VkGeometryFlagsNV : unsigned int;
using VkGeometryFlagBitsNV = VkGeometryFlagsNV;
enum class VkGeometryInstanceFlagsNV : unsigned int;
using VkGeometryInstanceFlagBitsNV = VkGeometryInstanceFlagsNV;
enum class VkHeadlessSurfaceCreateFlagsEXT : unsigned int;
enum class VkImageAspectFlags : unsigned int;
enum class VkImageCreateFlags : unsigned int;
enum class VkImageUsageFlags : unsigned int;
enum class VkImageViewCreateFlags : unsigned int;
enum class VkIndirectCommandsLayoutUsageFlagsNVX : unsigned int;
using VkIndirectCommandsLayoutUsageFlagBitsNVX = VkIndirectCommandsLayoutUsageFlagsNVX;
enum class VkInstanceCreateFlags : unsigned int;
enum class VkMemoryAllocateFlagBitsKHR : unsigned int;
enum class VkMemoryAllocateFlags : unsigned int;
using VkMemoryAllocateFlagBits = VkMemoryAllocateFlags;
enum class VkMemoryAllocateFlagsKHR : unsigned int;
enum class VkMemoryHeapFlags : unsigned int;
enum class VkMemoryMapFlags : unsigned int;
enum class VkMemoryPropertyFlags : unsigned int;
enum class VkObjectEntryUsageFlagsNVX : unsigned int;
using VkObjectEntryUsageFlagBitsNVX = VkObjectEntryUsageFlagsNVX;
enum class VkPeerMemoryFeatureFlagBitsKHR : unsigned int;
enum class VkPeerMemoryFeatureFlags : unsigned int;
using VkPeerMemoryFeatureFlagBits = VkPeerMemoryFeatureFlags;
enum class VkPeerMemoryFeatureFlagsKHR : unsigned int;
enum class VkPipelineCacheCreateFlags : unsigned int;
enum class VkPipelineColorBlendStateCreateFlags : unsigned int;
enum class VkPipelineCompilerControlFlagsAMD : unsigned int;
using VkPipelineCompilerControlFlagBitsAMD = VkPipelineCompilerControlFlagsAMD;
enum class VkPipelineCoverageModulationStateCreateFlagsNV : unsigned int;
enum class VkPipelineCoverageReductionStateCreateFlagsNV : unsigned int;
enum class VkPipelineCoverageToColorStateCreateFlagsNV : unsigned int;
enum class VkPipelineCreateFlags : unsigned int;
enum class VkPipelineCreationFeedbackFlagsEXT : unsigned int;
using VkPipelineCreationFeedbackFlagBitsEXT = VkPipelineCreationFeedbackFlagsEXT;
enum class VkPipelineDepthStencilStateCreateFlags : unsigned int;
enum class VkPipelineDiscardRectangleStateCreateFlagsEXT : unsigned int;
enum class VkPipelineDynamicStateCreateFlags : unsigned int;
enum class VkPipelineInputAssemblyStateCreateFlags : unsigned int;
enum class VkPipelineLayoutCreateFlags : unsigned int;
enum class VkPipelineMultisampleStateCreateFlags : unsigned int;
enum class VkPipelineRasterizationConservativeStateCreateFlagsEXT : unsigned int;
enum class VkPipelineRasterizationDepthClipStateCreateFlagsEXT : unsigned int;
enum class VkPipelineRasterizationStateCreateFlags : unsigned int;
enum class VkPipelineRasterizationStateStreamCreateFlagsEXT : unsigned int;
enum class VkPipelineShaderStageCreateFlags : unsigned int;
enum class VkPipelineStageFlags : unsigned int;
using VkPipelineStageFlagBits = VkPipelineStageFlags;
enum class VkPipelineTessellationStateCreateFlags : unsigned int;
enum class VkPipelineVertexInputStateCreateFlags : unsigned int;
enum class VkPipelineViewportStateCreateFlags : unsigned int;
enum class VkPipelineViewportSwizzleStateCreateFlagsNV : unsigned int;
enum class VkQueryControlFlags : unsigned int;
enum class VkQueryPipelineStatisticFlags : unsigned int;
enum class VkQueryPoolCreateFlags : unsigned int;
enum class VkQueryResultFlags : unsigned int;
enum class VkQueueFlags : unsigned int;
enum class VkRenderPassCreateFlags : unsigned int;
enum class VkResolveModeFlagsKHR : unsigned int;
using VkResolveModeFlagBitsKHR = VkResolveModeFlagsKHR;
enum class VkSampleCountFlags : unsigned int;
using VkSampleCountFlagBits = VkSampleCountFlags;
enum class VkSamplerCreateFlags : unsigned int;
enum class VkSemaphoreCreateFlags : unsigned int;
enum class VkSemaphoreImportFlagBitsKHR : unsigned int;
enum class VkSemaphoreImportFlags : unsigned int;
using VkSemaphoreImportFlagBits = VkSemaphoreImportFlags;
enum class VkSemaphoreImportFlagsKHR : unsigned int;
enum class VkShaderCorePropertiesFlagsAMD : unsigned int;
using VkShaderCorePropertiesFlagBitsAMD = VkShaderCorePropertiesFlagsAMD;
enum class VkShaderModuleCreateFlags : unsigned int;
enum class VkShaderStageFlags : unsigned int;
using VkShaderStageFlagBits = VkShaderStageFlags;
enum class VkSparseImageFormatFlags : unsigned int;
enum class VkSparseMemoryBindFlags : unsigned int;
enum class VkStencilFaceFlags : unsigned int;
enum class VkSubgroupFeatureFlags : unsigned int;
using VkSubgroupFeatureFlagBits = VkSubgroupFeatureFlags;
enum class VkSubpassDescriptionFlags : unsigned int;
enum class VkSurfaceCounterFlagsEXT : unsigned int;
using VkSurfaceCounterFlagBitsEXT = VkSurfaceCounterFlagsEXT;
enum class VkSurfaceTransformFlagsKHR : unsigned int;
using VkSurfaceTransformFlagBitsKHR = VkSurfaceTransformFlagsKHR;
enum class VkSwapchainCreateFlagsKHR : unsigned int;
enum class VkValidationCacheCreateFlagsEXT : unsigned int;
using PFN_vkAllocationFunction = void* (VK_APIENTRY *)(void* pUserData,size_t size,size_t alignment,VkSystemAllocationScope allocationScope);
using PFN_vkFreeFunction = void (VK_APIENTRY *)(void* pUserData,void* pMemory);
using PFN_vkInternalAllocationNotification = void (VK_APIENTRY *)(void* pUserData,size_t size,VkInternalAllocationType allocationType,VkSystemAllocationScope allocationScope);
using PFN_vkInternalFreeNotification = void (VK_APIENTRY *)(void* pUserData,size_t size,VkInternalAllocationType allocationType,VkSystemAllocationScope allocationScope);
using PFN_vkReallocationFunction = void* (VK_APIENTRY *)(void* pUserData,void* pOriginal,size_t size,size_t alignment,VkSystemAllocationScope allocationScope);
using PFN_vkVoidFunction = void (VK_APIENTRY *)(void);
using VkDeviceAddress = uint64_t;
using VkDeviceSize = uint64_t;
using VkBool32 = uint32_t;
using VkSampleMask = uint32_t;
struct VkBufferMemoryBarrier {
	VkStructureType sType;
	const void* pNext;
	VkAccessFlags srcAccessMask;
	VkAccessFlags dstAccessMask;
	uint32_t srcQueueFamilyIndex;
	uint32_t dstQueueFamilyIndex;
	VkBuffer buffer;
	VkDeviceSize offset;
	VkDeviceSize size;
};
struct VkDispatchIndirectCommand {
	uint32_t x;
	uint32_t y;
	uint32_t z;
};
struct VkDrawIndexedIndirectCommand {
	uint32_t indexCount;
	uint32_t instanceCount;
	uint32_t firstIndex;
	int32_t vertexOffset;
	uint32_t firstInstance;
};
struct VkDrawIndirectCommand {
	uint32_t vertexCount;
	uint32_t instanceCount;
	uint32_t firstVertex;
	uint32_t firstInstance;
};
struct VkImageSubresourceRange {
	VkImageAspectFlags aspectMask;
	uint32_t baseMipLevel;
	uint32_t levelCount;
	uint32_t baseArrayLayer;
	uint32_t layerCount;
};
struct VkImageMemoryBarrier {
	VkStructureType sType;
	const void* pNext;
	VkAccessFlags srcAccessMask;
	VkAccessFlags dstAccessMask;
	VkImageLayout oldLayout;
	VkImageLayout newLayout;
	uint32_t srcQueueFamilyIndex;
	uint32_t dstQueueFamilyIndex;
	VkImage image;
	VkImageSubresourceRange subresourceRange;
};
struct VkMemoryBarrier {
	VkStructureType sType;
	const void* pNext;
	VkAccessFlags srcAccessMask;
	VkAccessFlags dstAccessMask;
};
struct VkBaseOutStructure {
	VkStructureType sType;
	VkBaseOutStructure* pNext;
};
struct VkBaseInStructure {
	VkStructureType sType;
	const VkBaseInStructure* pNext;
};
struct VkPhysicalDeviceLimits {
	uint32_t maxImageDimension1D;
	uint32_t maxImageDimension2D;
	uint32_t maxImageDimension3D;
	uint32_t maxImageDimensionCube;
	uint32_t maxImageArrayLayers;
	uint32_t maxTexelBufferElements;
	uint32_t maxUniformBufferRange;
	uint32_t maxStorageBufferRange;
	uint32_t maxPushConstantsSize;
	uint32_t maxMemoryAllocationCount;
	uint32_t maxSamplerAllocationCount;
	VkDeviceSize bufferImageGranularity;
	VkDeviceSize sparseAddressSpaceSize;
	uint32_t maxBoundDescriptorSets;
	uint32_t maxPerStageDescriptorSamplers;
	uint32_t maxPerStageDescriptorUniformBuffers;
	uint32_t maxPerStageDescriptorStorageBuffers;
	uint32_t maxPerStageDescriptorSampledImages;
	uint32_t maxPerStageDescriptorStorageImages;
	uint32_t maxPerStageDescriptorInputAttachments;
	uint32_t maxPerStageResources;
	uint32_t maxDescriptorSetSamplers;
	uint32_t maxDescriptorSetUniformBuffers;
	uint32_t maxDescriptorSetUniformBuffersDynamic;
	uint32_t maxDescriptorSetStorageBuffers;
	uint32_t maxDescriptorSetStorageBuffersDynamic;
	uint32_t maxDescriptorSetSampledImages;
	uint32_t maxDescriptorSetStorageImages;
	uint32_t maxDescriptorSetInputAttachments;
	uint32_t maxVertexInputAttributes;
	uint32_t maxVertexInputBindings;
	uint32_t maxVertexInputAttributeOffset;
	uint32_t maxVertexInputBindingStride;
	uint32_t maxVertexOutputComponents;
	uint32_t maxTessellationGenerationLevel;
	uint32_t maxTessellationPatchSize;
	uint32_t maxTessellationControlPerVertexInputComponents;
	uint32_t maxTessellationControlPerVertexOutputComponents;
	uint32_t maxTessellationControlPerPatchOutputComponents;
	uint32_t maxTessellationControlTotalOutputComponents;
	uint32_t maxTessellationEvaluationInputComponents;
	uint32_t maxTessellationEvaluationOutputComponents;
	uint32_t maxGeometryShaderInvocations;
	uint32_t maxGeometryInputComponents;
	uint32_t maxGeometryOutputComponents;
	uint32_t maxGeometryOutputVertices;
	uint32_t maxGeometryTotalOutputComponents;
	uint32_t maxFragmentInputComponents;
	uint32_t maxFragmentOutputAttachments;
	uint32_t maxFragmentDualSrcAttachments;
	uint32_t maxFragmentCombinedOutputResources;
	uint32_t maxComputeSharedMemorySize;
	uint32_t maxComputeWorkGroupCount;
	uint32_t maxComputeWorkGroupInvocations;
	uint32_t maxComputeWorkGroupSize;
	uint32_t subPixelPrecisionBits;
	uint32_t subTexelPrecisionBits;
	uint32_t mipmapPrecisionBits;
	uint32_t maxDrawIndexedIndexValue;
	uint32_t maxDrawIndirectCount;
	float maxSamplerLodBias;
	float maxSamplerAnisotropy;
	uint32_t maxViewports;
	uint32_t maxViewportDimensions;
	float viewportBoundsRange;
	uint32_t viewportSubPixelBits;
	size_t minMemoryMapAlignment;
	VkDeviceSize minTexelBufferOffsetAlignment;
	VkDeviceSize minUniformBufferOffsetAlignment;
	VkDeviceSize minStorageBufferOffsetAlignment;
	int32_t minTexelOffset;
	uint32_t maxTexelOffset;
	int32_t minTexelGatherOffset;
	uint32_t maxTexelGatherOffset;
	float minInterpolationOffset;
	float maxInterpolationOffset;
	uint32_t subPixelInterpolationOffsetBits;
	uint32_t maxFramebufferWidth;
	uint32_t maxFramebufferHeight;
	uint32_t maxFramebufferLayers;
	VkSampleCountFlags framebufferColorSampleCounts;
	VkSampleCountFlags framebufferDepthSampleCounts;
	VkSampleCountFlags framebufferStencilSampleCounts;
	VkSampleCountFlags framebufferNoAttachmentsSampleCounts;
	uint32_t maxColorAttachments;
	VkSampleCountFlags sampledImageColorSampleCounts;
	VkSampleCountFlags sampledImageIntegerSampleCounts;
	VkSampleCountFlags sampledImageDepthSampleCounts;
	VkSampleCountFlags sampledImageStencilSampleCounts;
	VkSampleCountFlags storageImageSampleCounts;
	uint32_t maxSampleMaskWords;
	VkBool32 timestampComputeAndGraphics;
	float timestampPeriod;
	uint32_t maxClipDistances;
	uint32_t maxCullDistances;
	uint32_t maxCombinedClipAndCullDistances;
	uint32_t discreteQueuePriorities;
	float pointSizeRange;
	float lineWidthRange;
	float pointSizeGranularity;
	float lineWidthGranularity;
	VkBool32 strictLines;
	VkBool32 standardSampleLocations;
	VkDeviceSize optimalBufferCopyOffsetAlignment;
	VkDeviceSize optimalBufferCopyRowPitchAlignment;
	VkDeviceSize nonCoherentAtomSize;
};
struct VkPhysicalDeviceSparseProperties {
	VkBool32 residencyStandard2DBlockShape;
	VkBool32 residencyStandard2DMultisampleBlockShape;
	VkBool32 residencyStandard3DBlockShape;
	VkBool32 residencyAlignedMipSize;
	VkBool32 residencyNonResidentStrict;
};
struct VkPhysicalDeviceProperties {
	uint32_t apiVersion;
	uint32_t driverVersion;
	uint32_t vendorID;
	uint32_t deviceID;
	VkPhysicalDeviceType deviceType;
	char deviceName;
	uint8_t pipelineCacheUUID;
	VkPhysicalDeviceLimits limits;
	VkPhysicalDeviceSparseProperties sparseProperties;
};
struct VkPhysicalDeviceSubgroupProperties {
	VkStructureType sType;
	void* pNext;
	VkPhysicalDeviceProperties properties;
};
struct VkBindBufferMemoryInfo {
	VkStructureType sType;
	const void* pNext;
	VkBuffer buffer;
	VkDeviceMemory memory;
	VkDeviceSize memoryOffset;
};
using VkBindBufferMemoryInfoKHR = VkBindBufferMemoryInfo;
struct VkBindImageMemoryInfo {
	VkStructureType sType;
	const void* pNext;
	VkImage image;
	VkDeviceMemory memory;
	VkDeviceSize memoryOffset;
};
using VkBindImageMemoryInfoKHR = VkBindImageMemoryInfo;
struct VkDeviceQueueCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkDeviceQueueCreateFlags flags;
	uint32_t queueFamilyIndex;
	uint32_t queueCount;
	const float* pQueuePriorities;
};
struct VkPhysicalDeviceFeatures {
	VkBool32 robustBufferAccess;
	VkBool32 fullDrawIndexUint32;
	VkBool32 imageCubeArray;
	VkBool32 independentBlend;
	VkBool32 geometryShader;
	VkBool32 tessellationShader;
	VkBool32 sampleRateShading;
	VkBool32 dualSrcBlend;
	VkBool32 logicOp;
	VkBool32 multiDrawIndirect;
	VkBool32 drawIndirectFirstInstance;
	VkBool32 depthClamp;
	VkBool32 depthBiasClamp;
	VkBool32 fillModeNonSolid;
	VkBool32 depthBounds;
	VkBool32 wideLines;
	VkBool32 largePoints;
	VkBool32 alphaToOne;
	VkBool32 multiViewport;
	VkBool32 samplerAnisotropy;
	VkBool32 textureCompressionETC2;
	VkBool32 textureCompressionASTC_LDR;
	VkBool32 textureCompressionBC;
	VkBool32 occlusionQueryPrecise;
	VkBool32 pipelineStatisticsQuery;
	VkBool32 vertexPipelineStoresAndAtomics;
	VkBool32 fragmentStoresAndAtomics;
	VkBool32 shaderTessellationAndGeometryPointSize;
	VkBool32 shaderImageGatherExtended;
	VkBool32 shaderStorageImageExtendedFormats;
	VkBool32 shaderStorageImageMultisample;
	VkBool32 shaderStorageImageReadWithoutFormat;
	VkBool32 shaderStorageImageWriteWithoutFormat;
	VkBool32 shaderUniformBufferArrayDynamicIndexing;
	VkBool32 shaderSampledImageArrayDynamicIndexing;
	VkBool32 shaderStorageBufferArrayDynamicIndexing;
	VkBool32 shaderStorageImageArrayDynamicIndexing;
	VkBool32 shaderClipDistance;
	VkBool32 shaderCullDistance;
	VkBool32 shaderFloat64;
	VkBool32 shaderInt64;
	VkBool32 shaderInt16;
	VkBool32 shaderResourceResidency;
	VkBool32 shaderResourceMinLod;
	VkBool32 sparseBinding;
	VkBool32 sparseResidencyBuffer;
	VkBool32 sparseResidencyImage2D;
	VkBool32 sparseResidencyImage3D;
	VkBool32 sparseResidency2Samples;
	VkBool32 sparseResidency4Samples;
	VkBool32 sparseResidency8Samples;
	VkBool32 sparseResidency16Samples;
	VkBool32 sparseResidencyAliased;
	VkBool32 variableMultisampleRate;
	VkBool32 inheritedQueries;
};
struct VkPhysicalDevice16BitStorageFeatures {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
using VkPhysicalDevice16BitStorageFeaturesKHR = VkPhysicalDevice16BitStorageFeatures;
struct VkMemoryRequirements {
	VkDeviceSize size;
	VkDeviceSize alignment;
	uint32_t memoryTypeBits;
};
struct VkMemoryDedicatedRequirements {
	VkStructureType sType;
	void* pNext;
	VkMemoryRequirements memoryRequirements;
};
using VkMemoryDedicatedRequirementsKHR = VkMemoryDedicatedRequirements;
struct VkMemoryDedicatedAllocateInfo {
	VkStructureType sType;
	const void* pNext;
	VkDeviceSize allocationSize;
	uint32_t memoryTypeIndex;
};
using VkMemoryDedicatedAllocateInfoKHR = VkMemoryDedicatedAllocateInfo;
struct VkMemoryAllocateFlagsInfo {
	VkStructureType sType;
	const void* pNext;
	VkDeviceSize allocationSize;
	uint32_t memoryTypeIndex;
};
using VkMemoryAllocateFlagsInfoKHR = VkMemoryAllocateFlagsInfo;
struct VkOffset2D {
	int32_t x;
	int32_t y;
};
struct VkExtent2D {
	uint32_t width;
	uint32_t height;
};
struct VkRect2D {
	VkOffset2D offset;
	VkExtent2D extent;
};
union VkClearColorValue {
	float float32;
	int32_t int32;
	uint32_t uint32;
};
struct VkClearDepthStencilValue {
	float depth;
	uint32_t stencil;
};
union VkClearValue {
	VkClearColorValue color;
	VkClearDepthStencilValue depthStencil;
};
struct VkDeviceGroupRenderPassBeginInfo {
	VkStructureType sType;
	const void* pNext;
	VkRenderPass renderPass;
	VkFramebuffer framebuffer;
	VkRect2D renderArea;
	uint32_t clearValueCount;
	const VkClearValue* pClearValues;
};
using VkDeviceGroupRenderPassBeginInfoKHR = VkDeviceGroupRenderPassBeginInfo;
struct VkCommandBufferInheritanceInfo {
	VkStructureType sType;
	const void* pNext;
	VkRenderPass renderPass;
	uint32_t subpass;
	VkFramebuffer framebuffer;
	VkBool32 occlusionQueryEnable;
	VkQueryControlFlags queryFlags;
	VkQueryPipelineStatisticFlags pipelineStatistics;
};
struct VkDeviceGroupCommandBufferBeginInfo {
	VkStructureType sType;
	const void* pNext;
	VkCommandBufferUsageFlags flags;
	const VkCommandBufferInheritanceInfo* pInheritanceInfo;
};
using VkDeviceGroupCommandBufferBeginInfoKHR = VkDeviceGroupCommandBufferBeginInfo;
struct VkDeviceGroupSubmitInfo {
	VkStructureType sType;
	const void* pNext;
	uint32_t waitSemaphoreCount;
	const VkSemaphore* pWaitSemaphores;
	const VkPipelineStageFlags* pWaitDstStageMask;
	uint32_t commandBufferCount;
	const VkCommandBuffer* pCommandBuffers;
	uint32_t signalSemaphoreCount;
	const VkSemaphore* pSignalSemaphores;
};
using VkDeviceGroupSubmitInfoKHR = VkDeviceGroupSubmitInfo;
struct VkSparseMemoryBind {
	VkDeviceSize resourceOffset;
	VkDeviceSize size;
	VkDeviceMemory memory;
	VkDeviceSize memoryOffset;
	VkSparseMemoryBindFlags flags;
};
struct VkSparseBufferMemoryBindInfo {
	VkBuffer buffer;
	uint32_t bindCount;
	const VkSparseMemoryBind* pBinds;
};
struct VkSparseImageOpaqueMemoryBindInfo {
	VkImage image;
	uint32_t bindCount;
	const VkSparseMemoryBind* pBinds;
};
struct VkImageSubresource {
	VkImageAspectFlags aspectMask;
	uint32_t mipLevel;
	uint32_t arrayLayer;
};
struct VkOffset3D {
	int32_t x;
	int32_t y;
	int32_t z;
};
struct VkExtent3D {
	uint32_t width;
	uint32_t height;
	uint32_t depth;
};
struct VkSparseImageMemoryBind {
	VkImageSubresource subresource;
	VkOffset3D offset;
	VkExtent3D extent;
	VkDeviceMemory memory;
	VkDeviceSize memoryOffset;
	VkSparseMemoryBindFlags flags;
};
struct VkSparseImageMemoryBindInfo {
	VkImage image;
	uint32_t bindCount;
	const VkSparseImageMemoryBind* pBinds;
};
struct VkDeviceGroupBindSparseInfo {
	VkStructureType sType;
	const void* pNext;
	uint32_t waitSemaphoreCount;
	const VkSemaphore* pWaitSemaphores;
	uint32_t bufferBindCount;
	const VkSparseBufferMemoryBindInfo* pBufferBinds;
	uint32_t imageOpaqueBindCount;
	const VkSparseImageOpaqueMemoryBindInfo* pImageOpaqueBinds;
	uint32_t imageBindCount;
	const VkSparseImageMemoryBindInfo* pImageBinds;
	uint32_t signalSemaphoreCount;
	const VkSemaphore* pSignalSemaphores;
};
using VkDeviceGroupBindSparseInfoKHR = VkDeviceGroupBindSparseInfo;
struct VkBindBufferMemoryDeviceGroupInfo {
	VkStructureType sType;
	const void* pNext;
	VkBuffer buffer;
	VkDeviceMemory memory;
	VkDeviceSize memoryOffset;
};
using VkBindBufferMemoryDeviceGroupInfoKHR = VkBindBufferMemoryDeviceGroupInfo;
struct VkBindImageMemoryDeviceGroupInfo {
	VkStructureType sType;
	const void* pNext;
	VkImage image;
	VkDeviceMemory memory;
	VkDeviceSize memoryOffset;
};
using VkBindImageMemoryDeviceGroupInfoKHR = VkBindImageMemoryDeviceGroupInfo;
struct VkPhysicalDeviceGroupProperties {
	VkStructureType sType;
	void* pNext;
	uint32_t physicalDeviceCount;
	VkPhysicalDevice physicalDevices;
	VkBool32 subsetAllocation;
};
using VkPhysicalDeviceGroupPropertiesKHR = VkPhysicalDeviceGroupProperties;
struct VkDeviceGroupDeviceCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
using VkDeviceGroupDeviceCreateInfoKHR = VkDeviceGroupDeviceCreateInfo;
struct VkBufferMemoryRequirementsInfo2 {
	VkStructureType sType;
	const void* pNext;
	VkBuffer buffer;
};
using VkBufferMemoryRequirementsInfo2KHR = VkBufferMemoryRequirementsInfo2;
struct VkImageMemoryRequirementsInfo2 {
	VkStructureType sType;
	const void* pNext;
	VkImage image;
};
using VkImageMemoryRequirementsInfo2KHR = VkImageMemoryRequirementsInfo2;
struct VkImageSparseMemoryRequirementsInfo2 {
	VkStructureType sType;
	const void* pNext;
	VkImage image;
};
using VkImageSparseMemoryRequirementsInfo2KHR = VkImageSparseMemoryRequirementsInfo2;
struct VkMemoryRequirements2 {
	VkStructureType sType;
	void* pNext;
	VkMemoryRequirements memoryRequirements;
};
using VkMemoryRequirements2KHR = VkMemoryRequirements2;
struct VkSparseImageFormatProperties {
	VkImageAspectFlags aspectMask;
	VkExtent3D imageGranularity;
	VkSparseImageFormatFlags flags;
};
struct VkSparseImageMemoryRequirements {
	VkSparseImageFormatProperties formatProperties;
	uint32_t imageMipTailFirstLod;
	VkDeviceSize imageMipTailSize;
	VkDeviceSize imageMipTailOffset;
	VkDeviceSize imageMipTailStride;
};
struct VkSparseImageMemoryRequirements2 {
	VkStructureType sType;
	void* pNext;
	VkSparseImageMemoryRequirements memoryRequirements;
};
using VkSparseImageMemoryRequirements2KHR = VkSparseImageMemoryRequirements2;
struct VkPhysicalDeviceFeatures2 {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
using VkPhysicalDeviceFeatures2KHR = VkPhysicalDeviceFeatures2;
struct VkPhysicalDeviceProperties2 {
	VkStructureType sType;
	void* pNext;
	VkPhysicalDeviceProperties properties;
};
using VkPhysicalDeviceProperties2KHR = VkPhysicalDeviceProperties2;
struct VkFormatProperties {
	VkFormatFeatureFlags linearTilingFeatures;
	VkFormatFeatureFlags optimalTilingFeatures;
	VkFormatFeatureFlags bufferFeatures;
};
struct VkFormatProperties2 {
	VkStructureType sType;
	void* pNext;
	VkFormatProperties formatProperties;
};
using VkFormatProperties2KHR = VkFormatProperties2;
struct VkImageFormatProperties {
	VkExtent3D maxExtent;
	uint32_t maxMipLevels;
	uint32_t maxArrayLayers;
	VkSampleCountFlags sampleCounts;
	VkDeviceSize maxResourceSize;
};
struct VkImageFormatProperties2 {
	VkStructureType sType;
	void* pNext;
	VkImageFormatProperties imageFormatProperties;
};
using VkImageFormatProperties2KHR = VkImageFormatProperties2;
struct VkPhysicalDeviceImageFormatInfo2 {
	VkStructureType sType;
	const void* pNext;
	VkFormat format;
	VkImageType type;
	VkImageTiling tiling;
	VkImageUsageFlags usage;
	VkImageCreateFlags flags;
};
using VkPhysicalDeviceImageFormatInfo2KHR = VkPhysicalDeviceImageFormatInfo2;
struct VkQueueFamilyProperties {
	VkQueueFlags queueFlags;
	uint32_t queueCount;
	uint32_t timestampValidBits;
	VkExtent3D minImageTransferGranularity;
};
struct VkQueueFamilyProperties2 {
	VkStructureType sType;
	void* pNext;
	VkQueueFamilyProperties queueFamilyProperties;
};
using VkQueueFamilyProperties2KHR = VkQueueFamilyProperties2;
struct VkMemoryType {
	VkMemoryPropertyFlags propertyFlags;
	uint32_t heapIndex;
};
struct VkMemoryHeap {
	VkDeviceSize size;
	VkMemoryHeapFlags flags;
};
struct VkPhysicalDeviceMemoryProperties {
	uint32_t memoryTypeCount;
	VkMemoryType memoryTypes;
	uint32_t memoryHeapCount;
	VkMemoryHeap memoryHeaps;
};
struct VkPhysicalDeviceMemoryProperties2 {
	VkStructureType sType;
	void* pNext;
	VkPhysicalDeviceMemoryProperties memoryProperties;
};
using VkPhysicalDeviceMemoryProperties2KHR = VkPhysicalDeviceMemoryProperties2;
struct VkSparseImageFormatProperties2 {
	VkStructureType sType;
	void* pNext;
	VkSparseImageFormatProperties properties;
};
using VkSparseImageFormatProperties2KHR = VkSparseImageFormatProperties2;
struct VkPhysicalDeviceSparseImageFormatInfo2 {
	VkStructureType sType;
	const void* pNext;
	VkFormat format;
	VkImageType type;
	VkSampleCountFlagBits samples;
	VkImageUsageFlags usage;
	VkImageTiling tiling;
};
using VkPhysicalDeviceSparseImageFormatInfo2KHR = VkPhysicalDeviceSparseImageFormatInfo2;
struct VkPhysicalDevicePointClippingProperties {
	VkStructureType sType;
	void* pNext;
	VkPhysicalDeviceProperties properties;
};
using VkPhysicalDevicePointClippingPropertiesKHR = VkPhysicalDevicePointClippingProperties;
struct VkAttachmentDescription {
	VkAttachmentDescriptionFlags flags;
	VkFormat format;
	VkSampleCountFlagBits samples;
	VkAttachmentLoadOp loadOp;
	VkAttachmentStoreOp storeOp;
	VkAttachmentLoadOp stencilLoadOp;
	VkAttachmentStoreOp stencilStoreOp;
	VkImageLayout initialLayout;
	VkImageLayout finalLayout;
};
struct VkAttachmentReference {
	uint32_t attachment;
	VkImageLayout layout;
};
struct VkSubpassDescription {
	VkSubpassDescriptionFlags flags;
	VkPipelineBindPoint pipelineBindPoint;
	uint32_t inputAttachmentCount;
	const VkAttachmentReference* pInputAttachments;
	uint32_t colorAttachmentCount;
	const VkAttachmentReference* pColorAttachments;
	const VkAttachmentReference* pResolveAttachments;
	const VkAttachmentReference* pDepthStencilAttachment;
	uint32_t preserveAttachmentCount;
	const uint32_t* pPreserveAttachments;
};
struct VkSubpassDependency {
	uint32_t srcSubpass;
	uint32_t dstSubpass;
	VkPipelineStageFlags srcStageMask;
	VkPipelineStageFlags dstStageMask;
	VkAccessFlags srcAccessMask;
	VkAccessFlags dstAccessMask;
	VkDependencyFlags dependencyFlags;
};
struct VkRenderPassInputAttachmentAspectCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkRenderPassCreateFlags flags;
	uint32_t attachmentCount;
	const VkAttachmentDescription* pAttachments;
	uint32_t subpassCount;
	const VkSubpassDescription* pSubpasses;
	uint32_t dependencyCount;
	const VkSubpassDependency* pDependencies;
};
using VkRenderPassInputAttachmentAspectCreateInfoKHR = VkRenderPassInputAttachmentAspectCreateInfo;
struct VkInputAttachmentAspectReference {
	uint32_t subpass;
	uint32_t inputAttachmentIndex;
	VkImageAspectFlags aspectMask;
};
using VkInputAttachmentAspectReferenceKHR = VkInputAttachmentAspectReference;
struct VkComponentMapping {
	VkComponentSwizzle r;
	VkComponentSwizzle g;
	VkComponentSwizzle b;
	VkComponentSwizzle a;
};
struct VkImageViewUsageCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkImageViewCreateFlags flags;
	VkImage image;
	VkImageViewType viewType;
	VkFormat format;
	VkComponentMapping components;
	VkImageSubresourceRange subresourceRange;
};
using VkImageViewUsageCreateInfoKHR = VkImageViewUsageCreateInfo;
struct VkPipelineTessellationDomainOriginStateCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkPipelineTessellationStateCreateFlags flags;
	uint32_t patchControlPoints;
};
using VkPipelineTessellationDomainOriginStateCreateInfoKHR = VkPipelineTessellationDomainOriginStateCreateInfo;
struct VkRenderPassMultiviewCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkRenderPassCreateFlags flags;
	uint32_t attachmentCount;
	const VkAttachmentDescription* pAttachments;
	uint32_t subpassCount;
	const VkSubpassDescription* pSubpasses;
	uint32_t dependencyCount;
	const VkSubpassDependency* pDependencies;
};
using VkRenderPassMultiviewCreateInfoKHR = VkRenderPassMultiviewCreateInfo;
struct VkPhysicalDeviceMultiviewFeatures {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
using VkPhysicalDeviceMultiviewFeaturesKHR = VkPhysicalDeviceMultiviewFeatures;
struct VkPhysicalDeviceMultiviewProperties {
	VkStructureType sType;
	void* pNext;
	VkPhysicalDeviceProperties properties;
};
using VkPhysicalDeviceMultiviewPropertiesKHR = VkPhysicalDeviceMultiviewProperties;
struct VkPhysicalDeviceVariablePointersFeatures {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
using VkPhysicalDeviceVariablePointerFeatures = VkPhysicalDeviceVariablePointersFeatures;
struct VkPhysicalDeviceProtectedMemoryFeatures {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkPhysicalDeviceProtectedMemoryProperties {
	VkStructureType sType;
	void* pNext;
	VkPhysicalDeviceProperties properties;
};
struct VkDeviceQueueInfo2 {
	VkStructureType sType;
	const void* pNext;
	VkDeviceQueueCreateFlags flags;
	uint32_t queueFamilyIndex;
	uint32_t queueIndex;
};
struct VkProtectedSubmitInfo {
	VkStructureType sType;
	const void* pNext;
	uint32_t waitSemaphoreCount;
	const VkSemaphore* pWaitSemaphores;
	const VkPipelineStageFlags* pWaitDstStageMask;
	uint32_t commandBufferCount;
	const VkCommandBuffer* pCommandBuffers;
	uint32_t signalSemaphoreCount;
	const VkSemaphore* pSignalSemaphores;
};
struct VkSamplerYcbcrConversionCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkFormat format;
	VkSamplerYcbcrModelConversion ycbcrModel;
	VkSamplerYcbcrRange ycbcrRange;
	VkComponentMapping components;
	VkChromaLocation xChromaOffset;
	VkChromaLocation yChromaOffset;
	VkFilter chromaFilter;
	VkBool32 forceExplicitReconstruction;
};
using VkSamplerYcbcrConversionCreateInfoKHR = VkSamplerYcbcrConversionCreateInfo;
struct VkSamplerYcbcrConversionInfo {
	VkStructureType sType;
	const void* pNext;
	VkImageViewCreateFlags flags;
	VkFilter magFilter;
	VkFilter minFilter;
	VkSamplerMipmapMode mipmapMode;
	VkSamplerAddressMode addressModeU;
	VkSamplerAddressMode addressModeV;
	VkSamplerAddressMode addressModeW;
	float mipLodBias;
	VkBool32 anisotropyEnable;
	float maxAnisotropy;
	VkBool32 compareEnable;
	VkCompareOp compareOp;
	float minLod;
	float maxLod;
	VkBorderColor borderColor;
	VkBool32 unnormalizedCoordinates;
	VkImage image;
	VkImageViewType viewType;
	VkFormat format;
	VkComponentMapping components;
	VkImageSubresourceRange subresourceRange;
};
using VkSamplerYcbcrConversionInfoKHR = VkSamplerYcbcrConversionInfo;
struct VkBindImagePlaneMemoryInfo {
	VkStructureType sType;
	const void* pNext;
	VkImage image;
	VkDeviceMemory memory;
	VkDeviceSize memoryOffset;
};
using VkBindImagePlaneMemoryInfoKHR = VkBindImagePlaneMemoryInfo;
struct VkImagePlaneMemoryRequirementsInfo {
	VkStructureType sType;
	const void* pNext;
	VkImage image;
};
using VkImagePlaneMemoryRequirementsInfoKHR = VkImagePlaneMemoryRequirementsInfo;
struct VkPhysicalDeviceSamplerYcbcrConversionFeatures {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
using VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR = VkPhysicalDeviceSamplerYcbcrConversionFeatures;
struct VkSamplerYcbcrConversionImageFormatProperties {
	VkStructureType sType;
	void* pNext;
	VkImageFormatProperties imageFormatProperties;
};
using VkSamplerYcbcrConversionImageFormatPropertiesKHR = VkSamplerYcbcrConversionImageFormatProperties;
struct VkDescriptorUpdateTemplateEntry {
	uint32_t dstBinding;
	uint32_t dstArrayElement;
	uint32_t descriptorCount;
	VkDescriptorType descriptorType;
	size_t offset;
	size_t stride;
};
using VkDescriptorUpdateTemplateEntryKHR = VkDescriptorUpdateTemplateEntry;
struct VkDescriptorUpdateTemplateCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkDescriptorUpdateTemplateCreateFlags flags;
	uint32_t descriptorUpdateEntryCount;
	const VkDescriptorUpdateTemplateEntry* pDescriptorUpdateEntries;
	VkDescriptorUpdateTemplateType templateType;
	VkDescriptorSetLayout descriptorSetLayout;
	VkPipelineBindPoint pipelineBindPoint;
	VkPipelineLayout pipelineLayout;
	uint32_t set;
};
using VkDescriptorUpdateTemplateCreateInfoKHR = VkDescriptorUpdateTemplateCreateInfo;
struct VkExternalMemoryProperties {
	VkExternalMemoryFeatureFlags externalMemoryFeatures;
	VkExternalMemoryHandleTypeFlags exportFromImportedHandleTypes;
	VkExternalMemoryHandleTypeFlags compatibleHandleTypes;
};
using VkExternalMemoryPropertiesKHR = VkExternalMemoryProperties;
struct VkPhysicalDeviceExternalImageFormatInfo {
	VkStructureType sType;
	const void* pNext;
	VkFormat format;
	VkImageType type;
	VkImageTiling tiling;
	VkImageUsageFlags usage;
	VkImageCreateFlags flags;
};
using VkPhysicalDeviceExternalImageFormatInfoKHR = VkPhysicalDeviceExternalImageFormatInfo;
struct VkExternalImageFormatProperties {
	VkStructureType sType;
	void* pNext;
	VkImageFormatProperties imageFormatProperties;
};
using VkExternalImageFormatPropertiesKHR = VkExternalImageFormatProperties;
struct VkPhysicalDeviceExternalBufferInfo {
	VkStructureType sType;
	const void* pNext;
	VkBufferCreateFlags flags;
	VkBufferUsageFlags usage;
	VkExternalMemoryHandleTypeFlagBits handleType;
};
using VkPhysicalDeviceExternalBufferInfoKHR = VkPhysicalDeviceExternalBufferInfo;
struct VkExternalBufferProperties {
	VkStructureType sType;
	void* pNext;
	VkExternalMemoryProperties externalMemoryProperties;
};
using VkExternalBufferPropertiesKHR = VkExternalBufferProperties;
struct VkPhysicalDeviceIDProperties {
	VkStructureType sType;
	void* pNext;
	VkPhysicalDeviceProperties properties;
};
using VkPhysicalDeviceIDPropertiesKHR = VkPhysicalDeviceIDProperties;
struct VkExternalMemoryImageCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkImageCreateFlags flags;
	VkImageType imageType;
	VkFormat format;
	VkExtent3D extent;
	uint32_t mipLevels;
	uint32_t arrayLayers;
	VkSampleCountFlagBits samples;
	VkImageTiling tiling;
	VkImageUsageFlags usage;
	VkSharingMode sharingMode;
	uint32_t queueFamilyIndexCount;
	const uint32_t* pQueueFamilyIndices;
	VkImageLayout initialLayout;
};
using VkExternalMemoryImageCreateInfoKHR = VkExternalMemoryImageCreateInfo;
struct VkExternalMemoryBufferCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkBufferCreateFlags flags;
	VkDeviceSize size;
	VkBufferUsageFlags usage;
	VkSharingMode sharingMode;
	uint32_t queueFamilyIndexCount;
	const uint32_t* pQueueFamilyIndices;
};
using VkExternalMemoryBufferCreateInfoKHR = VkExternalMemoryBufferCreateInfo;
struct VkExportMemoryAllocateInfo {
	VkStructureType sType;
	const void* pNext;
	VkDeviceSize allocationSize;
	uint32_t memoryTypeIndex;
};
using VkExportMemoryAllocateInfoKHR = VkExportMemoryAllocateInfo;
struct VkPhysicalDeviceExternalFenceInfo {
	VkStructureType sType;
	const void* pNext;
	VkExternalFenceHandleTypeFlagBits handleType;
};
using VkPhysicalDeviceExternalFenceInfoKHR = VkPhysicalDeviceExternalFenceInfo;
struct VkExternalFenceProperties {
	VkStructureType sType;
	void* pNext;
	VkExternalFenceHandleTypeFlags exportFromImportedHandleTypes;
	VkExternalFenceHandleTypeFlags compatibleHandleTypes;
	VkExternalFenceFeatureFlags externalFenceFeatures;
};
using VkExternalFencePropertiesKHR = VkExternalFenceProperties;
struct VkExportFenceCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkFenceCreateFlags flags;
};
using VkExportFenceCreateInfoKHR = VkExportFenceCreateInfo;
struct VkExportSemaphoreCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkSemaphoreCreateFlags flags;
};
using VkExportSemaphoreCreateInfoKHR = VkExportSemaphoreCreateInfo;
struct VkPhysicalDeviceExternalSemaphoreInfo {
	VkStructureType sType;
	const void* pNext;
	VkExternalSemaphoreHandleTypeFlagBits handleType;
};
using VkPhysicalDeviceExternalSemaphoreInfoKHR = VkPhysicalDeviceExternalSemaphoreInfo;
struct VkExternalSemaphoreProperties {
	VkStructureType sType;
	void* pNext;
	VkExternalSemaphoreHandleTypeFlags exportFromImportedHandleTypes;
	VkExternalSemaphoreHandleTypeFlags compatibleHandleTypes;
	VkExternalSemaphoreFeatureFlags externalSemaphoreFeatures;
};
using VkExternalSemaphorePropertiesKHR = VkExternalSemaphoreProperties;
struct VkPhysicalDeviceMaintenance3Properties {
	VkStructureType sType;
	void* pNext;
	VkPhysicalDeviceProperties properties;
};
using VkPhysicalDeviceMaintenance3PropertiesKHR = VkPhysicalDeviceMaintenance3Properties;
struct VkDescriptorSetLayoutSupport {
	VkStructureType sType;
	void* pNext;
	VkBool32 supported;
};
using VkDescriptorSetLayoutSupportKHR = VkDescriptorSetLayoutSupport;
struct VkPhysicalDeviceShaderDrawParametersFeatures {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
using VkPhysicalDeviceShaderDrawParameterFeatures = VkPhysicalDeviceShaderDrawParametersFeatures;
struct VkImageSwapchainCreateInfoKHR {
	VkStructureType sType;
	const void* pNext;
	VkImageCreateFlags flags;
	VkImageType imageType;
	VkFormat format;
	VkExtent3D extent;
	uint32_t mipLevels;
	uint32_t arrayLayers;
	VkSampleCountFlagBits samples;
	VkImageTiling tiling;
	VkImageUsageFlags usage;
	VkSharingMode sharingMode;
	uint32_t queueFamilyIndexCount;
	const uint32_t* pQueueFamilyIndices;
	VkImageLayout initialLayout;
};
struct VkBindImageMemorySwapchainInfoKHR {
	VkStructureType sType;
	const void* pNext;
	VkImage image;
	VkDeviceMemory memory;
	VkDeviceSize memoryOffset;
};
struct VkAcquireNextImageInfoKHR {
	VkStructureType sType;
	const void* pNext;
	VkSwapchainKHR swapchain;
	uint64_t timeout;
	VkSemaphore semaphore;
	VkFence fence;
	uint32_t deviceMask;
};
struct VkDeviceGroupPresentCapabilitiesKHR {
	VkStructureType sType;
	const void* pNext;
	uint32_t presentMask;
	VkDeviceGroupPresentModeFlagsKHR modes;
};
struct VkDeviceGroupPresentInfoKHR {
	VkStructureType sType;
	const void* pNext;
	uint32_t waitSemaphoreCount;
	const VkSemaphore* pWaitSemaphores;
	uint32_t swapchainCount;
	const VkSwapchainKHR* pSwapchains;
	const uint32_t* pImageIndices;
	VkResult* pResults;
};
struct VkDeviceGroupSwapchainCreateInfoKHR {
	VkStructureType sType;
	const void* pNext;
	VkSwapchainCreateFlagsKHR flags;
	VkSurfaceKHR surface;
	uint32_t minImageCount;
	VkFormat imageFormat;
	VkColorSpaceKHR imageColorSpace;
	VkExtent2D imageExtent;
	uint32_t imageArrayLayers;
	VkImageUsageFlags imageUsage;
	VkSharingMode imageSharingMode;
	uint32_t queueFamilyIndexCount;
	const uint32_t* pQueueFamilyIndices;
	VkSurfaceTransformFlagBitsKHR preTransform;
	VkCompositeAlphaFlagBitsKHR compositeAlpha;
	VkPresentModeKHR presentMode;
	VkBool32 clipped;
	VkSwapchainKHR oldSwapchain;
};
struct VkDisplayPropertiesKHR {
	VkDisplayKHR display;
	const char* displayName;
	VkExtent2D physicalDimensions;
	VkExtent2D physicalResolution;
	VkSurfaceTransformFlagsKHR supportedTransforms;
	VkBool32 planeReorderPossible;
	VkBool32 persistentContent;
};
struct VkDisplayModeParametersKHR {
	VkExtent2D visibleRegion;
	uint32_t refreshRate;
};
struct VkDisplayModePropertiesKHR {
	VkDisplayModeKHR displayMode;
	VkDisplayModeParametersKHR parameters;
};
struct VkDisplayModeCreateInfoKHR {
	VkStructureType sType;
	const void* pNext;
	VkDisplayModeCreateFlagsKHR flags;
	VkDisplayModeParametersKHR parameters;
};
struct VkDisplayPlaneCapabilitiesKHR {
	VkDisplayPlaneAlphaFlagsKHR supportedAlpha;
	VkOffset2D minSrcPosition;
	VkOffset2D maxSrcPosition;
	VkExtent2D minSrcExtent;
	VkExtent2D maxSrcExtent;
	VkOffset2D minDstPosition;
	VkOffset2D maxDstPosition;
	VkExtent2D minDstExtent;
	VkExtent2D maxDstExtent;
};
struct VkDisplayPlanePropertiesKHR {
	VkDisplayKHR currentDisplay;
	uint32_t currentStackIndex;
};
struct VkDisplaySurfaceCreateInfoKHR {
	VkStructureType sType;
	const void* pNext;
	VkDisplaySurfaceCreateFlagsKHR flags;
	VkDisplayModeKHR displayMode;
	uint32_t planeIndex;
	uint32_t planeStackIndex;
	VkSurfaceTransformFlagBitsKHR transform;
	float globalAlpha;
	VkDisplayPlaneAlphaFlagBitsKHR alphaMode;
	VkExtent2D imageExtent;
};
struct VkDisplayPresentInfoKHR {
	
};
struct VkApplicationInfo {
	VkStructureType sType;
	const void* pNext;
	const char* pApplicationName;
	uint32_t applicationVersion;
	const char* pEngineName;
	uint32_t engineVersion;
	uint32_t apiVersion;
};
struct VkDebugReportCallbackCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkInstanceCreateFlags flags;
	const VkApplicationInfo* pApplicationInfo;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
};
struct VkPipelineRasterizationStateRasterizationOrderAMD {
	VkStructureType sType;
	const void* pNext;
	VkPipelineRasterizationStateCreateFlags flags;
	VkBool32 depthClampEnable;
	VkBool32 rasterizerDiscardEnable;
	VkPolygonMode polygonMode;
	VkCullModeFlags cullMode;
	VkFrontFace frontFace;
	VkBool32 depthBiasEnable;
	float depthBiasConstantFactor;
	float depthBiasClamp;
	float depthBiasSlopeFactor;
	float lineWidth;
};
struct VkDebugMarkerObjectNameInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkDebugReportObjectTypeEXT objectType;
	uint64_t object;
	const char* pObjectName;
};
struct VkDebugMarkerObjectTagInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkDebugReportObjectTypeEXT objectType;
	uint64_t object;
	uint64_t tagName;
	size_t tagSize;
	const void* pTag;
};
struct VkDebugMarkerMarkerInfoEXT {
	VkStructureType sType;
	const void* pNext;
	const char* pMarkerName;
	float color;
};
struct VkDedicatedAllocationImageCreateInfoNV {
	VkStructureType sType;
	const void* pNext;
	VkImageCreateFlags flags;
	VkImageType imageType;
	VkFormat format;
	VkExtent3D extent;
	uint32_t mipLevels;
	uint32_t arrayLayers;
	VkSampleCountFlagBits samples;
	VkImageTiling tiling;
	VkImageUsageFlags usage;
	VkSharingMode sharingMode;
	uint32_t queueFamilyIndexCount;
	const uint32_t* pQueueFamilyIndices;
	VkImageLayout initialLayout;
};
struct VkDedicatedAllocationBufferCreateInfoNV {
	VkStructureType sType;
	const void* pNext;
	VkBufferCreateFlags flags;
	VkDeviceSize size;
	VkBufferUsageFlags usage;
	VkSharingMode sharingMode;
	uint32_t queueFamilyIndexCount;
	const uint32_t* pQueueFamilyIndices;
};
struct VkDedicatedAllocationMemoryAllocateInfoNV {
	VkStructureType sType;
	const void* pNext;
	VkDeviceSize allocationSize;
	uint32_t memoryTypeIndex;
};
struct VkPhysicalDeviceTransformFeedbackFeaturesEXT {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkPhysicalDeviceTransformFeedbackPropertiesEXT {
	VkStructureType sType;
	void* pNext;
	VkPhysicalDeviceProperties properties;
};
struct VkPipelineRasterizationStateStreamCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkPipelineRasterizationStateCreateFlags flags;
	VkBool32 depthClampEnable;
	VkBool32 rasterizerDiscardEnable;
	VkPolygonMode polygonMode;
	VkCullModeFlags cullMode;
	VkFrontFace frontFace;
	VkBool32 depthBiasEnable;
	float depthBiasConstantFactor;
	float depthBiasClamp;
	float depthBiasSlopeFactor;
	float lineWidth;
};
struct VkImageViewHandleInfoNVX {
	VkStructureType sType;
	const void* pNext;
	VkImageView imageView;
	VkDescriptorType descriptorType;
	VkSampler sampler;
};
struct VkTextureLODGatherFormatPropertiesAMD {
	VkStructureType sType;
	void* pNext;
	VkImageFormatProperties imageFormatProperties;
};
struct VkShaderResourceUsageAMD {
	uint32_t numUsedVgprs;
	uint32_t numUsedSgprs;
	uint32_t ldsSizePerLocalWorkGroup;
	size_t ldsUsageSizeInBytes;
	size_t scratchMemUsageInBytes;
};
struct VkShaderStatisticsInfoAMD {
	VkShaderStageFlags shaderStageMask;
	VkShaderResourceUsageAMD resourceUsage;
	uint32_t numPhysicalVgprs;
	uint32_t numPhysicalSgprs;
	uint32_t numAvailableVgprs;
	uint32_t numAvailableSgprs;
	uint32_t computeWorkGroupSize;
};
struct VkPhysicalDeviceCornerSampledImageFeaturesNV {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkExternalImageFormatPropertiesNV {
	VkImageFormatProperties imageFormatProperties;
	VkExternalMemoryFeatureFlagsNV externalMemoryFeatures;
	VkExternalMemoryHandleTypeFlagsNV exportFromImportedHandleTypes;
	VkExternalMemoryHandleTypeFlagsNV compatibleHandleTypes;
};
struct VkExternalMemoryImageCreateInfoNV {
	VkStructureType sType;
	const void* pNext;
	VkImageCreateFlags flags;
	VkImageType imageType;
	VkFormat format;
	VkExtent3D extent;
	uint32_t mipLevels;
	uint32_t arrayLayers;
	VkSampleCountFlagBits samples;
	VkImageTiling tiling;
	VkImageUsageFlags usage;
	VkSharingMode sharingMode;
	uint32_t queueFamilyIndexCount;
	const uint32_t* pQueueFamilyIndices;
	VkImageLayout initialLayout;
};
struct VkExportMemoryAllocateInfoNV {
	VkStructureType sType;
	const void* pNext;
	VkDeviceSize allocationSize;
	uint32_t memoryTypeIndex;
};
struct VkValidationFlagsEXT {
	VkStructureType sType;
	const void* pNext;
	VkInstanceCreateFlags flags;
	const VkApplicationInfo* pApplicationInfo;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
};
struct VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkImageViewASTCDecodeModeEXT {
	VkStructureType sType;
	const void* pNext;
	VkImageViewCreateFlags flags;
	VkImage image;
	VkImageViewType viewType;
	VkFormat format;
	VkComponentMapping components;
	VkImageSubresourceRange subresourceRange;
};
struct VkPhysicalDeviceASTCDecodeFeaturesEXT {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkImportMemoryFdInfoKHR {
	VkStructureType sType;
	const void* pNext;
	VkDeviceSize allocationSize;
	uint32_t memoryTypeIndex;
};
struct VkMemoryFdPropertiesKHR {
	VkStructureType sType;
	void* pNext;
	uint32_t memoryTypeBits;
};
struct VkMemoryGetFdInfoKHR {
	VkStructureType sType;
	const void* pNext;
	VkDeviceMemory memory;
	VkExternalMemoryHandleTypeFlagBits handleType;
};
struct VkImportSemaphoreFdInfoKHR {
	VkStructureType sType;
	const void* pNext;
	VkSemaphore semaphore;
	VkSemaphoreImportFlags flags;
	VkExternalSemaphoreHandleTypeFlagBits handleType;
	int fd;
};
struct VkSemaphoreGetFdInfoKHR {
	VkStructureType sType;
	const void* pNext;
	VkSemaphore semaphore;
	VkExternalSemaphoreHandleTypeFlagBits handleType;
};
struct VkPhysicalDevicePushDescriptorPropertiesKHR {
	VkStructureType sType;
	void* pNext;
	VkPhysicalDeviceProperties properties;
};
struct VkConditionalRenderingBeginInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkBuffer buffer;
	VkDeviceSize offset;
	VkConditionalRenderingFlagsEXT flags;
};
struct VkPhysicalDeviceConditionalRenderingFeaturesEXT {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkCommandBufferInheritanceConditionalRenderingInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkRenderPass renderPass;
	uint32_t subpass;
	VkFramebuffer framebuffer;
	VkBool32 occlusionQueryEnable;
	VkQueryControlFlags queryFlags;
	VkQueryPipelineStatisticFlags pipelineStatistics;
};
struct VkPhysicalDeviceShaderFloat16Int8FeaturesKHR {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
using VkPhysicalDeviceFloat16Int8FeaturesKHR = VkPhysicalDeviceShaderFloat16Int8FeaturesKHR;
struct VkPresentRegionsKHR {
	VkStructureType sType;
	const void* pNext;
	uint32_t waitSemaphoreCount;
	const VkSemaphore* pWaitSemaphores;
	uint32_t swapchainCount;
	const VkSwapchainKHR* pSwapchains;
	const uint32_t* pImageIndices;
	VkResult* pResults;
};
struct VkRectLayerKHR {
	VkOffset2D offset;
	VkExtent2D extent;
	uint32_t layer;
};
struct VkPresentRegionKHR {
	uint32_t rectangleCount;
	const VkRectLayerKHR* pRectangles;
};
struct VkDeviceGeneratedCommandsFeaturesNVX {
	VkStructureType sType;
	const void* pNext;
	VkBool32 computeBindingPointSupport;
};
struct VkDeviceGeneratedCommandsLimitsNVX {
	VkStructureType sType;
	const void* pNext;
	uint32_t maxIndirectCommandsLayoutTokenCount;
	uint32_t maxObjectEntryCounts;
	uint32_t minSequenceCountBufferOffsetAlignment;
	uint32_t minSequenceIndexBufferOffsetAlignment;
	uint32_t minCommandsTokenBufferOffsetAlignment;
};
struct VkIndirectCommandsTokenNVX {
	VkIndirectCommandsTokenTypeNVX tokenType;
	VkBuffer buffer;
	VkDeviceSize offset;
};
struct VkIndirectCommandsLayoutTokenNVX {
	VkIndirectCommandsTokenTypeNVX tokenType;
	uint32_t bindingUnit;
	uint32_t dynamicCount;
	uint32_t divisor;
};
struct VkIndirectCommandsLayoutCreateInfoNVX {
	VkStructureType sType;
	const void* pNext;
	VkPipelineBindPoint pipelineBindPoint;
	VkIndirectCommandsLayoutUsageFlagsNVX flags;
	uint32_t tokenCount;
	const VkIndirectCommandsLayoutTokenNVX* pTokens;
};
struct VkCmdProcessCommandsInfoNVX {
	VkStructureType sType;
	const void* pNext;
	VkObjectTableNVX objectTable;
	VkIndirectCommandsLayoutNVX indirectCommandsLayout;
	uint32_t indirectCommandsTokenCount;
	const VkIndirectCommandsTokenNVX* pIndirectCommandsTokens;
	uint32_t maxSequencesCount;
	VkCommandBuffer targetCommandBuffer;
	VkBuffer sequencesCountBuffer;
	VkDeviceSize sequencesCountOffset;
	VkBuffer sequencesIndexBuffer;
	VkDeviceSize sequencesIndexOffset;
};
struct VkCmdReserveSpaceForCommandsInfoNVX {
	VkStructureType sType;
	const void* pNext;
	VkObjectTableNVX objectTable;
	VkIndirectCommandsLayoutNVX indirectCommandsLayout;
	uint32_t maxSequencesCount;
};
struct VkObjectTableCreateInfoNVX {
	VkStructureType sType;
	const void* pNext;
	uint32_t objectCount;
	const VkObjectEntryTypeNVX* pObjectEntryTypes;
	const uint32_t* pObjectEntryCounts;
	const VkObjectEntryUsageFlagsNVX* pObjectEntryUsageFlags;
	uint32_t maxUniformBuffersPerDescriptor;
	uint32_t maxStorageBuffersPerDescriptor;
	uint32_t maxStorageImagesPerDescriptor;
	uint32_t maxSampledImagesPerDescriptor;
	uint32_t maxPipelineLayouts;
};
struct VkObjectTableEntryNVX {
	VkObjectEntryTypeNVX type;
	VkObjectEntryUsageFlagsNVX flags;
};
struct VkObjectTablePipelineEntryNVX {
	VkObjectEntryTypeNVX type;
	VkObjectEntryUsageFlagsNVX flags;
	VkPipeline pipeline;
};
struct VkObjectTableDescriptorSetEntryNVX {
	VkObjectEntryTypeNVX type;
	VkObjectEntryUsageFlagsNVX flags;
	VkPipelineLayout pipelineLayout;
	VkDescriptorSet descriptorSet;
};
struct VkObjectTableVertexBufferEntryNVX {
	VkObjectEntryTypeNVX type;
	VkObjectEntryUsageFlagsNVX flags;
	VkBuffer buffer;
};
struct VkObjectTableIndexBufferEntryNVX {
	VkObjectEntryTypeNVX type;
	VkObjectEntryUsageFlagsNVX flags;
	VkBuffer buffer;
	VkIndexType indexType;
};
struct VkObjectTablePushConstantEntryNVX {
	VkObjectEntryTypeNVX type;
	VkObjectEntryUsageFlagsNVX flags;
	VkPipelineLayout pipelineLayout;
	VkShaderStageFlags stageFlags;
};
struct VkViewportWScalingNV {
	float xcoeff;
	float ycoeff;
};
struct VkViewport {
	float x;
	float y;
	float width;
	float height;
	float minDepth;
	float maxDepth;
};
struct VkPipelineViewportWScalingStateCreateInfoNV {
	VkStructureType sType;
	const void* pNext;
	VkPipelineViewportStateCreateFlags flags;
	uint32_t viewportCount;
	const VkViewport* pViewports;
	uint32_t scissorCount;
	const VkRect2D* pScissors;
};
struct VkSurfaceCapabilities2EXT {
	VkStructureType sType;
	void* pNext;
	uint32_t minImageCount;
	uint32_t maxImageCount;
	VkExtent2D currentExtent;
	VkExtent2D minImageExtent;
	VkExtent2D maxImageExtent;
	uint32_t maxImageArrayLayers;
	VkSurfaceTransformFlagsKHR supportedTransforms;
	VkSurfaceTransformFlagBitsKHR currentTransform;
	VkCompositeAlphaFlagsKHR supportedCompositeAlpha;
	VkImageUsageFlags supportedUsageFlags;
	VkSurfaceCounterFlagsEXT supportedSurfaceCounters;
};
struct VkDisplayPowerInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkDisplayPowerStateEXT powerState;
};
struct VkDeviceEventInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkDeviceEventTypeEXT deviceEvent;
};
struct VkDisplayEventInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkDisplayEventTypeEXT displayEvent;
};
struct VkSwapchainCounterCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkSwapchainCreateFlagsKHR flags;
	VkSurfaceKHR surface;
	uint32_t minImageCount;
	VkFormat imageFormat;
	VkColorSpaceKHR imageColorSpace;
	VkExtent2D imageExtent;
	uint32_t imageArrayLayers;
	VkImageUsageFlags imageUsage;
	VkSharingMode imageSharingMode;
	uint32_t queueFamilyIndexCount;
	const uint32_t* pQueueFamilyIndices;
	VkSurfaceTransformFlagBitsKHR preTransform;
	VkCompositeAlphaFlagBitsKHR compositeAlpha;
	VkPresentModeKHR presentMode;
	VkBool32 clipped;
	VkSwapchainKHR oldSwapchain;
};
struct VkRefreshCycleDurationGOOGLE {
	uint64_t refreshDuration;
};
struct VkPastPresentationTimingGOOGLE {
	uint32_t presentID;
	uint64_t desiredPresentTime;
	uint64_t actualPresentTime;
	uint64_t earliestPresentTime;
	uint64_t presentMargin;
};
struct VkPresentTimesInfoGOOGLE {
	VkStructureType sType;
	const void* pNext;
	uint32_t waitSemaphoreCount;
	const VkSemaphore* pWaitSemaphores;
	uint32_t swapchainCount;
	const VkSwapchainKHR* pSwapchains;
	const uint32_t* pImageIndices;
	VkResult* pResults;
};
struct VkPresentTimeGOOGLE {
	uint32_t presentID;
	uint64_t desiredPresentTime;
};
struct VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX {
	VkStructureType sType;
	void* pNext;
	VkPhysicalDeviceProperties properties;
};
struct VkViewportSwizzleNV {
	VkViewportCoordinateSwizzleNV x;
	VkViewportCoordinateSwizzleNV y;
	VkViewportCoordinateSwizzleNV z;
	VkViewportCoordinateSwizzleNV w;
};
struct VkPipelineViewportSwizzleStateCreateInfoNV {
	VkStructureType sType;
	const void* pNext;
	VkPipelineViewportStateCreateFlags flags;
	uint32_t viewportCount;
	const VkViewport* pViewports;
	uint32_t scissorCount;
	const VkRect2D* pScissors;
};
struct VkPhysicalDeviceDiscardRectanglePropertiesEXT {
	VkStructureType sType;
	void* pNext;
	VkPhysicalDeviceProperties properties;
};
struct VkSpecializationMapEntry {
	uint32_t constantID;
	uint32_t offset;
	size_t size;
};
struct VkSpecializationInfo {
	uint32_t mapEntryCount;
	const VkSpecializationMapEntry* pMapEntries;
	size_t dataSize;
	const void* pData;
};
struct VkPipelineShaderStageCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkPipelineShaderStageCreateFlags flags;
	VkShaderStageFlagBits stage;
	VkShaderModule module;
	const char* pName;
	const VkSpecializationInfo* pSpecializationInfo;
};
struct VkVertexInputBindingDescription {
	uint32_t binding;
	uint32_t stride;
	VkVertexInputRate inputRate;
};
struct VkVertexInputAttributeDescription {
	uint32_t location;
	uint32_t binding;
	VkFormat format;
	uint32_t offset;
};
struct VkPipelineVertexInputStateCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkPipelineVertexInputStateCreateFlags flags;
	uint32_t vertexBindingDescriptionCount;
	const VkVertexInputBindingDescription* pVertexBindingDescriptions;
	uint32_t vertexAttributeDescriptionCount;
	const VkVertexInputAttributeDescription* pVertexAttributeDescriptions;
};
struct VkPipelineInputAssemblyStateCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkPipelineInputAssemblyStateCreateFlags flags;
	VkPrimitiveTopology topology;
	VkBool32 primitiveRestartEnable;
};
struct VkPipelineTessellationStateCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkPipelineTessellationStateCreateFlags flags;
	uint32_t patchControlPoints;
};
struct VkPipelineViewportStateCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkPipelineViewportStateCreateFlags flags;
	uint32_t viewportCount;
	const VkViewport* pViewports;
	uint32_t scissorCount;
	const VkRect2D* pScissors;
};
struct VkPipelineRasterizationStateCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkPipelineRasterizationStateCreateFlags flags;
	VkBool32 depthClampEnable;
	VkBool32 rasterizerDiscardEnable;
	VkPolygonMode polygonMode;
	VkCullModeFlags cullMode;
	VkFrontFace frontFace;
	VkBool32 depthBiasEnable;
	float depthBiasConstantFactor;
	float depthBiasClamp;
	float depthBiasSlopeFactor;
	float lineWidth;
};
struct VkPipelineMultisampleStateCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkPipelineMultisampleStateCreateFlags flags;
	VkSampleCountFlagBits rasterizationSamples;
	VkBool32 sampleShadingEnable;
	float minSampleShading;
	const VkSampleMask* pSampleMask;
	VkBool32 alphaToCoverageEnable;
	VkBool32 alphaToOneEnable;
};
struct VkStencilOpState {
	VkStencilOp failOp;
	VkStencilOp passOp;
	VkStencilOp depthFailOp;
	VkCompareOp compareOp;
	uint32_t compareMask;
	uint32_t writeMask;
	uint32_t reference;
};
struct VkPipelineDepthStencilStateCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkPipelineDepthStencilStateCreateFlags flags;
	VkBool32 depthTestEnable;
	VkBool32 depthWriteEnable;
	VkCompareOp depthCompareOp;
	VkBool32 depthBoundsTestEnable;
	VkBool32 stencilTestEnable;
	VkStencilOpState front;
	VkStencilOpState back;
	float minDepthBounds;
	float maxDepthBounds;
};
struct VkPipelineColorBlendAttachmentState {
	VkBool32 blendEnable;
	VkBlendFactor srcColorBlendFactor;
	VkBlendFactor dstColorBlendFactor;
	VkBlendOp colorBlendOp;
	VkBlendFactor srcAlphaBlendFactor;
	VkBlendFactor dstAlphaBlendFactor;
	VkBlendOp alphaBlendOp;
	VkColorComponentFlags colorWriteMask;
};
struct VkPipelineColorBlendStateCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkPipelineColorBlendStateCreateFlags flags;
	VkBool32 logicOpEnable;
	VkLogicOp logicOp;
	uint32_t attachmentCount;
	const VkPipelineColorBlendAttachmentState* pAttachments;
	float blendConstants;
};
struct VkPipelineDynamicStateCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkPipelineDynamicStateCreateFlags flags;
	uint32_t dynamicStateCount;
	const VkDynamicState* pDynamicStates;
};
struct VkPipelineDiscardRectangleStateCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkPipelineCreateFlags flags;
	uint32_t stageCount;
	const VkPipelineShaderStageCreateInfo* pStages;
	const VkPipelineVertexInputStateCreateInfo* pVertexInputState;
	const VkPipelineInputAssemblyStateCreateInfo* pInputAssemblyState;
	const VkPipelineTessellationStateCreateInfo* pTessellationState;
	const VkPipelineViewportStateCreateInfo* pViewportState;
	const VkPipelineRasterizationStateCreateInfo* pRasterizationState;
	const VkPipelineMultisampleStateCreateInfo* pMultisampleState;
	const VkPipelineDepthStencilStateCreateInfo* pDepthStencilState;
	const VkPipelineColorBlendStateCreateInfo* pColorBlendState;
	const VkPipelineDynamicStateCreateInfo* pDynamicState;
	VkPipelineLayout layout;
	VkRenderPass renderPass;
	uint32_t subpass;
	VkPipeline basePipelineHandle;
	int32_t basePipelineIndex;
};
struct VkPhysicalDeviceConservativeRasterizationPropertiesEXT {
	VkStructureType sType;
	void* pNext;
	VkPhysicalDeviceProperties properties;
};
struct VkPipelineRasterizationConservativeStateCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkPipelineRasterizationStateCreateFlags flags;
	VkBool32 depthClampEnable;
	VkBool32 rasterizerDiscardEnable;
	VkPolygonMode polygonMode;
	VkCullModeFlags cullMode;
	VkFrontFace frontFace;
	VkBool32 depthBiasEnable;
	float depthBiasConstantFactor;
	float depthBiasClamp;
	float depthBiasSlopeFactor;
	float lineWidth;
};
struct VkPhysicalDeviceDepthClipEnableFeaturesEXT {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkPipelineRasterizationDepthClipStateCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkPipelineRasterizationStateCreateFlags flags;
	VkBool32 depthClampEnable;
	VkBool32 rasterizerDiscardEnable;
	VkPolygonMode polygonMode;
	VkCullModeFlags cullMode;
	VkFrontFace frontFace;
	VkBool32 depthBiasEnable;
	float depthBiasConstantFactor;
	float depthBiasClamp;
	float depthBiasSlopeFactor;
	float lineWidth;
};
struct VkXYColorEXT {
	float x;
	float y;
};
struct VkHdrMetadataEXT {
	VkStructureType sType;
	const void* pNext;
	VkXYColorEXT displayPrimaryRed;
	VkXYColorEXT displayPrimaryGreen;
	VkXYColorEXT displayPrimaryBlue;
	VkXYColorEXT whitePoint;
	float maxLuminance;
	float minLuminance;
	float maxContentLightLevel;
	float maxFrameAverageLightLevel;
};
struct VkPhysicalDeviceImagelessFramebufferFeaturesKHR {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkFramebufferAttachmentsCreateInfoKHR {
	VkStructureType sType;
	const void* pNext;
	VkFramebufferCreateFlags flags;
	VkRenderPass renderPass;
	uint32_t attachmentCount;
	const VkImageView* pAttachments;
	uint32_t width;
	uint32_t height;
	uint32_t layers;
};
struct VkRenderPassAttachmentBeginInfoKHR {
	VkStructureType sType;
	const void* pNext;
	VkRenderPass renderPass;
	VkFramebuffer framebuffer;
	VkRect2D renderArea;
	uint32_t clearValueCount;
	const VkClearValue* pClearValues;
};
struct VkSurfaceCapabilitiesKHR {
	uint32_t minImageCount;
	uint32_t maxImageCount;
	VkExtent2D currentExtent;
	VkExtent2D minImageExtent;
	VkExtent2D maxImageExtent;
	uint32_t maxImageArrayLayers;
	VkSurfaceTransformFlagsKHR supportedTransforms;
	VkSurfaceTransformFlagBitsKHR currentTransform;
	VkCompositeAlphaFlagsKHR supportedCompositeAlpha;
	VkImageUsageFlags supportedUsageFlags;
};
struct VkSharedPresentSurfaceCapabilitiesKHR {
	VkStructureType sType;
	void* pNext;
	VkSurfaceCapabilitiesKHR surfaceCapabilities;
};
struct VkImportFenceFdInfoKHR {
	VkStructureType sType;
	const void* pNext;
	VkFence fence;
	VkFenceImportFlags flags;
	VkExternalFenceHandleTypeFlagBits handleType;
	int fd;
};
struct VkFenceGetFdInfoKHR {
	VkStructureType sType;
	const void* pNext;
	VkFence fence;
	VkExternalFenceHandleTypeFlagBits handleType;
};
struct VkPhysicalDeviceSurfaceInfo2KHR {
	VkStructureType sType;
	const void* pNext;
	VkSurfaceKHR surface;
};
struct VkSurfaceCapabilities2KHR {
	VkStructureType sType;
	void* pNext;
	VkSurfaceCapabilitiesKHR surfaceCapabilities;
};
struct VkSurfaceFormatKHR {
	VkFormat format;
	VkColorSpaceKHR colorSpace;
};
struct VkSurfaceFormat2KHR {
	VkStructureType sType;
	void* pNext;
	VkSurfaceFormatKHR surfaceFormat;
};
struct VkDisplayProperties2KHR {
	VkStructureType sType;
	void* pNext;
	VkDisplayPropertiesKHR displayProperties;
};
struct VkDisplayPlaneProperties2KHR {
	VkStructureType sType;
	void* pNext;
	VkDisplayPlanePropertiesKHR displayPlaneProperties;
};
struct VkDisplayModeProperties2KHR {
	VkStructureType sType;
	void* pNext;
	VkDisplayModePropertiesKHR displayModeProperties;
};
struct VkDisplayPlaneInfo2KHR {
	VkStructureType sType;
	const void* pNext;
	VkDisplayModeKHR mode;
	uint32_t planeIndex;
};
struct VkDisplayPlaneCapabilities2KHR {
	VkStructureType sType;
	void* pNext;
	VkDisplayPlaneCapabilitiesKHR capabilities;
};
struct VkDebugUtilsObjectNameInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkObjectType objectType;
	uint64_t objectHandle;
	const char* pObjectName;
};
struct VkDebugUtilsObjectTagInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkObjectType objectType;
	uint64_t objectHandle;
	uint64_t tagName;
	size_t tagSize;
	const void* pTag;
};
struct VkDebugUtilsLabelEXT {
	VkStructureType sType;
	const void* pNext;
	const char* pLabelName;
	float color;
};
struct VkDebugUtilsMessengerCallbackDataEXT {
	VkStructureType sType;
	const void* pNext;
	VkDebugUtilsMessengerCallbackDataFlagsEXT flags;
	const char* pMessageIdName;
	int32_t messageIdNumber;
	const char* pMessage;
	uint32_t queueLabelCount;
	const VkDebugUtilsLabelEXT* pQueueLabels;
	uint32_t cmdBufLabelCount;
	const VkDebugUtilsLabelEXT* pCmdBufLabels;
	uint32_t objectCount;
	const VkDebugUtilsObjectNameInfoEXT* pObjects;
};
struct VkDebugUtilsMessengerCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkInstanceCreateFlags flags;
	const VkApplicationInfo* pApplicationInfo;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
};
struct VkSamplerReductionModeCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkSamplerCreateFlags flags;
	VkFilter magFilter;
	VkFilter minFilter;
	VkSamplerMipmapMode mipmapMode;
	VkSamplerAddressMode addressModeU;
	VkSamplerAddressMode addressModeV;
	VkSamplerAddressMode addressModeW;
	float mipLodBias;
	VkBool32 anisotropyEnable;
	float maxAnisotropy;
	VkBool32 compareEnable;
	VkCompareOp compareOp;
	float minLod;
	float maxLod;
	VkBorderColor borderColor;
	VkBool32 unnormalizedCoordinates;
};
struct VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT {
	VkStructureType sType;
	void* pNext;
	VkPhysicalDeviceProperties properties;
};
struct VkPhysicalDeviceInlineUniformBlockFeaturesEXT {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkPhysicalDeviceInlineUniformBlockPropertiesEXT {
	VkStructureType sType;
	void* pNext;
	VkPhysicalDeviceProperties properties;
};
struct VkDescriptorImageInfo {
	VkSampler sampler;
	VkImageView imageView;
	VkImageLayout imageLayout;
};
struct VkDescriptorBufferInfo {
	VkBuffer buffer;
	VkDeviceSize offset;
	VkDeviceSize range;
};
struct VkWriteDescriptorSetInlineUniformBlockEXT {
	VkStructureType sType;
	const void* pNext;
	VkDescriptorSet dstSet;
	uint32_t dstBinding;
	uint32_t dstArrayElement;
	uint32_t descriptorCount;
	VkDescriptorType descriptorType;
	const VkDescriptorImageInfo* pImageInfo;
	const VkDescriptorBufferInfo* pBufferInfo;
	const VkBufferView* pTexelBufferView;
};
struct VkDescriptorPoolSize {
	VkDescriptorType type;
	uint32_t descriptorCount;
};
struct VkDescriptorPoolInlineUniformBlockCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkDescriptorPoolCreateFlags flags;
	uint32_t maxSets;
	uint32_t poolSizeCount;
	const VkDescriptorPoolSize* pPoolSizes;
};
struct VkSampleLocationEXT {
	float x;
	float y;
};
struct VkSampleLocationsInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkAccessFlags srcAccessMask;
	VkAccessFlags dstAccessMask;
	VkImageLayout oldLayout;
	VkImageLayout newLayout;
	uint32_t srcQueueFamilyIndex;
	uint32_t dstQueueFamilyIndex;
	VkImage image;
	VkImageSubresourceRange subresourceRange;
};
struct VkAttachmentSampleLocationsEXT {
	uint32_t attachmentIndex;
	VkSampleLocationsInfoEXT sampleLocationsInfo;
};
struct VkSubpassSampleLocationsEXT {
	uint32_t subpassIndex;
	VkSampleLocationsInfoEXT sampleLocationsInfo;
};
struct VkRenderPassSampleLocationsBeginInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkRenderPass renderPass;
	VkFramebuffer framebuffer;
	VkRect2D renderArea;
	uint32_t clearValueCount;
	const VkClearValue* pClearValues;
};
struct VkPipelineSampleLocationsStateCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkPipelineMultisampleStateCreateFlags flags;
	VkSampleCountFlagBits rasterizationSamples;
	VkBool32 sampleShadingEnable;
	float minSampleShading;
	const VkSampleMask* pSampleMask;
	VkBool32 alphaToCoverageEnable;
	VkBool32 alphaToOneEnable;
};
struct VkPhysicalDeviceSampleLocationsPropertiesEXT {
	VkStructureType sType;
	void* pNext;
	VkPhysicalDeviceProperties properties;
};
struct VkMultisamplePropertiesEXT {
	VkStructureType sType;
	void* pNext;
	VkExtent2D maxSampleLocationGridSize;
};
struct VkImageFormatListCreateInfoKHR {
	VkStructureType sType;
	const void* pNext;
	VkImageCreateFlags flags;
	VkImageType imageType;
	VkFormat format;
	VkExtent3D extent;
	uint32_t mipLevels;
	uint32_t arrayLayers;
	VkSampleCountFlagBits samples;
	VkImageTiling tiling;
	VkImageUsageFlags usage;
	VkSharingMode sharingMode;
	uint32_t queueFamilyIndexCount;
	const uint32_t* pQueueFamilyIndices;
	VkImageLayout initialLayout;
	VkSurfaceKHR surface;
	uint32_t minImageCount;
	VkFormat imageFormat;
	VkColorSpaceKHR imageColorSpace;
	VkExtent2D imageExtent;
	uint32_t imageArrayLayers;
	VkImageUsageFlags imageUsage;
	VkSharingMode imageSharingMode;
	VkSurfaceTransformFlagBitsKHR preTransform;
	VkCompositeAlphaFlagBitsKHR compositeAlpha;
	VkPresentModeKHR presentMode;
	VkBool32 clipped;
	VkSwapchainKHR oldSwapchain;
	VkImageType type;
};
struct VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT {
	VkStructureType sType;
	void* pNext;
	VkPhysicalDeviceProperties properties;
};
struct VkPipelineColorBlendAdvancedStateCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkPipelineColorBlendStateCreateFlags flags;
	VkBool32 logicOpEnable;
	VkLogicOp logicOp;
	uint32_t attachmentCount;
	const VkPipelineColorBlendAttachmentState* pAttachments;
	float blendConstants;
};
struct VkPipelineCoverageToColorStateCreateInfoNV {
	VkStructureType sType;
	const void* pNext;
	VkPipelineMultisampleStateCreateFlags flags;
	VkSampleCountFlagBits rasterizationSamples;
	VkBool32 sampleShadingEnable;
	float minSampleShading;
	const VkSampleMask* pSampleMask;
	VkBool32 alphaToCoverageEnable;
	VkBool32 alphaToOneEnable;
};
struct VkPipelineCoverageModulationStateCreateInfoNV {
	VkStructureType sType;
	const void* pNext;
	VkPipelineMultisampleStateCreateFlags flags;
	VkSampleCountFlagBits rasterizationSamples;
	VkBool32 sampleShadingEnable;
	float minSampleShading;
	const VkSampleMask* pSampleMask;
	VkBool32 alphaToCoverageEnable;
	VkBool32 alphaToOneEnable;
};
struct VkPhysicalDeviceShaderSMBuiltinsPropertiesNV {
	VkStructureType sType;
	void* pNext;
	VkPhysicalDeviceProperties properties;
};
struct VkPhysicalDeviceShaderSMBuiltinsFeaturesNV {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkDrmFormatModifierPropertiesListEXT {
	VkStructureType sType;
	void* pNext;
	VkFormatProperties formatProperties;
};
struct VkDrmFormatModifierPropertiesEXT {
	uint64_t drmFormatModifier;
	uint32_t drmFormatModifierPlaneCount;
	VkFormatFeatureFlags drmFormatModifierTilingFeatures;
};
struct VkPhysicalDeviceImageDrmFormatModifierInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkFormat format;
	VkImageType type;
	VkImageTiling tiling;
	VkImageUsageFlags usage;
	VkImageCreateFlags flags;
};
struct VkImageDrmFormatModifierListCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkImageCreateFlags flags;
	VkImageType imageType;
	VkFormat format;
	VkExtent3D extent;
	uint32_t mipLevels;
	uint32_t arrayLayers;
	VkSampleCountFlagBits samples;
	VkImageTiling tiling;
	VkImageUsageFlags usage;
	VkSharingMode sharingMode;
	uint32_t queueFamilyIndexCount;
	const uint32_t* pQueueFamilyIndices;
	VkImageLayout initialLayout;
};
struct VkImageDrmFormatModifierExplicitCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkImageCreateFlags flags;
	VkImageType imageType;
	VkFormat format;
	VkExtent3D extent;
	uint32_t mipLevels;
	uint32_t arrayLayers;
	VkSampleCountFlagBits samples;
	VkImageTiling tiling;
	VkImageUsageFlags usage;
	VkSharingMode sharingMode;
	uint32_t queueFamilyIndexCount;
	const uint32_t* pQueueFamilyIndices;
	VkImageLayout initialLayout;
};
struct VkImageDrmFormatModifierPropertiesEXT {
	VkStructureType sType;
	void* pNext;
	uint64_t drmFormatModifier;
};
struct VkValidationCacheCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkValidationCacheCreateFlagsEXT flags;
	size_t initialDataSize;
	const void* pInitialData;
};
struct VkShaderModuleValidationCacheCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkShaderModuleCreateFlags flags;
	size_t codeSize;
	const uint32_t* pCode;
};
struct VkDescriptorSetLayoutBinding {
	uint32_t binding;
	VkDescriptorType descriptorType;
	uint32_t descriptorCount;
	VkShaderStageFlags stageFlags;
	const VkSampler* pImmutableSamplers;
};
struct VkDescriptorSetLayoutBindingFlagsCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkDescriptorSetLayoutCreateFlags flags;
	uint32_t bindingCount;
	const VkDescriptorSetLayoutBinding* pBindings;
};
struct VkPhysicalDeviceDescriptorIndexingFeaturesEXT {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkPhysicalDeviceDescriptorIndexingPropertiesEXT {
	VkStructureType sType;
	void* pNext;
	VkPhysicalDeviceProperties properties;
};
struct VkDescriptorSetVariableDescriptorCountAllocateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkDescriptorPool descriptorPool;
	uint32_t descriptorSetCount;
	const VkDescriptorSetLayout* pSetLayouts;
};
struct VkDescriptorSetVariableDescriptorCountLayoutSupportEXT {
	VkStructureType sType;
	void* pNext;
	VkBool32 supported;
};
struct VkShadingRatePaletteNV {
	uint32_t shadingRatePaletteEntryCount;
	const VkShadingRatePaletteEntryNV* pShadingRatePaletteEntries;
};
struct VkPipelineViewportShadingRateImageStateCreateInfoNV {
	VkStructureType sType;
	const void* pNext;
	VkPipelineViewportStateCreateFlags flags;
	uint32_t viewportCount;
	const VkViewport* pViewports;
	uint32_t scissorCount;
	const VkRect2D* pScissors;
};
struct VkPhysicalDeviceShadingRateImageFeaturesNV {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkPhysicalDeviceShadingRateImagePropertiesNV {
	VkStructureType sType;
	void* pNext;
	VkPhysicalDeviceProperties properties;
};
struct VkCoarseSampleLocationNV {
	uint32_t pixelX;
	uint32_t pixelY;
	uint32_t sample;
};
struct VkCoarseSampleOrderCustomNV {
	VkShadingRatePaletteEntryNV shadingRate;
	uint32_t sampleCount;
	uint32_t sampleLocationCount;
	const VkCoarseSampleLocationNV* pSampleLocations;
};
struct VkPipelineViewportCoarseSampleOrderStateCreateInfoNV {
	VkStructureType sType;
	const void* pNext;
	VkPipelineViewportStateCreateFlags flags;
	uint32_t viewportCount;
	const VkViewport* pViewports;
	uint32_t scissorCount;
	const VkRect2D* pScissors;
};
struct VkRayTracingShaderGroupCreateInfoNV {
	VkStructureType sType;
	const void* pNext;
	VkRayTracingShaderGroupTypeNV type;
	uint32_t generalShader;
	uint32_t closestHitShader;
	uint32_t anyHitShader;
	uint32_t intersectionShader;
};
struct VkRayTracingPipelineCreateInfoNV {
	VkStructureType sType;
	const void* pNext;
	VkPipelineCreateFlags flags;
	uint32_t stageCount;
	const VkPipelineShaderStageCreateInfo* pStages;
	uint32_t groupCount;
	const VkRayTracingShaderGroupCreateInfoNV* pGroups;
	uint32_t maxRecursionDepth;
	VkPipelineLayout layout;
	VkPipeline basePipelineHandle;
	int32_t basePipelineIndex;
};
struct VkGeometryTrianglesNV {
	VkStructureType sType;
	const void* pNext;
	VkBuffer vertexData;
	VkDeviceSize vertexOffset;
	uint32_t vertexCount;
	VkDeviceSize vertexStride;
	VkFormat vertexFormat;
	VkBuffer indexData;
	VkDeviceSize indexOffset;
	uint32_t indexCount;
	VkIndexType indexType;
	VkBuffer transformData;
	VkDeviceSize transformOffset;
};
struct VkGeometryAABBNV {
	VkStructureType sType;
	const void* pNext;
	VkBuffer aabbData;
	uint32_t numAABBs;
	uint32_t stride;
	VkDeviceSize offset;
};
struct VkGeometryDataNV {
	VkGeometryTrianglesNV triangles;
	VkGeometryAABBNV aabbs;
};
struct VkGeometryNV {
	VkStructureType sType;
	const void* pNext;
	VkGeometryTypeNV geometryType;
	VkGeometryDataNV geometry;
	VkGeometryFlagsNV flags;
};
struct VkAccelerationStructureInfoNV {
	VkStructureType sType;
	const void* pNext;
	VkAccelerationStructureTypeNV type;
	VkBuildAccelerationStructureFlagsNV flags;
	uint32_t instanceCount;
	uint32_t geometryCount;
	const VkGeometryNV* pGeometries;
};
struct VkAccelerationStructureCreateInfoNV {
	VkStructureType sType;
	const void* pNext;
	VkDeviceSize compactedSize;
	VkAccelerationStructureInfoNV info;
};
struct VkBindAccelerationStructureMemoryInfoNV {
	VkStructureType sType;
	const void* pNext;
	VkAccelerationStructureNV accelerationStructure;
	VkDeviceMemory memory;
	VkDeviceSize memoryOffset;
	uint32_t deviceIndexCount;
	const uint32_t* pDeviceIndices;
};
struct VkWriteDescriptorSetAccelerationStructureNV {
	VkStructureType sType;
	const void* pNext;
	VkDescriptorSet dstSet;
	uint32_t dstBinding;
	uint32_t dstArrayElement;
	uint32_t descriptorCount;
	VkDescriptorType descriptorType;
	const VkDescriptorImageInfo* pImageInfo;
	const VkDescriptorBufferInfo* pBufferInfo;
	const VkBufferView* pTexelBufferView;
};
struct VkAccelerationStructureMemoryRequirementsInfoNV {
	VkStructureType sType;
	const void* pNext;
	VkAccelerationStructureMemoryRequirementsTypeNV type;
	VkAccelerationStructureNV accelerationStructure;
};
struct VkPhysicalDeviceRayTracingPropertiesNV {
	VkStructureType sType;
	void* pNext;
	VkPhysicalDeviceProperties properties;
};
struct VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkPipelineRepresentativeFragmentTestStateCreateInfoNV {
	VkStructureType sType;
	const void* pNext;
	VkPipelineCreateFlags flags;
	uint32_t stageCount;
	const VkPipelineShaderStageCreateInfo* pStages;
	const VkPipelineVertexInputStateCreateInfo* pVertexInputState;
	const VkPipelineInputAssemblyStateCreateInfo* pInputAssemblyState;
	const VkPipelineTessellationStateCreateInfo* pTessellationState;
	const VkPipelineViewportStateCreateInfo* pViewportState;
	const VkPipelineRasterizationStateCreateInfo* pRasterizationState;
	const VkPipelineMultisampleStateCreateInfo* pMultisampleState;
	const VkPipelineDepthStencilStateCreateInfo* pDepthStencilState;
	const VkPipelineColorBlendStateCreateInfo* pColorBlendState;
	const VkPipelineDynamicStateCreateInfo* pDynamicState;
	VkPipelineLayout layout;
	VkRenderPass renderPass;
	uint32_t subpass;
	VkPipeline basePipelineHandle;
	int32_t basePipelineIndex;
};
struct VkPhysicalDeviceImageViewImageFormatInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkFormat format;
	VkImageType type;
	VkImageTiling tiling;
	VkImageUsageFlags usage;
	VkImageCreateFlags flags;
};
struct VkFilterCubicImageViewImageFormatPropertiesEXT {
	VkStructureType sType;
	void* pNext;
	VkImageFormatProperties imageFormatProperties;
};
struct VkDeviceQueueGlobalPriorityCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkDeviceQueueCreateFlags flags;
	uint32_t queueFamilyIndex;
	uint32_t queueCount;
	const float* pQueuePriorities;
};
struct VkPhysicalDevice8BitStorageFeaturesKHR {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkImportMemoryHostPointerInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkDeviceSize allocationSize;
	uint32_t memoryTypeIndex;
};
struct VkMemoryHostPointerPropertiesEXT {
	VkStructureType sType;
	void* pNext;
	uint32_t memoryTypeBits;
};
struct VkPhysicalDeviceExternalMemoryHostPropertiesEXT {
	VkStructureType sType;
	void* pNext;
	VkPhysicalDeviceProperties properties;
};
struct VkPhysicalDeviceShaderAtomicInt64FeaturesKHR {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkPipelineCompilerControlCreateInfoAMD {
	VkStructureType sType;
	const void* pNext;
	VkPipelineCreateFlags flags;
	uint32_t stageCount;
	const VkPipelineShaderStageCreateInfo* pStages;
	const VkPipelineVertexInputStateCreateInfo* pVertexInputState;
	const VkPipelineInputAssemblyStateCreateInfo* pInputAssemblyState;
	const VkPipelineTessellationStateCreateInfo* pTessellationState;
	const VkPipelineViewportStateCreateInfo* pViewportState;
	const VkPipelineRasterizationStateCreateInfo* pRasterizationState;
	const VkPipelineMultisampleStateCreateInfo* pMultisampleState;
	const VkPipelineDepthStencilStateCreateInfo* pDepthStencilState;
	const VkPipelineColorBlendStateCreateInfo* pColorBlendState;
	const VkPipelineDynamicStateCreateInfo* pDynamicState;
	VkPipelineLayout layout;
	VkRenderPass renderPass;
	uint32_t subpass;
	VkPipeline basePipelineHandle;
	int32_t basePipelineIndex;
	VkPipelineShaderStageCreateInfo stage;
};
struct VkCalibratedTimestampInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkTimeDomainEXT timeDomain;
};
struct VkPhysicalDeviceShaderCorePropertiesAMD {
	VkStructureType sType;
	void* pNext;
	VkPhysicalDeviceProperties properties;
};
struct VkDeviceMemoryOverallocationCreateInfoAMD {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT {
	VkStructureType sType;
	void* pNext;
	VkPhysicalDeviceProperties properties;
};
struct VkVertexInputBindingDivisorDescriptionEXT {
	uint32_t binding;
	uint32_t divisor;
};
struct VkPipelineVertexInputDivisorStateCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkPipelineVertexInputStateCreateFlags flags;
	uint32_t vertexBindingDescriptionCount;
	const VkVertexInputBindingDescription* pVertexBindingDescriptions;
	uint32_t vertexAttributeDescriptionCount;
	const VkVertexInputAttributeDescription* pVertexAttributeDescriptions;
};
struct VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkPipelineCreationFeedbackCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkPipelineCreateFlags flags;
	uint32_t stageCount;
	const VkPipelineShaderStageCreateInfo* pStages;
	const VkPipelineVertexInputStateCreateInfo* pVertexInputState;
	const VkPipelineInputAssemblyStateCreateInfo* pInputAssemblyState;
	const VkPipelineTessellationStateCreateInfo* pTessellationState;
	const VkPipelineViewportStateCreateInfo* pViewportState;
	const VkPipelineRasterizationStateCreateInfo* pRasterizationState;
	const VkPipelineMultisampleStateCreateInfo* pMultisampleState;
	const VkPipelineDepthStencilStateCreateInfo* pDepthStencilState;
	const VkPipelineColorBlendStateCreateInfo* pColorBlendState;
	const VkPipelineDynamicStateCreateInfo* pDynamicState;
	VkPipelineLayout layout;
	VkRenderPass renderPass;
	uint32_t subpass;
	VkPipeline basePipelineHandle;
	int32_t basePipelineIndex;
	VkPipelineShaderStageCreateInfo stage;
	uint32_t groupCount;
	const VkRayTracingShaderGroupCreateInfoNV* pGroups;
	uint32_t maxRecursionDepth;
};
struct VkPipelineCreationFeedbackEXT {
	VkPipelineCreationFeedbackFlagsEXT flags;
	uint64_t duration;
};
struct VkConformanceVersionKHR {
	uint8_t major;
	uint8_t minor;
	uint8_t subminor;
	uint8_t patch;
};
struct VkPhysicalDeviceDriverPropertiesKHR {
	VkStructureType sType;
	void* pNext;
	VkPhysicalDeviceProperties properties;
};
struct VkPhysicalDeviceFloatControlsPropertiesKHR {
	VkStructureType sType;
	void* pNext;
	VkPhysicalDeviceProperties properties;
};
struct VkAttachmentReference2KHR {
	VkStructureType sType;
	const void* pNext;
	uint32_t attachment;
	VkImageLayout layout;
	VkImageAspectFlags aspectMask;
};
struct VkSubpassDescriptionDepthStencilResolveKHR {
	VkStructureType sType;
	const void* pNext;
	VkSubpassDescriptionFlags flags;
	VkPipelineBindPoint pipelineBindPoint;
	uint32_t viewMask;
	uint32_t inputAttachmentCount;
	const VkAttachmentReference2KHR* pInputAttachments;
	uint32_t colorAttachmentCount;
	const VkAttachmentReference2KHR* pColorAttachments;
	const VkAttachmentReference2KHR* pResolveAttachments;
	const VkAttachmentReference2KHR* pDepthStencilAttachment;
	uint32_t preserveAttachmentCount;
	const uint32_t* pPreserveAttachments;
};
struct VkPhysicalDeviceDepthStencilResolvePropertiesKHR {
	VkStructureType sType;
	void* pNext;
	VkPhysicalDeviceProperties properties;
};
struct VkPhysicalDeviceComputeShaderDerivativesFeaturesNV {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkPhysicalDeviceMeshShaderFeaturesNV {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkPhysicalDeviceMeshShaderPropertiesNV {
	VkStructureType sType;
	void* pNext;
	VkPhysicalDeviceProperties properties;
};
struct VkDrawMeshTasksIndirectCommandNV {
	uint32_t taskCount;
	uint32_t firstTask;
};
struct VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkPhysicalDeviceShaderImageFootprintFeaturesNV {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkPipelineViewportExclusiveScissorStateCreateInfoNV {
	VkStructureType sType;
	const void* pNext;
	VkPipelineViewportStateCreateFlags flags;
	uint32_t viewportCount;
	const VkViewport* pViewports;
	uint32_t scissorCount;
	const VkRect2D* pScissors;
};
struct VkPhysicalDeviceExclusiveScissorFeaturesNV {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkQueueFamilyCheckpointPropertiesNV {
	VkStructureType sType;
	void* pNext;
	VkQueueFamilyProperties queueFamilyProperties;
};
struct VkCheckpointDataNV {
	VkStructureType sType;
	void* pNext;
	VkPipelineStageFlagBits stage;
	void* pCheckpointMarker;
};
struct VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
union VkPerformanceValueDataINTEL {
	uint32_t value32;
	uint64_t value64;
	float valueFloat;
	VkBool32 valueBool;
	const char* valueString;
};
struct VkPerformanceValueINTEL {
	VkPerformanceValueTypeINTEL type;
	VkPerformanceValueDataINTEL data;
};
struct VkInitializePerformanceApiInfoINTEL {
	VkStructureType sType;
	const void* pNext;
	void* pUserData;
};
struct VkQueryPoolCreateInfoINTEL {
	VkStructureType sType;
	const void* pNext;
	VkQueryPoolSamplingModeINTEL performanceCountersSampling;
};
struct VkPerformanceMarkerInfoINTEL {
	VkStructureType sType;
	const void* pNext;
	uint64_t marker;
};
struct VkPerformanceStreamMarkerInfoINTEL {
	VkStructureType sType;
	const void* pNext;
	uint32_t marker;
};
struct VkPerformanceOverrideInfoINTEL {
	VkStructureType sType;
	const void* pNext;
	VkPerformanceOverrideTypeINTEL type;
	VkBool32 enable;
	uint64_t parameter;
};
struct VkPerformanceConfigurationAcquireInfoINTEL {
	VkStructureType sType;
	const void* pNext;
	VkPerformanceConfigurationTypeINTEL type;
};
struct VkPhysicalDeviceVulkanMemoryModelFeaturesKHR {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkPhysicalDevicePCIBusInfoPropertiesEXT {
	VkStructureType sType;
	void* pNext;
	VkPhysicalDeviceProperties properties;
};
struct VkDisplayNativeHdrSurfaceCapabilitiesAMD {
	
};
struct VkSwapchainDisplayNativeHdrCreateInfoAMD {
	VkStructureType sType;
	const void* pNext;
	VkSwapchainCreateFlagsKHR flags;
	VkSurfaceKHR surface;
	uint32_t minImageCount;
	VkFormat imageFormat;
	VkColorSpaceKHR imageColorSpace;
	VkExtent2D imageExtent;
	uint32_t imageArrayLayers;
	VkImageUsageFlags imageUsage;
	VkSharingMode imageSharingMode;
	uint32_t queueFamilyIndexCount;
	const uint32_t* pQueueFamilyIndices;
	VkSurfaceTransformFlagBitsKHR preTransform;
	VkCompositeAlphaFlagBitsKHR compositeAlpha;
	VkPresentModeKHR presentMode;
	VkBool32 clipped;
	VkSwapchainKHR oldSwapchain;
};
struct VkPhysicalDeviceFragmentDensityMapFeaturesEXT {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkPhysicalDeviceFragmentDensityMapPropertiesEXT {
	VkStructureType sType;
	void* pNext;
	VkPhysicalDeviceProperties properties;
};
struct VkRenderPassFragmentDensityMapCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkRenderPassCreateFlags flags;
	uint32_t attachmentCount;
	const VkAttachmentDescription* pAttachments;
	uint32_t subpassCount;
	const VkSubpassDescription* pSubpasses;
	uint32_t dependencyCount;
	const VkSubpassDependency* pDependencies;
};
struct VkPhysicalDeviceScalarBlockLayoutFeaturesEXT {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkPhysicalDeviceSubgroupSizeControlFeaturesEXT {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkPhysicalDeviceSubgroupSizeControlPropertiesEXT {
	VkStructureType sType;
	void* pNext;
	VkPhysicalDeviceProperties properties;
};
struct VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkPipelineShaderStageCreateFlags flags;
	VkShaderStageFlagBits stage;
	VkShaderModule module;
	const char* pName;
	const VkSpecializationInfo* pSpecializationInfo;
};
struct VkPhysicalDeviceShaderCoreProperties2AMD {
	VkStructureType sType;
	void* pNext;
	VkPhysicalDeviceProperties properties;
};
struct VkPhysicalDeviceMemoryBudgetPropertiesEXT {
	VkStructureType sType;
	void* pNext;
	VkPhysicalDeviceMemoryProperties memoryProperties;
};
struct VkPhysicalDeviceMemoryPriorityFeaturesEXT {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkMemoryPriorityAllocateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkDeviceSize allocationSize;
	uint32_t memoryTypeIndex;
};
struct VkSurfaceProtectedCapabilitiesKHR {
	VkStructureType sType;
	void* pNext;
	VkSurfaceCapabilitiesKHR surfaceCapabilities;
};
struct VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkPhysicalDeviceBufferDeviceAddressFeaturesEXT {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
using VkPhysicalDeviceBufferAddressFeaturesEXT = VkPhysicalDeviceBufferDeviceAddressFeaturesEXT;
struct VkBufferDeviceAddressInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkBuffer buffer;
};
struct VkBufferDeviceAddressCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkBufferCreateFlags flags;
	VkDeviceSize size;
	VkBufferUsageFlags usage;
	VkSharingMode sharingMode;
	uint32_t queueFamilyIndexCount;
	const uint32_t* pQueueFamilyIndices;
};
struct VkImageStencilUsageCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkImageCreateFlags flags;
	VkImageType imageType;
	VkFormat format;
	VkExtent3D extent;
	uint32_t mipLevels;
	uint32_t arrayLayers;
	VkSampleCountFlagBits samples;
	VkImageTiling tiling;
	VkImageUsageFlags usage;
	VkSharingMode sharingMode;
	uint32_t queueFamilyIndexCount;
	const uint32_t* pQueueFamilyIndices;
	VkImageLayout initialLayout;
	VkImageType type;
};
struct VkValidationFeaturesEXT {
	VkStructureType sType;
	const void* pNext;
	VkInstanceCreateFlags flags;
	const VkApplicationInfo* pApplicationInfo;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
};
struct VkCooperativeMatrixPropertiesNV {
	VkStructureType sType;
	void* pNext;
	uint32_t MSize;
	uint32_t NSize;
	uint32_t KSize;
	VkComponentTypeNV AType;
	VkComponentTypeNV BType;
	VkComponentTypeNV CType;
	VkComponentTypeNV DType;
	VkScopeNV scope;
};
struct VkPhysicalDeviceCooperativeMatrixFeaturesNV {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkPhysicalDeviceCooperativeMatrixPropertiesNV {
	VkStructureType sType;
	void* pNext;
	VkPhysicalDeviceProperties properties;
};
struct VkPhysicalDeviceCoverageReductionModeFeaturesNV {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkPipelineCoverageReductionStateCreateInfoNV {
	VkStructureType sType;
	const void* pNext;
	VkPipelineMultisampleStateCreateFlags flags;
	VkSampleCountFlagBits rasterizationSamples;
	VkBool32 sampleShadingEnable;
	float minSampleShading;
	const VkSampleMask* pSampleMask;
	VkBool32 alphaToCoverageEnable;
	VkBool32 alphaToOneEnable;
};
struct VkFramebufferMixedSamplesCombinationNV {
	VkStructureType sType;
	void* pNext;
	VkCoverageReductionModeNV coverageReductionMode;
	VkSampleCountFlagBits rasterizationSamples;
	VkSampleCountFlags depthStencilSamples;
	VkSampleCountFlags colorSamples;
};
struct VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkPhysicalDeviceYcbcrImageArraysFeaturesEXT {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkHeadlessSurfaceCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkHeadlessSurfaceCreateFlagsEXT flags;
};
struct VkPhysicalDeviceLineRasterizationFeaturesEXT {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkPhysicalDeviceLineRasterizationPropertiesEXT {
	VkStructureType sType;
	void* pNext;
	VkPhysicalDeviceProperties properties;
};
struct VkPipelineRasterizationLineStateCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkPipelineRasterizationStateCreateFlags flags;
	VkBool32 depthClampEnable;
	VkBool32 rasterizerDiscardEnable;
	VkPolygonMode polygonMode;
	VkCullModeFlags cullMode;
	VkFrontFace frontFace;
	VkBool32 depthBiasEnable;
	float depthBiasConstantFactor;
	float depthBiasClamp;
	float depthBiasSlopeFactor;
	float lineWidth;
};
struct VkPhysicalDeviceHostQueryResetFeaturesEXT {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkPhysicalDeviceIndexTypeUint8FeaturesEXT {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR {
	VkStructureType sType;
	void* pNext;
	VkBool32 pipelineExecutableInfo;
};
struct VkPipelineInfoKHR {
	VkStructureType sType;
	const void* pNext;
	VkPipeline pipeline;
};
struct VkPipelineExecutablePropertiesKHR {
	VkStructureType sType;
	void* pNext;
	VkShaderStageFlags stages;
	char name;
	char description;
	uint32_t subgroupSize;
};
struct VkPipelineExecutableInfoKHR {
	VkStructureType sType;
	const void* pNext;
	VkPipeline pipeline;
	uint32_t executableIndex;
};
union VkPipelineExecutableStatisticValueKHR {
	VkBool32 b32;
	int64_t i64;
	uint64_t u64;
	double f64;
};
struct VkPipelineExecutableStatisticKHR {
	VkStructureType sType;
	void* pNext;
	char name;
	char description;
	VkPipelineExecutableStatisticFormatKHR format;
	VkPipelineExecutableStatisticValueKHR value;
};
struct VkPipelineExecutableInternalRepresentationKHR {
	VkStructureType sType;
	void* pNext;
	char name;
	char description;
	VkBool32 isText;
	size_t dataSize;
	void* pData;
};
struct VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT {
	VkStructureType sType;
	void* pNext;
	VkPhysicalDeviceProperties properties;
};
struct VkInstanceCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkInstanceCreateFlags flags;
	const VkApplicationInfo* pApplicationInfo;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
};
struct VkAllocationCallbacks {
	void* pUserData;
	PFN_vkAllocationFunction pfnAllocation;
	PFN_vkReallocationFunction pfnReallocation;
	PFN_vkFreeFunction pfnFree;
	PFN_vkInternalAllocationNotification pfnInternalAllocation;
	PFN_vkInternalFreeNotification pfnInternalFree;
};
struct VkDeviceCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkDeviceCreateFlags flags;
	uint32_t queueCreateInfoCount;
	const VkDeviceQueueCreateInfo* pQueueCreateInfos;
	uint32_t enabledLayerCount;
	const char* const* ppEnabledLayerNames;
	uint32_t enabledExtensionCount;
	const char* const* ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures* pEnabledFeatures;
};
struct VkLayerProperties {
	char layerName;
	uint32_t specVersion;
	uint32_t implementationVersion;
	char description;
};
struct VkExtensionProperties {
	char extensionName;
	uint32_t specVersion;
};
struct VkSubmitInfo {
	VkStructureType sType;
	const void* pNext;
	uint32_t waitSemaphoreCount;
	const VkSemaphore* pWaitSemaphores;
	const VkPipelineStageFlags* pWaitDstStageMask;
	uint32_t commandBufferCount;
	const VkCommandBuffer* pCommandBuffers;
	uint32_t signalSemaphoreCount;
	const VkSemaphore* pSignalSemaphores;
};
struct VkMemoryAllocateInfo {
	VkStructureType sType;
	const void* pNext;
	VkDeviceSize allocationSize;
	uint32_t memoryTypeIndex;
};
struct VkMappedMemoryRange {
	VkStructureType sType;
	const void* pNext;
	VkDeviceMemory memory;
	VkDeviceSize offset;
	VkDeviceSize size;
};
struct VkBindSparseInfo {
	VkStructureType sType;
	const void* pNext;
	uint32_t waitSemaphoreCount;
	const VkSemaphore* pWaitSemaphores;
	uint32_t bufferBindCount;
	const VkSparseBufferMemoryBindInfo* pBufferBinds;
	uint32_t imageOpaqueBindCount;
	const VkSparseImageOpaqueMemoryBindInfo* pImageOpaqueBinds;
	uint32_t imageBindCount;
	const VkSparseImageMemoryBindInfo* pImageBinds;
	uint32_t signalSemaphoreCount;
	const VkSemaphore* pSignalSemaphores;
};
struct VkFenceCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkFenceCreateFlags flags;
};
struct VkSemaphoreCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkSemaphoreCreateFlags flags;
};
struct VkEventCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkEventCreateFlags flags;
};
struct VkQueryPoolCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkQueryPoolCreateFlags flags;
	VkQueryType queryType;
	uint32_t queryCount;
	VkQueryPipelineStatisticFlags pipelineStatistics;
};
struct VkBufferCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkBufferCreateFlags flags;
	VkDeviceSize size;
	VkBufferUsageFlags usage;
	VkSharingMode sharingMode;
	uint32_t queueFamilyIndexCount;
	const uint32_t* pQueueFamilyIndices;
};
struct VkBufferViewCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkBufferViewCreateFlags flags;
	VkBuffer buffer;
	VkFormat format;
	VkDeviceSize offset;
	VkDeviceSize range;
};
struct VkImageCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkImageCreateFlags flags;
	VkImageType imageType;
	VkFormat format;
	VkExtent3D extent;
	uint32_t mipLevels;
	uint32_t arrayLayers;
	VkSampleCountFlagBits samples;
	VkImageTiling tiling;
	VkImageUsageFlags usage;
	VkSharingMode sharingMode;
	uint32_t queueFamilyIndexCount;
	const uint32_t* pQueueFamilyIndices;
	VkImageLayout initialLayout;
};
struct VkSubresourceLayout {
	VkDeviceSize offset;
	VkDeviceSize size;
	VkDeviceSize rowPitch;
	VkDeviceSize arrayPitch;
	VkDeviceSize depthPitch;
};
struct VkImageViewCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkImageViewCreateFlags flags;
	VkImage image;
	VkImageViewType viewType;
	VkFormat format;
	VkComponentMapping components;
	VkImageSubresourceRange subresourceRange;
};
struct VkShaderModuleCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkShaderModuleCreateFlags flags;
	size_t codeSize;
	const uint32_t* pCode;
};
struct VkPipelineCacheCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkPipelineCacheCreateFlags flags;
	size_t initialDataSize;
	const void* pInitialData;
};
struct VkGraphicsPipelineCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkPipelineCreateFlags flags;
	uint32_t stageCount;
	const VkPipelineShaderStageCreateInfo* pStages;
	const VkPipelineVertexInputStateCreateInfo* pVertexInputState;
	const VkPipelineInputAssemblyStateCreateInfo* pInputAssemblyState;
	const VkPipelineTessellationStateCreateInfo* pTessellationState;
	const VkPipelineViewportStateCreateInfo* pViewportState;
	const VkPipelineRasterizationStateCreateInfo* pRasterizationState;
	const VkPipelineMultisampleStateCreateInfo* pMultisampleState;
	const VkPipelineDepthStencilStateCreateInfo* pDepthStencilState;
	const VkPipelineColorBlendStateCreateInfo* pColorBlendState;
	const VkPipelineDynamicStateCreateInfo* pDynamicState;
	VkPipelineLayout layout;
	VkRenderPass renderPass;
	uint32_t subpass;
	VkPipeline basePipelineHandle;
	int32_t basePipelineIndex;
};
struct VkComputePipelineCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkPipelineCreateFlags flags;
	VkPipelineShaderStageCreateInfo stage;
	VkPipelineLayout layout;
	VkPipeline basePipelineHandle;
	int32_t basePipelineIndex;
};
struct VkPushConstantRange {
	VkShaderStageFlags stageFlags;
	uint32_t offset;
	uint32_t size;
};
struct VkPipelineLayoutCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkPipelineLayoutCreateFlags flags;
	uint32_t setLayoutCount;
	const VkDescriptorSetLayout* pSetLayouts;
	uint32_t pushConstantRangeCount;
	const VkPushConstantRange* pPushConstantRanges;
};
struct VkSamplerCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkSamplerCreateFlags flags;
	VkFilter magFilter;
	VkFilter minFilter;
	VkSamplerMipmapMode mipmapMode;
	VkSamplerAddressMode addressModeU;
	VkSamplerAddressMode addressModeV;
	VkSamplerAddressMode addressModeW;
	float mipLodBias;
	VkBool32 anisotropyEnable;
	float maxAnisotropy;
	VkBool32 compareEnable;
	VkCompareOp compareOp;
	float minLod;
	float maxLod;
	VkBorderColor borderColor;
	VkBool32 unnormalizedCoordinates;
};
struct VkDescriptorSetLayoutCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkDescriptorSetLayoutCreateFlags flags;
	uint32_t bindingCount;
	const VkDescriptorSetLayoutBinding* pBindings;
};
struct VkDescriptorPoolCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkDescriptorPoolCreateFlags flags;
	uint32_t maxSets;
	uint32_t poolSizeCount;
	const VkDescriptorPoolSize* pPoolSizes;
};
struct VkDescriptorSetAllocateInfo {
	VkStructureType sType;
	const void* pNext;
	VkDescriptorPool descriptorPool;
	uint32_t descriptorSetCount;
	const VkDescriptorSetLayout* pSetLayouts;
};
struct VkWriteDescriptorSet {
	VkStructureType sType;
	const void* pNext;
	VkDescriptorSet dstSet;
	uint32_t dstBinding;
	uint32_t dstArrayElement;
	uint32_t descriptorCount;
	VkDescriptorType descriptorType;
	const VkDescriptorImageInfo* pImageInfo;
	const VkDescriptorBufferInfo* pBufferInfo;
	const VkBufferView* pTexelBufferView;
};
struct VkCopyDescriptorSet {
	VkStructureType sType;
	const void* pNext;
	VkDescriptorSet srcSet;
	uint32_t srcBinding;
	uint32_t srcArrayElement;
	VkDescriptorSet dstSet;
	uint32_t dstBinding;
	uint32_t dstArrayElement;
	uint32_t descriptorCount;
};
struct VkFramebufferCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkFramebufferCreateFlags flags;
	VkRenderPass renderPass;
	uint32_t attachmentCount;
	const VkImageView* pAttachments;
	uint32_t width;
	uint32_t height;
	uint32_t layers;
};
struct VkRenderPassCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkRenderPassCreateFlags flags;
	uint32_t attachmentCount;
	const VkAttachmentDescription* pAttachments;
	uint32_t subpassCount;
	const VkSubpassDescription* pSubpasses;
	uint32_t dependencyCount;
	const VkSubpassDependency* pDependencies;
};
struct VkCommandPoolCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkCommandPoolCreateFlags flags;
	uint32_t queueFamilyIndex;
};
struct VkCommandBufferAllocateInfo {
	VkStructureType sType;
	const void* pNext;
	VkCommandPool commandPool;
	VkCommandBufferLevel level;
	uint32_t commandBufferCount;
};
struct VkCommandBufferBeginInfo {
	VkStructureType sType;
	const void* pNext;
	VkCommandBufferUsageFlags flags;
	const VkCommandBufferInheritanceInfo* pInheritanceInfo;
};
struct VkBufferCopy {
	VkDeviceSize srcOffset;
	VkDeviceSize dstOffset;
	VkDeviceSize size;
};
struct VkImageSubresourceLayers {
	VkImageAspectFlags aspectMask;
	uint32_t mipLevel;
	uint32_t baseArrayLayer;
	uint32_t layerCount;
};
struct VkImageCopy {
	VkImageSubresourceLayers srcSubresource;
	VkOffset3D srcOffset;
	VkImageSubresourceLayers dstSubresource;
	VkOffset3D dstOffset;
	VkExtent3D extent;
};
struct VkImageBlit {
	VkImageSubresourceLayers srcSubresource;
	VkOffset3D srcOffsets;
	VkImageSubresourceLayers dstSubresource;
	VkOffset3D dstOffsets;
};
struct VkBufferImageCopy {
	VkDeviceSize bufferOffset;
	uint32_t bufferRowLength;
	uint32_t bufferImageHeight;
	VkImageSubresourceLayers imageSubresource;
	VkOffset3D imageOffset;
	VkExtent3D imageExtent;
};
struct VkClearAttachment {
	VkImageAspectFlags aspectMask;
	uint32_t colorAttachment;
	VkClearValue clearValue;
};
struct VkClearRect {
	VkRect2D rect;
	uint32_t baseArrayLayer;
	uint32_t layerCount;
};
struct VkImageResolve {
	VkImageSubresourceLayers srcSubresource;
	VkOffset3D srcOffset;
	VkImageSubresourceLayers dstSubresource;
	VkOffset3D dstOffset;
	VkExtent3D extent;
};
struct VkRenderPassBeginInfo {
	VkStructureType sType;
	const void* pNext;
	VkRenderPass renderPass;
	VkFramebuffer framebuffer;
	VkRect2D renderArea;
	uint32_t clearValueCount;
	const VkClearValue* pClearValues;
};
struct VkSwapchainCreateInfoKHR {
	VkStructureType sType;
	const void* pNext;
	VkSwapchainCreateFlagsKHR flags;
	VkSurfaceKHR surface;
	uint32_t minImageCount;
	VkFormat imageFormat;
	VkColorSpaceKHR imageColorSpace;
	VkExtent2D imageExtent;
	uint32_t imageArrayLayers;
	VkImageUsageFlags imageUsage;
	VkSharingMode imageSharingMode;
	uint32_t queueFamilyIndexCount;
	const uint32_t* pQueueFamilyIndices;
	VkSurfaceTransformFlagBitsKHR preTransform;
	VkCompositeAlphaFlagBitsKHR compositeAlpha;
	VkPresentModeKHR presentMode;
	VkBool32 clipped;
	VkSwapchainKHR oldSwapchain;
};
struct VkPresentInfoKHR {
	VkStructureType sType;
	const void* pNext;
	uint32_t waitSemaphoreCount;
	const VkSemaphore* pWaitSemaphores;
	uint32_t swapchainCount;
	const VkSwapchainKHR* pSwapchains;
	const uint32_t* pImageIndices;
	VkResult* pResults;
};
struct VkAttachmentDescription2KHR {
	VkStructureType sType;
	const void* pNext;
	VkAttachmentDescriptionFlags flags;
	VkFormat format;
	VkSampleCountFlagBits samples;
	VkAttachmentLoadOp loadOp;
	VkAttachmentStoreOp storeOp;
	VkAttachmentLoadOp stencilLoadOp;
	VkAttachmentStoreOp stencilStoreOp;
	VkImageLayout initialLayout;
	VkImageLayout finalLayout;
};
struct VkSubpassDescription2KHR {
	VkStructureType sType;
	const void* pNext;
	VkSubpassDescriptionFlags flags;
	VkPipelineBindPoint pipelineBindPoint;
	uint32_t viewMask;
	uint32_t inputAttachmentCount;
	const VkAttachmentReference2KHR* pInputAttachments;
	uint32_t colorAttachmentCount;
	const VkAttachmentReference2KHR* pColorAttachments;
	const VkAttachmentReference2KHR* pResolveAttachments;
	const VkAttachmentReference2KHR* pDepthStencilAttachment;
	uint32_t preserveAttachmentCount;
	const uint32_t* pPreserveAttachments;
};
struct VkSubpassDependency2KHR {
	VkStructureType sType;
	const void* pNext;
	uint32_t srcSubpass;
	uint32_t dstSubpass;
	VkPipelineStageFlags srcStageMask;
	VkPipelineStageFlags dstStageMask;
	VkAccessFlags srcAccessMask;
	VkAccessFlags dstAccessMask;
	VkDependencyFlags dependencyFlags;
	int32_t viewOffset;
};
struct VkRenderPassCreateInfo2KHR {
	VkStructureType sType;
	const void* pNext;
	VkRenderPassCreateFlags flags;
	uint32_t attachmentCount;
	const VkAttachmentDescription2KHR* pAttachments;
	uint32_t subpassCount;
	const VkSubpassDescription2KHR* pSubpasses;
	uint32_t dependencyCount;
	const VkSubpassDependency2KHR* pDependencies;
	uint32_t correlatedViewMaskCount;
	const uint32_t* pCorrelatedViewMasks;
};
struct VkSubpassBeginInfoKHR {
	VkStructureType sType;
	const void* pNext;
	VkSubpassContents contents;
};
struct VkSubpassEndInfoKHR {
	VkStructureType sType;
	const void* pNext;
};
enum class UnusedMask : unsigned int;


} // namespace vk


#include <vkbinding/vk/types.inl>