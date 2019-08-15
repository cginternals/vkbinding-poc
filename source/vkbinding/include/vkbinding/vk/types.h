
#pragma once


#include <cstddef>
#include <cstdint>
#include <array>
#include <string>

#include <vulkan/vk_platform.h>

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


enum class VKextension : int;
enum class VKenum : unsigned int;
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
#define VK_HEADER_VERSION 117

#define VK_NULL_HANDLE 0
using VkBool32 = uint32_t;
using VkDeviceSize = uint64_t;
using VkDeviceAddress = uint64_t;
VK_DEFINE_HANDLE(VkInstance)
VK_DEFINE_HANDLE(VkPhysicalDevice)
VK_DEFINE_HANDLE(VkDevice)
VK_DEFINE_HANDLE(VkQueue)
VK_DEFINE_HANDLE(VkCommandBuffer)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkDeviceMemory)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkCommandPool)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkBuffer)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkBufferView)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkImage)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkImageView)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkShaderModule)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkPipeline)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkPipelineLayout)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkSampler)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkDescriptorSet)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkDescriptorSetLayout)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkDescriptorPool)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkFence)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkSemaphore)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkEvent)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkQueryPool)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkFramebuffer)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkRenderPass)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkPipelineCache)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkObjectTableNVX)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkIndirectCommandsLayoutNVX)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkDescriptorUpdateTemplate)
// Ignore VkDescriptorUpdateTemplateKHR for now
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkSamplerYcbcrConversion)
// Ignore VkSamplerYcbcrConversionKHR for now
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkValidationCacheEXT)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkAccelerationStructureNV)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkPerformanceConfigurationINTEL)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkDisplayKHR)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkDisplayModeKHR)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkSurfaceKHR)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkSwapchainKHR)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkDebugReportCallbackEXT)
VK_DEFINE_NON_DISPATCHABLE_HANDLE(VkDebugUtilsMessengerEXT)
enum class VkBlendOp : unsigned int;
enum class VkFramebufferCreateFlagBits : unsigned int;
enum class VkSamplerCreateFlagBits : unsigned int;
enum class VkPipelineCacheHeaderVersion : unsigned int;
enum class VkPipelineShaderStageCreateFlagBits : unsigned int;
enum class VkDescriptorSetLayoutCreateFlagBits : unsigned int;
enum class VkDeviceQueueCreateFlagBits : unsigned int;
enum class VkBufferCreateFlagBits : unsigned int;
enum class VkBufferUsageFlagBits : unsigned int;
enum class VkCommandPoolCreateFlagBits : unsigned int;
enum class VkDescriptorType : unsigned int;
enum class VkDynamicState : unsigned int;
enum class VkPolygonMode : unsigned int;
enum class VkFormat : unsigned int;
enum class VkFormatFeatureFlagBits : unsigned int;
enum class VkImageAspectFlagBits : unsigned int;
enum class VkImageCreateFlagBits : unsigned int;
enum class VkImageLayout : unsigned int;
enum class VkImageTiling : unsigned int;
enum class VkImageType : unsigned int;
enum class VkImageUsageFlagBits : unsigned int;
enum class VkImageViewCreateFlagBits : unsigned int;
enum class VkIndexType : unsigned int;
enum class VkMemoryHeapFlagBits : unsigned int;
enum class VkAccessFlagBits : unsigned int;
enum class VkMemoryPropertyFlagBits : unsigned int;
enum class VkPipelineBindPoint : unsigned int;
enum class VkPipelineCreateFlagBits : unsigned int;
enum class VkQueryType : unsigned int;
enum class VkQueueFlagBits : unsigned int;
enum class VkSubpassContents : unsigned int;
enum class VkResult : unsigned int;
enum class VkShaderStageFlagBits : unsigned int;
enum class VkStructureType : unsigned int;
enum class VkSamplerAddressMode : unsigned int;
enum class VkFilter : unsigned int;
enum class VkPipelineStageFlagBits : unsigned int;
enum class VkSampleCountFlagBits : unsigned int;
enum class VkDescriptorPoolCreateFlagBits : unsigned int;
enum class VkDependencyFlagBits : unsigned int;
enum class VkObjectType : unsigned int;
enum class VkConditionalRenderingFlagBitsEXT : unsigned int;
enum class VkIndirectCommandsLayoutUsageFlagBitsNVX : unsigned int;
enum class VkIndirectCommandsTokenTypeNVX : unsigned int;
enum class VkObjectEntryUsageFlagBitsNVX : unsigned int;
enum class VkObjectEntryTypeNVX : unsigned int;
enum class VkDescriptorUpdateTemplateType : unsigned int;
enum class VkViewportCoordinateSwizzleNV : unsigned int;
enum class VkDiscardRectangleModeEXT : unsigned int;
enum class VkSubpassDescriptionFlagBits : unsigned int;
enum class VkPointClippingBehavior : unsigned int;
enum class VkCoverageModulationModeNV : unsigned int;
enum class VkCoverageReductionModeNV : unsigned int;
enum class VkValidationCacheHeaderVersionEXT : unsigned int;
enum class VkShaderInfoTypeAMD : unsigned int;
enum class VkQueueGlobalPriorityEXT : unsigned int;
enum class VkTimeDomainEXT : unsigned int;
enum class VkConservativeRasterizationModeEXT : unsigned int;
enum class VkResolveModeFlagBitsKHR : unsigned int;
enum class VkGeometryFlagBitsNV : unsigned int;
enum class VkGeometryInstanceFlagBitsNV : unsigned int;
enum class VkBuildAccelerationStructureFlagBitsNV : unsigned int;
enum class VkCopyAccelerationStructureModeNV : unsigned int;
enum class VkGeometryTypeNV : unsigned int;
enum class VkRayTracingShaderGroupTypeNV : unsigned int;
enum class VkAccelerationStructureMemoryRequirementsTypeNV : unsigned int;
enum class VkMemoryOverallocationBehaviorAMD : unsigned int;
enum class VkScopeNV : unsigned int;
enum class VkComponentTypeNV : unsigned int;
enum class VkPipelineCreationFeedbackFlagBitsEXT : unsigned int;
enum class VkPerformanceConfigurationTypeINTEL : unsigned int;
enum class VkQueryPoolSamplingModeINTEL : unsigned int;
enum class VkPerformanceOverrideTypeINTEL : unsigned int;
enum class VkPerformanceParameterTypeINTEL : unsigned int;
enum class VkPerformanceValueTypeINTEL : unsigned int;
enum class VkLineRasterizationModeEXT : unsigned int;
enum class VkColorSpaceKHR : unsigned int;
enum class VkDisplayPlaneAlphaFlagBitsKHR : unsigned int;
enum class VkPresentModeKHR : unsigned int;
enum class VkDebugReportObjectTypeEXT : unsigned int;
enum class VkRasterizationOrderAMD : unsigned int;
enum class VkExternalMemoryHandleTypeFlagBitsNV : unsigned int;
enum class VkExternalMemoryFeatureFlagBitsNV : unsigned int;
enum class VkExternalMemoryHandleTypeFlagBits : unsigned int;
enum class VkExternalMemoryFeatureFlagBits : unsigned int;
enum class VkExternalSemaphoreHandleTypeFlagBits : unsigned int;
enum class VkExternalSemaphoreFeatureFlagBits : unsigned int;
enum class VkSemaphoreImportFlagBits : unsigned int;
enum class VkExternalFenceHandleTypeFlagBits : unsigned int;
enum class VkExternalFenceFeatureFlagBits : unsigned int;
enum class VkFenceImportFlagBits : unsigned int;
enum class VkSurfaceCounterFlagBitsEXT : unsigned int;
enum class VkDisplayPowerStateEXT : unsigned int;
enum class VkDeviceEventTypeEXT : unsigned int;
enum class VkDisplayEventTypeEXT : unsigned int;
enum class VkPeerMemoryFeatureFlagBits : unsigned int;
enum class VkMemoryAllocateFlagBits : unsigned int;
enum class VkDeviceGroupPresentModeFlagBitsKHR : unsigned int;
enum class VkSwapchainCreateFlagBitsKHR : unsigned int;
enum class VkSubgroupFeatureFlagBits : unsigned int;
enum class VkTessellationDomainOrigin : unsigned int;
enum class VkSamplerYcbcrModelConversion : unsigned int;
enum class VkSamplerYcbcrRange : unsigned int;
enum class VkChromaLocation : unsigned int;
enum class VkSamplerReductionModeEXT : unsigned int;
enum class VkBlendOverlapEXT : unsigned int;
enum class VkDebugUtilsMessageSeverityFlagBitsEXT : unsigned int;
enum class VkShaderFloatControlsIndependenceKHR : unsigned int;
enum class VkVendorId : unsigned int;
enum class VkDriverIdKHR : unsigned int;
enum class VkShadingRatePaletteEntryNV : unsigned int;
enum class VkCoarseSampleOrderTypeNV : unsigned int;
struct VkBaseOutStructure {
	VkStructureType sType;
	struct VkBaseOutStructure* pNext;
};
struct VkBaseInStructure {
	VkStructureType sType;
	const struct VkBaseInStructure* pNext;
};
struct VkOffset2D {
	int32_t x;
	int32_t y;
};
struct VkOffset3D {
	int32_t x;
	int32_t y;
	int32_t z;
};
struct VkExtent2D {
	uint32_t width;
	uint32_t height;
};
struct VkExtent3D {
	uint32_t width;
	uint32_t height;
	uint32_t depth;
};
struct VkViewport {
	float x;
	float y;
	float width;
	float height;
	float minDepth;
	float maxDepth;
};
struct VkRect2D {
	VkOffset2D offset;
	VkExtent2D extent;
};
struct VkClearRect {
	VkRect2D rect;
	uint32_t baseArrayLayer;
	uint32_t layerCount;
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
struct VkExtensionProperties {
	char extensionName;
	uint32_t specVersion;
};
struct VkLayerProperties {
	char layerName;
	uint32_t specVersion;
	uint32_t implementationVersion;
	char description;
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
struct VkAllocationCallbacks {
	void* pUserData;
	PFN_vkAllocationFunction pfnAllocation;
	PFN_vkReallocationFunction pfnReallocation;
	PFN_vkFreeFunction pfnFree;
	PFN_vkInternalAllocationNotification pfnInternalAllocation;
	PFN_vkInternalFreeNotification pfnInternalFree;
};
struct VkDeviceQueueCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkDeviceQueueCreateFlags flags;
	uint32_t queueFamilyIndex;
	uint32_t queueCount;
	const float* pQueuePriorities;
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
struct VkQueueFamilyProperties {
	VkQueueFlags queueFlags;
	uint32_t queueCount;
	uint32_t timestampValidBits;
	VkExtent3D minImageTransferGranularity;
};
struct VkPhysicalDeviceMemoryProperties {
	uint32_t memoryTypeCount;
	VkMemoryType memoryTypes;
	uint32_t memoryHeapCount;
	VkMemoryHeap memoryHeaps;
};
struct VkMemoryAllocateInfo {
	VkStructureType sType;
	const void* pNext;
	VkDeviceSize allocationSize;
	uint32_t memoryTypeIndex;
};
struct VkMemoryRequirements {
	VkDeviceSize size;
	VkDeviceSize alignment;
	uint32_t memoryTypeBits;
};
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
struct VkMemoryType {
	VkMemoryPropertyFlags propertyFlags;
	uint32_t heapIndex;
};
struct VkMemoryHeap {
	VkDeviceSize size;
	VkMemoryHeapFlags flags;
};
struct VkMappedMemoryRange {
	VkStructureType sType;
	const void* pNext;
	VkDeviceMemory memory;
	VkDeviceSize offset;
	VkDeviceSize size;
};
struct VkImageFormatProperties {
	VkExtent3D maxExtent;
	uint32_t maxMipLevels;
	uint32_t maxArrayLayers;
	VkSampleCountFlags sampleCounts;
	VkDeviceSize maxResourceSize;
};
struct VkDescriptorBufferInfo {
	VkBuffer buffer;
	VkDeviceSize offset;
	VkDeviceSize range;
};
struct VkDescriptorImageInfo {
	VkSampler sampler;
	VkImageView imageView;
	VkImageLayout imageLayout;
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
struct VkImageSubresource {
	VkImageAspectFlags aspectMask;
	uint32_t mipLevel;
	uint32_t arrayLayer;
};
struct VkImageSubresourceLayers {
	VkImageAspectFlags aspectMask;
	uint32_t mipLevel;
	uint32_t baseArrayLayer;
	uint32_t layerCount;
};
struct VkImageSubresourceRange {
	VkImageAspectFlags aspectMask;
	uint32_t baseMipLevel;
	uint32_t levelCount;
	uint32_t baseArrayLayer;
	uint32_t layerCount;
};
struct VkMemoryBarrier {
	VkStructureType sType;
	const void* pNext;
	VkAccessFlags srcAccessMask;
	VkAccessFlags dstAccessMask;
};
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
struct VkBufferCopy {
	VkDeviceSize srcOffset;
	VkDeviceSize dstOffset;
	VkDeviceSize size;
};
struct VkSparseMemoryBind {
	VkDeviceSize resourceOffset;
	VkDeviceSize size;
	VkDeviceMemory memory;
	VkDeviceSize memoryOffset;
	VkSparseMemoryBindFlags flags;
};
struct VkSparseImageMemoryBind {
	VkImageSubresource subresource;
	VkOffset3D offset;
	VkExtent3D extent;
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
struct VkSparseImageMemoryBindInfo {
	VkImage image;
	uint32_t bindCount;
	const VkSparseImageMemoryBind* pBinds;
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
struct VkImageResolve {
	VkImageSubresourceLayers srcSubresource;
	VkOffset3D srcOffset;
	VkImageSubresourceLayers dstSubresource;
	VkOffset3D dstOffset;
	VkExtent3D extent;
};
struct VkShaderModuleCreateInfo {
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
struct VkDescriptorSetLayoutCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkDescriptorSetLayoutCreateFlags flags;
	uint32_t bindingCount;
	const VkDescriptorSetLayoutBinding* pBindings;
};
struct VkDescriptorPoolSize {
	VkDescriptorType type;
	uint32_t descriptorCount;
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
struct VkComputePipelineCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkPipelineCreateFlags flags;
	VkPipelineShaderStageCreateInfo stage;
	VkPipelineLayout layout;
	VkPipeline basePipelineHandle;
	int32_t basePipelineIndex;
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
struct VkPipelineCacheCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkPipelineCacheCreateFlags flags;
	size_t initialDataSize;
	const void* pInitialData;
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
struct VkCommandBufferBeginInfo {
	VkStructureType sType;
	const void* pNext;
	VkCommandBufferUsageFlags flags;
	const VkCommandBufferInheritanceInfo* pInheritanceInfo;
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
struct VkClearAttachment {
	VkImageAspectFlags aspectMask;
	uint32_t colorAttachment;
	VkClearValue clearValue;
};
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
struct VkEventCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkEventCreateFlags flags;
};
struct VkFenceCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkFenceCreateFlags flags;
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
struct VkPhysicalDeviceSparseProperties {
	VkBool32 residencyStandard2DBlockShape;
	VkBool32 residencyStandard2DMultisampleBlockShape;
	VkBool32 residencyStandard3DBlockShape;
	VkBool32 residencyAlignedMipSize;
	VkBool32 residencyNonResidentStrict;
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
struct VkSemaphoreCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkSemaphoreCreateFlags flags;
};
struct VkQueryPoolCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkQueryPoolCreateFlags flags;
	VkQueryType queryType;
	uint32_t queryCount;
	VkQueryPipelineStatisticFlags pipelineStatistics;
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
struct VkDrawIndirectCommand {
	uint32_t vertexCount;
	uint32_t instanceCount;
	uint32_t firstVertex;
	uint32_t firstInstance;
};
struct VkDrawIndexedIndirectCommand {
	uint32_t indexCount;
	uint32_t instanceCount;
	uint32_t firstIndex;
	int32_t vertexOffset;
	uint32_t firstInstance;
};
struct VkDispatchIndirectCommand {
	uint32_t x;
	uint32_t y;
	uint32_t z;
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
struct VkDisplayPropertiesKHR {
	VkDisplayKHR display;
	const char* displayName;
	VkExtent2D physicalDimensions;
	VkExtent2D physicalResolution;
	VkSurfaceTransformFlagsKHR supportedTransforms;
	VkBool32 planeReorderPossible;
	VkBool32 persistentContent;
};
struct VkDisplayPlanePropertiesKHR {
	VkDisplayKHR currentDisplay;
	uint32_t currentStackIndex;
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
	VkStructureType sType;
	const void* pNext;
	VkRect2D srcRect;
	VkRect2D dstRect;
	VkBool32 persistent;
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
struct VkAndroidSurfaceCreateInfoKHR {
	VkStructureType sType;
	const void* pNext;
	VkAndroidSurfaceCreateFlagsKHR flags;
	struct ANativeWindow* window;
};
struct VkViSurfaceCreateInfoNN {
	VkStructureType sType;
	const void* pNext;
	VkViSurfaceCreateFlagsNN flags;
	void* window;
};
struct VkWaylandSurfaceCreateInfoKHR {
	VkStructureType sType;
	const void* pNext;
	VkWaylandSurfaceCreateFlagsKHR flags;
	struct wl_display* display;
	struct wl_surface* surface;
};
struct VkWin32SurfaceCreateInfoKHR {
	VkStructureType sType;
	const void* pNext;
	VkWin32SurfaceCreateFlagsKHR flags;
	HINSTANCE hinstance;
	HWND hwnd;
};
struct VkXlibSurfaceCreateInfoKHR {
	VkStructureType sType;
	const void* pNext;
	VkXlibSurfaceCreateFlagsKHR flags;
	Display* dpy;
	Window window;
};
struct VkXcbSurfaceCreateInfoKHR {
	VkStructureType sType;
	const void* pNext;
	VkXcbSurfaceCreateFlagsKHR flags;
	xcb_connection_t* connection;
	xcb_window_t window;
};
struct VkImagePipeSurfaceCreateInfoFUCHSIA {
	VkStructureType sType;
	const void* pNext;
	VkImagePipeSurfaceCreateFlagsFUCHSIA flags;
	zx_handle_t imagePipeHandle;
};
struct VkStreamDescriptorSurfaceCreateInfoGGP {
	VkStructureType sType;
	const void* pNext;
	VkStreamDescriptorSurfaceCreateFlagsGGP flags;
	GgpStreamDescriptor streamDescriptor;
};
struct VkSurfaceFormatKHR {
	VkFormat format;
	VkColorSpaceKHR colorSpace;
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
struct VkDebugReportCallbackCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkDebugReportFlagsEXT flags;
	PFN_vkDebugReportCallbackEXT pfnCallback;
	void* pUserData;
};
struct VkValidationFlagsEXT {
	VkStructureType sType;
	const void* pNext;
	uint32_t disabledValidationCheckCount;
	const VkValidationCheckEXT* pDisabledValidationChecks;
};
struct VkValidationFeaturesEXT {
	VkStructureType sType;
	const void* pNext;
	uint32_t enabledValidationFeatureCount;
	const VkValidationFeatureEnableEXT* pEnabledValidationFeatures;
	uint32_t disabledValidationFeatureCount;
	const VkValidationFeatureDisableEXT* pDisabledValidationFeatures;
};
struct VkPipelineRasterizationStateRasterizationOrderAMD {
	VkStructureType sType;
	const void* pNext;
	VkRasterizationOrderAMD rasterizationOrder;
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
	VkBool32 dedicatedAllocation;
};
struct VkDedicatedAllocationBufferCreateInfoNV {
	VkStructureType sType;
	const void* pNext;
	VkBool32 dedicatedAllocation;
};
struct VkDedicatedAllocationMemoryAllocateInfoNV {
	VkStructureType sType;
	const void* pNext;
	VkImage image;
	VkBuffer buffer;
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
	VkExternalMemoryHandleTypeFlagsNV handleTypes;
};
struct VkExportMemoryAllocateInfoNV {
	VkStructureType sType;
	const void* pNext;
	VkExternalMemoryHandleTypeFlagsNV handleTypes;
};
struct VkImportMemoryWin32HandleInfoNV {
	VkStructureType sType;
	const void* pNext;
	VkExternalMemoryHandleTypeFlagsNV handleType;
	HANDLE handle;
};
struct VkExportMemoryWin32HandleInfoNV {
	VkStructureType sType;
	const void* pNext;
	const SECURITY_ATTRIBUTES* pAttributes;
	DWORD dwAccess;
};
struct VkWin32KeyedMutexAcquireReleaseInfoNV {
	VkStructureType sType;
	const void* pNext;
	uint32_t acquireCount;
	const VkDeviceMemory* pAcquireSyncs;
	const uint64_t* pAcquireKeys;
	const uint32_t* pAcquireTimeoutMilliseconds;
	uint32_t releaseCount;
	const VkDeviceMemory* pReleaseSyncs;
	const uint64_t* pReleaseKeys;
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
struct VkPhysicalDeviceFeatures2 {
	VkStructureType sType;
	void* pNext;
	VkPhysicalDeviceFeatures features;
};
struct VkPhysicalDeviceFeatures2KHR {
	
};
struct VkPhysicalDeviceProperties2 {
	VkStructureType sType;
	void* pNext;
	VkPhysicalDeviceProperties properties;
};
struct VkPhysicalDeviceProperties2KHR {
	
};
struct VkFormatProperties2 {
	VkStructureType sType;
	void* pNext;
	VkFormatProperties formatProperties;
};
struct VkFormatProperties2KHR {
	
};
struct VkImageFormatProperties2 {
	VkStructureType sType;
	void* pNext;
	VkImageFormatProperties imageFormatProperties;
};
struct VkImageFormatProperties2KHR {
	
};
struct VkPhysicalDeviceImageFormatInfo2 {
	VkStructureType sType;
	const void* pNext;
	VkFormat format;
	VkImageType type;
	VkImageTiling tiling;
	VkImageUsageFlags usage;
	VkImageCreateFlags flags;
};
struct VkPhysicalDeviceImageFormatInfo2KHR {
	
};
struct VkQueueFamilyProperties2 {
	VkStructureType sType;
	void* pNext;
	VkQueueFamilyProperties queueFamilyProperties;
};
struct VkQueueFamilyProperties2KHR {
	
};
struct VkPhysicalDeviceMemoryProperties2 {
	VkStructureType sType;
	void* pNext;
	VkPhysicalDeviceMemoryProperties memoryProperties;
};
struct VkPhysicalDeviceMemoryProperties2KHR {
	
};
struct VkSparseImageFormatProperties2 {
	VkStructureType sType;
	void* pNext;
	VkSparseImageFormatProperties properties;
};
struct VkSparseImageFormatProperties2KHR {
	
};
struct VkPhysicalDeviceSparseImageFormatInfo2 {
	VkStructureType sType;
	const void* pNext;
	VkFormat format;
	VkImageType type;
	VkSampleCountFlagBits samples;
	VkImageUsageFlags usage;
	VkImageTiling tiling;
};
struct VkPhysicalDeviceSparseImageFormatInfo2KHR {
	
};
struct VkPhysicalDevicePushDescriptorPropertiesKHR {
	VkStructureType sType;
	void* pNext;
	uint32_t maxPushDescriptors;
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
	VkDriverIdKHR driverID;
	char driverName;
	char driverInfo;
	VkConformanceVersionKHR conformanceVersion;
};
struct VkPresentRegionsKHR {
	VkStructureType sType;
	const void* pNext;
	uint32_t swapchainCount;
	const VkPresentRegionKHR* pRegions;
};
struct VkPresentRegionKHR {
	uint32_t rectangleCount;
	const VkRectLayerKHR* pRectangles;
};
struct VkRectLayerKHR {
	VkOffset2D offset;
	VkExtent2D extent;
	uint32_t layer;
};
struct VkPhysicalDeviceVariablePointersFeatures {
	VkStructureType sType;
	void* pNext;
	VkBool32 variablePointersStorageBuffer;
	VkBool32 variablePointers;
};
struct VkPhysicalDeviceVariablePointersFeaturesKHR {
	
};
struct VkPhysicalDeviceVariablePointerFeaturesKHR {
	
};
struct VkPhysicalDeviceVariablePointerFeatures {
	
};
struct VkExternalMemoryProperties {
	VkExternalMemoryFeatureFlags externalMemoryFeatures;
	VkExternalMemoryHandleTypeFlags exportFromImportedHandleTypes;
	VkExternalMemoryHandleTypeFlags compatibleHandleTypes;
};
struct VkExternalMemoryPropertiesKHR {
	
};
struct VkPhysicalDeviceExternalImageFormatInfo {
	VkStructureType sType;
	const void* pNext;
	VkExternalMemoryHandleTypeFlagBits handleType;
};
struct VkPhysicalDeviceExternalImageFormatInfoKHR {
	
};
struct VkExternalImageFormatProperties {
	VkStructureType sType;
	void* pNext;
	VkExternalMemoryProperties externalMemoryProperties;
};
struct VkExternalImageFormatPropertiesKHR {
	
};
struct VkPhysicalDeviceExternalBufferInfo {
	VkStructureType sType;
	const void* pNext;
	VkBufferCreateFlags flags;
	VkBufferUsageFlags usage;
	VkExternalMemoryHandleTypeFlagBits handleType;
};
struct VkPhysicalDeviceExternalBufferInfoKHR {
	
};
struct VkExternalBufferProperties {
	VkStructureType sType;
	void* pNext;
	VkExternalMemoryProperties externalMemoryProperties;
};
struct VkExternalBufferPropertiesKHR {
	
};
struct VkPhysicalDeviceIDProperties {
	VkStructureType sType;
	void* pNext;
	uint8_t deviceUUID;
	uint8_t driverUUID;
	uint8_t deviceLUID;
	uint32_t deviceNodeMask;
	VkBool32 deviceLUIDValid;
};
struct VkPhysicalDeviceIDPropertiesKHR {
	
};
struct VkExternalMemoryImageCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkExternalMemoryHandleTypeFlags handleTypes;
};
struct VkExternalMemoryImageCreateInfoKHR {
	
};
struct VkExternalMemoryBufferCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkExternalMemoryHandleTypeFlags handleTypes;
};
struct VkExternalMemoryBufferCreateInfoKHR {
	
};
struct VkExportMemoryAllocateInfo {
	VkStructureType sType;
	const void* pNext;
	VkExternalMemoryHandleTypeFlags handleTypes;
};
struct VkExportMemoryAllocateInfoKHR {
	
};
struct VkImportMemoryWin32HandleInfoKHR {
	VkStructureType sType;
	const void* pNext;
	VkExternalMemoryHandleTypeFlagBits handleType;
	HANDLE handle;
	LPCWSTR name;
};
struct VkExportMemoryWin32HandleInfoKHR {
	VkStructureType sType;
	const void* pNext;
	const SECURITY_ATTRIBUTES* pAttributes;
	DWORD dwAccess;
	LPCWSTR name;
};
struct VkMemoryWin32HandlePropertiesKHR {
	VkStructureType sType;
	void* pNext;
	uint32_t memoryTypeBits;
};
struct VkMemoryGetWin32HandleInfoKHR {
	VkStructureType sType;
	const void* pNext;
	VkDeviceMemory memory;
	VkExternalMemoryHandleTypeFlagBits handleType;
};
struct VkImportMemoryFdInfoKHR {
	VkStructureType sType;
	const void* pNext;
	VkExternalMemoryHandleTypeFlagBits handleType;
	int fd;
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
struct VkWin32KeyedMutexAcquireReleaseInfoKHR {
	VkStructureType sType;
	const void* pNext;
	uint32_t acquireCount;
	const VkDeviceMemory* pAcquireSyncs;
	const uint64_t* pAcquireKeys;
	const uint32_t* pAcquireTimeouts;
	uint32_t releaseCount;
	const VkDeviceMemory* pReleaseSyncs;
	const uint64_t* pReleaseKeys;
};
struct VkPhysicalDeviceExternalSemaphoreInfo {
	VkStructureType sType;
	const void* pNext;
	VkExternalSemaphoreHandleTypeFlagBits handleType;
};
struct VkPhysicalDeviceExternalSemaphoreInfoKHR {
	
};
struct VkExternalSemaphoreProperties {
	VkStructureType sType;
	void* pNext;
	VkExternalSemaphoreHandleTypeFlags exportFromImportedHandleTypes;
	VkExternalSemaphoreHandleTypeFlags compatibleHandleTypes;
	VkExternalSemaphoreFeatureFlags externalSemaphoreFeatures;
};
struct VkExternalSemaphorePropertiesKHR {
	
};
struct VkExportSemaphoreCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkExternalSemaphoreHandleTypeFlags handleTypes;
};
struct VkExportSemaphoreCreateInfoKHR {
	
};
struct VkImportSemaphoreWin32HandleInfoKHR {
	VkStructureType sType;
	const void* pNext;
	VkSemaphore semaphore;
	VkSemaphoreImportFlags flags;
	VkExternalSemaphoreHandleTypeFlagBits handleType;
	HANDLE handle;
	LPCWSTR name;
};
struct VkExportSemaphoreWin32HandleInfoKHR {
	VkStructureType sType;
	const void* pNext;
	const SECURITY_ATTRIBUTES* pAttributes;
	DWORD dwAccess;
	LPCWSTR name;
};
struct VkD3D12FenceSubmitInfoKHR {
	VkStructureType sType;
	const void* pNext;
	uint32_t waitSemaphoreValuesCount;
	const uint64_t* pWaitSemaphoreValues;
	uint32_t signalSemaphoreValuesCount;
	const uint64_t* pSignalSemaphoreValues;
};
struct VkSemaphoreGetWin32HandleInfoKHR {
	VkStructureType sType;
	const void* pNext;
	VkSemaphore semaphore;
	VkExternalSemaphoreHandleTypeFlagBits handleType;
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
struct VkPhysicalDeviceExternalFenceInfo {
	VkStructureType sType;
	const void* pNext;
	VkExternalFenceHandleTypeFlagBits handleType;
};
struct VkPhysicalDeviceExternalFenceInfoKHR {
	
};
struct VkExternalFenceProperties {
	VkStructureType sType;
	void* pNext;
	VkExternalFenceHandleTypeFlags exportFromImportedHandleTypes;
	VkExternalFenceHandleTypeFlags compatibleHandleTypes;
	VkExternalFenceFeatureFlags externalFenceFeatures;
};
struct VkExternalFencePropertiesKHR {
	
};
struct VkExportFenceCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkExternalFenceHandleTypeFlags handleTypes;
};
struct VkExportFenceCreateInfoKHR {
	
};
struct VkImportFenceWin32HandleInfoKHR {
	VkStructureType sType;
	const void* pNext;
	VkFence fence;
	VkFenceImportFlags flags;
	VkExternalFenceHandleTypeFlagBits handleType;
	HANDLE handle;
	LPCWSTR name;
};
struct VkExportFenceWin32HandleInfoKHR {
	VkStructureType sType;
	const void* pNext;
	const SECURITY_ATTRIBUTES* pAttributes;
	DWORD dwAccess;
	LPCWSTR name;
};
struct VkFenceGetWin32HandleInfoKHR {
	VkStructureType sType;
	const void* pNext;
	VkFence fence;
	VkExternalFenceHandleTypeFlagBits handleType;
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
struct VkPhysicalDeviceMultiviewFeatures {
	VkStructureType sType;
	void* pNext;
	VkBool32 multiview;
	VkBool32 multiviewGeometryShader;
	VkBool32 multiviewTessellationShader;
};
struct VkPhysicalDeviceMultiviewFeaturesKHR {
	
};
struct VkPhysicalDeviceMultiviewProperties {
	VkStructureType sType;
	void* pNext;
	uint32_t maxMultiviewViewCount;
	uint32_t maxMultiviewInstanceIndex;
};
struct VkPhysicalDeviceMultiviewPropertiesKHR {
	
};
struct VkRenderPassMultiviewCreateInfo {
	VkStructureType sType;
	const void* pNext;
	uint32_t subpassCount;
	const uint32_t* pViewMasks;
	uint32_t dependencyCount;
	const int32_t* pViewOffsets;
	uint32_t correlationMaskCount;
	const uint32_t* pCorrelationMasks;
};
struct VkRenderPassMultiviewCreateInfoKHR {
	
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
	VkSurfaceCounterFlagsEXT surfaceCounters;
};
struct VkPhysicalDeviceGroupProperties {
	VkStructureType sType;
	void* pNext;
	uint32_t physicalDeviceCount;
	VkPhysicalDevice physicalDevices;
	VkBool32 subsetAllocation;
};
struct VkPhysicalDeviceGroupPropertiesKHR {
	
};
struct VkMemoryAllocateFlagsInfo {
	VkStructureType sType;
	const void* pNext;
	VkMemoryAllocateFlags flags;
	uint32_t deviceMask;
};
struct VkMemoryAllocateFlagsInfoKHR {
	
};
struct VkBindBufferMemoryInfo {
	VkStructureType sType;
	const void* pNext;
	VkBuffer buffer;
	VkDeviceMemory memory;
	VkDeviceSize memoryOffset;
};
struct VkBindBufferMemoryInfoKHR {
	
};
struct VkBindBufferMemoryDeviceGroupInfo {
	VkStructureType sType;
	const void* pNext;
	uint32_t deviceIndexCount;
	const uint32_t* pDeviceIndices;
};
struct VkBindBufferMemoryDeviceGroupInfoKHR {
	
};
struct VkBindImageMemoryInfo {
	VkStructureType sType;
	const void* pNext;
	VkImage image;
	VkDeviceMemory memory;
	VkDeviceSize memoryOffset;
};
struct VkBindImageMemoryInfoKHR {
	
};
struct VkBindImageMemoryDeviceGroupInfo {
	VkStructureType sType;
	const void* pNext;
	uint32_t deviceIndexCount;
	const uint32_t* pDeviceIndices;
	uint32_t splitInstanceBindRegionCount;
	const VkRect2D* pSplitInstanceBindRegions;
};
struct VkBindImageMemoryDeviceGroupInfoKHR {
	
};
struct VkDeviceGroupRenderPassBeginInfo {
	VkStructureType sType;
	const void* pNext;
	uint32_t deviceMask;
	uint32_t deviceRenderAreaCount;
	const VkRect2D* pDeviceRenderAreas;
};
struct VkDeviceGroupRenderPassBeginInfoKHR {
	
};
struct VkDeviceGroupCommandBufferBeginInfo {
	VkStructureType sType;
	const void* pNext;
	uint32_t deviceMask;
};
struct VkDeviceGroupCommandBufferBeginInfoKHR {
	
};
struct VkDeviceGroupSubmitInfo {
	VkStructureType sType;
	const void* pNext;
	uint32_t waitSemaphoreCount;
	const uint32_t* pWaitSemaphoreDeviceIndices;
	uint32_t commandBufferCount;
	const uint32_t* pCommandBufferDeviceMasks;
	uint32_t signalSemaphoreCount;
	const uint32_t* pSignalSemaphoreDeviceIndices;
};
struct VkDeviceGroupSubmitInfoKHR {
	
};
struct VkDeviceGroupBindSparseInfo {
	VkStructureType sType;
	const void* pNext;
	uint32_t resourceDeviceIndex;
	uint32_t memoryDeviceIndex;
};
struct VkDeviceGroupBindSparseInfoKHR {
	
};
struct VkDeviceGroupPresentCapabilitiesKHR {
	VkStructureType sType;
	const void* pNext;
	uint32_t presentMask;
	VkDeviceGroupPresentModeFlagsKHR modes;
};
struct VkImageSwapchainCreateInfoKHR {
	VkStructureType sType;
	const void* pNext;
	VkSwapchainKHR swapchain;
};
struct VkBindImageMemorySwapchainInfoKHR {
	VkStructureType sType;
	const void* pNext;
	VkSwapchainKHR swapchain;
	uint32_t imageIndex;
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
struct VkDeviceGroupPresentInfoKHR {
	VkStructureType sType;
	const void* pNext;
	uint32_t swapchainCount;
	const uint32_t* pDeviceMasks;
	VkDeviceGroupPresentModeFlagBitsKHR mode;
};
struct VkDeviceGroupDeviceCreateInfo {
	VkStructureType sType;
	const void* pNext;
	uint32_t physicalDeviceCount;
	const VkPhysicalDevice* pPhysicalDevices;
};
struct VkDeviceGroupDeviceCreateInfoKHR {
	
};
struct VkDeviceGroupSwapchainCreateInfoKHR {
	VkStructureType sType;
	const void* pNext;
	VkDeviceGroupPresentModeFlagsKHR modes;
};
struct VkDescriptorUpdateTemplateEntry {
	uint32_t dstBinding;
	uint32_t dstArrayElement;
	uint32_t descriptorCount;
	VkDescriptorType descriptorType;
	size_t offset;
	size_t stride;
};
struct VkDescriptorUpdateTemplateEntryKHR {
	
};
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
struct VkDescriptorUpdateTemplateCreateInfoKHR {
	
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
struct VkDisplayNativeHdrSurfaceCapabilitiesAMD {
	VkStructureType sType;
	void* pNext;
	VkBool32 localDimmingSupport;
};
struct VkSwapchainDisplayNativeHdrCreateInfoAMD {
	VkStructureType sType;
	const void* pNext;
	VkBool32 localDimmingEnable;
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
	uint32_t swapchainCount;
	const VkPresentTimeGOOGLE* pTimes;
};
struct VkPresentTimeGOOGLE {
	uint32_t presentID;
	uint64_t desiredPresentTime;
};
struct VkIOSSurfaceCreateInfoMVK {
	VkStructureType sType;
	const void* pNext;
	VkIOSSurfaceCreateFlagsMVK flags;
	const void* pView;
};
struct VkMacOSSurfaceCreateInfoMVK {
	VkStructureType sType;
	const void* pNext;
	VkMacOSSurfaceCreateFlagsMVK flags;
	const void* pView;
};
struct VkMetalSurfaceCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkMetalSurfaceCreateFlagsEXT flags;
	const CAMetalLayer* pLayer;
};
struct VkViewportWScalingNV {
	float xcoeff;
	float ycoeff;
};
struct VkPipelineViewportWScalingStateCreateInfoNV {
	VkStructureType sType;
	const void* pNext;
	VkBool32 viewportWScalingEnable;
	uint32_t viewportCount;
	const VkViewportWScalingNV* pViewportWScalings;
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
	VkPipelineViewportSwizzleStateCreateFlagsNV flags;
	uint32_t viewportCount;
	const VkViewportSwizzleNV* pViewportSwizzles;
};
struct VkPhysicalDeviceDiscardRectanglePropertiesEXT {
	VkStructureType sType;
	void* pNext;
	uint32_t maxDiscardRectangles;
};
struct VkPipelineDiscardRectangleStateCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkPipelineDiscardRectangleStateCreateFlagsEXT flags;
	VkDiscardRectangleModeEXT discardRectangleMode;
	uint32_t discardRectangleCount;
	const VkRect2D* pDiscardRectangles;
};
struct VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX {
	VkStructureType sType;
	void* pNext;
	VkBool32 perViewPositionAllComponents;
};
struct VkInputAttachmentAspectReference {
	uint32_t subpass;
	uint32_t inputAttachmentIndex;
	VkImageAspectFlags aspectMask;
};
struct VkInputAttachmentAspectReferenceKHR {
	
};
struct VkRenderPassInputAttachmentAspectCreateInfo {
	VkStructureType sType;
	const void* pNext;
	uint32_t aspectReferenceCount;
	const VkInputAttachmentAspectReference* pAspectReferences;
};
struct VkRenderPassInputAttachmentAspectCreateInfoKHR {
	
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
struct VkSharedPresentSurfaceCapabilitiesKHR {
	VkStructureType sType;
	void* pNext;
	VkImageUsageFlags sharedPresentSupportedUsageFlags;
};
struct VkPhysicalDevice16BitStorageFeatures {
	VkStructureType sType;
	void* pNext;
	VkBool32 storageBuffer16BitAccess;
	VkBool32 uniformAndStorageBuffer16BitAccess;
	VkBool32 storagePushConstant16;
	VkBool32 storageInputOutput16;
};
struct VkPhysicalDevice16BitStorageFeaturesKHR {
	
};
struct VkPhysicalDeviceSubgroupProperties {
	VkStructureType sType;
	void* pNext;
	uint32_t subgroupSize;
	VkShaderStageFlags supportedStages;
	VkSubgroupFeatureFlags supportedOperations;
	VkBool32 quadOperationsInAllStages;
};
struct VkBufferMemoryRequirementsInfo2 {
	VkStructureType sType;
	const void* pNext;
	VkBuffer buffer;
};
struct VkBufferMemoryRequirementsInfo2KHR {
	
};
struct VkImageMemoryRequirementsInfo2 {
	VkStructureType sType;
	const void* pNext;
	VkImage image;
};
struct VkImageMemoryRequirementsInfo2KHR {
	
};
struct VkImageSparseMemoryRequirementsInfo2 {
	VkStructureType sType;
	const void* pNext;
	VkImage image;
};
struct VkImageSparseMemoryRequirementsInfo2KHR {
	
};
struct VkMemoryRequirements2 {
	VkStructureType sType;
	void* pNext;
	VkMemoryRequirements memoryRequirements;
};
struct VkMemoryRequirements2KHR {
	
};
struct VkSparseImageMemoryRequirements2 {
	VkStructureType sType;
	void* pNext;
	VkSparseImageMemoryRequirements memoryRequirements;
};
struct VkSparseImageMemoryRequirements2KHR {
	
};
struct VkPhysicalDevicePointClippingProperties {
	VkStructureType sType;
	void* pNext;
	VkPointClippingBehavior pointClippingBehavior;
};
struct VkPhysicalDevicePointClippingPropertiesKHR {
	
};
struct VkMemoryDedicatedRequirements {
	VkStructureType sType;
	void* pNext;
	VkBool32 prefersDedicatedAllocation;
	VkBool32 requiresDedicatedAllocation;
};
struct VkMemoryDedicatedRequirementsKHR {
	
};
struct VkMemoryDedicatedAllocateInfo {
	VkStructureType sType;
	const void* pNext;
	VkImage image;
	VkBuffer buffer;
};
struct VkMemoryDedicatedAllocateInfoKHR {
	
};
struct VkImageViewUsageCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkImageUsageFlags usage;
};
struct VkImageViewUsageCreateInfoKHR {
	
};
struct VkPipelineTessellationDomainOriginStateCreateInfo {
	VkStructureType sType;
	const void* pNext;
	VkTessellationDomainOrigin domainOrigin;
};
struct VkPipelineTessellationDomainOriginStateCreateInfoKHR {
	
};
struct VkSamplerYcbcrConversionInfo {
	VkStructureType sType;
	const void* pNext;
	VkSamplerYcbcrConversion conversion;
};
struct VkSamplerYcbcrConversionInfoKHR {
	
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
struct VkSamplerYcbcrConversionCreateInfoKHR {
	
};
struct VkBindImagePlaneMemoryInfo {
	VkStructureType sType;
	const void* pNext;
	VkImageAspectFlagBits planeAspect;
};
struct VkBindImagePlaneMemoryInfoKHR {
	
};
struct VkImagePlaneMemoryRequirementsInfo {
	VkStructureType sType;
	const void* pNext;
	VkImageAspectFlagBits planeAspect;
};
struct VkImagePlaneMemoryRequirementsInfoKHR {
	
};
struct VkPhysicalDeviceSamplerYcbcrConversionFeatures {
	VkStructureType sType;
	void* pNext;
	VkBool32 samplerYcbcrConversion;
};
struct VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR {
	
};
struct VkSamplerYcbcrConversionImageFormatProperties {
	VkStructureType sType;
	void* pNext;
	uint32_t combinedImageSamplerDescriptorCount;
};
struct VkSamplerYcbcrConversionImageFormatPropertiesKHR {
	
};
struct VkTextureLODGatherFormatPropertiesAMD {
	VkStructureType sType;
	void* pNext;
	VkBool32 supportsTextureGatherLODBiasAMD;
};
struct VkConditionalRenderingBeginInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkBuffer buffer;
	VkDeviceSize offset;
	VkConditionalRenderingFlagsEXT flags;
};
struct VkProtectedSubmitInfo {
	VkStructureType sType;
	const void* pNext;
	VkBool32 protectedSubmit;
};
struct VkPhysicalDeviceProtectedMemoryFeatures {
	VkStructureType sType;
	void* pNext;
	VkBool32 protectedMemory;
};
struct VkPhysicalDeviceProtectedMemoryProperties {
	VkStructureType sType;
	void* pNext;
	VkBool32 protectedNoFault;
};
struct VkDeviceQueueInfo2 {
	VkStructureType sType;
	const void* pNext;
	VkDeviceQueueCreateFlags flags;
	uint32_t queueFamilyIndex;
	uint32_t queueIndex;
};
struct VkPipelineCoverageToColorStateCreateInfoNV {
	VkStructureType sType;
	const void* pNext;
	VkPipelineCoverageToColorStateCreateFlagsNV flags;
	VkBool32 coverageToColorEnable;
	uint32_t coverageToColorLocation;
};
struct VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT {
	VkStructureType sType;
	void* pNext;
	VkBool32 filterMinmaxSingleComponentFormats;
	VkBool32 filterMinmaxImageComponentMapping;
};
struct VkSampleLocationEXT {
	float x;
	float y;
};
struct VkSampleLocationsInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkSampleCountFlagBits sampleLocationsPerPixel;
	VkExtent2D sampleLocationGridSize;
	uint32_t sampleLocationsCount;
	const VkSampleLocationEXT* pSampleLocations;
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
	uint32_t attachmentInitialSampleLocationsCount;
	const VkAttachmentSampleLocationsEXT* pAttachmentInitialSampleLocations;
	uint32_t postSubpassSampleLocationsCount;
	const VkSubpassSampleLocationsEXT* pPostSubpassSampleLocations;
};
struct VkPipelineSampleLocationsStateCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkBool32 sampleLocationsEnable;
	VkSampleLocationsInfoEXT sampleLocationsInfo;
};
struct VkPhysicalDeviceSampleLocationsPropertiesEXT {
	VkStructureType sType;
	void* pNext;
	VkSampleCountFlags sampleLocationSampleCounts;
	VkExtent2D maxSampleLocationGridSize;
	float sampleLocationCoordinateRange;
	uint32_t sampleLocationSubPixelBits;
	VkBool32 variableSampleLocations;
};
struct VkMultisamplePropertiesEXT {
	VkStructureType sType;
	void* pNext;
	VkExtent2D maxSampleLocationGridSize;
};
struct VkSamplerReductionModeCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkSamplerReductionModeEXT reductionMode;
};
struct VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT {
	VkStructureType sType;
	void* pNext;
	VkBool32 advancedBlendCoherentOperations;
};
struct VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT {
	VkStructureType sType;
	void* pNext;
	uint32_t advancedBlendMaxColorAttachments;
	VkBool32 advancedBlendIndependentBlend;
	VkBool32 advancedBlendNonPremultipliedSrcColor;
	VkBool32 advancedBlendNonPremultipliedDstColor;
	VkBool32 advancedBlendCorrelatedOverlap;
	VkBool32 advancedBlendAllOperations;
};
struct VkPipelineColorBlendAdvancedStateCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkBool32 srcPremultiplied;
	VkBool32 dstPremultiplied;
	VkBlendOverlapEXT blendOverlap;
};
struct VkPhysicalDeviceInlineUniformBlockFeaturesEXT {
	VkStructureType sType;
	void* pNext;
	VkBool32 inlineUniformBlock;
	VkBool32 descriptorBindingInlineUniformBlockUpdateAfterBind;
};
struct VkPhysicalDeviceInlineUniformBlockPropertiesEXT {
	VkStructureType sType;
	void* pNext;
	uint32_t maxInlineUniformBlockSize;
	uint32_t maxPerStageDescriptorInlineUniformBlocks;
	uint32_t maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks;
	uint32_t maxDescriptorSetInlineUniformBlocks;
	uint32_t maxDescriptorSetUpdateAfterBindInlineUniformBlocks;
};
struct VkWriteDescriptorSetInlineUniformBlockEXT {
	VkStructureType sType;
	const void* pNext;
	uint32_t dataSize;
	const void* pData;
};
struct VkDescriptorPoolInlineUniformBlockCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	uint32_t maxInlineUniformBlockBindings;
};
struct VkPipelineCoverageModulationStateCreateInfoNV {
	VkStructureType sType;
	const void* pNext;
	VkPipelineCoverageModulationStateCreateFlagsNV flags;
	VkCoverageModulationModeNV coverageModulationMode;
	VkBool32 coverageModulationTableEnable;
	uint32_t coverageModulationTableCount;
	const float* pCoverageModulationTable;
};
struct VkImageFormatListCreateInfoKHR {
	VkStructureType sType;
	const void* pNext;
	uint32_t viewFormatCount;
	const VkFormat* pViewFormats;
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
	VkValidationCacheEXT validationCache;
};
struct VkPhysicalDeviceMaintenance3Properties {
	VkStructureType sType;
	void* pNext;
	uint32_t maxPerSetDescriptors;
	VkDeviceSize maxMemoryAllocationSize;
};
struct VkPhysicalDeviceMaintenance3PropertiesKHR {
	
};
struct VkDescriptorSetLayoutSupport {
	VkStructureType sType;
	void* pNext;
	VkBool32 supported;
};
struct VkDescriptorSetLayoutSupportKHR {
	
};
struct VkPhysicalDeviceShaderDrawParametersFeatures {
	VkStructureType sType;
	void* pNext;
	VkBool32 shaderDrawParameters;
};
struct VkPhysicalDeviceShaderDrawParameterFeatures {
	
};
struct VkPhysicalDeviceShaderFloat16Int8FeaturesKHR {
	VkStructureType sType;
	void* pNext;
	VkBool32 shaderFloat16;
	VkBool32 shaderInt8;
};
struct VkPhysicalDeviceFloat16Int8FeaturesKHR {
	
};
struct VkPhysicalDeviceFloatControlsPropertiesKHR {
	VkStructureType sType;
	void* pNext;
	VkShaderFloatControlsIndependenceKHR denormBehaviorIndependence;
	VkShaderFloatControlsIndependenceKHR roundingModeIndependence;
	VkBool32 shaderSignedZeroInfNanPreserveFloat16;
	VkBool32 shaderSignedZeroInfNanPreserveFloat32;
	VkBool32 shaderSignedZeroInfNanPreserveFloat64;
	VkBool32 shaderDenormPreserveFloat16;
	VkBool32 shaderDenormPreserveFloat32;
	VkBool32 shaderDenormPreserveFloat64;
	VkBool32 shaderDenormFlushToZeroFloat16;
	VkBool32 shaderDenormFlushToZeroFloat32;
	VkBool32 shaderDenormFlushToZeroFloat64;
	VkBool32 shaderRoundingModeRTEFloat16;
	VkBool32 shaderRoundingModeRTEFloat32;
	VkBool32 shaderRoundingModeRTEFloat64;
	VkBool32 shaderRoundingModeRTZFloat16;
	VkBool32 shaderRoundingModeRTZFloat32;
	VkBool32 shaderRoundingModeRTZFloat64;
};
struct VkPhysicalDeviceHostQueryResetFeaturesEXT {
	VkStructureType sType;
	void* pNext;
	VkBool32 hostQueryReset;
};
struct VkNativeBufferUsage2ANDROID {
	uint64_t consumer;
	uint64_t producer;
};
struct VkNativeBufferANDROID {
	VkStructureType sType;
	const void* pNext;
	const void* handle;
	int stride;
	int format;
	int usage;
	VkNativeBufferUsage2ANDROID usage2;
};
struct VkSwapchainImageCreateInfoANDROID {
	VkStructureType sType;
	const void* pNext;
	VkSwapchainImageUsageFlagsANDROID usage;
};
struct VkPhysicalDevicePresentationPropertiesANDROID {
	VkStructureType sType;
	const void* pNext;
	VkBool32 sharedImage;
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
struct VkDeviceQueueGlobalPriorityCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkQueueGlobalPriorityEXT globalPriority;
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
struct VkDebugUtilsMessengerCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkDebugUtilsMessengerCreateFlagsEXT flags;
	VkDebugUtilsMessageSeverityFlagsEXT messageSeverity;
	VkDebugUtilsMessageTypeFlagsEXT messageType;
	PFN_vkDebugUtilsMessengerCallbackEXT pfnUserCallback;
	void* pUserData;
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
struct VkImportMemoryHostPointerInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkExternalMemoryHandleTypeFlagBits handleType;
	void* pHostPointer;
};
struct VkMemoryHostPointerPropertiesEXT {
	VkStructureType sType;
	void* pNext;
	uint32_t memoryTypeBits;
};
struct VkPhysicalDeviceExternalMemoryHostPropertiesEXT {
	VkStructureType sType;
	void* pNext;
	VkDeviceSize minImportedHostPointerAlignment;
};
struct VkPhysicalDeviceConservativeRasterizationPropertiesEXT {
	VkStructureType sType;
	void* pNext;
	float primitiveOverestimationSize;
	float maxExtraPrimitiveOverestimationSize;
	float extraPrimitiveOverestimationSizeGranularity;
	VkBool32 primitiveUnderestimation;
	VkBool32 conservativePointAndLineRasterization;
	VkBool32 degenerateTrianglesRasterized;
	VkBool32 degenerateLinesRasterized;
	VkBool32 fullyCoveredFragmentShaderInputVariable;
	VkBool32 conservativeRasterizationPostDepthCoverage;
};
struct VkCalibratedTimestampInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkTimeDomainEXT timeDomain;
};
struct VkPhysicalDeviceShaderCorePropertiesAMD {
	VkStructureType sType;
	void* pNext;
	uint32_t shaderEngineCount;
	uint32_t shaderArraysPerEngineCount;
	uint32_t computeUnitsPerShaderArray;
	uint32_t simdPerComputeUnit;
	uint32_t wavefrontsPerSimd;
	uint32_t wavefrontSize;
	uint32_t sgprsPerSimd;
	uint32_t minSgprAllocation;
	uint32_t maxSgprAllocation;
	uint32_t sgprAllocationGranularity;
	uint32_t vgprsPerSimd;
	uint32_t minVgprAllocation;
	uint32_t maxVgprAllocation;
	uint32_t vgprAllocationGranularity;
};
struct VkPipelineRasterizationConservativeStateCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkPipelineRasterizationConservativeStateCreateFlagsEXT flags;
	VkConservativeRasterizationModeEXT conservativeRasterizationMode;
	float extraPrimitiveOverestimationSize;
};
struct VkPhysicalDeviceDescriptorIndexingFeaturesEXT {
	VkStructureType sType;
	void* pNext;
	VkBool32 shaderInputAttachmentArrayDynamicIndexing;
	VkBool32 shaderUniformTexelBufferArrayDynamicIndexing;
	VkBool32 shaderStorageTexelBufferArrayDynamicIndexing;
	VkBool32 shaderUniformBufferArrayNonUniformIndexing;
	VkBool32 shaderSampledImageArrayNonUniformIndexing;
	VkBool32 shaderStorageBufferArrayNonUniformIndexing;
	VkBool32 shaderStorageImageArrayNonUniformIndexing;
	VkBool32 shaderInputAttachmentArrayNonUniformIndexing;
	VkBool32 shaderUniformTexelBufferArrayNonUniformIndexing;
	VkBool32 shaderStorageTexelBufferArrayNonUniformIndexing;
	VkBool32 descriptorBindingUniformBufferUpdateAfterBind;
	VkBool32 descriptorBindingSampledImageUpdateAfterBind;
	VkBool32 descriptorBindingStorageImageUpdateAfterBind;
	VkBool32 descriptorBindingStorageBufferUpdateAfterBind;
	VkBool32 descriptorBindingUniformTexelBufferUpdateAfterBind;
	VkBool32 descriptorBindingStorageTexelBufferUpdateAfterBind;
	VkBool32 descriptorBindingUpdateUnusedWhilePending;
	VkBool32 descriptorBindingPartiallyBound;
	VkBool32 descriptorBindingVariableDescriptorCount;
	VkBool32 runtimeDescriptorArray;
};
struct VkPhysicalDeviceDescriptorIndexingPropertiesEXT {
	VkStructureType sType;
	void* pNext;
	uint32_t maxUpdateAfterBindDescriptorsInAllPools;
	VkBool32 shaderUniformBufferArrayNonUniformIndexingNative;
	VkBool32 shaderSampledImageArrayNonUniformIndexingNative;
	VkBool32 shaderStorageBufferArrayNonUniformIndexingNative;
	VkBool32 shaderStorageImageArrayNonUniformIndexingNative;
	VkBool32 shaderInputAttachmentArrayNonUniformIndexingNative;
	VkBool32 robustBufferAccessUpdateAfterBind;
	VkBool32 quadDivergentImplicitLod;
	uint32_t maxPerStageDescriptorUpdateAfterBindSamplers;
	uint32_t maxPerStageDescriptorUpdateAfterBindUniformBuffers;
	uint32_t maxPerStageDescriptorUpdateAfterBindStorageBuffers;
	uint32_t maxPerStageDescriptorUpdateAfterBindSampledImages;
	uint32_t maxPerStageDescriptorUpdateAfterBindStorageImages;
	uint32_t maxPerStageDescriptorUpdateAfterBindInputAttachments;
	uint32_t maxPerStageUpdateAfterBindResources;
	uint32_t maxDescriptorSetUpdateAfterBindSamplers;
	uint32_t maxDescriptorSetUpdateAfterBindUniformBuffers;
	uint32_t maxDescriptorSetUpdateAfterBindUniformBuffersDynamic;
	uint32_t maxDescriptorSetUpdateAfterBindStorageBuffers;
	uint32_t maxDescriptorSetUpdateAfterBindStorageBuffersDynamic;
	uint32_t maxDescriptorSetUpdateAfterBindSampledImages;
	uint32_t maxDescriptorSetUpdateAfterBindStorageImages;
	uint32_t maxDescriptorSetUpdateAfterBindInputAttachments;
};
struct VkDescriptorSetLayoutBindingFlagsCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	uint32_t bindingCount;
	const VkDescriptorBindingFlagsEXT* pBindingFlags;
};
struct VkDescriptorSetVariableDescriptorCountAllocateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	uint32_t descriptorSetCount;
	const uint32_t* pDescriptorCounts;
};
struct VkDescriptorSetVariableDescriptorCountLayoutSupportEXT {
	VkStructureType sType;
	void* pNext;
	uint32_t maxVariableDescriptorCount;
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
struct VkAttachmentReference2KHR {
	VkStructureType sType;
	const void* pNext;
	uint32_t attachment;
	VkImageLayout layout;
	VkImageAspectFlags aspectMask;
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
struct VkVertexInputBindingDivisorDescriptionEXT {
	uint32_t binding;
	uint32_t divisor;
};
struct VkPipelineVertexInputDivisorStateCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	uint32_t vertexBindingDivisorCount;
	const VkVertexInputBindingDivisorDescriptionEXT* pVertexBindingDivisors;
};
struct VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT {
	VkStructureType sType;
	void* pNext;
	uint32_t maxVertexAttribDivisor;
};
struct VkPhysicalDevicePCIBusInfoPropertiesEXT {
	VkStructureType sType;
	void* pNext;
	uint32_t pciDomain;
	uint32_t pciBus;
	uint32_t pciDevice;
	uint32_t pciFunction;
};
struct VkImportAndroidHardwareBufferInfoANDROID {
	VkStructureType sType;
	const void* pNext;
	struct AHardwareBuffer* buffer;
};
struct VkAndroidHardwareBufferUsageANDROID {
	VkStructureType sType;
	void* pNext;
	uint64_t androidHardwareBufferUsage;
};
struct VkAndroidHardwareBufferPropertiesANDROID {
	VkStructureType sType;
	void* pNext;
	VkDeviceSize allocationSize;
	uint32_t memoryTypeBits;
};
struct VkMemoryGetAndroidHardwareBufferInfoANDROID {
	VkStructureType sType;
	const void* pNext;
	VkDeviceMemory memory;
};
struct VkAndroidHardwareBufferFormatPropertiesANDROID {
	VkStructureType sType;
	void* pNext;
	VkFormat format;
	uint64_t externalFormat;
	VkFormatFeatureFlags formatFeatures;
	VkComponentMapping samplerYcbcrConversionComponents;
	VkSamplerYcbcrModelConversion suggestedYcbcrModel;
	VkSamplerYcbcrRange suggestedYcbcrRange;
	VkChromaLocation suggestedXChromaOffset;
	VkChromaLocation suggestedYChromaOffset;
};
struct VkCommandBufferInheritanceConditionalRenderingInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkBool32 conditionalRenderingEnable;
};
struct VkExternalFormatANDROID {
	VkStructureType sType;
	void* pNext;
	uint64_t externalFormat;
};
struct VkPhysicalDevice8BitStorageFeaturesKHR {
	VkStructureType sType;
	void* pNext;
	VkBool32 storageBuffer8BitAccess;
	VkBool32 uniformAndStorageBuffer8BitAccess;
	VkBool32 storagePushConstant8;
};
struct VkPhysicalDeviceConditionalRenderingFeaturesEXT {
	VkStructureType sType;
	void* pNext;
	VkBool32 conditionalRendering;
	VkBool32 inheritedConditionalRendering;
};
struct VkPhysicalDeviceVulkanMemoryModelFeaturesKHR {
	VkStructureType sType;
	void* pNext;
	VkBool32 vulkanMemoryModel;
	VkBool32 vulkanMemoryModelDeviceScope;
	VkBool32 vulkanMemoryModelAvailabilityVisibilityChains;
};
struct VkPhysicalDeviceShaderAtomicInt64FeaturesKHR {
	VkStructureType sType;
	void* pNext;
	VkBool32 shaderBufferInt64Atomics;
	VkBool32 shaderSharedInt64Atomics;
};
struct VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT {
	VkStructureType sType;
	void* pNext;
	VkBool32 vertexAttributeInstanceRateDivisor;
	VkBool32 vertexAttributeInstanceRateZeroDivisor;
};
struct VkQueueFamilyCheckpointPropertiesNV {
	VkStructureType sType;
	void* pNext;
	VkPipelineStageFlags checkpointExecutionStageMask;
};
struct VkCheckpointDataNV {
	VkStructureType sType;
	void* pNext;
	VkPipelineStageFlagBits stage;
	void* pCheckpointMarker;
};
struct VkPhysicalDeviceDepthStencilResolvePropertiesKHR {
	VkStructureType sType;
	void* pNext;
	VkResolveModeFlagsKHR supportedDepthResolveModes;
	VkResolveModeFlagsKHR supportedStencilResolveModes;
	VkBool32 independentResolveNone;
	VkBool32 independentResolve;
};
struct VkSubpassDescriptionDepthStencilResolveKHR {
	VkStructureType sType;
	const void* pNext;
	VkResolveModeFlagBitsKHR depthResolveMode;
	VkResolveModeFlagBitsKHR stencilResolveMode;
	const VkAttachmentReference2KHR* pDepthStencilResolveAttachment;
};
struct VkImageViewASTCDecodeModeEXT {
	VkStructureType sType;
	const void* pNext;
	VkFormat decodeMode;
};
struct VkPhysicalDeviceASTCDecodeFeaturesEXT {
	VkStructureType sType;
	void* pNext;
	VkBool32 decodeModeSharedExponent;
};
struct VkPhysicalDeviceTransformFeedbackFeaturesEXT {
	VkStructureType sType;
	void* pNext;
	VkBool32 transformFeedback;
	VkBool32 geometryStreams;
};
struct VkPhysicalDeviceTransformFeedbackPropertiesEXT {
	VkStructureType sType;
	void* pNext;
	uint32_t maxTransformFeedbackStreams;
	uint32_t maxTransformFeedbackBuffers;
	VkDeviceSize maxTransformFeedbackBufferSize;
	uint32_t maxTransformFeedbackStreamDataSize;
	uint32_t maxTransformFeedbackBufferDataSize;
	uint32_t maxTransformFeedbackBufferDataStride;
	VkBool32 transformFeedbackQueries;
	VkBool32 transformFeedbackStreamsLinesTriangles;
	VkBool32 transformFeedbackRasterizationStreamSelect;
	VkBool32 transformFeedbackDraw;
};
struct VkPipelineRasterizationStateStreamCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkPipelineRasterizationStateStreamCreateFlagsEXT flags;
	uint32_t rasterizationStream;
};
struct VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV {
	VkStructureType sType;
	void* pNext;
	VkBool32 representativeFragmentTest;
};
struct VkPipelineRepresentativeFragmentTestStateCreateInfoNV {
	VkStructureType sType;
	const void* pNext;
	VkBool32 representativeFragmentTestEnable;
};
struct VkPhysicalDeviceExclusiveScissorFeaturesNV {
	VkStructureType sType;
	void* pNext;
	VkBool32 exclusiveScissor;
};
struct VkPipelineViewportExclusiveScissorStateCreateInfoNV {
	VkStructureType sType;
	const void* pNext;
	uint32_t exclusiveScissorCount;
	const VkRect2D* pExclusiveScissors;
};
struct VkPhysicalDeviceCornerSampledImageFeaturesNV {
	VkStructureType sType;
	void* pNext;
	VkBool32 cornerSampledImage;
};
struct VkPhysicalDeviceComputeShaderDerivativesFeaturesNV {
	VkStructureType sType;
	void* pNext;
	VkBool32 computeDerivativeGroupQuads;
	VkBool32 computeDerivativeGroupLinear;
};
struct VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV {
	VkStructureType sType;
	void* pNext;
	VkBool32 fragmentShaderBarycentric;
};
struct VkPhysicalDeviceShaderImageFootprintFeaturesNV {
	VkStructureType sType;
	void* pNext;
	VkBool32 imageFootprint;
};
struct VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV {
	VkStructureType sType;
	void* pNext;
	VkBool32 dedicatedAllocationImageAliasing;
};
struct VkShadingRatePaletteNV {
	uint32_t shadingRatePaletteEntryCount;
	const VkShadingRatePaletteEntryNV* pShadingRatePaletteEntries;
};
struct VkPipelineViewportShadingRateImageStateCreateInfoNV {
	VkStructureType sType;
	const void* pNext;
	VkBool32 shadingRateImageEnable;
	uint32_t viewportCount;
	const VkShadingRatePaletteNV* pShadingRatePalettes;
};
struct VkPhysicalDeviceShadingRateImageFeaturesNV {
	VkStructureType sType;
	void* pNext;
	VkBool32 shadingRateImage;
	VkBool32 shadingRateCoarseSampleOrder;
};
struct VkPhysicalDeviceShadingRateImagePropertiesNV {
	VkStructureType sType;
	void* pNext;
	VkExtent2D shadingRateTexelSize;
	uint32_t shadingRatePaletteSize;
	uint32_t shadingRateMaxCoarseSamples;
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
	VkCoarseSampleOrderTypeNV sampleOrderType;
	uint32_t customSampleOrderCount;
	const VkCoarseSampleOrderCustomNV* pCustomSampleOrders;
};
struct VkPhysicalDeviceMeshShaderFeaturesNV {
	VkStructureType sType;
	void* pNext;
	VkBool32 taskShader;
	VkBool32 meshShader;
};
struct VkPhysicalDeviceMeshShaderPropertiesNV {
	VkStructureType sType;
	void* pNext;
	uint32_t maxDrawMeshTasksCount;
	uint32_t maxTaskWorkGroupInvocations;
	uint32_t maxTaskWorkGroupSize;
	uint32_t maxTaskTotalMemorySize;
	uint32_t maxTaskOutputCount;
	uint32_t maxMeshWorkGroupInvocations;
	uint32_t maxMeshWorkGroupSize;
	uint32_t maxMeshTotalMemorySize;
	uint32_t maxMeshOutputVertices;
	uint32_t maxMeshOutputPrimitives;
	uint32_t maxMeshMultiviewViewCount;
	uint32_t meshOutputPerVertexGranularity;
	uint32_t meshOutputPerPrimitiveGranularity;
};
struct VkDrawMeshTasksIndirectCommandNV {
	uint32_t taskCount;
	uint32_t firstTask;
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
	uint32_t accelerationStructureCount;
	const VkAccelerationStructureNV* pAccelerationStructures;
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
	uint32_t shaderGroupHandleSize;
	uint32_t maxRecursionDepth;
	uint32_t maxShaderGroupStride;
	uint32_t shaderGroupBaseAlignment;
	uint64_t maxGeometryCount;
	uint64_t maxInstanceCount;
	uint64_t maxTriangleCount;
	uint32_t maxDescriptorSetAccelerationStructures;
};
struct VkDrmFormatModifierPropertiesListEXT {
	VkStructureType sType;
	void* pNext;
	uint32_t drmFormatModifierCount;
	VkDrmFormatModifierPropertiesEXT* pDrmFormatModifierProperties;
};
struct VkDrmFormatModifierPropertiesEXT {
	uint64_t drmFormatModifier;
	uint32_t drmFormatModifierPlaneCount;
	VkFormatFeatureFlags drmFormatModifierTilingFeatures;
};
struct VkPhysicalDeviceImageDrmFormatModifierInfoEXT {
	VkStructureType sType;
	const void* pNext;
	uint64_t drmFormatModifier;
	VkSharingMode sharingMode;
	uint32_t queueFamilyIndexCount;
	const uint32_t* pQueueFamilyIndices;
};
struct VkImageDrmFormatModifierListCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	uint32_t drmFormatModifierCount;
	const uint64_t* pDrmFormatModifiers;
};
struct VkImageDrmFormatModifierExplicitCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	uint64_t drmFormatModifier;
	uint32_t drmFormatModifierPlaneCount;
	const VkSubresourceLayout* pPlaneLayouts;
};
struct VkImageDrmFormatModifierPropertiesEXT {
	VkStructureType sType;
	void* pNext;
	uint64_t drmFormatModifier;
};
struct VkImageStencilUsageCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkImageUsageFlags stencilUsage;
};
struct VkDeviceMemoryOverallocationCreateInfoAMD {
	VkStructureType sType;
	const void* pNext;
	VkMemoryOverallocationBehaviorAMD overallocationBehavior;
};
struct VkPhysicalDeviceFragmentDensityMapFeaturesEXT {
	VkStructureType sType;
	void* pNext;
	VkBool32 fragmentDensityMap;
	VkBool32 fragmentDensityMapDynamic;
	VkBool32 fragmentDensityMapNonSubsampledImages;
};
struct VkPhysicalDeviceFragmentDensityMapPropertiesEXT {
	VkStructureType sType;
	void* pNext;
	VkExtent2D minFragmentDensityTexelSize;
	VkExtent2D maxFragmentDensityTexelSize;
	VkBool32 fragmentDensityInvocations;
};
struct VkRenderPassFragmentDensityMapCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkAttachmentReference fragmentDensityMapAttachment;
};
struct VkPhysicalDeviceScalarBlockLayoutFeaturesEXT {
	VkStructureType sType;
	void* pNext;
	VkBool32 scalarBlockLayout;
};
struct VkSurfaceProtectedCapabilitiesKHR {
	VkStructureType sType;
	const void* pNext;
	VkBool32 supportsProtected;
};
struct VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR {
	VkStructureType sType;
	void* pNext;
	VkBool32 uniformBufferStandardLayout;
};
struct VkPhysicalDeviceDepthClipEnableFeaturesEXT {
	VkStructureType sType;
	void* pNext;
	VkBool32 depthClipEnable;
};
struct VkPipelineRasterizationDepthClipStateCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkPipelineRasterizationDepthClipStateCreateFlagsEXT flags;
	VkBool32 depthClipEnable;
};
struct VkPhysicalDeviceMemoryBudgetPropertiesEXT {
	VkStructureType sType;
	void* pNext;
	VkDeviceSize heapBudget;
	VkDeviceSize heapUsage;
};
struct VkPhysicalDeviceMemoryPriorityFeaturesEXT {
	VkStructureType sType;
	void* pNext;
	VkBool32 memoryPriority;
};
struct VkMemoryPriorityAllocateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	float priority;
};
struct VkPhysicalDeviceBufferDeviceAddressFeaturesEXT {
	VkStructureType sType;
	void* pNext;
	VkBool32 bufferDeviceAddress;
	VkBool32 bufferDeviceAddressCaptureReplay;
	VkBool32 bufferDeviceAddressMultiDevice;
};
struct VkPhysicalDeviceBufferAddressFeaturesEXT {
	
};
struct VkBufferDeviceAddressInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkBuffer buffer;
};
struct VkBufferDeviceAddressCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkDeviceAddress deviceAddress;
};
struct VkPhysicalDeviceImageViewImageFormatInfoEXT {
	VkStructureType sType;
	void* pNext;
	VkImageViewType imageViewType;
};
struct VkFilterCubicImageViewImageFormatPropertiesEXT {
	VkStructureType sType;
	void* pNext;
	VkBool32 filterCubic;
	VkBool32 filterCubicMinmax;
};
struct VkPhysicalDeviceImagelessFramebufferFeaturesKHR {
	VkStructureType sType;
	void* pNext;
	VkBool32 imagelessFramebuffer;
};
struct VkFramebufferAttachmentsCreateInfoKHR {
	VkStructureType sType;
	const void* pNext;
	uint32_t attachmentImageInfoCount;
	const VkFramebufferAttachmentImageInfoKHR* pAttachmentImageInfos;
};
struct VkFramebufferAttachmentImageInfoKHR {
	VkStructureType sType;
	const void* pNext;
	VkImageCreateFlags flags;
	VkImageUsageFlags usage;
	uint32_t width;
	uint32_t height;
	uint32_t layerCount;
	uint32_t viewFormatCount;
	const VkFormat* pViewFormats;
};
struct VkRenderPassAttachmentBeginInfoKHR {
	VkStructureType sType;
	const void* pNext;
	uint32_t attachmentCount;
	const VkImageView* pAttachments;
};
struct VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT {
	VkStructureType sType;
	const void* pNext;
	VkBool32 textureCompressionASTC_HDR;
};
struct VkPhysicalDeviceCooperativeMatrixFeaturesNV {
	VkStructureType sType;
	void* pNext;
	VkBool32 cooperativeMatrix;
	VkBool32 cooperativeMatrixRobustBufferAccess;
};
struct VkPhysicalDeviceCooperativeMatrixPropertiesNV {
	VkStructureType sType;
	void* pNext;
	VkShaderStageFlags cooperativeMatrixSupportedStages;
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
struct VkPhysicalDeviceYcbcrImageArraysFeaturesEXT {
	VkStructureType sType;
	void* pNext;
	VkBool32 ycbcrImageArrays;
};
struct VkImageViewHandleInfoNVX {
	VkStructureType sType;
	const void* pNext;
	VkImageView imageView;
	VkDescriptorType descriptorType;
	VkSampler sampler;
};
struct VkPresentFrameTokenGGP {
	VkStructureType sType;
	const void* pNext;
	GgpFrameToken frameToken;
};
struct VkPipelineCreationFeedbackEXT {
	VkPipelineCreationFeedbackFlagsEXT flags;
	uint64_t duration;
};
struct VkPipelineCreationFeedbackCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkPipelineCreationFeedbackEXT* pPipelineCreationFeedback;
	uint32_t pipelineStageCreationFeedbackCount;
	VkPipelineCreationFeedbackEXT* pPipelineStageCreationFeedbacks;
};
struct VkSurfaceFullScreenExclusiveInfoEXT {
	VkStructureType sType;
	void* pNext;
	VkFullScreenExclusiveEXT fullScreenExclusive;
};
struct VkSurfaceFullScreenExclusiveWin32InfoEXT {
	VkStructureType sType;
	const void* pNext;
	HMONITOR hmonitor;
};
struct VkSurfaceCapabilitiesFullScreenExclusiveEXT {
	VkStructureType sType;
	void* pNext;
	VkBool32 fullScreenExclusiveSupported;
};
struct VkHeadlessSurfaceCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkHeadlessSurfaceCreateFlagsEXT flags;
};
struct VkPhysicalDeviceCoverageReductionModeFeaturesNV {
	VkStructureType sType;
	void* pNext;
	VkBool32 coverageReductionMode;
};
struct VkPipelineCoverageReductionStateCreateInfoNV {
	VkStructureType sType;
	const void* pNext;
	VkPipelineCoverageReductionStateCreateFlagsNV flags;
	VkCoverageReductionModeNV coverageReductionMode;
};
struct VkFramebufferMixedSamplesCombinationNV {
	VkStructureType sType;
	void* pNext;
	VkCoverageReductionModeNV coverageReductionMode;
	VkSampleCountFlagBits rasterizationSamples;
	VkSampleCountFlags depthStencilSamples;
	VkSampleCountFlags colorSamples;
};
struct VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL {
	VkStructureType sType;
	void* pNext;
	VkBool32 shaderIntegerFunctions2;
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
struct VkPhysicalDeviceIndexTypeUint8FeaturesEXT {
	VkStructureType sType;
	void* pNext;
	VkBool32 indexTypeUint8;
};
struct VkPhysicalDeviceShaderSMBuiltinsPropertiesNV {
	VkStructureType sType;
	void* pNext;
	uint32_t shaderSMCount;
	uint32_t shaderWarpsPerSM;
};
struct VkPhysicalDeviceShaderSMBuiltinsFeaturesNV {
	VkStructureType sType;
	void* pNext;
	VkBool32 shaderSMBuiltins;
};
struct VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT {
	VkStructureType sType;
	void* pNext;
	VkBool32 fragmentShaderSampleInterlock;
	VkBool32 fragmentShaderPixelInterlock;
	VkBool32 fragmentShaderShadingRateInterlock;
};
struct VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT {
	VkStructureType sType;
	void* pNext;
	VkBool32 shaderDemoteToHelperInvocation;
};
struct VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT {
	VkStructureType sType;
	void* pNext;
	VkBool32 texelBufferAlignment;
};
struct VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT {
	VkStructureType sType;
	void* pNext;
	VkDeviceSize storageTexelBufferOffsetAlignmentBytes;
	VkBool32 storageTexelBufferOffsetSingleTexelAlignment;
	VkDeviceSize uniformTexelBufferOffsetAlignmentBytes;
	VkBool32 uniformTexelBufferOffsetSingleTexelAlignment;
};
struct VkPhysicalDeviceSubgroupSizeControlPropertiesEXT {
	VkStructureType sType;
	void* pNext;
	uint32_t minSubgroupSize;
	uint32_t maxSubgroupSize;
	uint32_t maxComputeWorkgroupSubgroups;
	VkShaderStageFlags requiredSubgroupSizeStages;
};
struct VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT {
	VkStructureType sType;
	void* pNext;
	uint32_t requiredSubgroupSize;
};
struct VkPhysicalDeviceLineRasterizationFeaturesEXT {
	VkStructureType sType;
	void* pNext;
	VkBool32 rectangularLines;
	VkBool32 bresenhamLines;
	VkBool32 smoothLines;
	VkBool32 stippledRectangularLines;
	VkBool32 stippledBresenhamLines;
	VkBool32 stippledSmoothLines;
};
struct VkPhysicalDeviceLineRasterizationPropertiesEXT {
	VkStructureType sType;
	void* pNext;
	uint32_t lineSubPixelPrecisionBits;
};
struct VkPipelineRasterizationLineStateCreateInfoEXT {
	VkStructureType sType;
	const void* pNext;
	VkLineRasterizationModeEXT lineRasterizationMode;
	VkBool32 stippledLineEnable;
	uint32_t lineStippleFactor;
	uint16_t lineStipplePattern;
};
using PFN_vkVoidFunction = void (VKAPI_PTR *)(void);
enum class UNGROUPED : unsigned int;
enum class UnusedMask : unsigned int;


} // namespace vk


#include <vkbinding/vk/types.inl>