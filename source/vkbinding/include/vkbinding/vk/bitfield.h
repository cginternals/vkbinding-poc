
#pragma once


#include <vkbinding/novk.h>

#include <vkbinding/vkbinding_features.h>

#include <vkbinding/SharedBitfield.h>


namespace vk
{


enum class UnusedMask : unsigned int
{
    VK_UNUSED_BIT                                                                                     = 0x00000000
};


enum class VkAccessFlags : unsigned int
{
    VK_ACCESS_TRANSFORM_FEEDBACK_WRITE_BIT_EXT                                                        = 0x2000000,
    VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT                                                 = 0x4000000,
    VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT                                                = 0x8000000,
    VK_ACCESS_CONDITIONAL_RENDERING_READ_BIT_EXT                                                      = 0x100000,
    VK_ACCESS_COMMAND_PROCESS_READ_BIT_NVX                                                            = 0x20000,
    VK_ACCESS_COMMAND_PROCESS_WRITE_BIT_NVX                                                           = 0x40000,
    VK_ACCESS_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT                                               = 0x80000,
    VK_ACCESS_SHADING_RATE_IMAGE_READ_BIT_NV                                                          = 0x800000,
    VK_ACCESS_ACCELERATION_STRUCTURE_READ_BIT_NV                                                      = 0x200000,
    VK_ACCESS_ACCELERATION_STRUCTURE_WRITE_BIT_NV                                                     = 0x400000,
    VK_ACCESS_FRAGMENT_DENSITY_MAP_READ_BIT_EXT                                                       = 0x1000000,
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkAttachmentDescriptionFlags : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkBufferCreateFlags : unsigned int
{
    VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_EXT                                            = 0x10,
    VK_BUFFER_CREATE_PROTECTED_BIT                                                                    = 0x8,
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkBufferUsageFlags : unsigned int
{
    VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT                                                 = 0x800,
    VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT                                         = 0x1000,
    VK_BUFFER_USAGE_CONDITIONAL_RENDERING_BIT_EXT                                                     = 0x200,
    VK_BUFFER_USAGE_RAY_TRACING_BIT_NV                                                                = 0x400,
    VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT_EXT                                                     = 0x20000,
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkBufferViewCreateFlags : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkBuildAccelerationStructureFlagsNV : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkColorComponentFlags : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkCommandBufferResetFlags : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkCommandBufferUsageFlags : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkCommandPoolCreateFlags : unsigned int
{
    VK_COMMAND_POOL_CREATE_PROTECTED_BIT                                                              = 0x4,
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkCommandPoolResetFlags : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkCommandPoolTrimFlags : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkCommandPoolTrimFlagsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkCompositeAlphaFlagsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkConditionalRenderingFlagsEXT : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkCullModeFlags : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkDebugReportFlagsEXT : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkDebugUtilsMessageSeverityFlagsEXT : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkDebugUtilsMessageTypeFlagsEXT : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkDebugUtilsMessengerCallbackDataFlagsEXT : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkDependencyFlags : unsigned int
{
    VK_DEPENDENCY_VIEW_LOCAL_BIT_KHR                                                                  = VK_DEPENDENCY_VIEW_LOCAL_BIT_KHR,
    VK_DEPENDENCY_DEVICE_GROUP_BIT_KHR                                                                = VK_DEPENDENCY_DEVICE_GROUP_BIT_KHR,
    VK_DEPENDENCY_DEVICE_GROUP_BIT                                                                    = 0x4,
    VK_DEPENDENCY_VIEW_LOCAL_BIT                                                                      = 0x2,
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkDescriptorPoolCreateFlags : unsigned int
{
    VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT_EXT                                               = 0x2,
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkDescriptorPoolResetFlags : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkDescriptorSetLayoutCreateFlags : unsigned int
{
    VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR                                           = 0x1,
    VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT_EXT                                    = 0x2,
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkDescriptorUpdateTemplateCreateFlags : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkDescriptorUpdateTemplateCreateFlagsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkDeviceCreateFlags : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkDeviceGroupPresentModeFlagsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkDeviceQueueCreateFlags : unsigned int
{
    VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT                                                              = 0x1,
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkDisplayModeCreateFlagsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkDisplayPlaneAlphaFlagsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkDisplaySurfaceCreateFlagsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkEventCreateFlags : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkExternalFenceFeatureFlagBitsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkExternalFenceFeatureFlags : unsigned int
{
    VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT_KHR                                                      = 0x1,
    VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT_KHR                                                      = 0x2,
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkExternalFenceFeatureFlagsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkExternalFenceHandleTypeFlagBitsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkExternalFenceHandleTypeFlags : unsigned int
{
    VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR                                                   = 0x1,
    VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR                                                = 0x2,
    VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR                                            = 0x4,
    VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT_KHR                                                     = 0x8,
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkExternalFenceHandleTypeFlagsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkExternalMemoryFeatureFlagBitsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkExternalMemoryFeatureFlags : unsigned int
{
    VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_KHR                                                 = 0x1,
    VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_KHR                                                     = 0x2,
    VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_KHR                                                     = 0x4,
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkExternalMemoryFeatureFlagsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkExternalMemoryFeatureFlagsNV : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkExternalMemoryHandleTypeFlagBitsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkExternalMemoryHandleTypeFlags : unsigned int
{
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT_KHR                                                  = 0x1,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR                                               = 0x2,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR                                           = 0x4,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT_KHR                                              = 0x8,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT_KHR                                          = 0x10,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT_KHR                                                 = 0x20,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT_KHR                                             = 0x40,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT                                                    = 0x200,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_ALLOCATION_BIT_EXT                                            = 0x80,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT                                 = 0x100,
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkExternalMemoryHandleTypeFlagsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkExternalMemoryHandleTypeFlagsNV : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkExternalSemaphoreFeatureFlagBitsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkExternalSemaphoreFeatureFlags : unsigned int
{
    VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT_KHR                                                  = 0x1,
    VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT_KHR                                                  = 0x2,
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkExternalSemaphoreFeatureFlagsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkExternalSemaphoreHandleTypeFlagBitsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkExternalSemaphoreHandleTypeFlags : unsigned int
{
    VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR                                               = 0x1,
    VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR                                            = 0x2,
    VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR                                        = 0x4,
    VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT_KHR                                             = 0x8,
    VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT_KHR                                                 = 0x10,
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkExternalSemaphoreHandleTypeFlagsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkFenceCreateFlags : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkFenceImportFlagBitsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkFenceImportFlags : unsigned int
{
    VK_FENCE_IMPORT_TEMPORARY_BIT_KHR                                                                 = 0x1,
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkFenceImportFlagsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkFormatFeatureFlags : unsigned int
{
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG                                              = 0x2000,
    VK_FORMAT_FEATURE_TRANSFER_SRC_BIT_KHR                                                            = VK_FORMAT_FEATURE_TRANSFER_SRC_BIT_KHR,
    VK_FORMAT_FEATURE_TRANSFER_DST_BIT_KHR                                                            = VK_FORMAT_FEATURE_TRANSFER_DST_BIT_KHR,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT_EXT                                             = 0x10000,
    VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT_KHR                                                 = VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT_KHR,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT_KHR                            = VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT_KHR,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT_KHR           = VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT_KHR,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT_KHR           = VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT_KHR,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT_KHR = VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT_KHR,
    VK_FORMAT_FEATURE_DISJOINT_BIT_KHR                                                                = VK_FORMAT_FEATURE_DISJOINT_BIT_KHR,
    VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT_KHR                                                  = VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT_KHR,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_EXT                                              = 0x2000,
    VK_FORMAT_FEATURE_FRAGMENT_DENSITY_MAP_BIT_EXT                                                    = 0x1000000,
    VK_FORMAT_FEATURE_TRANSFER_SRC_BIT                                                                = 0x4000,
    VK_FORMAT_FEATURE_TRANSFER_DST_BIT                                                                = 0x8000,
    VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT                                                     = 0x20000,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT                                = 0x40000,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT               = 0x80000,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT               = 0x100000,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT     = 0x200000,
    VK_FORMAT_FEATURE_DISJOINT_BIT                                                                    = 0x400000,
    VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT                                                      = 0x800000,
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkFramebufferCreateFlags : unsigned int
{
    VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT_KHR                                                           = 0x1,
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkGeometryFlagsNV : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkGeometryInstanceFlagsNV : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkHeadlessSurfaceCreateFlagsEXT : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkImageAspectFlags : unsigned int
{
    VK_IMAGE_ASPECT_PLANE_0_BIT_KHR                                                                   = VK_IMAGE_ASPECT_PLANE_0_BIT_KHR,
    VK_IMAGE_ASPECT_PLANE_1_BIT_KHR                                                                   = VK_IMAGE_ASPECT_PLANE_1_BIT_KHR,
    VK_IMAGE_ASPECT_PLANE_2_BIT_KHR                                                                   = VK_IMAGE_ASPECT_PLANE_2_BIT_KHR,
    VK_IMAGE_ASPECT_MEMORY_PLANE_0_BIT_EXT                                                            = 0x80,
    VK_IMAGE_ASPECT_MEMORY_PLANE_1_BIT_EXT                                                            = 0x100,
    VK_IMAGE_ASPECT_MEMORY_PLANE_2_BIT_EXT                                                            = 0x200,
    VK_IMAGE_ASPECT_MEMORY_PLANE_3_BIT_EXT                                                            = 0x400,
    VK_IMAGE_ASPECT_PLANE_0_BIT                                                                       = 0x10,
    VK_IMAGE_ASPECT_PLANE_1_BIT                                                                       = 0x20,
    VK_IMAGE_ASPECT_PLANE_2_BIT                                                                       = 0x40,
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkImageCreateFlags : unsigned int
{
    VK_IMAGE_CREATE_CORNER_SAMPLED_BIT_NV                                                             = 0x2000,
    VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR                                               = VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR,
    VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT_KHR                                                       = VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT_KHR,
    VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT_KHR                                               = VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT_KHR,
    VK_IMAGE_CREATE_EXTENDED_USAGE_BIT_KHR                                                            = VK_IMAGE_CREATE_EXTENDED_USAGE_BIT_KHR,
    VK_IMAGE_CREATE_SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_EXT                                         = 0x1000,
    VK_IMAGE_CREATE_DISJOINT_BIT_KHR                                                                  = VK_IMAGE_CREATE_DISJOINT_BIT_KHR,
    VK_IMAGE_CREATE_ALIAS_BIT_KHR                                                                     = VK_IMAGE_CREATE_ALIAS_BIT_KHR,
    VK_IMAGE_CREATE_SUBSAMPLED_BIT_EXT                                                                = 0x4000,
    VK_IMAGE_CREATE_ALIAS_BIT                                                                         = 0x400,
    VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT                                                   = 0x40,
    VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT                                                           = 0x20,
    VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT                                                   = 0x80,
    VK_IMAGE_CREATE_EXTENDED_USAGE_BIT                                                                = 0x100,
    VK_IMAGE_CREATE_PROTECTED_BIT                                                                     = 0x800,
    VK_IMAGE_CREATE_DISJOINT_BIT                                                                      = 0x200,
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkImageUsageFlags : unsigned int
{
    VK_IMAGE_USAGE_SHADING_RATE_IMAGE_BIT_NV                                                          = 0x100,
    VK_IMAGE_USAGE_FRAGMENT_DENSITY_MAP_BIT_EXT                                                       = 0x200,
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkImageViewCreateFlags : unsigned int
{
    VK_IMAGE_VIEW_CREATE_FRAGMENT_DENSITY_MAP_DYNAMIC_BIT_EXT                                         = 0x1,
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkIndirectCommandsLayoutUsageFlagsNVX : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkInstanceCreateFlags : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkMemoryAllocateFlagBitsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkMemoryAllocateFlags : unsigned int
{
    VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT_KHR                                                            = 0x1,
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkMemoryAllocateFlagsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkMemoryHeapFlags : unsigned int
{
    VK_MEMORY_HEAP_MULTI_INSTANCE_BIT_KHR                                                             = VK_MEMORY_HEAP_MULTI_INSTANCE_BIT_KHR,
    VK_MEMORY_HEAP_MULTI_INSTANCE_BIT                                                                 = 0x2,
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkMemoryMapFlags : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkMemoryPropertyFlags : unsigned int
{
    VK_MEMORY_PROPERTY_PROTECTED_BIT                                                                  = 0x20,
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkObjectEntryUsageFlagsNVX : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPeerMemoryFeatureFlagBitsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPeerMemoryFeatureFlags : unsigned int
{
    VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT_KHR                                                           = 0x1,
    VK_PEER_MEMORY_FEATURE_COPY_DST_BIT_KHR                                                           = 0x2,
    VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT_KHR                                                        = 0x4,
    VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT_KHR                                                        = 0x8,
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPeerMemoryFeatureFlagsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPipelineCacheCreateFlags : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPipelineColorBlendStateCreateFlags : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPipelineCompilerControlFlagsAMD : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPipelineCoverageModulationStateCreateFlagsNV : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPipelineCoverageReductionStateCreateFlagsNV : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPipelineCoverageToColorStateCreateFlagsNV : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPipelineCreateFlags : unsigned int
{
    VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT_KHR                                           = VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT_KHR,
    VK_PIPELINE_CREATE_DISPATCH_BASE_KHR                                                              = VK_PIPELINE_CREATE_DISPATCH_BASE_KHR,
    VK_PIPELINE_CREATE_DEFER_COMPILE_BIT_NV                                                           = 0x20,
    VK_PIPELINE_CREATE_CAPTURE_STATISTICS_BIT_KHR                                                     = 0x40,
    VK_PIPELINE_CREATE_CAPTURE_INTERNAL_REPRESENTATIONS_BIT_KHR                                       = 0x80,
    VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT                                               = 0x8,
    VK_PIPELINE_CREATE_DISPATCH_BASE                                                                  = 0x10,
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPipelineCreationFeedbackFlagsEXT : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPipelineDepthStencilStateCreateFlags : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPipelineDiscardRectangleStateCreateFlagsEXT : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPipelineDynamicStateCreateFlags : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPipelineInputAssemblyStateCreateFlags : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPipelineLayoutCreateFlags : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPipelineMultisampleStateCreateFlags : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPipelineRasterizationConservativeStateCreateFlagsEXT : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPipelineRasterizationDepthClipStateCreateFlagsEXT : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPipelineRasterizationStateCreateFlags : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPipelineRasterizationStateStreamCreateFlagsEXT : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPipelineShaderStageCreateFlags : unsigned int
{
    VK_PIPELINE_SHADER_STAGE_CREATE_ALLOW_VARYING_SUBGROUP_SIZE_BIT_EXT                               = 0x1,
    VK_PIPELINE_SHADER_STAGE_CREATE_REQUIRE_FULL_SUBGROUPS_BIT_EXT                                    = 0x2,
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPipelineStageFlags : unsigned int
{
    VK_PIPELINE_STAGE_TRANSFORM_FEEDBACK_BIT_EXT                                                      = 0x1000000,
    VK_PIPELINE_STAGE_CONDITIONAL_RENDERING_BIT_EXT                                                   = 0x40000,
    VK_PIPELINE_STAGE_COMMAND_PROCESS_BIT_NVX                                                         = 0x20000,
    VK_PIPELINE_STAGE_SHADING_RATE_IMAGE_BIT_NV                                                       = 0x400000,
    VK_PIPELINE_STAGE_RAY_TRACING_SHADER_BIT_NV                                                       = 0x200000,
    VK_PIPELINE_STAGE_ACCELERATION_STRUCTURE_BUILD_BIT_NV                                             = 0x2000000,
    VK_PIPELINE_STAGE_TASK_SHADER_BIT_NV                                                              = 0x80000,
    VK_PIPELINE_STAGE_MESH_SHADER_BIT_NV                                                              = 0x100000,
    VK_PIPELINE_STAGE_FRAGMENT_DENSITY_PROCESS_BIT_EXT                                                = 0x800000,
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPipelineTessellationStateCreateFlags : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPipelineVertexInputStateCreateFlags : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPipelineViewportStateCreateFlags : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPipelineViewportSwizzleStateCreateFlagsNV : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkQueryControlFlags : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkQueryPipelineStatisticFlags : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkQueryPoolCreateFlags : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkQueryResultFlags : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkQueueFlags : unsigned int
{
    VK_QUEUE_PROTECTED_BIT                                                                            = 0x10,
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkRenderPassCreateFlags : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkResolveModeFlagsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkSampleCountFlags : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkSamplerCreateFlags : unsigned int
{
    VK_SAMPLER_CREATE_SUBSAMPLED_BIT_EXT                                                              = 0x1,
    VK_SAMPLER_CREATE_SUBSAMPLED_COARSE_RECONSTRUCTION_BIT_EXT                                        = 0x2,
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkSemaphoreCreateFlags : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkSemaphoreImportFlagBitsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkSemaphoreImportFlags : unsigned int
{
    VK_SEMAPHORE_IMPORT_TEMPORARY_BIT_KHR                                                             = 0x1,
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkSemaphoreImportFlagsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkShaderCorePropertiesFlagsAMD : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkShaderModuleCreateFlags : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkShaderStageFlags : unsigned int
{
    VK_SHADER_STAGE_RAYGEN_BIT_NV                                                                     = 0x100,
    VK_SHADER_STAGE_ANY_HIT_BIT_NV                                                                    = 0x200,
    VK_SHADER_STAGE_CLOSEST_HIT_BIT_NV                                                                = 0x400,
    VK_SHADER_STAGE_MISS_BIT_NV                                                                       = 0x800,
    VK_SHADER_STAGE_INTERSECTION_BIT_NV                                                               = 0x1000,
    VK_SHADER_STAGE_CALLABLE_BIT_NV                                                                   = 0x2000,
    VK_SHADER_STAGE_TASK_BIT_NV                                                                       = 0x40,
    VK_SHADER_STAGE_MESH_BIT_NV                                                                       = 0x80,
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkSparseImageFormatFlags : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkSparseMemoryBindFlags : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkStencilFaceFlags : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkSubgroupFeatureFlags : unsigned int
{
    VK_SUBGROUP_FEATURE_PARTITIONED_BIT_NV                                                            = 0x100,
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkSubpassDescriptionFlags : unsigned int
{
    VK_SUBPASS_DESCRIPTION_PER_VIEW_ATTRIBUTES_BIT_NVX                                                = 0x1,
    VK_SUBPASS_DESCRIPTION_PER_VIEW_POSITION_X_ONLY_BIT_NVX                                           = 0x2,
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkSurfaceCounterFlagsEXT : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkSurfaceTransformFlagsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkSwapchainCreateFlagsKHR : unsigned int
{
    VK_SWAPCHAIN_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR                                           = 0x1,
    VK_SWAPCHAIN_CREATE_PROTECTED_BIT_KHR                                                             = 0x2,
    VK_SWAPCHAIN_CREATE_MUTABLE_FORMAT_BIT_KHR                                                        = 0x4,
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkValidationCacheCreateFlagsEXT : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


// import bitfields to namespace

VKBINDING_CONSTEXPR static const VkAccessFlags VK_ACCESS_ACCELERATION_STRUCTURE_READ_BIT_NV = VkAccessFlags::VK_ACCESS_ACCELERATION_STRUCTURE_READ_BIT_NV;
VKBINDING_CONSTEXPR static const VkAccessFlags VK_ACCESS_ACCELERATION_STRUCTURE_WRITE_BIT_NV = VkAccessFlags::VK_ACCESS_ACCELERATION_STRUCTURE_WRITE_BIT_NV;
VKBINDING_CONSTEXPR static const VkAccessFlags VK_ACCESS_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT = VkAccessFlags::VK_ACCESS_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT;
VKBINDING_CONSTEXPR static const VkAccessFlags VK_ACCESS_COMMAND_PROCESS_READ_BIT_NVX = VkAccessFlags::VK_ACCESS_COMMAND_PROCESS_READ_BIT_NVX;
VKBINDING_CONSTEXPR static const VkAccessFlags VK_ACCESS_COMMAND_PROCESS_WRITE_BIT_NVX = VkAccessFlags::VK_ACCESS_COMMAND_PROCESS_WRITE_BIT_NVX;
VKBINDING_CONSTEXPR static const VkAccessFlags VK_ACCESS_CONDITIONAL_RENDERING_READ_BIT_EXT = VkAccessFlags::VK_ACCESS_CONDITIONAL_RENDERING_READ_BIT_EXT;
VKBINDING_CONSTEXPR static const VkAccessFlags VK_ACCESS_FRAGMENT_DENSITY_MAP_READ_BIT_EXT = VkAccessFlags::VK_ACCESS_FRAGMENT_DENSITY_MAP_READ_BIT_EXT;
VKBINDING_CONSTEXPR static const VkAccessFlags VK_ACCESS_SHADING_RATE_IMAGE_READ_BIT_NV = VkAccessFlags::VK_ACCESS_SHADING_RATE_IMAGE_READ_BIT_NV;
VKBINDING_CONSTEXPR static const VkAccessFlags VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT = VkAccessFlags::VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT;
VKBINDING_CONSTEXPR static const VkAccessFlags VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT = VkAccessFlags::VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT;
VKBINDING_CONSTEXPR static const VkAccessFlags VK_ACCESS_TRANSFORM_FEEDBACK_WRITE_BIT_EXT = VkAccessFlags::VK_ACCESS_TRANSFORM_FEEDBACK_WRITE_BIT_EXT;
VKBINDING_CONSTEXPR static const VkBufferCreateFlags VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_EXT = VkBufferCreateFlags::VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_EXT;
VKBINDING_CONSTEXPR static const VkBufferCreateFlags VK_BUFFER_CREATE_PROTECTED_BIT = VkBufferCreateFlags::VK_BUFFER_CREATE_PROTECTED_BIT;
VKBINDING_CONSTEXPR static const VkBufferUsageFlags VK_BUFFER_USAGE_CONDITIONAL_RENDERING_BIT_EXT = VkBufferUsageFlags::VK_BUFFER_USAGE_CONDITIONAL_RENDERING_BIT_EXT;
VKBINDING_CONSTEXPR static const VkBufferUsageFlags VK_BUFFER_USAGE_RAY_TRACING_BIT_NV = VkBufferUsageFlags::VK_BUFFER_USAGE_RAY_TRACING_BIT_NV;
VKBINDING_CONSTEXPR static const VkBufferUsageFlags VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT_EXT = VkBufferUsageFlags::VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT_EXT;
VKBINDING_CONSTEXPR static const VkBufferUsageFlags VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT = VkBufferUsageFlags::VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT;
VKBINDING_CONSTEXPR static const VkBufferUsageFlags VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT = VkBufferUsageFlags::VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT;
VKBINDING_CONSTEXPR static const VkCommandPoolCreateFlags VK_COMMAND_POOL_CREATE_PROTECTED_BIT = VkCommandPoolCreateFlags::VK_COMMAND_POOL_CREATE_PROTECTED_BIT;
VKBINDING_CONSTEXPR static const VkDependencyFlags VK_DEPENDENCY_DEVICE_GROUP_BIT = VkDependencyFlags::VK_DEPENDENCY_DEVICE_GROUP_BIT;
VKBINDING_CONSTEXPR static const VkDependencyFlags VK_DEPENDENCY_DEVICE_GROUP_BIT_KHR = VkDependencyFlags::VK_DEPENDENCY_DEVICE_GROUP_BIT_KHR;
VKBINDING_CONSTEXPR static const VkDependencyFlags VK_DEPENDENCY_VIEW_LOCAL_BIT = VkDependencyFlags::VK_DEPENDENCY_VIEW_LOCAL_BIT;
VKBINDING_CONSTEXPR static const VkDependencyFlags VK_DEPENDENCY_VIEW_LOCAL_BIT_KHR = VkDependencyFlags::VK_DEPENDENCY_VIEW_LOCAL_BIT_KHR;
VKBINDING_CONSTEXPR static const VkDescriptorPoolCreateFlags VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT_EXT = VkDescriptorPoolCreateFlags::VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT_EXT;
VKBINDING_CONSTEXPR static const VkDescriptorSetLayoutCreateFlags VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR = VkDescriptorSetLayoutCreateFlags::VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR;
VKBINDING_CONSTEXPR static const VkDescriptorSetLayoutCreateFlags VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT_EXT = VkDescriptorSetLayoutCreateFlags::VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT_EXT;
VKBINDING_CONSTEXPR static const VkDeviceQueueCreateFlags VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT = VkDeviceQueueCreateFlags::VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT;
VKBINDING_CONSTEXPR static const VkExternalFenceFeatureFlags VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT_KHR = VkExternalFenceFeatureFlags::VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalFenceFeatureFlags VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT_KHR = VkExternalFenceFeatureFlags::VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalFenceHandleTypeFlags VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR = VkExternalFenceHandleTypeFlags::VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalFenceHandleTypeFlags VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR = VkExternalFenceHandleTypeFlags::VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalFenceHandleTypeFlags VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR = VkExternalFenceHandleTypeFlags::VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalFenceHandleTypeFlags VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT_KHR = VkExternalFenceHandleTypeFlags::VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalMemoryFeatureFlags VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_KHR = VkExternalMemoryFeatureFlags::VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalMemoryFeatureFlags VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_KHR = VkExternalMemoryFeatureFlags::VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalMemoryFeatureFlags VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_KHR = VkExternalMemoryFeatureFlags::VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlags VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT_KHR = VkExternalMemoryHandleTypeFlags::VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlags VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT_KHR = VkExternalMemoryHandleTypeFlags::VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlags VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT_KHR = VkExternalMemoryHandleTypeFlags::VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlags VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT_KHR = VkExternalMemoryHandleTypeFlags::VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlags VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT = VkExternalMemoryHandleTypeFlags::VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlags VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_ALLOCATION_BIT_EXT = VkExternalMemoryHandleTypeFlags::VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_ALLOCATION_BIT_EXT;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlags VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT = VkExternalMemoryHandleTypeFlags::VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlags VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT_KHR = VkExternalMemoryHandleTypeFlags::VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlags VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR = VkExternalMemoryHandleTypeFlags::VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlags VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR = VkExternalMemoryHandleTypeFlags::VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalSemaphoreFeatureFlags VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT_KHR = VkExternalSemaphoreFeatureFlags::VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalSemaphoreFeatureFlags VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT_KHR = VkExternalSemaphoreFeatureFlags::VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalSemaphoreHandleTypeFlags VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT_KHR = VkExternalSemaphoreHandleTypeFlags::VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalSemaphoreHandleTypeFlags VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR = VkExternalSemaphoreHandleTypeFlags::VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalSemaphoreHandleTypeFlags VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR = VkExternalSemaphoreHandleTypeFlags::VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalSemaphoreHandleTypeFlags VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR = VkExternalSemaphoreHandleTypeFlags::VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalSemaphoreHandleTypeFlags VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT_KHR = VkExternalSemaphoreHandleTypeFlags::VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT_KHR;
VKBINDING_CONSTEXPR static const VkFenceImportFlags VK_FENCE_IMPORT_TEMPORARY_BIT_KHR = VkFenceImportFlags::VK_FENCE_IMPORT_TEMPORARY_BIT_KHR;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlags VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT = VkFormatFeatureFlags::VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlags VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT_KHR = VkFormatFeatureFlags::VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT_KHR;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlags VK_FORMAT_FEATURE_DISJOINT_BIT = VkFormatFeatureFlags::VK_FORMAT_FEATURE_DISJOINT_BIT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlags VK_FORMAT_FEATURE_DISJOINT_BIT_KHR = VkFormatFeatureFlags::VK_FORMAT_FEATURE_DISJOINT_BIT_KHR;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlags VK_FORMAT_FEATURE_FRAGMENT_DENSITY_MAP_BIT_EXT = VkFormatFeatureFlags::VK_FORMAT_FEATURE_FRAGMENT_DENSITY_MAP_BIT_EXT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlags VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT = VkFormatFeatureFlags::VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlags VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT_KHR = VkFormatFeatureFlags::VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT_KHR;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlags VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_EXT = VkFormatFeatureFlags::VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_EXT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlags VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG = VkFormatFeatureFlags::VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlags VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT_EXT = VkFormatFeatureFlags::VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT_EXT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlags VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT = VkFormatFeatureFlags::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlags VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT_KHR = VkFormatFeatureFlags::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT_KHR;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlags VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT = VkFormatFeatureFlags::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlags VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT_KHR = VkFormatFeatureFlags::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlags VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT = VkFormatFeatureFlags::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlags VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT_KHR = VkFormatFeatureFlags::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT_KHR;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlags VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT = VkFormatFeatureFlags::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlags VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT_KHR = VkFormatFeatureFlags::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT_KHR;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlags VK_FORMAT_FEATURE_TRANSFER_DST_BIT = VkFormatFeatureFlags::VK_FORMAT_FEATURE_TRANSFER_DST_BIT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlags VK_FORMAT_FEATURE_TRANSFER_DST_BIT_KHR = VkFormatFeatureFlags::VK_FORMAT_FEATURE_TRANSFER_DST_BIT_KHR;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlags VK_FORMAT_FEATURE_TRANSFER_SRC_BIT = VkFormatFeatureFlags::VK_FORMAT_FEATURE_TRANSFER_SRC_BIT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlags VK_FORMAT_FEATURE_TRANSFER_SRC_BIT_KHR = VkFormatFeatureFlags::VK_FORMAT_FEATURE_TRANSFER_SRC_BIT_KHR;
VKBINDING_CONSTEXPR static const VkFramebufferCreateFlags VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT_KHR = VkFramebufferCreateFlags::VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT_KHR;
VKBINDING_CONSTEXPR static const VkImageAspectFlags VK_IMAGE_ASPECT_MEMORY_PLANE_0_BIT_EXT = VkImageAspectFlags::VK_IMAGE_ASPECT_MEMORY_PLANE_0_BIT_EXT;
VKBINDING_CONSTEXPR static const VkImageAspectFlags VK_IMAGE_ASPECT_MEMORY_PLANE_1_BIT_EXT = VkImageAspectFlags::VK_IMAGE_ASPECT_MEMORY_PLANE_1_BIT_EXT;
VKBINDING_CONSTEXPR static const VkImageAspectFlags VK_IMAGE_ASPECT_MEMORY_PLANE_2_BIT_EXT = VkImageAspectFlags::VK_IMAGE_ASPECT_MEMORY_PLANE_2_BIT_EXT;
VKBINDING_CONSTEXPR static const VkImageAspectFlags VK_IMAGE_ASPECT_MEMORY_PLANE_3_BIT_EXT = VkImageAspectFlags::VK_IMAGE_ASPECT_MEMORY_PLANE_3_BIT_EXT;
VKBINDING_CONSTEXPR static const VkImageAspectFlags VK_IMAGE_ASPECT_PLANE_0_BIT = VkImageAspectFlags::VK_IMAGE_ASPECT_PLANE_0_BIT;
VKBINDING_CONSTEXPR static const VkImageAspectFlags VK_IMAGE_ASPECT_PLANE_0_BIT_KHR = VkImageAspectFlags::VK_IMAGE_ASPECT_PLANE_0_BIT_KHR;
VKBINDING_CONSTEXPR static const VkImageAspectFlags VK_IMAGE_ASPECT_PLANE_1_BIT = VkImageAspectFlags::VK_IMAGE_ASPECT_PLANE_1_BIT;
VKBINDING_CONSTEXPR static const VkImageAspectFlags VK_IMAGE_ASPECT_PLANE_1_BIT_KHR = VkImageAspectFlags::VK_IMAGE_ASPECT_PLANE_1_BIT_KHR;
VKBINDING_CONSTEXPR static const VkImageAspectFlags VK_IMAGE_ASPECT_PLANE_2_BIT = VkImageAspectFlags::VK_IMAGE_ASPECT_PLANE_2_BIT;
VKBINDING_CONSTEXPR static const VkImageAspectFlags VK_IMAGE_ASPECT_PLANE_2_BIT_KHR = VkImageAspectFlags::VK_IMAGE_ASPECT_PLANE_2_BIT_KHR;
VKBINDING_CONSTEXPR static const VkImageCreateFlags VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT = VkImageCreateFlags::VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT;
VKBINDING_CONSTEXPR static const VkImageCreateFlags VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT_KHR = VkImageCreateFlags::VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkImageCreateFlags VK_IMAGE_CREATE_ALIAS_BIT = VkImageCreateFlags::VK_IMAGE_CREATE_ALIAS_BIT;
VKBINDING_CONSTEXPR static const VkImageCreateFlags VK_IMAGE_CREATE_ALIAS_BIT_KHR = VkImageCreateFlags::VK_IMAGE_CREATE_ALIAS_BIT_KHR;
VKBINDING_CONSTEXPR static const VkImageCreateFlags VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT = VkImageCreateFlags::VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT;
VKBINDING_CONSTEXPR static const VkImageCreateFlags VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT_KHR = VkImageCreateFlags::VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkImageCreateFlags VK_IMAGE_CREATE_CORNER_SAMPLED_BIT_NV = VkImageCreateFlags::VK_IMAGE_CREATE_CORNER_SAMPLED_BIT_NV;
VKBINDING_CONSTEXPR static const VkImageCreateFlags VK_IMAGE_CREATE_DISJOINT_BIT = VkImageCreateFlags::VK_IMAGE_CREATE_DISJOINT_BIT;
VKBINDING_CONSTEXPR static const VkImageCreateFlags VK_IMAGE_CREATE_DISJOINT_BIT_KHR = VkImageCreateFlags::VK_IMAGE_CREATE_DISJOINT_BIT_KHR;
VKBINDING_CONSTEXPR static const VkImageCreateFlags VK_IMAGE_CREATE_EXTENDED_USAGE_BIT = VkImageCreateFlags::VK_IMAGE_CREATE_EXTENDED_USAGE_BIT;
VKBINDING_CONSTEXPR static const VkImageCreateFlags VK_IMAGE_CREATE_EXTENDED_USAGE_BIT_KHR = VkImageCreateFlags::VK_IMAGE_CREATE_EXTENDED_USAGE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkImageCreateFlags VK_IMAGE_CREATE_PROTECTED_BIT = VkImageCreateFlags::VK_IMAGE_CREATE_PROTECTED_BIT;
VKBINDING_CONSTEXPR static const VkImageCreateFlags VK_IMAGE_CREATE_SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_EXT = VkImageCreateFlags::VK_IMAGE_CREATE_SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_EXT;
VKBINDING_CONSTEXPR static const VkImageCreateFlags VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT = VkImageCreateFlags::VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT;
VKBINDING_CONSTEXPR static const VkImageCreateFlags VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR = VkImageCreateFlags::VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR;
VKBINDING_CONSTEXPR static const VkImageCreateFlags VK_IMAGE_CREATE_SUBSAMPLED_BIT_EXT = VkImageCreateFlags::VK_IMAGE_CREATE_SUBSAMPLED_BIT_EXT;
VKBINDING_CONSTEXPR static const VkImageUsageFlags VK_IMAGE_USAGE_FRAGMENT_DENSITY_MAP_BIT_EXT = VkImageUsageFlags::VK_IMAGE_USAGE_FRAGMENT_DENSITY_MAP_BIT_EXT;
VKBINDING_CONSTEXPR static const VkImageUsageFlags VK_IMAGE_USAGE_SHADING_RATE_IMAGE_BIT_NV = VkImageUsageFlags::VK_IMAGE_USAGE_SHADING_RATE_IMAGE_BIT_NV;
VKBINDING_CONSTEXPR static const VkImageViewCreateFlags VK_IMAGE_VIEW_CREATE_FRAGMENT_DENSITY_MAP_DYNAMIC_BIT_EXT = VkImageViewCreateFlags::VK_IMAGE_VIEW_CREATE_FRAGMENT_DENSITY_MAP_DYNAMIC_BIT_EXT;
VKBINDING_CONSTEXPR static const VkMemoryAllocateFlags VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT_KHR = VkMemoryAllocateFlags::VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT_KHR;
VKBINDING_CONSTEXPR static const VkMemoryHeapFlags VK_MEMORY_HEAP_MULTI_INSTANCE_BIT = VkMemoryHeapFlags::VK_MEMORY_HEAP_MULTI_INSTANCE_BIT;
VKBINDING_CONSTEXPR static const VkMemoryHeapFlags VK_MEMORY_HEAP_MULTI_INSTANCE_BIT_KHR = VkMemoryHeapFlags::VK_MEMORY_HEAP_MULTI_INSTANCE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkMemoryPropertyFlags VK_MEMORY_PROPERTY_PROTECTED_BIT = VkMemoryPropertyFlags::VK_MEMORY_PROPERTY_PROTECTED_BIT;
VKBINDING_CONSTEXPR static const vkbinding::SharedBitfield<VkAccessFlags, VkAttachmentDescriptionFlags, VkBufferCreateFlags, VkBufferUsageFlags, VkBufferViewCreateFlags, VkBuildAccelerationStructureFlagsNV, VkColorComponentFlags, VkCommandBufferResetFlags, VkCommandBufferUsageFlags, VkCommandPoolCreateFlags, VkCommandPoolResetFlags, VkCommandPoolTrimFlags, VkCommandPoolTrimFlagsKHR, VkCompositeAlphaFlagsKHR, VkConditionalRenderingFlagsEXT, VkCullModeFlags, VkDebugReportFlagsEXT, VkDebugUtilsMessageSeverityFlagsEXT, VkDebugUtilsMessageTypeFlagsEXT, VkDebugUtilsMessengerCallbackDataFlagsEXT, VkDependencyFlags, VkDescriptorPoolCreateFlags, VkDescriptorPoolResetFlags, VkDescriptorSetLayoutCreateFlags, VkDescriptorUpdateTemplateCreateFlags, VkDescriptorUpdateTemplateCreateFlagsKHR, VkDeviceCreateFlags, VkDeviceGroupPresentModeFlagsKHR, VkDeviceQueueCreateFlags, VkDisplayModeCreateFlagsKHR, VkDisplayPlaneAlphaFlagsKHR, VkDisplaySurfaceCreateFlagsKHR, VkEventCreateFlags, VkExternalFenceFeatureFlagBitsKHR, VkExternalFenceFeatureFlags, VkExternalFenceFeatureFlagsKHR, VkExternalFenceHandleTypeFlagBitsKHR, VkExternalFenceHandleTypeFlags, VkExternalFenceHandleTypeFlagsKHR, VkExternalMemoryFeatureFlagBitsKHR, VkExternalMemoryFeatureFlags, VkExternalMemoryFeatureFlagsKHR, VkExternalMemoryFeatureFlagsNV, VkExternalMemoryHandleTypeFlagBitsKHR, VkExternalMemoryHandleTypeFlags, VkExternalMemoryHandleTypeFlagsKHR, VkExternalMemoryHandleTypeFlagsNV, VkExternalSemaphoreFeatureFlagBitsKHR, VkExternalSemaphoreFeatureFlags, VkExternalSemaphoreFeatureFlagsKHR, VkExternalSemaphoreHandleTypeFlagBitsKHR, VkExternalSemaphoreHandleTypeFlags, VkExternalSemaphoreHandleTypeFlagsKHR, VkFenceCreateFlags, VkFenceImportFlagBitsKHR, VkFenceImportFlags, VkFenceImportFlagsKHR, VkFormatFeatureFlags, VkFramebufferCreateFlags, VkGeometryFlagsNV, VkGeometryInstanceFlagsNV, VkHeadlessSurfaceCreateFlagsEXT, VkImageAspectFlags, VkImageCreateFlags, VkImageUsageFlags, VkImageViewCreateFlags, VkIndirectCommandsLayoutUsageFlagsNVX, VkInstanceCreateFlags, VkMemoryAllocateFlagBitsKHR, VkMemoryAllocateFlags, VkMemoryAllocateFlagsKHR, VkMemoryHeapFlags, VkMemoryMapFlags, VkMemoryPropertyFlags, VkObjectEntryUsageFlagsNVX, VkPeerMemoryFeatureFlagBitsKHR, VkPeerMemoryFeatureFlags, VkPeerMemoryFeatureFlagsKHR, VkPipelineCacheCreateFlags, VkPipelineColorBlendStateCreateFlags, VkPipelineCompilerControlFlagsAMD, VkPipelineCoverageModulationStateCreateFlagsNV, VkPipelineCoverageReductionStateCreateFlagsNV, VkPipelineCoverageToColorStateCreateFlagsNV, VkPipelineCreateFlags, VkPipelineCreationFeedbackFlagsEXT, VkPipelineDepthStencilStateCreateFlags, VkPipelineDiscardRectangleStateCreateFlagsEXT, VkPipelineDynamicStateCreateFlags, VkPipelineInputAssemblyStateCreateFlags, VkPipelineLayoutCreateFlags, VkPipelineMultisampleStateCreateFlags, VkPipelineRasterizationConservativeStateCreateFlagsEXT, VkPipelineRasterizationDepthClipStateCreateFlagsEXT, VkPipelineRasterizationStateCreateFlags, VkPipelineRasterizationStateStreamCreateFlagsEXT, VkPipelineShaderStageCreateFlags, VkPipelineStageFlags, VkPipelineTessellationStateCreateFlags, VkPipelineVertexInputStateCreateFlags, VkPipelineViewportStateCreateFlags, VkPipelineViewportSwizzleStateCreateFlagsNV, VkQueryControlFlags, VkQueryPipelineStatisticFlags, VkQueryPoolCreateFlags, VkQueryResultFlags, VkQueueFlags, VkRenderPassCreateFlags, VkResolveModeFlagsKHR, VkSampleCountFlags, VkSamplerCreateFlags, VkSemaphoreCreateFlags, VkSemaphoreImportFlagBitsKHR, VkSemaphoreImportFlags, VkSemaphoreImportFlagsKHR, VkShaderCorePropertiesFlagsAMD, VkShaderModuleCreateFlags, VkShaderStageFlags, VkSparseImageFormatFlags, VkSparseMemoryBindFlags, VkStencilFaceFlags, VkSubgroupFeatureFlags, VkSubpassDescriptionFlags, VkSurfaceCounterFlagsEXT, VkSurfaceTransformFlagsKHR, VkSwapchainCreateFlagsKHR, VkValidationCacheCreateFlagsEXT> VK_NONE_BIT = VkAccessFlags::VK_NONE_BIT;
VKBINDING_CONSTEXPR static const VkPeerMemoryFeatureFlags VK_PEER_MEMORY_FEATURE_COPY_DST_BIT_KHR = VkPeerMemoryFeatureFlags::VK_PEER_MEMORY_FEATURE_COPY_DST_BIT_KHR;
VKBINDING_CONSTEXPR static const VkPeerMemoryFeatureFlags VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT_KHR = VkPeerMemoryFeatureFlags::VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT_KHR;
VKBINDING_CONSTEXPR static const VkPeerMemoryFeatureFlags VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT_KHR = VkPeerMemoryFeatureFlags::VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT_KHR;
VKBINDING_CONSTEXPR static const VkPeerMemoryFeatureFlags VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT_KHR = VkPeerMemoryFeatureFlags::VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT_KHR;
VKBINDING_CONSTEXPR static const VkPipelineCreateFlags VK_PIPELINE_CREATE_CAPTURE_INTERNAL_REPRESENTATIONS_BIT_KHR = VkPipelineCreateFlags::VK_PIPELINE_CREATE_CAPTURE_INTERNAL_REPRESENTATIONS_BIT_KHR;
VKBINDING_CONSTEXPR static const VkPipelineCreateFlags VK_PIPELINE_CREATE_CAPTURE_STATISTICS_BIT_KHR = VkPipelineCreateFlags::VK_PIPELINE_CREATE_CAPTURE_STATISTICS_BIT_KHR;
VKBINDING_CONSTEXPR static const VkPipelineCreateFlags VK_PIPELINE_CREATE_DEFER_COMPILE_BIT_NV = VkPipelineCreateFlags::VK_PIPELINE_CREATE_DEFER_COMPILE_BIT_NV;
VKBINDING_CONSTEXPR static const VkPipelineCreateFlags VK_PIPELINE_CREATE_DISPATCH_BASE = VkPipelineCreateFlags::VK_PIPELINE_CREATE_DISPATCH_BASE;
VKBINDING_CONSTEXPR static const VkPipelineCreateFlags VK_PIPELINE_CREATE_DISPATCH_BASE_KHR = VkPipelineCreateFlags::VK_PIPELINE_CREATE_DISPATCH_BASE_KHR;
VKBINDING_CONSTEXPR static const VkPipelineCreateFlags VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT = VkPipelineCreateFlags::VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT;
VKBINDING_CONSTEXPR static const VkPipelineCreateFlags VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT_KHR = VkPipelineCreateFlags::VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT_KHR;
VKBINDING_CONSTEXPR static const VkPipelineShaderStageCreateFlags VK_PIPELINE_SHADER_STAGE_CREATE_ALLOW_VARYING_SUBGROUP_SIZE_BIT_EXT = VkPipelineShaderStageCreateFlags::VK_PIPELINE_SHADER_STAGE_CREATE_ALLOW_VARYING_SUBGROUP_SIZE_BIT_EXT;
VKBINDING_CONSTEXPR static const VkPipelineShaderStageCreateFlags VK_PIPELINE_SHADER_STAGE_CREATE_REQUIRE_FULL_SUBGROUPS_BIT_EXT = VkPipelineShaderStageCreateFlags::VK_PIPELINE_SHADER_STAGE_CREATE_REQUIRE_FULL_SUBGROUPS_BIT_EXT;
VKBINDING_CONSTEXPR static const VkPipelineStageFlags VK_PIPELINE_STAGE_ACCELERATION_STRUCTURE_BUILD_BIT_NV = VkPipelineStageFlags::VK_PIPELINE_STAGE_ACCELERATION_STRUCTURE_BUILD_BIT_NV;
VKBINDING_CONSTEXPR static const VkPipelineStageFlags VK_PIPELINE_STAGE_COMMAND_PROCESS_BIT_NVX = VkPipelineStageFlags::VK_PIPELINE_STAGE_COMMAND_PROCESS_BIT_NVX;
VKBINDING_CONSTEXPR static const VkPipelineStageFlags VK_PIPELINE_STAGE_CONDITIONAL_RENDERING_BIT_EXT = VkPipelineStageFlags::VK_PIPELINE_STAGE_CONDITIONAL_RENDERING_BIT_EXT;
VKBINDING_CONSTEXPR static const VkPipelineStageFlags VK_PIPELINE_STAGE_FRAGMENT_DENSITY_PROCESS_BIT_EXT = VkPipelineStageFlags::VK_PIPELINE_STAGE_FRAGMENT_DENSITY_PROCESS_BIT_EXT;
VKBINDING_CONSTEXPR static const VkPipelineStageFlags VK_PIPELINE_STAGE_MESH_SHADER_BIT_NV = VkPipelineStageFlags::VK_PIPELINE_STAGE_MESH_SHADER_BIT_NV;
VKBINDING_CONSTEXPR static const VkPipelineStageFlags VK_PIPELINE_STAGE_RAY_TRACING_SHADER_BIT_NV = VkPipelineStageFlags::VK_PIPELINE_STAGE_RAY_TRACING_SHADER_BIT_NV;
VKBINDING_CONSTEXPR static const VkPipelineStageFlags VK_PIPELINE_STAGE_SHADING_RATE_IMAGE_BIT_NV = VkPipelineStageFlags::VK_PIPELINE_STAGE_SHADING_RATE_IMAGE_BIT_NV;
VKBINDING_CONSTEXPR static const VkPipelineStageFlags VK_PIPELINE_STAGE_TASK_SHADER_BIT_NV = VkPipelineStageFlags::VK_PIPELINE_STAGE_TASK_SHADER_BIT_NV;
VKBINDING_CONSTEXPR static const VkPipelineStageFlags VK_PIPELINE_STAGE_TRANSFORM_FEEDBACK_BIT_EXT = VkPipelineStageFlags::VK_PIPELINE_STAGE_TRANSFORM_FEEDBACK_BIT_EXT;
VKBINDING_CONSTEXPR static const VkQueueFlags VK_QUEUE_PROTECTED_BIT = VkQueueFlags::VK_QUEUE_PROTECTED_BIT;
VKBINDING_CONSTEXPR static const VkSamplerCreateFlags VK_SAMPLER_CREATE_SUBSAMPLED_BIT_EXT = VkSamplerCreateFlags::VK_SAMPLER_CREATE_SUBSAMPLED_BIT_EXT;
VKBINDING_CONSTEXPR static const VkSamplerCreateFlags VK_SAMPLER_CREATE_SUBSAMPLED_COARSE_RECONSTRUCTION_BIT_EXT = VkSamplerCreateFlags::VK_SAMPLER_CREATE_SUBSAMPLED_COARSE_RECONSTRUCTION_BIT_EXT;
VKBINDING_CONSTEXPR static const VkSemaphoreImportFlags VK_SEMAPHORE_IMPORT_TEMPORARY_BIT_KHR = VkSemaphoreImportFlags::VK_SEMAPHORE_IMPORT_TEMPORARY_BIT_KHR;
VKBINDING_CONSTEXPR static const VkShaderStageFlags VK_SHADER_STAGE_ANY_HIT_BIT_NV = VkShaderStageFlags::VK_SHADER_STAGE_ANY_HIT_BIT_NV;
VKBINDING_CONSTEXPR static const VkShaderStageFlags VK_SHADER_STAGE_CALLABLE_BIT_NV = VkShaderStageFlags::VK_SHADER_STAGE_CALLABLE_BIT_NV;
VKBINDING_CONSTEXPR static const VkShaderStageFlags VK_SHADER_STAGE_CLOSEST_HIT_BIT_NV = VkShaderStageFlags::VK_SHADER_STAGE_CLOSEST_HIT_BIT_NV;
VKBINDING_CONSTEXPR static const VkShaderStageFlags VK_SHADER_STAGE_INTERSECTION_BIT_NV = VkShaderStageFlags::VK_SHADER_STAGE_INTERSECTION_BIT_NV;
VKBINDING_CONSTEXPR static const VkShaderStageFlags VK_SHADER_STAGE_MESH_BIT_NV = VkShaderStageFlags::VK_SHADER_STAGE_MESH_BIT_NV;
VKBINDING_CONSTEXPR static const VkShaderStageFlags VK_SHADER_STAGE_MISS_BIT_NV = VkShaderStageFlags::VK_SHADER_STAGE_MISS_BIT_NV;
VKBINDING_CONSTEXPR static const VkShaderStageFlags VK_SHADER_STAGE_RAYGEN_BIT_NV = VkShaderStageFlags::VK_SHADER_STAGE_RAYGEN_BIT_NV;
VKBINDING_CONSTEXPR static const VkShaderStageFlags VK_SHADER_STAGE_TASK_BIT_NV = VkShaderStageFlags::VK_SHADER_STAGE_TASK_BIT_NV;
VKBINDING_CONSTEXPR static const VkSubgroupFeatureFlags VK_SUBGROUP_FEATURE_PARTITIONED_BIT_NV = VkSubgroupFeatureFlags::VK_SUBGROUP_FEATURE_PARTITIONED_BIT_NV;
VKBINDING_CONSTEXPR static const VkSubpassDescriptionFlags VK_SUBPASS_DESCRIPTION_PER_VIEW_ATTRIBUTES_BIT_NVX = VkSubpassDescriptionFlags::VK_SUBPASS_DESCRIPTION_PER_VIEW_ATTRIBUTES_BIT_NVX;
VKBINDING_CONSTEXPR static const VkSubpassDescriptionFlags VK_SUBPASS_DESCRIPTION_PER_VIEW_POSITION_X_ONLY_BIT_NVX = VkSubpassDescriptionFlags::VK_SUBPASS_DESCRIPTION_PER_VIEW_POSITION_X_ONLY_BIT_NVX;
VKBINDING_CONSTEXPR static const VkSwapchainCreateFlagsKHR VK_SWAPCHAIN_CREATE_MUTABLE_FORMAT_BIT_KHR = VkSwapchainCreateFlagsKHR::VK_SWAPCHAIN_CREATE_MUTABLE_FORMAT_BIT_KHR;
VKBINDING_CONSTEXPR static const VkSwapchainCreateFlagsKHR VK_SWAPCHAIN_CREATE_PROTECTED_BIT_KHR = VkSwapchainCreateFlagsKHR::VK_SWAPCHAIN_CREATE_PROTECTED_BIT_KHR;
VKBINDING_CONSTEXPR static const VkSwapchainCreateFlagsKHR VK_SWAPCHAIN_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR = VkSwapchainCreateFlagsKHR::VK_SWAPCHAIN_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR;
VKBINDING_CONSTEXPR static const UnusedMask VK_UNUSED_BIT = UnusedMask::VK_UNUSED_BIT;


} // namespace vk