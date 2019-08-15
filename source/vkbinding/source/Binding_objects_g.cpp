
#include "Binding_pch.h"


using namespace vk;


namespace vkbinding
{


Function<VkResult, VkDevice, VkAccelerationStructureNV, size_t, void*> Binding::GetAccelerationStructureHandleNV("vkGetAccelerationStructureHandleNV");
Function<void, VkDevice, const VkAccelerationStructureMemoryRequirementsInfoNV*, VkMemoryRequirements2KHR*> Binding::GetAccelerationStructureMemoryRequirementsNV("vkGetAccelerationStructureMemoryRequirementsNV");
Function<VkResult, VkDevice, const struct AHardwareBuffer*, VkAndroidHardwareBufferPropertiesANDROID*> Binding::GetAndroidHardwareBufferPropertiesANDROID("vkGetAndroidHardwareBufferPropertiesANDROID");
Function<VkDeviceAddress, VkDevice, const VkBufferDeviceAddressInfoEXT*> Binding::GetBufferDeviceAddressEXT("vkGetBufferDeviceAddressEXT");
Function<void, VkDevice, VkBuffer, VkMemoryRequirements*> Binding::GetBufferMemoryRequirements("vkGetBufferMemoryRequirements");
Function<void, VkDevice, const VkBufferMemoryRequirementsInfo2*, VkMemoryRequirements2*> Binding::GetBufferMemoryRequirements2("vkGetBufferMemoryRequirements2");
Function<void, VkDevice, const VkBufferMemoryRequirementsInfo2*, VkMemoryRequirements2*> Binding::GetBufferMemoryRequirements2KHR("vkGetBufferMemoryRequirements2KHR");
Function<VkResult, VkDevice, uint32_t, const VkCalibratedTimestampInfoEXT*, uint64_t*, uint64_t*> Binding::GetCalibratedTimestampsEXT("vkGetCalibratedTimestampsEXT");
Function<void, VkDevice, const VkDescriptorSetLayoutCreateInfo*, VkDescriptorSetLayoutSupport*> Binding::GetDescriptorSetLayoutSupport("vkGetDescriptorSetLayoutSupport");
Function<void, VkDevice, const VkDescriptorSetLayoutCreateInfo*, VkDescriptorSetLayoutSupport*> Binding::GetDescriptorSetLayoutSupportKHR("vkGetDescriptorSetLayoutSupportKHR");
Function<void, VkDevice, uint32_t, uint32_t, uint32_t, VkPeerMemoryFeatureFlags*> Binding::GetDeviceGroupPeerMemoryFeatures("vkGetDeviceGroupPeerMemoryFeatures");
Function<void, VkDevice, uint32_t, uint32_t, uint32_t, VkPeerMemoryFeatureFlags*> Binding::GetDeviceGroupPeerMemoryFeaturesKHR("vkGetDeviceGroupPeerMemoryFeaturesKHR");
Function<VkResult, VkDevice, VkDeviceGroupPresentCapabilitiesKHR*> Binding::GetDeviceGroupPresentCapabilitiesKHR("vkGetDeviceGroupPresentCapabilitiesKHR");
Function<VkResult, VkDevice, const VkPhysicalDeviceSurfaceInfo2KHR*, VkDeviceGroupPresentModeFlagsKHR*> Binding::GetDeviceGroupSurfacePresentModes2EXT("vkGetDeviceGroupSurfacePresentModes2EXT");
Function<VkResult, VkDevice, VkSurfaceKHR, VkDeviceGroupPresentModeFlagsKHR*> Binding::GetDeviceGroupSurfacePresentModesKHR("vkGetDeviceGroupSurfacePresentModesKHR");
Function<void, VkDevice, VkDeviceMemory, VkDeviceSize*> Binding::GetDeviceMemoryCommitment("vkGetDeviceMemoryCommitment");
Function<PFN_vkVoidFunction, VkDevice, const char*> Binding::GetDeviceProcAddr("vkGetDeviceProcAddr");
Function<void, VkDevice, uint32_t, uint32_t, VkQueue*> Binding::GetDeviceQueue("vkGetDeviceQueue");
Function<void, VkDevice, const VkDeviceQueueInfo2*, VkQueue*> Binding::GetDeviceQueue2("vkGetDeviceQueue2");
Function<VkResult, VkPhysicalDevice, VkDisplayKHR, uint32_t*, VkDisplayModeProperties2KHR*> Binding::GetDisplayModeProperties2KHR("vkGetDisplayModeProperties2KHR");
Function<VkResult, VkPhysicalDevice, VkDisplayKHR, uint32_t*, VkDisplayModePropertiesKHR*> Binding::GetDisplayModePropertiesKHR("vkGetDisplayModePropertiesKHR");
Function<VkResult, VkPhysicalDevice, const VkDisplayPlaneInfo2KHR*, VkDisplayPlaneCapabilities2KHR*> Binding::GetDisplayPlaneCapabilities2KHR("vkGetDisplayPlaneCapabilities2KHR");
Function<VkResult, VkPhysicalDevice, VkDisplayModeKHR, uint32_t, VkDisplayPlaneCapabilitiesKHR*> Binding::GetDisplayPlaneCapabilitiesKHR("vkGetDisplayPlaneCapabilitiesKHR");
Function<VkResult, VkPhysicalDevice, uint32_t, uint32_t*, VkDisplayKHR*> Binding::GetDisplayPlaneSupportedDisplaysKHR("vkGetDisplayPlaneSupportedDisplaysKHR");
Function<VkResult, VkDevice, VkEvent> Binding::GetEventStatus("vkGetEventStatus");
Function<VkResult, VkDevice, const VkFenceGetFdInfoKHR*, int*> Binding::GetFenceFdKHR("vkGetFenceFdKHR");
Function<VkResult, VkDevice, VkFence> Binding::GetFenceStatus("vkGetFenceStatus");
Function<VkResult, VkDevice, const VkFenceGetWin32HandleInfoKHR*, HANDLE*> Binding::GetFenceWin32HandleKHR("vkGetFenceWin32HandleKHR");
Function<VkResult, VkDevice, VkImage, VkImageDrmFormatModifierPropertiesEXT*> Binding::GetImageDrmFormatModifierPropertiesEXT("vkGetImageDrmFormatModifierPropertiesEXT");
Function<void, VkDevice, VkImage, VkMemoryRequirements*> Binding::GetImageMemoryRequirements("vkGetImageMemoryRequirements");
Function<void, VkDevice, const VkImageMemoryRequirementsInfo2*, VkMemoryRequirements2*> Binding::GetImageMemoryRequirements2("vkGetImageMemoryRequirements2");
Function<void, VkDevice, const VkImageMemoryRequirementsInfo2*, VkMemoryRequirements2*> Binding::GetImageMemoryRequirements2KHR("vkGetImageMemoryRequirements2KHR");
Function<void, VkDevice, VkImage, uint32_t*, VkSparseImageMemoryRequirements*> Binding::GetImageSparseMemoryRequirements("vkGetImageSparseMemoryRequirements");
Function<void, VkDevice, const VkImageSparseMemoryRequirementsInfo2*, uint32_t*, VkSparseImageMemoryRequirements2*> Binding::GetImageSparseMemoryRequirements2("vkGetImageSparseMemoryRequirements2");
Function<void, VkDevice, const VkImageSparseMemoryRequirementsInfo2*, uint32_t*, VkSparseImageMemoryRequirements2*> Binding::GetImageSparseMemoryRequirements2KHR("vkGetImageSparseMemoryRequirements2KHR");
Function<void, VkDevice, VkImage, const VkImageSubresource*, VkSubresourceLayout*> Binding::GetImageSubresourceLayout("vkGetImageSubresourceLayout");
Function<uint32_t, VkDevice, const VkImageViewHandleInfoNVX*> Binding::GetImageViewHandleNVX("vkGetImageViewHandleNVX");
Function<PFN_vkVoidFunction, VkInstance, const char*> Binding::GetInstanceProcAddr("vkGetInstanceProcAddr");
Function<VkResult, VkDevice, const VkMemoryGetAndroidHardwareBufferInfoANDROID*, struct AHardwareBuffer**> Binding::GetMemoryAndroidHardwareBufferANDROID("vkGetMemoryAndroidHardwareBufferANDROID");
Function<VkResult, VkDevice, const VkMemoryGetFdInfoKHR*, int*> Binding::GetMemoryFdKHR("vkGetMemoryFdKHR");
Function<VkResult, VkDevice, VkExternalMemoryHandleTypeFlagBits, int, VkMemoryFdPropertiesKHR*> Binding::GetMemoryFdPropertiesKHR("vkGetMemoryFdPropertiesKHR");
Function<VkResult, VkDevice, VkExternalMemoryHandleTypeFlagBits, const void*, VkMemoryHostPointerPropertiesEXT*> Binding::GetMemoryHostPointerPropertiesEXT("vkGetMemoryHostPointerPropertiesEXT");
Function<VkResult, VkDevice, const VkMemoryGetWin32HandleInfoKHR*, HANDLE*> Binding::GetMemoryWin32HandleKHR("vkGetMemoryWin32HandleKHR");
Function<VkResult, VkDevice, VkDeviceMemory, VkExternalMemoryHandleTypeFlagsNV, HANDLE*> Binding::GetMemoryWin32HandleNV("vkGetMemoryWin32HandleNV");
Function<VkResult, VkDevice, VkExternalMemoryHandleTypeFlagBits, HANDLE, VkMemoryWin32HandlePropertiesKHR*> Binding::GetMemoryWin32HandlePropertiesKHR("vkGetMemoryWin32HandlePropertiesKHR");
Function<VkResult, VkDevice, VkSwapchainKHR, uint32_t*, VkPastPresentationTimingGOOGLE*> Binding::GetPastPresentationTimingGOOGLE("vkGetPastPresentationTimingGOOGLE");
Function<VkResult, VkDevice, VkPerformanceParameterTypeINTEL, VkPerformanceValueINTEL*> Binding::GetPerformanceParameterINTEL("vkGetPerformanceParameterINTEL");
Function<VkResult, VkPhysicalDevice, uint32_t*, VkTimeDomainEXT*> Binding::GetPhysicalDeviceCalibrateableTimeDomainsEXT("vkGetPhysicalDeviceCalibrateableTimeDomainsEXT");
Function<VkResult, VkPhysicalDevice, uint32_t*, VkCooperativeMatrixPropertiesNV*> Binding::GetPhysicalDeviceCooperativeMatrixPropertiesNV("vkGetPhysicalDeviceCooperativeMatrixPropertiesNV");
Function<VkResult, VkPhysicalDevice, uint32_t*, VkDisplayPlaneProperties2KHR*> Binding::GetPhysicalDeviceDisplayPlaneProperties2KHR("vkGetPhysicalDeviceDisplayPlaneProperties2KHR");
Function<VkResult, VkPhysicalDevice, uint32_t*, VkDisplayPlanePropertiesKHR*> Binding::GetPhysicalDeviceDisplayPlanePropertiesKHR("vkGetPhysicalDeviceDisplayPlanePropertiesKHR");
Function<VkResult, VkPhysicalDevice, uint32_t*, VkDisplayProperties2KHR*> Binding::GetPhysicalDeviceDisplayProperties2KHR("vkGetPhysicalDeviceDisplayProperties2KHR");
Function<VkResult, VkPhysicalDevice, uint32_t*, VkDisplayPropertiesKHR*> Binding::GetPhysicalDeviceDisplayPropertiesKHR("vkGetPhysicalDeviceDisplayPropertiesKHR");
Function<void, VkPhysicalDevice, const VkPhysicalDeviceExternalBufferInfo*, VkExternalBufferProperties*> Binding::GetPhysicalDeviceExternalBufferProperties("vkGetPhysicalDeviceExternalBufferProperties");
Function<void, VkPhysicalDevice, const VkPhysicalDeviceExternalBufferInfo*, VkExternalBufferProperties*> Binding::GetPhysicalDeviceExternalBufferPropertiesKHR("vkGetPhysicalDeviceExternalBufferPropertiesKHR");
Function<void, VkPhysicalDevice, const VkPhysicalDeviceExternalFenceInfo*, VkExternalFenceProperties*> Binding::GetPhysicalDeviceExternalFenceProperties("vkGetPhysicalDeviceExternalFenceProperties");
Function<void, VkPhysicalDevice, const VkPhysicalDeviceExternalFenceInfo*, VkExternalFenceProperties*> Binding::GetPhysicalDeviceExternalFencePropertiesKHR("vkGetPhysicalDeviceExternalFencePropertiesKHR");
Function<VkResult, VkPhysicalDevice, VkFormat, VkImageType, VkImageTiling, VkImageUsageFlags, VkImageCreateFlags, VkExternalMemoryHandleTypeFlagsNV, VkExternalImageFormatPropertiesNV*> Binding::GetPhysicalDeviceExternalImageFormatPropertiesNV("vkGetPhysicalDeviceExternalImageFormatPropertiesNV");
Function<void, VkPhysicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo*, VkExternalSemaphoreProperties*> Binding::GetPhysicalDeviceExternalSemaphoreProperties("vkGetPhysicalDeviceExternalSemaphoreProperties");
Function<void, VkPhysicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo*, VkExternalSemaphoreProperties*> Binding::GetPhysicalDeviceExternalSemaphorePropertiesKHR("vkGetPhysicalDeviceExternalSemaphorePropertiesKHR");
Function<void, VkPhysicalDevice, VkPhysicalDeviceFeatures*> Binding::GetPhysicalDeviceFeatures("vkGetPhysicalDeviceFeatures");
Function<void, VkPhysicalDevice, VkPhysicalDeviceFeatures2*> Binding::GetPhysicalDeviceFeatures2("vkGetPhysicalDeviceFeatures2");
Function<void, VkPhysicalDevice, VkPhysicalDeviceFeatures2*> Binding::GetPhysicalDeviceFeatures2KHR("vkGetPhysicalDeviceFeatures2KHR");
Function<void, VkPhysicalDevice, VkFormat, VkFormatProperties*> Binding::GetPhysicalDeviceFormatProperties("vkGetPhysicalDeviceFormatProperties");
Function<void, VkPhysicalDevice, VkFormat, VkFormatProperties2*> Binding::GetPhysicalDeviceFormatProperties2("vkGetPhysicalDeviceFormatProperties2");
Function<void, VkPhysicalDevice, VkFormat, VkFormatProperties2*> Binding::GetPhysicalDeviceFormatProperties2KHR("vkGetPhysicalDeviceFormatProperties2KHR");
Function<void, VkPhysicalDevice, VkDeviceGeneratedCommandsFeaturesNVX*, VkDeviceGeneratedCommandsLimitsNVX*> Binding::GetPhysicalDeviceGeneratedCommandsPropertiesNVX("vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX");
Function<VkResult, VkPhysicalDevice, VkFormat, VkImageType, VkImageTiling, VkImageUsageFlags, VkImageCreateFlags, VkImageFormatProperties*> Binding::GetPhysicalDeviceImageFormatProperties("vkGetPhysicalDeviceImageFormatProperties");
Function<VkResult, VkPhysicalDevice, const VkPhysicalDeviceImageFormatInfo2*, VkImageFormatProperties2*> Binding::GetPhysicalDeviceImageFormatProperties2("vkGetPhysicalDeviceImageFormatProperties2");
Function<VkResult, VkPhysicalDevice, const VkPhysicalDeviceImageFormatInfo2*, VkImageFormatProperties2*> Binding::GetPhysicalDeviceImageFormatProperties2KHR("vkGetPhysicalDeviceImageFormatProperties2KHR");
Function<void, VkPhysicalDevice, VkPhysicalDeviceMemoryProperties*> Binding::GetPhysicalDeviceMemoryProperties("vkGetPhysicalDeviceMemoryProperties");
Function<void, VkPhysicalDevice, VkPhysicalDeviceMemoryProperties2*> Binding::GetPhysicalDeviceMemoryProperties2("vkGetPhysicalDeviceMemoryProperties2");
Function<void, VkPhysicalDevice, VkPhysicalDeviceMemoryProperties2*> Binding::GetPhysicalDeviceMemoryProperties2KHR("vkGetPhysicalDeviceMemoryProperties2KHR");
Function<void, VkPhysicalDevice, VkSampleCountFlagBits, VkMultisamplePropertiesEXT*> Binding::GetPhysicalDeviceMultisamplePropertiesEXT("vkGetPhysicalDeviceMultisamplePropertiesEXT");
Function<VkResult, VkPhysicalDevice, VkSurfaceKHR, uint32_t*, VkRect2D*> Binding::GetPhysicalDevicePresentRectanglesKHR("vkGetPhysicalDevicePresentRectanglesKHR");
Function<void, VkPhysicalDevice, VkPhysicalDeviceProperties*> Binding::GetPhysicalDeviceProperties("vkGetPhysicalDeviceProperties");
Function<void, VkPhysicalDevice, VkPhysicalDeviceProperties2*> Binding::GetPhysicalDeviceProperties2("vkGetPhysicalDeviceProperties2");
Function<void, VkPhysicalDevice, VkPhysicalDeviceProperties2*> Binding::GetPhysicalDeviceProperties2KHR("vkGetPhysicalDeviceProperties2KHR");
Function<void, VkPhysicalDevice, uint32_t*, VkQueueFamilyProperties*> Binding::GetPhysicalDeviceQueueFamilyProperties("vkGetPhysicalDeviceQueueFamilyProperties");
Function<void, VkPhysicalDevice, uint32_t*, VkQueueFamilyProperties2*> Binding::GetPhysicalDeviceQueueFamilyProperties2("vkGetPhysicalDeviceQueueFamilyProperties2");
Function<void, VkPhysicalDevice, uint32_t*, VkQueueFamilyProperties2*> Binding::GetPhysicalDeviceQueueFamilyProperties2KHR("vkGetPhysicalDeviceQueueFamilyProperties2KHR");
Function<void, VkPhysicalDevice, VkFormat, VkImageType, VkSampleCountFlagBits, VkImageUsageFlags, VkImageTiling, uint32_t*, VkSparseImageFormatProperties*> Binding::GetPhysicalDeviceSparseImageFormatProperties("vkGetPhysicalDeviceSparseImageFormatProperties");
Function<void, VkPhysicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2*, uint32_t*, VkSparseImageFormatProperties2*> Binding::GetPhysicalDeviceSparseImageFormatProperties2("vkGetPhysicalDeviceSparseImageFormatProperties2");
Function<void, VkPhysicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2*, uint32_t*, VkSparseImageFormatProperties2*> Binding::GetPhysicalDeviceSparseImageFormatProperties2KHR("vkGetPhysicalDeviceSparseImageFormatProperties2KHR");
Function<VkResult, VkPhysicalDevice, uint32_t*, VkFramebufferMixedSamplesCombinationNV*> Binding::GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV("vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV");
Function<VkResult, VkPhysicalDevice, VkSurfaceKHR, VkSurfaceCapabilities2EXT*> Binding::GetPhysicalDeviceSurfaceCapabilities2EXT("vkGetPhysicalDeviceSurfaceCapabilities2EXT");
Function<VkResult, VkPhysicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR*, VkSurfaceCapabilities2KHR*> Binding::GetPhysicalDeviceSurfaceCapabilities2KHR("vkGetPhysicalDeviceSurfaceCapabilities2KHR");
Function<VkResult, VkPhysicalDevice, VkSurfaceKHR, VkSurfaceCapabilitiesKHR*> Binding::GetPhysicalDeviceSurfaceCapabilitiesKHR("vkGetPhysicalDeviceSurfaceCapabilitiesKHR");
Function<VkResult, VkPhysicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR*, uint32_t*, VkSurfaceFormat2KHR*> Binding::GetPhysicalDeviceSurfaceFormats2KHR("vkGetPhysicalDeviceSurfaceFormats2KHR");
Function<VkResult, VkPhysicalDevice, VkSurfaceKHR, uint32_t*, VkSurfaceFormatKHR*> Binding::GetPhysicalDeviceSurfaceFormatsKHR("vkGetPhysicalDeviceSurfaceFormatsKHR");
Function<VkResult, VkPhysicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR*, uint32_t*, VkPresentModeKHR*> Binding::GetPhysicalDeviceSurfacePresentModes2EXT("vkGetPhysicalDeviceSurfacePresentModes2EXT");
Function<VkResult, VkPhysicalDevice, VkSurfaceKHR, uint32_t*, VkPresentModeKHR*> Binding::GetPhysicalDeviceSurfacePresentModesKHR("vkGetPhysicalDeviceSurfacePresentModesKHR");
Function<VkResult, VkPhysicalDevice, uint32_t, VkSurfaceKHR, VkBool32*> Binding::GetPhysicalDeviceSurfaceSupportKHR("vkGetPhysicalDeviceSurfaceSupportKHR");
Function<VkBool32, VkPhysicalDevice, uint32_t, struct wl_display*> Binding::GetPhysicalDeviceWaylandPresentationSupportKHR("vkGetPhysicalDeviceWaylandPresentationSupportKHR");
Function<VkBool32, VkPhysicalDevice, uint32_t> Binding::GetPhysicalDeviceWin32PresentationSupportKHR("vkGetPhysicalDeviceWin32PresentationSupportKHR");
Function<VkBool32, VkPhysicalDevice, uint32_t, xcb_connection_t*, xcb_visualid_t> Binding::GetPhysicalDeviceXcbPresentationSupportKHR("vkGetPhysicalDeviceXcbPresentationSupportKHR");
Function<VkBool32, VkPhysicalDevice, uint32_t, Display*, VisualID> Binding::GetPhysicalDeviceXlibPresentationSupportKHR("vkGetPhysicalDeviceXlibPresentationSupportKHR");
Function<VkResult, VkDevice, VkPipelineCache, size_t*, void*> Binding::GetPipelineCacheData("vkGetPipelineCacheData");
Function<VkResult, VkDevice, VkQueryPool, uint32_t, uint32_t, size_t, void*, VkDeviceSize, VkQueryResultFlags> Binding::GetQueryPoolResults("vkGetQueryPoolResults");
Function<void, VkQueue, uint32_t*, VkCheckpointDataNV*> Binding::GetQueueCheckpointDataNV("vkGetQueueCheckpointDataNV");
Function<VkResult, VkPhysicalDevice, Display*, RROutput, VkDisplayKHR*> Binding::GetRandROutputDisplayEXT("vkGetRandROutputDisplayEXT");
Function<VkResult, VkDevice, VkPipeline, uint32_t, uint32_t, size_t, void*> Binding::GetRayTracingShaderGroupHandlesNV("vkGetRayTracingShaderGroupHandlesNV");
Function<VkResult, VkDevice, VkSwapchainKHR, VkRefreshCycleDurationGOOGLE*> Binding::GetRefreshCycleDurationGOOGLE("vkGetRefreshCycleDurationGOOGLE");
Function<void, VkDevice, VkRenderPass, VkExtent2D*> Binding::GetRenderAreaGranularity("vkGetRenderAreaGranularity");
Function<VkResult, VkDevice, const VkSemaphoreGetFdInfoKHR*, int*> Binding::GetSemaphoreFdKHR("vkGetSemaphoreFdKHR");
Function<VkResult, VkDevice, const VkSemaphoreGetWin32HandleInfoKHR*, HANDLE*> Binding::GetSemaphoreWin32HandleKHR("vkGetSemaphoreWin32HandleKHR");
Function<VkResult, VkDevice, VkPipeline, VkShaderStageFlagBits, VkShaderInfoTypeAMD, size_t*, void*> Binding::GetShaderInfoAMD("vkGetShaderInfoAMD");
Function<VkResult, VkDevice, VkSwapchainKHR, VkSurfaceCounterFlagBitsEXT, uint64_t*> Binding::GetSwapchainCounterEXT("vkGetSwapchainCounterEXT");
Function<VkResult, VkDevice, VkFormat, VkImageUsageFlags, VkSwapchainImageUsageFlagsANDROID, uint64_t*, uint64_t*> Binding::GetSwapchainGrallocUsage2ANDROID("vkGetSwapchainGrallocUsage2ANDROID");
Function<VkResult, VkDevice, VkFormat, VkImageUsageFlags, int*> Binding::GetSwapchainGrallocUsageANDROID("vkGetSwapchainGrallocUsageANDROID");
Function<VkResult, VkDevice, VkSwapchainKHR, uint32_t*, VkImage*> Binding::GetSwapchainImagesKHR("vkGetSwapchainImagesKHR");
Function<VkResult, VkDevice, VkSwapchainKHR> Binding::GetSwapchainStatusKHR("vkGetSwapchainStatusKHR");
Function<VkResult, VkDevice, VkValidationCacheEXT, size_t*, void*> Binding::GetValidationCacheDataEXT("vkGetValidationCacheDataEXT");


} // namespace vkbinding