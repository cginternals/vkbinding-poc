
#pragma once


#include <vkbinding/novk.h>
#include <vkbinding/vk/functions.h>


namespace vk10ext
{

// import functions
using vk::vkAcquireFullScreenExclusiveModeEXT;
using vk::vkAcquireImageANDROID;
using vk::vkAcquireNextImage2KHR;
using vk::vkAcquireNextImageKHR;
using vk::vkAcquirePerformanceConfigurationINTEL;
using vk::vkAcquireXlibDisplayEXT;
using vk::vkBindAccelerationStructureMemoryNV;
using vk::vkBindBufferMemory2;
using vk::vkBindBufferMemory2KHR;
using vk::vkBindImageMemory2;
using vk::vkBindImageMemory2KHR;
using vk::vkCmdBeginConditionalRenderingEXT;
using vk::vkCmdBeginDebugUtilsLabelEXT;
using vk::vkCmdBeginQueryIndexedEXT;
using vk::vkCmdBeginRenderPass2KHR;
using vk::vkCmdBeginTransformFeedbackEXT;
using vk::vkCmdBindShadingRateImageNV;
using vk::vkCmdBindTransformFeedbackBuffersEXT;
using vk::vkCmdBuildAccelerationStructureNV;
using vk::vkCmdCopyAccelerationStructureNV;
using vk::vkCmdDebugMarkerBeginEXT;
using vk::vkCmdDebugMarkerEndEXT;
using vk::vkCmdDebugMarkerInsertEXT;
using vk::vkCmdDispatchBase;
using vk::vkCmdDispatchBaseKHR;
using vk::vkCmdDrawIndexedIndirectCountAMD;
using vk::vkCmdDrawIndexedIndirectCountKHR;
using vk::vkCmdDrawIndirectByteCountEXT;
using vk::vkCmdDrawIndirectCountAMD;
using vk::vkCmdDrawIndirectCountKHR;
using vk::vkCmdDrawMeshTasksIndirectCountNV;
using vk::vkCmdDrawMeshTasksIndirectNV;
using vk::vkCmdDrawMeshTasksNV;
using vk::vkCmdEndConditionalRenderingEXT;
using vk::vkCmdEndDebugUtilsLabelEXT;
using vk::vkCmdEndQueryIndexedEXT;
using vk::vkCmdEndRenderPass2KHR;
using vk::vkCmdEndTransformFeedbackEXT;
using vk::vkCmdInsertDebugUtilsLabelEXT;
using vk::vkCmdNextSubpass2KHR;
using vk::vkCmdProcessCommandsNVX;
using vk::vkCmdPushDescriptorSetKHR;
using vk::vkCmdPushDescriptorSetWithTemplateKHR;
using vk::vkCmdReserveSpaceForCommandsNVX;
using vk::vkCmdSetCheckpointNV;
using vk::vkCmdSetCoarseSampleOrderNV;
using vk::vkCmdSetDeviceMask;
using vk::vkCmdSetDeviceMaskKHR;
using vk::vkCmdSetDiscardRectangleEXT;
using vk::vkCmdSetExclusiveScissorNV;
using vk::vkCmdSetLineStippleEXT;
using vk::vkCmdSetPerformanceMarkerINTEL;
using vk::vkCmdSetPerformanceOverrideINTEL;
using vk::vkCmdSetPerformanceStreamMarkerINTEL;
using vk::vkCmdSetSampleLocationsEXT;
using vk::vkCmdSetViewportShadingRatePaletteNV;
using vk::vkCmdSetViewportWScalingNV;
using vk::vkCmdTraceRaysNV;
using vk::vkCmdWriteAccelerationStructuresPropertiesNV;
using vk::vkCmdWriteBufferMarkerAMD;
using vk::vkCompileDeferredNV;
using vk::vkCreateAccelerationStructureNV;
using vk::vkCreateAndroidSurfaceKHR;
using vk::vkCreateDebugReportCallbackEXT;
using vk::vkCreateDebugUtilsMessengerEXT;
using vk::vkCreateDescriptorUpdateTemplate;
using vk::vkCreateDescriptorUpdateTemplateKHR;
using vk::vkCreateDisplayModeKHR;
using vk::vkCreateDisplayPlaneSurfaceKHR;
using vk::vkCreateHeadlessSurfaceEXT;
using vk::vkCreateImagePipeSurfaceFUCHSIA;
using vk::vkCreateIndirectCommandsLayoutNVX;
using vk::vkCreateIOSSurfaceMVK;
using vk::vkCreateMacOSSurfaceMVK;
using vk::vkCreateMetalSurfaceEXT;
using vk::vkCreateObjectTableNVX;
using vk::vkCreateRayTracingPipelinesNV;
using vk::vkCreateRenderPass2KHR;
using vk::vkCreateSamplerYcbcrConversion;
using vk::vkCreateSamplerYcbcrConversionKHR;
using vk::vkCreateSharedSwapchainsKHR;
using vk::vkCreateStreamDescriptorSurfaceGGP;
using vk::vkCreateSwapchainKHR;
using vk::vkCreateValidationCacheEXT;
using vk::vkCreateViSurfaceNN;
using vk::vkCreateWaylandSurfaceKHR;
using vk::vkCreateWin32SurfaceKHR;
using vk::vkCreateXcbSurfaceKHR;
using vk::vkCreateXlibSurfaceKHR;
using vk::vkDebugMarkerSetObjectNameEXT;
using vk::vkDebugMarkerSetObjectTagEXT;
using vk::vkDebugReportMessageEXT;
using vk::vkDestroyAccelerationStructureNV;
using vk::vkDestroyDebugReportCallbackEXT;
using vk::vkDestroyDebugUtilsMessengerEXT;
using vk::vkDestroyDescriptorUpdateTemplate;
using vk::vkDestroyDescriptorUpdateTemplateKHR;
using vk::vkDestroyIndirectCommandsLayoutNVX;
using vk::vkDestroyObjectTableNVX;
using vk::vkDestroySamplerYcbcrConversion;
using vk::vkDestroySamplerYcbcrConversionKHR;
using vk::vkDestroySurfaceKHR;
using vk::vkDestroySwapchainKHR;
using vk::vkDestroyValidationCacheEXT;
using vk::vkDisplayPowerControlEXT;
using vk::vkEnumerateInstanceVersion;
using vk::vkEnumeratePhysicalDeviceGroups;
using vk::vkEnumeratePhysicalDeviceGroupsKHR;
using vk::vkGetAccelerationStructureHandleNV;
using vk::vkGetAccelerationStructureMemoryRequirementsNV;
using vk::vkGetAndroidHardwareBufferPropertiesANDROID;
using vk::vkGetBufferDeviceAddressEXT;
using vk::vkGetBufferMemoryRequirements2;
using vk::vkGetBufferMemoryRequirements2KHR;
using vk::vkGetCalibratedTimestampsEXT;
using vk::vkGetDescriptorSetLayoutSupport;
using vk::vkGetDescriptorSetLayoutSupportKHR;
using vk::vkGetDeviceGroupPeerMemoryFeatures;
using vk::vkGetDeviceGroupPeerMemoryFeaturesKHR;
using vk::vkGetDeviceGroupPresentCapabilitiesKHR;
using vk::vkGetDeviceGroupSurfacePresentModes2EXT;
using vk::vkGetDeviceGroupSurfacePresentModesKHR;
using vk::vkGetDeviceQueue2;
using vk::vkGetDisplayModeProperties2KHR;
using vk::vkGetDisplayModePropertiesKHR;
using vk::vkGetDisplayPlaneCapabilities2KHR;
using vk::vkGetDisplayPlaneCapabilitiesKHR;
using vk::vkGetDisplayPlaneSupportedDisplaysKHR;
using vk::vkGetFenceFdKHR;
using vk::vkGetFenceWin32HandleKHR;
using vk::vkGetImageDrmFormatModifierPropertiesEXT;
using vk::vkGetImageMemoryRequirements2;
using vk::vkGetImageMemoryRequirements2KHR;
using vk::vkGetImageSparseMemoryRequirements2;
using vk::vkGetImageSparseMemoryRequirements2KHR;
using vk::vkGetImageViewHandleNVX;
using vk::vkGetMemoryAndroidHardwareBufferANDROID;
using vk::vkGetMemoryFdKHR;
using vk::vkGetMemoryFdPropertiesKHR;
using vk::vkGetMemoryHostPointerPropertiesEXT;
using vk::vkGetMemoryWin32HandleKHR;
using vk::vkGetMemoryWin32HandleNV;
using vk::vkGetMemoryWin32HandlePropertiesKHR;
using vk::vkGetPastPresentationTimingGOOGLE;
using vk::vkGetPerformanceParameterINTEL;
using vk::vkGetPhysicalDeviceCalibrateableTimeDomainsEXT;
using vk::vkGetPhysicalDeviceCooperativeMatrixPropertiesNV;
using vk::vkGetPhysicalDeviceDisplayPlaneProperties2KHR;
using vk::vkGetPhysicalDeviceDisplayPlanePropertiesKHR;
using vk::vkGetPhysicalDeviceDisplayProperties2KHR;
using vk::vkGetPhysicalDeviceDisplayPropertiesKHR;
using vk::vkGetPhysicalDeviceExternalBufferProperties;
using vk::vkGetPhysicalDeviceExternalBufferPropertiesKHR;
using vk::vkGetPhysicalDeviceExternalFenceProperties;
using vk::vkGetPhysicalDeviceExternalFencePropertiesKHR;
using vk::vkGetPhysicalDeviceExternalImageFormatPropertiesNV;
using vk::vkGetPhysicalDeviceExternalSemaphoreProperties;
using vk::vkGetPhysicalDeviceExternalSemaphorePropertiesKHR;
using vk::vkGetPhysicalDeviceFeatures2;
using vk::vkGetPhysicalDeviceFeatures2KHR;
using vk::vkGetPhysicalDeviceFormatProperties2;
using vk::vkGetPhysicalDeviceFormatProperties2KHR;
using vk::vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX;
using vk::vkGetPhysicalDeviceImageFormatProperties2;
using vk::vkGetPhysicalDeviceImageFormatProperties2KHR;
using vk::vkGetPhysicalDeviceMemoryProperties2;
using vk::vkGetPhysicalDeviceMemoryProperties2KHR;
using vk::vkGetPhysicalDeviceMultisamplePropertiesEXT;
using vk::vkGetPhysicalDevicePresentRectanglesKHR;
using vk::vkGetPhysicalDeviceProperties2;
using vk::vkGetPhysicalDeviceProperties2KHR;
using vk::vkGetPhysicalDeviceQueueFamilyProperties2;
using vk::vkGetPhysicalDeviceQueueFamilyProperties2KHR;
using vk::vkGetPhysicalDeviceSparseImageFormatProperties2;
using vk::vkGetPhysicalDeviceSparseImageFormatProperties2KHR;
using vk::vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV;
using vk::vkGetPhysicalDeviceSurfaceCapabilities2EXT;
using vk::vkGetPhysicalDeviceSurfaceCapabilities2KHR;
using vk::vkGetPhysicalDeviceSurfaceCapabilitiesKHR;
using vk::vkGetPhysicalDeviceSurfaceFormats2KHR;
using vk::vkGetPhysicalDeviceSurfaceFormatsKHR;
using vk::vkGetPhysicalDeviceSurfacePresentModes2EXT;
using vk::vkGetPhysicalDeviceSurfacePresentModesKHR;
using vk::vkGetPhysicalDeviceSurfaceSupportKHR;
using vk::vkGetPhysicalDeviceWaylandPresentationSupportKHR;
using vk::vkGetPhysicalDeviceWin32PresentationSupportKHR;
using vk::vkGetPhysicalDeviceXcbPresentationSupportKHR;
using vk::vkGetPhysicalDeviceXlibPresentationSupportKHR;
using vk::vkGetQueueCheckpointDataNV;
using vk::vkGetRandROutputDisplayEXT;
using vk::vkGetRayTracingShaderGroupHandlesNV;
using vk::vkGetRefreshCycleDurationGOOGLE;
using vk::vkGetSemaphoreFdKHR;
using vk::vkGetSemaphoreWin32HandleKHR;
using vk::vkGetShaderInfoAMD;
using vk::vkGetSwapchainCounterEXT;
using vk::vkGetSwapchainGrallocUsage2ANDROID;
using vk::vkGetSwapchainGrallocUsageANDROID;
using vk::vkGetSwapchainImagesKHR;
using vk::vkGetSwapchainStatusKHR;
using vk::vkGetValidationCacheDataEXT;
using vk::vkImportFenceFdKHR;
using vk::vkImportFenceWin32HandleKHR;
using vk::vkImportSemaphoreFdKHR;
using vk::vkImportSemaphoreWin32HandleKHR;
using vk::vkInitializePerformanceApiINTEL;
using vk::vkMergeValidationCachesEXT;
using vk::vkQueueBeginDebugUtilsLabelEXT;
using vk::vkQueueEndDebugUtilsLabelEXT;
using vk::vkQueueInsertDebugUtilsLabelEXT;
using vk::vkQueuePresentKHR;
using vk::vkQueueSetPerformanceConfigurationINTEL;
using vk::vkQueueSignalReleaseImageANDROID;
using vk::vkRegisterDeviceEventEXT;
using vk::vkRegisterDisplayEventEXT;
using vk::vkRegisterObjectsNVX;
using vk::vkReleaseDisplayEXT;
using vk::vkReleaseFullScreenExclusiveModeEXT;
using vk::vkReleasePerformanceConfigurationINTEL;
using vk::vkResetQueryPoolEXT;
using vk::vkSetDebugUtilsObjectNameEXT;
using vk::vkSetDebugUtilsObjectTagEXT;
using vk::vkSetHdrMetadataEXT;
using vk::vkSetLocalDimmingAMD;
using vk::vkSubmitDebugUtilsMessageEXT;
using vk::vkTrimCommandPool;
using vk::vkTrimCommandPoolKHR;
using vk::vkUninitializePerformanceApiINTEL;
using vk::vkUnregisterObjectsNVX;
using vk::vkUpdateDescriptorSetWithTemplate;
using vk::vkUpdateDescriptorSetWithTemplateKHR;

} // namespace vk10ext