
#include "Meta_Maps.h"

#include <vkbinding/vk/extension.h>


using namespace vk;


namespace vkbinding { namespace aux
{


const std::unordered_map<VKextension, std::set<std::string>> Meta_FunctionStringsByExtension =
{
    { VKextension::VK_AMD_buffer_marker, { "vkCmdWriteBufferMarkerAMD" } },
    { VKextension::VK_AMD_display_native_hdr, { "vkSetLocalDimmingAMD" } },
    { VKextension::VK_AMD_draw_indirect_count, { "vkCmdDrawIndexedIndirectCountAMD", "vkCmdDrawIndirectCountAMD" } },
    { VKextension::VK_AMD_shader_info, { "vkGetShaderInfoAMD" } },
    { VKextension::VK_EXT_buffer_device_address, { "vkGetBufferDeviceAddressEXT" } },
    { VKextension::VK_EXT_calibrated_timestamps, { "vkGetCalibratedTimestampsEXT", "vkGetPhysicalDeviceCalibrateableTimeDomainsEXT" } },
    { VKextension::VK_EXT_conditional_rendering, { "vkCmdBeginConditionalRenderingEXT", "vkCmdEndConditionalRenderingEXT" } },
    { VKextension::VK_EXT_debug_marker, { "vkCmdDebugMarkerBeginEXT", "vkCmdDebugMarkerEndEXT", "vkCmdDebugMarkerInsertEXT", "vkDebugMarkerSetObjectNameEXT", "vkDebugMarkerSetObjectTagEXT" } },
    { VKextension::VK_EXT_debug_report, { "vkCreateDebugReportCallbackEXT", "vkDebugReportMessageEXT", "vkDestroyDebugReportCallbackEXT" } },
    { VKextension::VK_EXT_debug_utils, { "vkCmdBeginDebugUtilsLabelEXT", "vkCmdEndDebugUtilsLabelEXT", "vkCmdInsertDebugUtilsLabelEXT", "vkCreateDebugUtilsMessengerEXT", "vkDestroyDebugUtilsMessengerEXT", "vkQueueBeginDebugUtilsLabelEXT", "vkQueueEndDebugUtilsLabelEXT", "vkQueueInsertDebugUtilsLabelEXT", "vkSetDebugUtilsObjectNameEXT", "vkSetDebugUtilsObjectTagEXT", "vkSubmitDebugUtilsMessageEXT" } },
    { VKextension::VK_EXT_direct_mode_display, { "vkReleaseDisplayEXT" } },
    { VKextension::VK_EXT_discard_rectangles, { "vkCmdSetDiscardRectangleEXT" } },
    { VKextension::VK_EXT_display_control, { "vkDisplayPowerControlEXT", "vkGetSwapchainCounterEXT", "vkRegisterDeviceEventEXT", "vkRegisterDisplayEventEXT" } },
    { VKextension::VK_EXT_display_surface_counter, { "vkGetPhysicalDeviceSurfaceCapabilities2EXT" } },
    { VKextension::VK_EXT_external_memory_host, { "vkGetMemoryHostPointerPropertiesEXT" } },
    { VKextension::VK_EXT_hdr_metadata, { "vkSetHdrMetadataEXT" } },
    { VKextension::VK_EXT_headless_surface, { "vkCreateHeadlessSurfaceEXT" } },
    { VKextension::VK_EXT_host_query_reset, { "vkResetQueryPoolEXT" } },
    { VKextension::VK_EXT_image_drm_format_modifier, { "vkGetImageDrmFormatModifierPropertiesEXT" } },
    { VKextension::VK_EXT_line_rasterization, { "vkCmdSetLineStippleEXT" } },
    { VKextension::VK_EXT_sample_locations, { "vkCmdSetSampleLocationsEXT", "vkGetPhysicalDeviceMultisamplePropertiesEXT" } },
    { VKextension::VK_EXT_transform_feedback, { "vkCmdBeginQueryIndexedEXT", "vkCmdBeginTransformFeedbackEXT", "vkCmdBindTransformFeedbackBuffersEXT", "vkCmdDrawIndirectByteCountEXT", "vkCmdEndQueryIndexedEXT", "vkCmdEndTransformFeedbackEXT" } },
    { VKextension::VK_EXT_validation_cache, { "vkCreateValidationCacheEXT", "vkDestroyValidationCacheEXT", "vkGetValidationCacheDataEXT", "vkMergeValidationCachesEXT" } },
    { VKextension::VK_GOOGLE_display_timing, { "vkGetPastPresentationTimingGOOGLE", "vkGetRefreshCycleDurationGOOGLE" } },
    { VKextension::VK_INTEL_performance_query, { "vkAcquirePerformanceConfigurationINTEL", "vkCmdSetPerformanceMarkerINTEL", "vkCmdSetPerformanceOverrideINTEL", "vkCmdSetPerformanceStreamMarkerINTEL", "vkGetPerformanceParameterINTEL", "vkInitializePerformanceApiINTEL", "vkQueueSetPerformanceConfigurationINTEL", "vkReleasePerformanceConfigurationINTEL", "vkUninitializePerformanceApiINTEL" } },
    { VKextension::VK_KHR_bind_memory2, { "vkBindBufferMemory2KHR", "vkBindImageMemory2KHR" } },
    { VKextension::VK_KHR_create_renderpass2, { "vkCmdBeginRenderPass2KHR", "vkCmdEndRenderPass2KHR", "vkCmdNextSubpass2KHR", "vkCreateRenderPass2KHR" } },
    { VKextension::VK_KHR_descriptor_update_template, { "vkCmdPushDescriptorSetWithTemplateKHR", "vkCreateDescriptorUpdateTemplateKHR", "vkDestroyDescriptorUpdateTemplateKHR", "vkUpdateDescriptorSetWithTemplateKHR" } },
    { VKextension::VK_KHR_device_group, { "vkAcquireNextImage2KHR", "vkCmdDispatchBaseKHR", "vkCmdSetDeviceMaskKHR", "vkGetDeviceGroupPeerMemoryFeaturesKHR", "vkGetDeviceGroupPresentCapabilitiesKHR", "vkGetDeviceGroupSurfacePresentModesKHR", "vkGetPhysicalDevicePresentRectanglesKHR" } },
    { VKextension::VK_KHR_device_group_creation, { "vkEnumeratePhysicalDeviceGroupsKHR" } },
    { VKextension::VK_KHR_display, { "vkCreateDisplayModeKHR", "vkCreateDisplayPlaneSurfaceKHR", "vkGetDisplayModePropertiesKHR", "vkGetDisplayPlaneCapabilitiesKHR", "vkGetDisplayPlaneSupportedDisplaysKHR", "vkGetPhysicalDeviceDisplayPlanePropertiesKHR", "vkGetPhysicalDeviceDisplayPropertiesKHR" } },
    { VKextension::VK_KHR_display_swapchain, { "vkCreateSharedSwapchainsKHR" } },
    { VKextension::VK_KHR_draw_indirect_count, { "vkCmdDrawIndexedIndirectCountKHR", "vkCmdDrawIndirectCountKHR" } },
    { VKextension::VK_KHR_external_fence_capabilities, { "vkGetPhysicalDeviceExternalFencePropertiesKHR" } },
    { VKextension::VK_KHR_external_fence_fd, { "vkGetFenceFdKHR", "vkImportFenceFdKHR" } },
    { VKextension::VK_KHR_external_memory_capabilities, { "vkGetPhysicalDeviceExternalBufferPropertiesKHR" } },
    { VKextension::VK_KHR_external_memory_fd, { "vkGetMemoryFdKHR", "vkGetMemoryFdPropertiesKHR" } },
    { VKextension::VK_KHR_external_semaphore_capabilities, { "vkGetPhysicalDeviceExternalSemaphorePropertiesKHR" } },
    { VKextension::VK_KHR_external_semaphore_fd, { "vkGetSemaphoreFdKHR", "vkImportSemaphoreFdKHR" } },
    { VKextension::VK_KHR_get_display_properties2, { "vkGetDisplayModeProperties2KHR", "vkGetDisplayPlaneCapabilities2KHR", "vkGetPhysicalDeviceDisplayPlaneProperties2KHR", "vkGetPhysicalDeviceDisplayProperties2KHR" } },
    { VKextension::VK_KHR_get_memory_requirements2, { "vkGetBufferMemoryRequirements2KHR", "vkGetImageMemoryRequirements2KHR", "vkGetImageSparseMemoryRequirements2KHR" } },
    { VKextension::VK_KHR_get_physical_device_properties2, { "vkGetPhysicalDeviceFeatures2KHR", "vkGetPhysicalDeviceFormatProperties2KHR", "vkGetPhysicalDeviceImageFormatProperties2KHR", "vkGetPhysicalDeviceMemoryProperties2KHR", "vkGetPhysicalDeviceProperties2KHR", "vkGetPhysicalDeviceQueueFamilyProperties2KHR", "vkGetPhysicalDeviceSparseImageFormatProperties2KHR" } },
    { VKextension::VK_KHR_get_surface_capabilities2, { "vkGetPhysicalDeviceSurfaceCapabilities2KHR", "vkGetPhysicalDeviceSurfaceFormats2KHR" } },
    { VKextension::VK_KHR_maintenance1, { "vkTrimCommandPoolKHR" } },
    { VKextension::VK_KHR_maintenance3, { "vkGetDescriptorSetLayoutSupportKHR" } },
    { VKextension::VK_KHR_push_descriptor, { "vkCmdPushDescriptorSetKHR", "vkCmdPushDescriptorSetWithTemplateKHR" } },
    { VKextension::VK_KHR_sampler_ycbcr_conversion, { "vkCreateSamplerYcbcrConversionKHR", "vkDestroySamplerYcbcrConversionKHR" } },
    { VKextension::VK_KHR_shared_presentable_image, { "vkGetSwapchainStatusKHR" } },
    { VKextension::VK_KHR_surface, { "vkDestroySurfaceKHR", "vkGetPhysicalDeviceSurfaceCapabilitiesKHR", "vkGetPhysicalDeviceSurfaceFormatsKHR", "vkGetPhysicalDeviceSurfacePresentModesKHR", "vkGetPhysicalDeviceSurfaceSupportKHR" } },
    { VKextension::VK_KHR_swapchain, { "vkAcquireNextImage2KHR", "vkAcquireNextImageKHR", "vkCreateSwapchainKHR", "vkDestroySwapchainKHR", "vkGetDeviceGroupPresentCapabilitiesKHR", "vkGetDeviceGroupSurfacePresentModesKHR", "vkGetPhysicalDevicePresentRectanglesKHR", "vkGetSwapchainImagesKHR", "vkQueuePresentKHR" } },
    { VKextension::VK_NV_clip_space_w_scaling, { "vkCmdSetViewportWScalingNV" } },
    { VKextension::VK_NV_cooperative_matrix, { "vkGetPhysicalDeviceCooperativeMatrixPropertiesNV" } },
    { VKextension::VK_NV_coverage_reduction_mode, { "vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV" } },
    { VKextension::VK_NV_device_diagnostic_checkpoints, { "vkCmdSetCheckpointNV", "vkGetQueueCheckpointDataNV" } },
    { VKextension::VK_NV_external_memory_capabilities, { "vkGetPhysicalDeviceExternalImageFormatPropertiesNV" } },
    { VKextension::VK_NV_mesh_shader, { "vkCmdDrawMeshTasksIndirectCountNV", "vkCmdDrawMeshTasksIndirectNV", "vkCmdDrawMeshTasksNV" } },
    { VKextension::VK_NV_ray_tracing, { "vkBindAccelerationStructureMemoryNV", "vkCmdBuildAccelerationStructureNV", "vkCmdCopyAccelerationStructureNV", "vkCmdTraceRaysNV", "vkCmdWriteAccelerationStructuresPropertiesNV", "vkCompileDeferredNV", "vkCreateAccelerationStructureNV", "vkCreateRayTracingPipelinesNV", "vkDestroyAccelerationStructureNV", "vkGetAccelerationStructureHandleNV", "vkGetAccelerationStructureMemoryRequirementsNV", "vkGetRayTracingShaderGroupHandlesNV" } },
    { VKextension::VK_NV_scissor_exclusive, { "vkCmdSetExclusiveScissorNV" } },
    { VKextension::VK_NV_shading_rate_image, { "vkCmdBindShadingRateImageNV", "vkCmdSetCoarseSampleOrderNV", "vkCmdSetViewportShadingRatePaletteNV" } },
    { VKextension::VK_NVX_device_generated_commands, { "vkCmdProcessCommandsNVX", "vkCmdReserveSpaceForCommandsNVX", "vkCreateIndirectCommandsLayoutNVX", "vkCreateObjectTableNVX", "vkDestroyIndirectCommandsLayoutNVX", "vkDestroyObjectTableNVX", "vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX", "vkRegisterObjectsNVX", "vkUnregisterObjectsNVX" } },
    { VKextension::VK_NVX_image_view_handle, { "vkGetImageViewHandleNVX" } },
};


} } // namespace vkbinding::aux