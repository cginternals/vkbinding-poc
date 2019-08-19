
#pragma once


#include <vkbinding/novk.h>
#include <vkbinding/vk/types.h>


namespace vk11
{



using vk::PFN_vkAllocationFunction;
using vk::PFN_vkFreeFunction;
using vk::PFN_vkInternalAllocationNotification;
using vk::PFN_vkInternalFreeNotification;
using vk::PFN_vkReallocationFunction;
using vk::PFN_vkVoidFunction;
using vk::UNGROUPED;
using vk::UnusedMask;
using vk::VkAccelerationStructureCreateInfoNV;
using vk::VkAccelerationStructureInfoNV;
using vk::VkAccelerationStructureMemoryRequirementsInfoNV;
using vk::VkAccelerationStructureMemoryRequirementsTypeNV;
using vk::VkAccelerationStructureNV;
using vk::VkAccelerationStructureTypeNV;
using vk::VkAccessFlags;
using vk::VkAcquireNextImageInfoKHR;
using vk::VkAllocationCallbacks;
using vk::VkApplicationInfo;
using vk::VkAttachmentDescription;
using vk::VkAttachmentDescription2KHR;
using vk::VkAttachmentDescriptionFlags;
using vk::VkAttachmentLoadOp;
using vk::VkAttachmentReference;
using vk::VkAttachmentReference2KHR;
using vk::VkAttachmentSampleLocationsEXT;
using vk::VkAttachmentStoreOp;
using vk::VkBaseInStructure;
using vk::VkBaseOutStructure;
using vk::VkBindAccelerationStructureMemoryInfoNV;
using vk::VkBindBufferMemoryDeviceGroupInfo;
using vk::VkBindBufferMemoryDeviceGroupInfoKHR;
using vk::VkBindBufferMemoryInfo;
using vk::VkBindBufferMemoryInfoKHR;
using vk::VkBindImageMemoryDeviceGroupInfo;
using vk::VkBindImageMemoryDeviceGroupInfoKHR;
using vk::VkBindImageMemoryInfo;
using vk::VkBindImageMemoryInfoKHR;
using vk::VkBindImageMemorySwapchainInfoKHR;
using vk::VkBindImagePlaneMemoryInfo;
using vk::VkBindImagePlaneMemoryInfoKHR;
using vk::VkBindSparseInfo;
using vk::VKbitfield;
using vk::VkBlendFactor;
using vk::VkBlendOp;
using vk::VkBlendOverlapEXT;
using vk::VkBool32;
using vk::VkBorderColor;
using vk::VkBuffer;
using vk::VkBufferCopy;
using vk::VkBufferCreateFlags;
using vk::VkBufferCreateInfo;
using vk::VkBufferDeviceAddressCreateInfoEXT;
using vk::VkBufferDeviceAddressInfoEXT;
using vk::VkBufferImageCopy;
using vk::VkBufferMemoryBarrier;
using vk::VkBufferMemoryRequirementsInfo2;
using vk::VkBufferMemoryRequirementsInfo2KHR;
using vk::VkBufferUsageFlags;
using vk::VkBufferView;
using vk::VkBufferViewCreateFlags;
using vk::VkBufferViewCreateInfo;
using vk::VkBuildAccelerationStructureFlagBitsNV;
using vk::VkBuildAccelerationStructureFlagsNV;
using vk::VkCalibratedTimestampInfoEXT;
using vk::VkCheckpointDataNV;
using vk::VkChromaLocation;
using vk::VkChromaLocationKHR;
using vk::VkClearAttachment;
using vk::VkClearColorValue;
using vk::VkClearDepthStencilValue;
using vk::VkClearRect;
using vk::VkClearValue;
using vk::VkCmdProcessCommandsInfoNVX;
using vk::VkCmdReserveSpaceForCommandsInfoNVX;
using vk::VkCoarseSampleLocationNV;
using vk::VkCoarseSampleOrderCustomNV;
using vk::VkCoarseSampleOrderTypeNV;
using vk::VkColorComponentFlags;
using vk::VkColorSpaceKHR;
using vk::VkCommandBuffer;
using vk::VkCommandBufferAllocateInfo;
using vk::VkCommandBufferBeginInfo;
using vk::VkCommandBufferInheritanceConditionalRenderingInfoEXT;
using vk::VkCommandBufferInheritanceInfo;
using vk::VkCommandBufferLevel;
using vk::VkCommandBufferResetFlags;
using vk::VkCommandBufferUsageFlags;
using vk::VkCommandPool;
using vk::VkCommandPoolCreateFlags;
using vk::VkCommandPoolCreateInfo;
using vk::VkCommandPoolResetFlags;
using vk::VkCommandPoolTrimFlags;
using vk::VkCommandPoolTrimFlagsKHR;
using vk::VkCompareOp;
using vk::VkComponentMapping;
using vk::VkComponentSwizzle;
using vk::VkComponentTypeNV;
using vk::VkCompositeAlphaFlagBitsKHR;
using vk::VkCompositeAlphaFlagsKHR;
using vk::VkComputePipelineCreateInfo;
using vk::VkConditionalRenderingBeginInfoEXT;
using vk::VkConditionalRenderingFlagBitsEXT;
using vk::VkConditionalRenderingFlagsEXT;
using vk::VkConformanceVersionKHR;
using vk::VkConservativeRasterizationModeEXT;
using vk::VkCooperativeMatrixPropertiesNV;
using vk::VkCopyAccelerationStructureModeNV;
using vk::VkCopyDescriptorSet;
using vk::VkCoverageModulationModeNV;
using vk::VkCoverageReductionModeNV;
using vk::VkCullModeFlags;
using vk::VkDebugMarkerMarkerInfoEXT;
using vk::VkDebugMarkerObjectNameInfoEXT;
using vk::VkDebugMarkerObjectTagInfoEXT;
using vk::VkDebugReportCallbackCreateInfoEXT;
using vk::VkDebugReportCallbackEXT;
using vk::VkDebugReportFlagsEXT;
using vk::VkDebugReportObjectTypeEXT;
using vk::VkDebugUtilsLabelEXT;
using vk::VkDebugUtilsMessageSeverityFlagBitsEXT;
using vk::VkDebugUtilsMessageSeverityFlagsEXT;
using vk::VkDebugUtilsMessageTypeFlagsEXT;
using vk::VkDebugUtilsMessengerCallbackDataEXT;
using vk::VkDebugUtilsMessengerCallbackDataFlagsEXT;
using vk::VkDebugUtilsMessengerCreateInfoEXT;
using vk::VkDebugUtilsMessengerEXT;
using vk::VkDebugUtilsObjectNameInfoEXT;
using vk::VkDebugUtilsObjectTagInfoEXT;
using vk::VkDedicatedAllocationBufferCreateInfoNV;
using vk::VkDedicatedAllocationImageCreateInfoNV;
using vk::VkDedicatedAllocationMemoryAllocateInfoNV;
using vk::VkDependencyFlags;
using vk::VkDescriptorBufferInfo;
using vk::VkDescriptorImageInfo;
using vk::VkDescriptorPool;
using vk::VkDescriptorPoolCreateFlags;
using vk::VkDescriptorPoolCreateInfo;
using vk::VkDescriptorPoolInlineUniformBlockCreateInfoEXT;
using vk::VkDescriptorPoolResetFlags;
using vk::VkDescriptorPoolSize;
using vk::VkDescriptorSet;
using vk::VkDescriptorSetAllocateInfo;
using vk::VkDescriptorSetLayout;
using vk::VkDescriptorSetLayoutBinding;
using vk::VkDescriptorSetLayoutBindingFlagsCreateInfoEXT;
using vk::VkDescriptorSetLayoutCreateFlags;
using vk::VkDescriptorSetLayoutCreateInfo;
using vk::VkDescriptorSetLayoutSupport;
using vk::VkDescriptorSetLayoutSupportKHR;
using vk::VkDescriptorSetVariableDescriptorCountAllocateInfoEXT;
using vk::VkDescriptorSetVariableDescriptorCountLayoutSupportEXT;
using vk::VkDescriptorType;
using vk::VkDescriptorUpdateTemplate;
using vk::VkDescriptorUpdateTemplateCreateFlags;
using vk::VkDescriptorUpdateTemplateCreateFlagsKHR;
using vk::VkDescriptorUpdateTemplateCreateInfo;
using vk::VkDescriptorUpdateTemplateCreateInfoKHR;
using vk::VkDescriptorUpdateTemplateEntry;
using vk::VkDescriptorUpdateTemplateEntryKHR;
using vk::VkDescriptorUpdateTemplateType;
using vk::VkDescriptorUpdateTemplateTypeKHR;
using vk::VkDevice;
using vk::VkDeviceAddress;
using vk::VkDeviceAddress;
using vk::VkDeviceCreateFlags;
using vk::VkDeviceCreateInfo;
using vk::VkDeviceEventInfoEXT;
using vk::VkDeviceEventTypeEXT;
using vk::VkDeviceGeneratedCommandsFeaturesNVX;
using vk::VkDeviceGeneratedCommandsLimitsNVX;
using vk::VkDeviceGroupBindSparseInfo;
using vk::VkDeviceGroupBindSparseInfoKHR;
using vk::VkDeviceGroupCommandBufferBeginInfo;
using vk::VkDeviceGroupCommandBufferBeginInfoKHR;
using vk::VkDeviceGroupDeviceCreateInfo;
using vk::VkDeviceGroupDeviceCreateInfoKHR;
using vk::VkDeviceGroupPresentCapabilitiesKHR;
using vk::VkDeviceGroupPresentInfoKHR;
using vk::VkDeviceGroupPresentModeFlagBitsKHR;
using vk::VkDeviceGroupPresentModeFlagsKHR;
using vk::VkDeviceGroupRenderPassBeginInfo;
using vk::VkDeviceGroupRenderPassBeginInfoKHR;
using vk::VkDeviceGroupSubmitInfo;
using vk::VkDeviceGroupSubmitInfoKHR;
using vk::VkDeviceGroupSwapchainCreateInfoKHR;
using vk::VkDeviceMemory;
using vk::VkDeviceMemoryOverallocationCreateInfoAMD;
using vk::VkDeviceQueueCreateFlags;
using vk::VkDeviceQueueCreateInfo;
using vk::VkDeviceQueueGlobalPriorityCreateInfoEXT;
using vk::VkDeviceQueueInfo2;
using vk::VkDeviceSize;
using vk::VkDeviceSize;
using vk::VkDiscardRectangleModeEXT;
using vk::VkDispatchIndirectCommand;
using vk::VkDisplayEventInfoEXT;
using vk::VkDisplayEventTypeEXT;
using vk::VkDisplayKHR;
using vk::VkDisplayModeCreateFlagsKHR;
using vk::VkDisplayModeCreateInfoKHR;
using vk::VkDisplayModeKHR;
using vk::VkDisplayModeParametersKHR;
using vk::VkDisplayModeProperties2KHR;
using vk::VkDisplayModePropertiesKHR;
using vk::VkDisplayNativeHdrSurfaceCapabilitiesAMD;
using vk::VkDisplayPlaneAlphaFlagBitsKHR;
using vk::VkDisplayPlaneAlphaFlagsKHR;
using vk::VkDisplayPlaneCapabilities2KHR;
using vk::VkDisplayPlaneCapabilitiesKHR;
using vk::VkDisplayPlaneInfo2KHR;
using vk::VkDisplayPlaneProperties2KHR;
using vk::VkDisplayPlanePropertiesKHR;
using vk::VkDisplayPowerInfoEXT;
using vk::VkDisplayPowerStateEXT;
using vk::VkDisplayPresentInfoKHR;
using vk::VkDisplayProperties2KHR;
using vk::VkDisplayPropertiesKHR;
using vk::VkDisplaySurfaceCreateFlagsKHR;
using vk::VkDisplaySurfaceCreateInfoKHR;
using vk::VkDrawIndexedIndirectCommand;
using vk::VkDrawIndirectCommand;
using vk::VkDrawMeshTasksIndirectCommandNV;
using vk::VkDriverIdKHR;
using vk::VkDrmFormatModifierPropertiesEXT;
using vk::VkDrmFormatModifierPropertiesListEXT;
using vk::VkDynamicState;
using vk::VKenum;
using vk::VkEvent;
using vk::VkEventCreateFlags;
using vk::VkEventCreateInfo;
using vk::VkExportFenceCreateInfo;
using vk::VkExportFenceCreateInfoKHR;
using vk::VkExportMemoryAllocateInfo;
using vk::VkExportMemoryAllocateInfoKHR;
using vk::VkExportMemoryAllocateInfoNV;
using vk::VkExportSemaphoreCreateInfo;
using vk::VkExportSemaphoreCreateInfoKHR;
using vk::VKextension;
using vk::VkExtensionProperties;
using vk::VkExtent2D;
using vk::VkExtent3D;
using vk::VkExternalBufferProperties;
using vk::VkExternalBufferPropertiesKHR;
using vk::VkExternalFenceFeatureFlagBits;
using vk::VkExternalFenceFeatureFlagBitsKHR;
using vk::VkExternalFenceFeatureFlags;
using vk::VkExternalFenceFeatureFlagsKHR;
using vk::VkExternalFenceHandleTypeFlagBits;
using vk::VkExternalFenceHandleTypeFlagBitsKHR;
using vk::VkExternalFenceHandleTypeFlags;
using vk::VkExternalFenceHandleTypeFlagsKHR;
using vk::VkExternalFenceProperties;
using vk::VkExternalFencePropertiesKHR;
using vk::VkExternalImageFormatProperties;
using vk::VkExternalImageFormatPropertiesKHR;
using vk::VkExternalImageFormatPropertiesNV;
using vk::VkExternalMemoryBufferCreateInfo;
using vk::VkExternalMemoryBufferCreateInfoKHR;
using vk::VkExternalMemoryFeatureFlagBits;
using vk::VkExternalMemoryFeatureFlagBitsKHR;
using vk::VkExternalMemoryFeatureFlagBitsNV;
using vk::VkExternalMemoryFeatureFlags;
using vk::VkExternalMemoryFeatureFlagsKHR;
using vk::VkExternalMemoryFeatureFlagsNV;
using vk::VkExternalMemoryHandleTypeFlagBits;
using vk::VkExternalMemoryHandleTypeFlagBitsKHR;
using vk::VkExternalMemoryHandleTypeFlagBitsNV;
using vk::VkExternalMemoryHandleTypeFlags;
using vk::VkExternalMemoryHandleTypeFlagsKHR;
using vk::VkExternalMemoryHandleTypeFlagsNV;
using vk::VkExternalMemoryImageCreateInfo;
using vk::VkExternalMemoryImageCreateInfoKHR;
using vk::VkExternalMemoryImageCreateInfoNV;
using vk::VkExternalMemoryProperties;
using vk::VkExternalMemoryPropertiesKHR;
using vk::VkExternalSemaphoreFeatureFlagBits;
using vk::VkExternalSemaphoreFeatureFlagBitsKHR;
using vk::VkExternalSemaphoreFeatureFlags;
using vk::VkExternalSemaphoreFeatureFlagsKHR;
using vk::VkExternalSemaphoreHandleTypeFlagBits;
using vk::VkExternalSemaphoreHandleTypeFlagBitsKHR;
using vk::VkExternalSemaphoreHandleTypeFlags;
using vk::VkExternalSemaphoreHandleTypeFlagsKHR;
using vk::VkExternalSemaphoreProperties;
using vk::VkExternalSemaphorePropertiesKHR;
using vk::VkFence;
using vk::VkFenceCreateFlags;
using vk::VkFenceCreateInfo;
using vk::VkFenceGetFdInfoKHR;
using vk::VkFenceImportFlagBits;
using vk::VkFenceImportFlagBitsKHR;
using vk::VkFenceImportFlags;
using vk::VkFenceImportFlagsKHR;
using vk::VkFilter;
using vk::VkFilterCubicImageViewImageFormatPropertiesEXT;
using vk::VkFormat;
using vk::VkFormatFeatureFlags;
using vk::VkFormatProperties;
using vk::VkFormatProperties2;
using vk::VkFormatProperties2KHR;
using vk::VkFramebuffer;
using vk::VkFramebufferAttachmentsCreateInfoKHR;
using vk::VkFramebufferCreateFlags;
using vk::VkFramebufferCreateInfo;
using vk::VkFramebufferMixedSamplesCombinationNV;
using vk::VkFrontFace;
using vk::VkGeometryAABBNV;
using vk::VkGeometryDataNV;
using vk::VkGeometryFlagBitsNV;
using vk::VkGeometryFlagsNV;
using vk::VkGeometryInstanceFlagBitsNV;
using vk::VkGeometryInstanceFlagsNV;
using vk::VkGeometryNV;
using vk::VkGeometryTrianglesNV;
using vk::VkGeometryTypeNV;
using vk::VkGraphicsPipelineCreateInfo;
using vk::VkHdrMetadataEXT;
using vk::VkHeadlessSurfaceCreateFlagsEXT;
using vk::VkHeadlessSurfaceCreateInfoEXT;
using vk::VkImage;
using vk::VkImageAspectFlags;
using vk::VkImageBlit;
using vk::VkImageCopy;
using vk::VkImageCreateFlags;
using vk::VkImageCreateInfo;
using vk::VkImageDrmFormatModifierExplicitCreateInfoEXT;
using vk::VkImageDrmFormatModifierListCreateInfoEXT;
using vk::VkImageDrmFormatModifierPropertiesEXT;
using vk::VkImageFormatListCreateInfoKHR;
using vk::VkImageFormatProperties;
using vk::VkImageFormatProperties2;
using vk::VkImageFormatProperties2KHR;
using vk::VkImageLayout;
using vk::VkImageMemoryBarrier;
using vk::VkImageMemoryRequirementsInfo2;
using vk::VkImageMemoryRequirementsInfo2KHR;
using vk::VkImagePlaneMemoryRequirementsInfo;
using vk::VkImagePlaneMemoryRequirementsInfoKHR;
using vk::VkImageResolve;
using vk::VkImageSparseMemoryRequirementsInfo2;
using vk::VkImageSparseMemoryRequirementsInfo2KHR;
using vk::VkImageStencilUsageCreateInfoEXT;
using vk::VkImageSubresource;
using vk::VkImageSubresourceLayers;
using vk::VkImageSubresourceRange;
using vk::VkImageSwapchainCreateInfoKHR;
using vk::VkImageTiling;
using vk::VkImageType;
using vk::VkImageUsageFlags;
using vk::VkImageView;
using vk::VkImageViewASTCDecodeModeEXT;
using vk::VkImageViewCreateFlags;
using vk::VkImageViewCreateInfo;
using vk::VkImageViewHandleInfoNVX;
using vk::VkImageViewType;
using vk::VkImageViewUsageCreateInfo;
using vk::VkImageViewUsageCreateInfoKHR;
using vk::VkImportFenceFdInfoKHR;
using vk::VkImportMemoryFdInfoKHR;
using vk::VkImportMemoryHostPointerInfoEXT;
using vk::VkImportSemaphoreFdInfoKHR;
using vk::VkIndexType;
using vk::VkIndirectCommandsLayoutCreateInfoNVX;
using vk::VkIndirectCommandsLayoutNVX;
using vk::VkIndirectCommandsLayoutTokenNVX;
using vk::VkIndirectCommandsLayoutUsageFlagBitsNVX;
using vk::VkIndirectCommandsLayoutUsageFlagsNVX;
using vk::VkIndirectCommandsTokenNVX;
using vk::VkIndirectCommandsTokenTypeNVX;
using vk::VkInitializePerformanceApiInfoINTEL;
using vk::VkInputAttachmentAspectReference;
using vk::VkInputAttachmentAspectReferenceKHR;
using vk::VkInstance;
using vk::VkInstanceCreateFlags;
using vk::VkInstanceCreateInfo;
using vk::VkInternalAllocationType;
using vk::VkLayerProperties;
using vk::VkLineRasterizationModeEXT;
using vk::VkLogicOp;
using vk::VkMappedMemoryRange;
using vk::VkMemoryAllocateFlagBits;
using vk::VkMemoryAllocateFlagBitsKHR;
using vk::VkMemoryAllocateFlags;
using vk::VkMemoryAllocateFlagsInfo;
using vk::VkMemoryAllocateFlagsInfoKHR;
using vk::VkMemoryAllocateFlagsKHR;
using vk::VkMemoryAllocateInfo;
using vk::VkMemoryBarrier;
using vk::VkMemoryDedicatedAllocateInfo;
using vk::VkMemoryDedicatedAllocateInfoKHR;
using vk::VkMemoryDedicatedRequirements;
using vk::VkMemoryDedicatedRequirementsKHR;
using vk::VkMemoryFdPropertiesKHR;
using vk::VkMemoryGetFdInfoKHR;
using vk::VkMemoryHeap;
using vk::VkMemoryHeapFlags;
using vk::VkMemoryHostPointerPropertiesEXT;
using vk::VkMemoryMapFlags;
using vk::VkMemoryOverallocationBehaviorAMD;
using vk::VkMemoryPriorityAllocateInfoEXT;
using vk::VkMemoryPropertyFlags;
using vk::VkMemoryRequirements;
using vk::VkMemoryRequirements2;
using vk::VkMemoryRequirements2KHR;
using vk::VkMemoryType;
using vk::VkMultisamplePropertiesEXT;
using vk::VkObjectEntryTypeNVX;
using vk::VkObjectEntryUsageFlagBitsNVX;
using vk::VkObjectEntryUsageFlagsNVX;
using vk::VkObjectTableCreateInfoNVX;
using vk::VkObjectTableDescriptorSetEntryNVX;
using vk::VkObjectTableEntryNVX;
using vk::VkObjectTableIndexBufferEntryNVX;
using vk::VkObjectTableNVX;
using vk::VkObjectTablePipelineEntryNVX;
using vk::VkObjectTablePushConstantEntryNVX;
using vk::VkObjectTableVertexBufferEntryNVX;
using vk::VkObjectType;
using vk::VkOffset2D;
using vk::VkOffset3D;
using vk::VkPastPresentationTimingGOOGLE;
using vk::VkPeerMemoryFeatureFlagBits;
using vk::VkPeerMemoryFeatureFlagBitsKHR;
using vk::VkPeerMemoryFeatureFlags;
using vk::VkPeerMemoryFeatureFlagsKHR;
using vk::VkPerformanceConfigurationAcquireInfoINTEL;
using vk::VkPerformanceConfigurationINTEL;
using vk::VkPerformanceConfigurationTypeINTEL;
using vk::VkPerformanceMarkerInfoINTEL;
using vk::VkPerformanceOverrideInfoINTEL;
using vk::VkPerformanceOverrideTypeINTEL;
using vk::VkPerformanceParameterTypeINTEL;
using vk::VkPerformanceStreamMarkerInfoINTEL;
using vk::VkPerformanceValueDataINTEL;
using vk::VkPerformanceValueINTEL;
using vk::VkPerformanceValueTypeINTEL;
using vk::VkPhysicalDevice;
using vk::VkPhysicalDevice16BitStorageFeatures;
using vk::VkPhysicalDevice16BitStorageFeaturesKHR;
using vk::VkPhysicalDevice8BitStorageFeaturesKHR;
using vk::VkPhysicalDeviceASTCDecodeFeaturesEXT;
using vk::VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT;
using vk::VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT;
using vk::VkPhysicalDeviceBufferAddressFeaturesEXT;
using vk::VkPhysicalDeviceBufferDeviceAddressFeaturesEXT;
using vk::VkPhysicalDeviceComputeShaderDerivativesFeaturesNV;
using vk::VkPhysicalDeviceConditionalRenderingFeaturesEXT;
using vk::VkPhysicalDeviceConservativeRasterizationPropertiesEXT;
using vk::VkPhysicalDeviceCooperativeMatrixFeaturesNV;
using vk::VkPhysicalDeviceCooperativeMatrixPropertiesNV;
using vk::VkPhysicalDeviceCornerSampledImageFeaturesNV;
using vk::VkPhysicalDeviceCoverageReductionModeFeaturesNV;
using vk::VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV;
using vk::VkPhysicalDeviceDepthClipEnableFeaturesEXT;
using vk::VkPhysicalDeviceDepthStencilResolvePropertiesKHR;
using vk::VkPhysicalDeviceDescriptorIndexingFeaturesEXT;
using vk::VkPhysicalDeviceDescriptorIndexingPropertiesEXT;
using vk::VkPhysicalDeviceDiscardRectanglePropertiesEXT;
using vk::VkPhysicalDeviceDriverPropertiesKHR;
using vk::VkPhysicalDeviceExclusiveScissorFeaturesNV;
using vk::VkPhysicalDeviceExternalBufferInfo;
using vk::VkPhysicalDeviceExternalBufferInfoKHR;
using vk::VkPhysicalDeviceExternalFenceInfo;
using vk::VkPhysicalDeviceExternalFenceInfoKHR;
using vk::VkPhysicalDeviceExternalImageFormatInfo;
using vk::VkPhysicalDeviceExternalImageFormatInfoKHR;
using vk::VkPhysicalDeviceExternalMemoryHostPropertiesEXT;
using vk::VkPhysicalDeviceExternalSemaphoreInfo;
using vk::VkPhysicalDeviceExternalSemaphoreInfoKHR;
using vk::VkPhysicalDeviceFeatures;
using vk::VkPhysicalDeviceFeatures2;
using vk::VkPhysicalDeviceFeatures2KHR;
using vk::VkPhysicalDeviceFloat16Int8FeaturesKHR;
using vk::VkPhysicalDeviceFloatControlsPropertiesKHR;
using vk::VkPhysicalDeviceFragmentDensityMapFeaturesEXT;
using vk::VkPhysicalDeviceFragmentDensityMapPropertiesEXT;
using vk::VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV;
using vk::VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT;
using vk::VkPhysicalDeviceGroupProperties;
using vk::VkPhysicalDeviceGroupPropertiesKHR;
using vk::VkPhysicalDeviceHostQueryResetFeaturesEXT;
using vk::VkPhysicalDeviceIDProperties;
using vk::VkPhysicalDeviceIDPropertiesKHR;
using vk::VkPhysicalDeviceImageDrmFormatModifierInfoEXT;
using vk::VkPhysicalDeviceImageFormatInfo2;
using vk::VkPhysicalDeviceImageFormatInfo2KHR;
using vk::VkPhysicalDeviceImagelessFramebufferFeaturesKHR;
using vk::VkPhysicalDeviceImageViewImageFormatInfoEXT;
using vk::VkPhysicalDeviceIndexTypeUint8FeaturesEXT;
using vk::VkPhysicalDeviceInlineUniformBlockFeaturesEXT;
using vk::VkPhysicalDeviceInlineUniformBlockPropertiesEXT;
using vk::VkPhysicalDeviceLimits;
using vk::VkPhysicalDeviceLineRasterizationFeaturesEXT;
using vk::VkPhysicalDeviceLineRasterizationPropertiesEXT;
using vk::VkPhysicalDeviceMaintenance3Properties;
using vk::VkPhysicalDeviceMaintenance3PropertiesKHR;
using vk::VkPhysicalDeviceMemoryBudgetPropertiesEXT;
using vk::VkPhysicalDeviceMemoryPriorityFeaturesEXT;
using vk::VkPhysicalDeviceMemoryProperties;
using vk::VkPhysicalDeviceMemoryProperties2;
using vk::VkPhysicalDeviceMemoryProperties2KHR;
using vk::VkPhysicalDeviceMeshShaderFeaturesNV;
using vk::VkPhysicalDeviceMeshShaderPropertiesNV;
using vk::VkPhysicalDeviceMultiviewFeatures;
using vk::VkPhysicalDeviceMultiviewFeaturesKHR;
using vk::VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX;
using vk::VkPhysicalDeviceMultiviewProperties;
using vk::VkPhysicalDeviceMultiviewPropertiesKHR;
using vk::VkPhysicalDevicePCIBusInfoPropertiesEXT;
using vk::VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR;
using vk::VkPhysicalDevicePointClippingProperties;
using vk::VkPhysicalDevicePointClippingPropertiesKHR;
using vk::VkPhysicalDeviceProperties;
using vk::VkPhysicalDeviceProperties2;
using vk::VkPhysicalDeviceProperties2KHR;
using vk::VkPhysicalDeviceProtectedMemoryFeatures;
using vk::VkPhysicalDeviceProtectedMemoryProperties;
using vk::VkPhysicalDevicePushDescriptorPropertiesKHR;
using vk::VkPhysicalDeviceRayTracingPropertiesNV;
using vk::VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV;
using vk::VkPhysicalDeviceSampleLocationsPropertiesEXT;
using vk::VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT;
using vk::VkPhysicalDeviceSamplerYcbcrConversionFeatures;
using vk::VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR;
using vk::VkPhysicalDeviceScalarBlockLayoutFeaturesEXT;
using vk::VkPhysicalDeviceShaderAtomicInt64FeaturesKHR;
using vk::VkPhysicalDeviceShaderCoreProperties2AMD;
using vk::VkPhysicalDeviceShaderCorePropertiesAMD;
using vk::VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT;
using vk::VkPhysicalDeviceShaderDrawParameterFeatures;
using vk::VkPhysicalDeviceShaderDrawParametersFeatures;
using vk::VkPhysicalDeviceShaderFloat16Int8FeaturesKHR;
using vk::VkPhysicalDeviceShaderImageFootprintFeaturesNV;
using vk::VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL;
using vk::VkPhysicalDeviceShaderSMBuiltinsFeaturesNV;
using vk::VkPhysicalDeviceShaderSMBuiltinsPropertiesNV;
using vk::VkPhysicalDeviceShadingRateImageFeaturesNV;
using vk::VkPhysicalDeviceShadingRateImagePropertiesNV;
using vk::VkPhysicalDeviceSparseImageFormatInfo2;
using vk::VkPhysicalDeviceSparseImageFormatInfo2KHR;
using vk::VkPhysicalDeviceSparseProperties;
using vk::VkPhysicalDeviceSubgroupProperties;
using vk::VkPhysicalDeviceSubgroupSizeControlFeaturesEXT;
using vk::VkPhysicalDeviceSubgroupSizeControlPropertiesEXT;
using vk::VkPhysicalDeviceSurfaceInfo2KHR;
using vk::VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT;
using vk::VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT;
using vk::VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT;
using vk::VkPhysicalDeviceTransformFeedbackFeaturesEXT;
using vk::VkPhysicalDeviceTransformFeedbackPropertiesEXT;
using vk::VkPhysicalDeviceType;
using vk::VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR;
using vk::VkPhysicalDeviceVariablePointerFeatures;
using vk::VkPhysicalDeviceVariablePointersFeatures;
using vk::VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT;
using vk::VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT;
using vk::VkPhysicalDeviceVulkanMemoryModelFeaturesKHR;
using vk::VkPhysicalDeviceYcbcrImageArraysFeaturesEXT;
using vk::VkPipeline;
using vk::VkPipelineBindPoint;
using vk::VkPipelineCache;
using vk::VkPipelineCacheCreateFlags;
using vk::VkPipelineCacheCreateInfo;
using vk::VkPipelineCacheHeaderVersion;
using vk::VkPipelineColorBlendAdvancedStateCreateInfoEXT;
using vk::VkPipelineColorBlendAttachmentState;
using vk::VkPipelineColorBlendStateCreateFlags;
using vk::VkPipelineColorBlendStateCreateInfo;
using vk::VkPipelineCompilerControlCreateInfoAMD;
using vk::VkPipelineCompilerControlFlagBitsAMD;
using vk::VkPipelineCompilerControlFlagsAMD;
using vk::VkPipelineCoverageModulationStateCreateFlagsNV;
using vk::VkPipelineCoverageModulationStateCreateInfoNV;
using vk::VkPipelineCoverageReductionStateCreateFlagsNV;
using vk::VkPipelineCoverageReductionStateCreateInfoNV;
using vk::VkPipelineCoverageToColorStateCreateFlagsNV;
using vk::VkPipelineCoverageToColorStateCreateInfoNV;
using vk::VkPipelineCreateFlags;
using vk::VkPipelineCreationFeedbackCreateInfoEXT;
using vk::VkPipelineCreationFeedbackEXT;
using vk::VkPipelineCreationFeedbackFlagBitsEXT;
using vk::VkPipelineCreationFeedbackFlagsEXT;
using vk::VkPipelineDepthStencilStateCreateFlags;
using vk::VkPipelineDepthStencilStateCreateInfo;
using vk::VkPipelineDiscardRectangleStateCreateFlagsEXT;
using vk::VkPipelineDiscardRectangleStateCreateInfoEXT;
using vk::VkPipelineDynamicStateCreateFlags;
using vk::VkPipelineDynamicStateCreateInfo;
using vk::VkPipelineExecutableInfoKHR;
using vk::VkPipelineExecutableInternalRepresentationKHR;
using vk::VkPipelineExecutablePropertiesKHR;
using vk::VkPipelineExecutableStatisticFormatKHR;
using vk::VkPipelineExecutableStatisticKHR;
using vk::VkPipelineExecutableStatisticValueKHR;
using vk::VkPipelineInfoKHR;
using vk::VkPipelineInputAssemblyStateCreateFlags;
using vk::VkPipelineInputAssemblyStateCreateInfo;
using vk::VkPipelineLayout;
using vk::VkPipelineLayoutCreateFlags;
using vk::VkPipelineLayoutCreateInfo;
using vk::VkPipelineMultisampleStateCreateFlags;
using vk::VkPipelineMultisampleStateCreateInfo;
using vk::VkPipelineRasterizationConservativeStateCreateFlagsEXT;
using vk::VkPipelineRasterizationConservativeStateCreateInfoEXT;
using vk::VkPipelineRasterizationDepthClipStateCreateFlagsEXT;
using vk::VkPipelineRasterizationDepthClipStateCreateInfoEXT;
using vk::VkPipelineRasterizationLineStateCreateInfoEXT;
using vk::VkPipelineRasterizationStateCreateFlags;
using vk::VkPipelineRasterizationStateCreateInfo;
using vk::VkPipelineRasterizationStateRasterizationOrderAMD;
using vk::VkPipelineRasterizationStateStreamCreateFlagsEXT;
using vk::VkPipelineRasterizationStateStreamCreateInfoEXT;
using vk::VkPipelineRepresentativeFragmentTestStateCreateInfoNV;
using vk::VkPipelineSampleLocationsStateCreateInfoEXT;
using vk::VkPipelineShaderStageCreateFlags;
using vk::VkPipelineShaderStageCreateInfo;
using vk::VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT;
using vk::VkPipelineStageFlagBits;
using vk::VkPipelineStageFlags;
using vk::VkPipelineTessellationDomainOriginStateCreateInfo;
using vk::VkPipelineTessellationDomainOriginStateCreateInfoKHR;
using vk::VkPipelineTessellationStateCreateFlags;
using vk::VkPipelineTessellationStateCreateInfo;
using vk::VkPipelineVertexInputDivisorStateCreateInfoEXT;
using vk::VkPipelineVertexInputStateCreateFlags;
using vk::VkPipelineVertexInputStateCreateInfo;
using vk::VkPipelineViewportCoarseSampleOrderStateCreateInfoNV;
using vk::VkPipelineViewportExclusiveScissorStateCreateInfoNV;
using vk::VkPipelineViewportShadingRateImageStateCreateInfoNV;
using vk::VkPipelineViewportStateCreateFlags;
using vk::VkPipelineViewportStateCreateInfo;
using vk::VkPipelineViewportSwizzleStateCreateFlagsNV;
using vk::VkPipelineViewportSwizzleStateCreateInfoNV;
using vk::VkPipelineViewportWScalingStateCreateInfoNV;
using vk::VkPointClippingBehavior;
using vk::VkPointClippingBehaviorKHR;
using vk::VkPolygonMode;
using vk::VkPresentInfoKHR;
using vk::VkPresentModeKHR;
using vk::VkPresentRegionKHR;
using vk::VkPresentRegionsKHR;
using vk::VkPresentTimeGOOGLE;
using vk::VkPresentTimesInfoGOOGLE;
using vk::VkPrimitiveTopology;
using vk::VkProtectedSubmitInfo;
using vk::VkPushConstantRange;
using vk::VkQueryControlFlags;
using vk::VkQueryPipelineStatisticFlags;
using vk::VkQueryPool;
using vk::VkQueryPoolCreateFlags;
using vk::VkQueryPoolCreateInfo;
using vk::VkQueryPoolCreateInfoINTEL;
using vk::VkQueryPoolSamplingModeINTEL;
using vk::VkQueryResultFlags;
using vk::VkQueryType;
using vk::VkQueue;
using vk::VkQueueFamilyCheckpointPropertiesNV;
using vk::VkQueueFamilyProperties;
using vk::VkQueueFamilyProperties2;
using vk::VkQueueFamilyProperties2KHR;
using vk::VkQueueFlags;
using vk::VkQueueGlobalPriorityEXT;
using vk::VkRasterizationOrderAMD;
using vk::VkRayTracingPipelineCreateInfoNV;
using vk::VkRayTracingShaderGroupCreateInfoNV;
using vk::VkRayTracingShaderGroupTypeNV;
using vk::VkRect2D;
using vk::VkRectLayerKHR;
using vk::VkRefreshCycleDurationGOOGLE;
using vk::VkRenderPass;
using vk::VkRenderPassAttachmentBeginInfoKHR;
using vk::VkRenderPassBeginInfo;
using vk::VkRenderPassCreateFlags;
using vk::VkRenderPassCreateInfo;
using vk::VkRenderPassCreateInfo2KHR;
using vk::VkRenderPassFragmentDensityMapCreateInfoEXT;
using vk::VkRenderPassInputAttachmentAspectCreateInfo;
using vk::VkRenderPassInputAttachmentAspectCreateInfoKHR;
using vk::VkRenderPassMultiviewCreateInfo;
using vk::VkRenderPassMultiviewCreateInfoKHR;
using vk::VkRenderPassSampleLocationsBeginInfoEXT;
using vk::VkResolveModeFlagBitsKHR;
using vk::VkResolveModeFlagsKHR;
using vk::VkResult;
using vk::VkSampleCountFlagBits;
using vk::VkSampleCountFlags;
using vk::VkSampleLocationEXT;
using vk::VkSampleLocationsInfoEXT;
using vk::VkSampleMask;
using vk::VkSampleMask;
using vk::VkSampler;
using vk::VkSamplerAddressMode;
using vk::VkSamplerCreateFlags;
using vk::VkSamplerCreateInfo;
using vk::VkSamplerMipmapMode;
using vk::VkSamplerReductionModeCreateInfoEXT;
using vk::VkSamplerReductionModeEXT;
using vk::VkSamplerYcbcrConversion;
using vk::VkSamplerYcbcrConversionCreateInfo;
using vk::VkSamplerYcbcrConversionCreateInfoKHR;
using vk::VkSamplerYcbcrConversionImageFormatProperties;
using vk::VkSamplerYcbcrConversionImageFormatPropertiesKHR;
using vk::VkSamplerYcbcrConversionInfo;
using vk::VkSamplerYcbcrConversionInfoKHR;
using vk::VkSamplerYcbcrModelConversion;
using vk::VkSamplerYcbcrModelConversionKHR;
using vk::VkSamplerYcbcrRange;
using vk::VkSamplerYcbcrRangeKHR;
using vk::VkScopeNV;
using vk::VkSemaphore;
using vk::VkSemaphoreCreateFlags;
using vk::VkSemaphoreCreateInfo;
using vk::VkSemaphoreGetFdInfoKHR;
using vk::VkSemaphoreImportFlagBits;
using vk::VkSemaphoreImportFlagBitsKHR;
using vk::VkSemaphoreImportFlags;
using vk::VkSemaphoreImportFlagsKHR;
using vk::VkShaderCorePropertiesFlagBitsAMD;
using vk::VkShaderCorePropertiesFlagsAMD;
using vk::VkShaderFloatControlsIndependenceKHR;
using vk::VkShaderInfoTypeAMD;
using vk::VkShaderModule;
using vk::VkShaderModuleCreateFlags;
using vk::VkShaderModuleCreateInfo;
using vk::VkShaderModuleValidationCacheCreateInfoEXT;
using vk::VkShaderResourceUsageAMD;
using vk::VkShaderStageFlagBits;
using vk::VkShaderStageFlags;
using vk::VkShaderStatisticsInfoAMD;
using vk::VkShadingRatePaletteEntryNV;
using vk::VkShadingRatePaletteNV;
using vk::VkSharedPresentSurfaceCapabilitiesKHR;
using vk::VkSharingMode;
using vk::VkSparseBufferMemoryBindInfo;
using vk::VkSparseImageFormatFlags;
using vk::VkSparseImageFormatProperties;
using vk::VkSparseImageFormatProperties2;
using vk::VkSparseImageFormatProperties2KHR;
using vk::VkSparseImageMemoryBind;
using vk::VkSparseImageMemoryBindInfo;
using vk::VkSparseImageMemoryRequirements;
using vk::VkSparseImageMemoryRequirements2;
using vk::VkSparseImageMemoryRequirements2KHR;
using vk::VkSparseImageOpaqueMemoryBindInfo;
using vk::VkSparseMemoryBind;
using vk::VkSparseMemoryBindFlags;
using vk::VkSpecializationInfo;
using vk::VkSpecializationMapEntry;
using vk::VkStencilFaceFlags;
using vk::VkStencilOp;
using vk::VkStencilOpState;
using vk::VkStructureType;
using vk::VkSubgroupFeatureFlagBits;
using vk::VkSubgroupFeatureFlags;
using vk::VkSubmitInfo;
using vk::VkSubpassBeginInfoKHR;
using vk::VkSubpassContents;
using vk::VkSubpassDependency;
using vk::VkSubpassDependency2KHR;
using vk::VkSubpassDescription;
using vk::VkSubpassDescription2KHR;
using vk::VkSubpassDescriptionDepthStencilResolveKHR;
using vk::VkSubpassDescriptionFlags;
using vk::VkSubpassEndInfoKHR;
using vk::VkSubpassSampleLocationsEXT;
using vk::VkSubresourceLayout;
using vk::VkSurfaceCapabilities2EXT;
using vk::VkSurfaceCapabilities2KHR;
using vk::VkSurfaceCapabilitiesKHR;
using vk::VkSurfaceCounterFlagBitsEXT;
using vk::VkSurfaceCounterFlagsEXT;
using vk::VkSurfaceFormat2KHR;
using vk::VkSurfaceFormatKHR;
using vk::VkSurfaceKHR;
using vk::VkSurfaceProtectedCapabilitiesKHR;
using vk::VkSurfaceTransformFlagBitsKHR;
using vk::VkSurfaceTransformFlagsKHR;
using vk::VkSwapchainCounterCreateInfoEXT;
using vk::VkSwapchainCreateFlagsKHR;
using vk::VkSwapchainCreateInfoKHR;
using vk::VkSwapchainDisplayNativeHdrCreateInfoAMD;
using vk::VkSwapchainKHR;
using vk::VkSystemAllocationScope;
using vk::VkTessellationDomainOrigin;
using vk::VkTessellationDomainOriginKHR;
using vk::VkTextureLODGatherFormatPropertiesAMD;
using vk::VkTimeDomainEXT;
using vk::VkValidationCacheCreateFlagsEXT;
using vk::VkValidationCacheCreateInfoEXT;
using vk::VkValidationCacheEXT;
using vk::VkValidationCacheHeaderVersionEXT;
using vk::VkValidationFeaturesEXT;
using vk::VkValidationFlagsEXT;
using vk::VkVendorId;
using vk::VkVertexInputAttributeDescription;
using vk::VkVertexInputBindingDescription;
using vk::VkVertexInputBindingDivisorDescriptionEXT;
using vk::VkVertexInputRate;
using vk::VkViewport;
using vk::VkViewportCoordinateSwizzleNV;
using vk::VkViewportSwizzleNV;
using vk::VkViewportWScalingNV;
using vk::VkWriteDescriptorSet;
using vk::VkWriteDescriptorSetAccelerationStructureNV;
using vk::VkWriteDescriptorSetInlineUniformBlockEXT;
using vk::VkXYColorEXT;


} // namespace vk11