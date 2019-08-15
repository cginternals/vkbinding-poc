
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


enum class VkAccessFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_ACCESS_CONDITIONAL_RENDERING_READ_BIT_EXT                                                      = 0x100000,
    VK_ACCESS_FRAGMENT_DENSITY_MAP_READ_BIT_EXT                                                       = 0x1000000,
    VK_ACCESS_COMMAND_PROCESS_READ_BIT_NVX                                                            = 0x20000,
    VK_ACCESS_ACCELERATION_STRUCTURE_READ_BIT_NV                                                      = 0x200000,
    VK_ACCESS_TRANSFORM_FEEDBACK_WRITE_BIT_EXT                                                        = 0x2000000,
    VK_ACCESS_COMMAND_PROCESS_WRITE_BIT_NVX                                                           = 0x40000,
    VK_ACCESS_ACCELERATION_STRUCTURE_WRITE_BIT_NV                                                     = 0x400000,
    VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT                                                 = 0x4000000,
    VK_ACCESS_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT                                               = 0x80000,
    VK_ACCESS_SHADING_RATE_IMAGE_READ_BIT_NV                                                          = 0x800000,
    VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT                                                = 0x8000000
};


enum class VkBufferCreateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_EXT                                            = 0x10,
    VK_BUFFER_CREATE_PROTECTED_BIT                                                                    = 0x8
};


enum class VkBufferUsageFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT                                         = 0x1000,
    VK_BUFFER_USAGE_CONDITIONAL_RENDERING_BIT_EXT                                                     = 0x200,
    VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT_EXT                                                     = 0x20000,
    VK_BUFFER_USAGE_RAY_TRACING_BIT_NV                                                                = 0x400,
    VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT                                                 = 0x800
};


enum class VkBuildAccelerationStructureFlagBitsNV : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkCommandPoolCreateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_COMMAND_POOL_CREATE_PROTECTED_BIT                                                              = 0x4
};


enum class VkConditionalRenderingFlagBitsEXT : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkDebugUtilsMessageSeverityFlagBitsEXT : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkDependencyFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_DEPENDENCY_VIEW_LOCAL_BIT                                                                      = 0x2,
    VK_DEPENDENCY_VIEW_LOCAL_BIT_KHR                                                                  = 0x2,
    VK_DEPENDENCY_DEVICE_GROUP_BIT                                                                    = 0x4,
    VK_DEPENDENCY_DEVICE_GROUP_BIT_KHR                                                                = 0x4
};


enum class VkDescriptorPoolCreateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT_EXT                                               = 0x2
};


enum class VkDescriptorSetLayoutCreateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR                                           = 0x1,
    VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT_EXT                                    = 0x2
};


enum class VkDeviceGroupPresentModeFlagBitsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkDeviceQueueCreateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT                                                              = 0x1
};


enum class VkDisplayPlaneAlphaFlagBitsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkExternalFenceFeatureFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT_KHR                                                      = 0x1,
    VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT_KHR                                                      = 0x2
};


enum class VkExternalFenceHandleTypeFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR                                                   = 0x1,
    VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR                                                = 0x2,
    VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR                                            = 0x4,
    VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT_KHR                                                     = 0x8
};


enum class VkExternalMemoryFeatureFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_KHR                                                 = 0x1,
    VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_KHR                                                     = 0x2,
    VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_KHR                                                     = 0x4
};


enum class VkExternalMemoryFeatureFlagBitsNV : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkExternalMemoryHandleTypeFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT_KHR                                                  = 0x1,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT_KHR                                          = 0x10,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT                                 = 0x100,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR                                               = 0x2,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT_KHR                                                 = 0x20,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT                                                    = 0x200,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR                                           = 0x4,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT_KHR                                             = 0x40,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT_KHR                                              = 0x8,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_ALLOCATION_BIT_EXT                                            = 0x80
};


enum class VkExternalMemoryHandleTypeFlagBitsNV : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkExternalSemaphoreFeatureFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT_KHR                                                  = 0x1,
    VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT_KHR                                                  = 0x2
};


enum class VkExternalSemaphoreHandleTypeFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR                                               = 0x1,
    VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT_KHR                                                 = 0x10,
    VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR                                            = 0x2,
    VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR                                        = 0x4,
    VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT_KHR                                             = 0x8
};


enum class VkFenceImportFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_FENCE_IMPORT_TEMPORARY_BIT_KHR                                                                 = 0x1
};


enum class VkFormatFeatureFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT_EXT                                             = 0x10000,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT               = 0x100000,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT_KHR           = 0x100000,
    VK_FORMAT_FEATURE_FRAGMENT_DENSITY_MAP_BIT_EXT                                                    = 0x1000000,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG                                              = 0x2000,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_EXT                                              = 0x2000,
    VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT                                                     = 0x20000,
    VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT_KHR                                                 = 0x20000,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT     = 0x200000,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT_KHR = 0x200000,
    VK_FORMAT_FEATURE_TRANSFER_SRC_BIT                                                                = 0x4000,
    VK_FORMAT_FEATURE_TRANSFER_SRC_BIT_KHR                                                            = 0x4000,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT                                = 0x40000,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT_KHR                            = 0x40000,
    VK_FORMAT_FEATURE_DISJOINT_BIT                                                                    = 0x400000,
    VK_FORMAT_FEATURE_DISJOINT_BIT_KHR                                                                = 0x400000,
    VK_FORMAT_FEATURE_TRANSFER_DST_BIT                                                                = 0x8000,
    VK_FORMAT_FEATURE_TRANSFER_DST_BIT_KHR                                                            = 0x8000,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT               = 0x80000,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT_KHR           = 0x80000,
    VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT                                                      = 0x800000,
    VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT_KHR                                                  = 0x800000
};


enum class VkFramebufferCreateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT_KHR                                                           = 0x1
};


enum class VkGeometryFlagBitsNV : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkGeometryInstanceFlagBitsNV : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkImageAspectFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_IMAGE_ASPECT_PLANE_0_BIT                                                                       = 0x10,
    VK_IMAGE_ASPECT_PLANE_0_BIT_KHR                                                                   = 0x10,
    VK_IMAGE_ASPECT_MEMORY_PLANE_1_BIT_EXT                                                            = 0x100,
    VK_IMAGE_ASPECT_PLANE_1_BIT                                                                       = 0x20,
    VK_IMAGE_ASPECT_PLANE_1_BIT_KHR                                                                   = 0x20,
    VK_IMAGE_ASPECT_MEMORY_PLANE_2_BIT_EXT                                                            = 0x200,
    VK_IMAGE_ASPECT_PLANE_2_BIT                                                                       = 0x40,
    VK_IMAGE_ASPECT_PLANE_2_BIT_KHR                                                                   = 0x40,
    VK_IMAGE_ASPECT_MEMORY_PLANE_3_BIT_EXT                                                            = 0x400,
    VK_IMAGE_ASPECT_MEMORY_PLANE_0_BIT_EXT                                                            = 0x80
};


enum class VkImageCreateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_IMAGE_CREATE_EXTENDED_USAGE_BIT                                                                = 0x100,
    VK_IMAGE_CREATE_EXTENDED_USAGE_BIT_KHR                                                            = 0x100,
    VK_IMAGE_CREATE_SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_EXT                                         = 0x1000,
    VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT                                                           = 0x20,
    VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT_KHR                                                       = 0x20,
    VK_IMAGE_CREATE_DISJOINT_BIT                                                                      = 0x200,
    VK_IMAGE_CREATE_DISJOINT_BIT_KHR                                                                  = 0x200,
    VK_IMAGE_CREATE_CORNER_SAMPLED_BIT_NV                                                             = 0x2000,
    VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT                                                   = 0x40,
    VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR                                               = 0x40,
    VK_IMAGE_CREATE_ALIAS_BIT                                                                         = 0x400,
    VK_IMAGE_CREATE_ALIAS_BIT_KHR                                                                     = 0x400,
    VK_IMAGE_CREATE_SUBSAMPLED_BIT_EXT                                                                = 0x4000,
    VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT                                                   = 0x80,
    VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT_KHR                                               = 0x80,
    VK_IMAGE_CREATE_PROTECTED_BIT                                                                     = 0x800
};


enum class VkImageUsageFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_IMAGE_USAGE_SHADING_RATE_IMAGE_BIT_NV                                                          = 0x100,
    VK_IMAGE_USAGE_FRAGMENT_DENSITY_MAP_BIT_EXT                                                       = 0x200
};


enum class VkImageViewCreateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_IMAGE_VIEW_CREATE_FRAGMENT_DENSITY_MAP_DYNAMIC_BIT_EXT                                         = 0x1
};


enum class VkIndirectCommandsLayoutUsageFlagBitsNVX : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkMemoryAllocateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT_KHR                                                            = 0x1
};


enum class VkMemoryHeapFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_MEMORY_HEAP_MULTI_INSTANCE_BIT                                                                 = 0x2,
    VK_MEMORY_HEAP_MULTI_INSTANCE_BIT_KHR                                                             = 0x2
};


enum class VkMemoryPropertyFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_MEMORY_PROPERTY_PROTECTED_BIT                                                                  = 0x20
};


enum class VkObjectEntryUsageFlagBitsNVX : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPeerMemoryFeatureFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT_KHR                                                           = 0x1,
    VK_PEER_MEMORY_FEATURE_COPY_DST_BIT_KHR                                                           = 0x2,
    VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT_KHR                                                        = 0x4,
    VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT_KHR                                                        = 0x8
};


enum class VkPipelineCreateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_PIPELINE_CREATE_DISPATCH_BASE                                                                  = 0x10,
    VK_PIPELINE_CREATE_DISPATCH_BASE_KHR                                                              = 0x10,
    VK_PIPELINE_CREATE_DEFER_COMPILE_BIT_NV                                                           = 0x20,
    VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT                                               = 0x8,
    VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT_KHR                                           = 0x8
};


enum class VkPipelineCreationFeedbackFlagBitsEXT : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPipelineShaderStageCreateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_PIPELINE_SHADER_STAGE_CREATE_ALLOW_VARYING_SUBGROUP_SIZE_BIT_EXT                               = 0x1,
    VK_PIPELINE_SHADER_STAGE_CREATE_REQUIRE_FULL_SUBGROUPS_BIT_EXT                                    = 0x2
};


enum class VkPipelineStageFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_PIPELINE_STAGE_MESH_SHADER_BIT_NV                                                              = 0x100000,
    VK_PIPELINE_STAGE_TRANSFORM_FEEDBACK_BIT_EXT                                                      = 0x1000000,
    VK_PIPELINE_STAGE_COMMAND_PROCESS_BIT_NVX                                                         = 0x20000,
    VK_PIPELINE_STAGE_RAY_TRACING_SHADER_BIT_NV                                                       = 0x200000,
    VK_PIPELINE_STAGE_ACCELERATION_STRUCTURE_BUILD_BIT_NV                                             = 0x2000000,
    VK_PIPELINE_STAGE_CONDITIONAL_RENDERING_BIT_EXT                                                   = 0x40000,
    VK_PIPELINE_STAGE_SHADING_RATE_IMAGE_BIT_NV                                                       = 0x400000,
    VK_PIPELINE_STAGE_TASK_SHADER_BIT_NV                                                              = 0x80000,
    VK_PIPELINE_STAGE_FRAGMENT_DENSITY_PROCESS_BIT_EXT                                                = 0x800000
};


enum class VkQueueFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_QUEUE_PROTECTED_BIT                                                                            = 0x10
};


enum class VkResolveModeFlagBitsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkSampleCountFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkSamplerCreateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_SAMPLER_CREATE_SUBSAMPLED_BIT_EXT                                                              = 0x1,
    VK_SAMPLER_CREATE_SUBSAMPLED_COARSE_RECONSTRUCTION_BIT_EXT                                        = 0x2
};


enum class VkSemaphoreImportFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_SEMAPHORE_IMPORT_TEMPORARY_BIT_KHR                                                             = 0x1
};


enum class VkShaderStageFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_SHADER_STAGE_RAYGEN_BIT_NV                                                                     = 0x100,
    VK_SHADER_STAGE_INTERSECTION_BIT_NV                                                               = 0x1000,
    VK_SHADER_STAGE_ANY_HIT_BIT_NV                                                                    = 0x200,
    VK_SHADER_STAGE_CALLABLE_BIT_NV                                                                   = 0x2000,
    VK_SHADER_STAGE_TASK_BIT_NV                                                                       = 0x40,
    VK_SHADER_STAGE_CLOSEST_HIT_BIT_NV                                                                = 0x400,
    VK_SHADER_STAGE_MESH_BIT_NV                                                                       = 0x80,
    VK_SHADER_STAGE_MISS_BIT_NV                                                                       = 0x800
};


enum class VkSubgroupFeatureFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_SUBGROUP_FEATURE_PARTITIONED_BIT_NV                                                            = 0x100
};


enum class VkSubpassDescriptionFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_SUBPASS_DESCRIPTION_PER_VIEW_ATTRIBUTES_BIT_NVX                                                = 0x1,
    VK_SUBPASS_DESCRIPTION_PER_VIEW_POSITION_X_ONLY_BIT_NVX                                           = 0x2
};


enum class VkSurfaceCounterFlagBitsEXT : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkSwapchainCreateFlagBitsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_SWAPCHAIN_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR                                           = 0x1,
    VK_SWAPCHAIN_CREATE_PROTECTED_BIT_KHR                                                             = 0x2,
    VK_SWAPCHAIN_CREATE_MUTABLE_FORMAT_BIT_KHR                                                        = 0x4
};


// import bitfields to namespace

VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_ACCELERATION_STRUCTURE_READ_BIT_NV = VkAccessFlagBits::VK_ACCESS_ACCELERATION_STRUCTURE_READ_BIT_NV;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_ACCELERATION_STRUCTURE_WRITE_BIT_NV = VkAccessFlagBits::VK_ACCESS_ACCELERATION_STRUCTURE_WRITE_BIT_NV;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT = VkAccessFlagBits::VK_ACCESS_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_COMMAND_PROCESS_READ_BIT_NVX = VkAccessFlagBits::VK_ACCESS_COMMAND_PROCESS_READ_BIT_NVX;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_COMMAND_PROCESS_WRITE_BIT_NVX = VkAccessFlagBits::VK_ACCESS_COMMAND_PROCESS_WRITE_BIT_NVX;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_CONDITIONAL_RENDERING_READ_BIT_EXT = VkAccessFlagBits::VK_ACCESS_CONDITIONAL_RENDERING_READ_BIT_EXT;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_FRAGMENT_DENSITY_MAP_READ_BIT_EXT = VkAccessFlagBits::VK_ACCESS_FRAGMENT_DENSITY_MAP_READ_BIT_EXT;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_SHADING_RATE_IMAGE_READ_BIT_NV = VkAccessFlagBits::VK_ACCESS_SHADING_RATE_IMAGE_READ_BIT_NV;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT = VkAccessFlagBits::VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT = VkAccessFlagBits::VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_TRANSFORM_FEEDBACK_WRITE_BIT_EXT = VkAccessFlagBits::VK_ACCESS_TRANSFORM_FEEDBACK_WRITE_BIT_EXT;
VKBINDING_CONSTEXPR static const VkBufferCreateFlagBits VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_EXT = VkBufferCreateFlagBits::VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_EXT;
VKBINDING_CONSTEXPR static const VkBufferCreateFlagBits VK_BUFFER_CREATE_PROTECTED_BIT = VkBufferCreateFlagBits::VK_BUFFER_CREATE_PROTECTED_BIT;
VKBINDING_CONSTEXPR static const VkBufferUsageFlagBits VK_BUFFER_USAGE_CONDITIONAL_RENDERING_BIT_EXT = VkBufferUsageFlagBits::VK_BUFFER_USAGE_CONDITIONAL_RENDERING_BIT_EXT;
VKBINDING_CONSTEXPR static const VkBufferUsageFlagBits VK_BUFFER_USAGE_RAY_TRACING_BIT_NV = VkBufferUsageFlagBits::VK_BUFFER_USAGE_RAY_TRACING_BIT_NV;
VKBINDING_CONSTEXPR static const VkBufferUsageFlagBits VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT_EXT = VkBufferUsageFlagBits::VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT_EXT;
VKBINDING_CONSTEXPR static const VkBufferUsageFlagBits VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT = VkBufferUsageFlagBits::VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT;
VKBINDING_CONSTEXPR static const VkBufferUsageFlagBits VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT = VkBufferUsageFlagBits::VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT;
VKBINDING_CONSTEXPR static const VkCommandPoolCreateFlagBits VK_COMMAND_POOL_CREATE_PROTECTED_BIT = VkCommandPoolCreateFlagBits::VK_COMMAND_POOL_CREATE_PROTECTED_BIT;
VKBINDING_CONSTEXPR static const VkDependencyFlagBits VK_DEPENDENCY_DEVICE_GROUP_BIT = VkDependencyFlagBits::VK_DEPENDENCY_DEVICE_GROUP_BIT;
VKBINDING_CONSTEXPR static const VkDependencyFlagBits VK_DEPENDENCY_DEVICE_GROUP_BIT_KHR = VkDependencyFlagBits::VK_DEPENDENCY_DEVICE_GROUP_BIT_KHR;
VKBINDING_CONSTEXPR static const VkDependencyFlagBits VK_DEPENDENCY_VIEW_LOCAL_BIT = VkDependencyFlagBits::VK_DEPENDENCY_VIEW_LOCAL_BIT;
VKBINDING_CONSTEXPR static const VkDependencyFlagBits VK_DEPENDENCY_VIEW_LOCAL_BIT_KHR = VkDependencyFlagBits::VK_DEPENDENCY_VIEW_LOCAL_BIT_KHR;
VKBINDING_CONSTEXPR static const VkDescriptorPoolCreateFlagBits VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT_EXT = VkDescriptorPoolCreateFlagBits::VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT_EXT;
VKBINDING_CONSTEXPR static const VkDescriptorSetLayoutCreateFlagBits VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR = VkDescriptorSetLayoutCreateFlagBits::VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR;
VKBINDING_CONSTEXPR static const VkDescriptorSetLayoutCreateFlagBits VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT_EXT = VkDescriptorSetLayoutCreateFlagBits::VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT_EXT;
VKBINDING_CONSTEXPR static const VkDeviceQueueCreateFlagBits VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT = VkDeviceQueueCreateFlagBits::VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT;
VKBINDING_CONSTEXPR static const VkExternalFenceFeatureFlagBits VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT_KHR = VkExternalFenceFeatureFlagBits::VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalFenceFeatureFlagBits VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT_KHR = VkExternalFenceFeatureFlagBits::VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalFenceHandleTypeFlagBits VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR = VkExternalFenceHandleTypeFlagBits::VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalFenceHandleTypeFlagBits VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR = VkExternalFenceHandleTypeFlagBits::VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalFenceHandleTypeFlagBits VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR = VkExternalFenceHandleTypeFlagBits::VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalFenceHandleTypeFlagBits VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT_KHR = VkExternalFenceHandleTypeFlagBits::VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalMemoryFeatureFlagBits VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_KHR = VkExternalMemoryFeatureFlagBits::VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalMemoryFeatureFlagBits VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_KHR = VkExternalMemoryFeatureFlagBits::VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalMemoryFeatureFlagBits VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_KHR = VkExternalMemoryFeatureFlagBits::VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlagBits VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT_KHR = VkExternalMemoryHandleTypeFlagBits::VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlagBits VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT_KHR = VkExternalMemoryHandleTypeFlagBits::VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlagBits VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT_KHR = VkExternalMemoryHandleTypeFlagBits::VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlagBits VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT_KHR = VkExternalMemoryHandleTypeFlagBits::VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlagBits VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT = VkExternalMemoryHandleTypeFlagBits::VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlagBits VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_ALLOCATION_BIT_EXT = VkExternalMemoryHandleTypeFlagBits::VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_ALLOCATION_BIT_EXT;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlagBits VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT = VkExternalMemoryHandleTypeFlagBits::VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlagBits VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT_KHR = VkExternalMemoryHandleTypeFlagBits::VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlagBits VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR = VkExternalMemoryHandleTypeFlagBits::VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlagBits VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR = VkExternalMemoryHandleTypeFlagBits::VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalSemaphoreFeatureFlagBits VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT_KHR = VkExternalSemaphoreFeatureFlagBits::VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalSemaphoreFeatureFlagBits VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT_KHR = VkExternalSemaphoreFeatureFlagBits::VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalSemaphoreHandleTypeFlagBits VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT_KHR = VkExternalSemaphoreHandleTypeFlagBits::VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalSemaphoreHandleTypeFlagBits VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR = VkExternalSemaphoreHandleTypeFlagBits::VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalSemaphoreHandleTypeFlagBits VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR = VkExternalSemaphoreHandleTypeFlagBits::VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalSemaphoreHandleTypeFlagBits VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR = VkExternalSemaphoreHandleTypeFlagBits::VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalSemaphoreHandleTypeFlagBits VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT_KHR = VkExternalSemaphoreHandleTypeFlagBits::VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT_KHR;
VKBINDING_CONSTEXPR static const VkFenceImportFlagBits VK_FENCE_IMPORT_TEMPORARY_BIT_KHR = VkFenceImportFlagBits::VK_FENCE_IMPORT_TEMPORARY_BIT_KHR;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT_KHR = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT_KHR;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_DISJOINT_BIT = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_DISJOINT_BIT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_DISJOINT_BIT_KHR = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_DISJOINT_BIT_KHR;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_FRAGMENT_DENSITY_MAP_BIT_EXT = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_FRAGMENT_DENSITY_MAP_BIT_EXT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT_KHR = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT_KHR;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_EXT = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_EXT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT_EXT = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT_EXT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT_KHR = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT_KHR;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT_KHR = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT_KHR = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT_KHR;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT_KHR = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT_KHR;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_TRANSFER_DST_BIT = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_TRANSFER_DST_BIT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_TRANSFER_DST_BIT_KHR = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_TRANSFER_DST_BIT_KHR;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_TRANSFER_SRC_BIT = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_TRANSFER_SRC_BIT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_TRANSFER_SRC_BIT_KHR = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_TRANSFER_SRC_BIT_KHR;
VKBINDING_CONSTEXPR static const VkFramebufferCreateFlagBits VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT_KHR = VkFramebufferCreateFlagBits::VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT_KHR;
VKBINDING_CONSTEXPR static const VkImageAspectFlagBits VK_IMAGE_ASPECT_MEMORY_PLANE_0_BIT_EXT = VkImageAspectFlagBits::VK_IMAGE_ASPECT_MEMORY_PLANE_0_BIT_EXT;
VKBINDING_CONSTEXPR static const VkImageAspectFlagBits VK_IMAGE_ASPECT_MEMORY_PLANE_1_BIT_EXT = VkImageAspectFlagBits::VK_IMAGE_ASPECT_MEMORY_PLANE_1_BIT_EXT;
VKBINDING_CONSTEXPR static const VkImageAspectFlagBits VK_IMAGE_ASPECT_MEMORY_PLANE_2_BIT_EXT = VkImageAspectFlagBits::VK_IMAGE_ASPECT_MEMORY_PLANE_2_BIT_EXT;
VKBINDING_CONSTEXPR static const VkImageAspectFlagBits VK_IMAGE_ASPECT_MEMORY_PLANE_3_BIT_EXT = VkImageAspectFlagBits::VK_IMAGE_ASPECT_MEMORY_PLANE_3_BIT_EXT;
VKBINDING_CONSTEXPR static const VkImageAspectFlagBits VK_IMAGE_ASPECT_PLANE_0_BIT = VkImageAspectFlagBits::VK_IMAGE_ASPECT_PLANE_0_BIT;
VKBINDING_CONSTEXPR static const VkImageAspectFlagBits VK_IMAGE_ASPECT_PLANE_0_BIT_KHR = VkImageAspectFlagBits::VK_IMAGE_ASPECT_PLANE_0_BIT_KHR;
VKBINDING_CONSTEXPR static const VkImageAspectFlagBits VK_IMAGE_ASPECT_PLANE_1_BIT = VkImageAspectFlagBits::VK_IMAGE_ASPECT_PLANE_1_BIT;
VKBINDING_CONSTEXPR static const VkImageAspectFlagBits VK_IMAGE_ASPECT_PLANE_1_BIT_KHR = VkImageAspectFlagBits::VK_IMAGE_ASPECT_PLANE_1_BIT_KHR;
VKBINDING_CONSTEXPR static const VkImageAspectFlagBits VK_IMAGE_ASPECT_PLANE_2_BIT = VkImageAspectFlagBits::VK_IMAGE_ASPECT_PLANE_2_BIT;
VKBINDING_CONSTEXPR static const VkImageAspectFlagBits VK_IMAGE_ASPECT_PLANE_2_BIT_KHR = VkImageAspectFlagBits::VK_IMAGE_ASPECT_PLANE_2_BIT_KHR;
VKBINDING_CONSTEXPR static const VkImageCreateFlagBits VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT = VkImageCreateFlagBits::VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT;
VKBINDING_CONSTEXPR static const VkImageCreateFlagBits VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT_KHR = VkImageCreateFlagBits::VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkImageCreateFlagBits VK_IMAGE_CREATE_ALIAS_BIT = VkImageCreateFlagBits::VK_IMAGE_CREATE_ALIAS_BIT;
VKBINDING_CONSTEXPR static const VkImageCreateFlagBits VK_IMAGE_CREATE_ALIAS_BIT_KHR = VkImageCreateFlagBits::VK_IMAGE_CREATE_ALIAS_BIT_KHR;
VKBINDING_CONSTEXPR static const VkImageCreateFlagBits VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT = VkImageCreateFlagBits::VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT;
VKBINDING_CONSTEXPR static const VkImageCreateFlagBits VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT_KHR = VkImageCreateFlagBits::VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkImageCreateFlagBits VK_IMAGE_CREATE_CORNER_SAMPLED_BIT_NV = VkImageCreateFlagBits::VK_IMAGE_CREATE_CORNER_SAMPLED_BIT_NV;
VKBINDING_CONSTEXPR static const VkImageCreateFlagBits VK_IMAGE_CREATE_DISJOINT_BIT = VkImageCreateFlagBits::VK_IMAGE_CREATE_DISJOINT_BIT;
VKBINDING_CONSTEXPR static const VkImageCreateFlagBits VK_IMAGE_CREATE_DISJOINT_BIT_KHR = VkImageCreateFlagBits::VK_IMAGE_CREATE_DISJOINT_BIT_KHR;
VKBINDING_CONSTEXPR static const VkImageCreateFlagBits VK_IMAGE_CREATE_EXTENDED_USAGE_BIT = VkImageCreateFlagBits::VK_IMAGE_CREATE_EXTENDED_USAGE_BIT;
VKBINDING_CONSTEXPR static const VkImageCreateFlagBits VK_IMAGE_CREATE_EXTENDED_USAGE_BIT_KHR = VkImageCreateFlagBits::VK_IMAGE_CREATE_EXTENDED_USAGE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkImageCreateFlagBits VK_IMAGE_CREATE_PROTECTED_BIT = VkImageCreateFlagBits::VK_IMAGE_CREATE_PROTECTED_BIT;
VKBINDING_CONSTEXPR static const VkImageCreateFlagBits VK_IMAGE_CREATE_SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_EXT = VkImageCreateFlagBits::VK_IMAGE_CREATE_SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_EXT;
VKBINDING_CONSTEXPR static const VkImageCreateFlagBits VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT = VkImageCreateFlagBits::VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT;
VKBINDING_CONSTEXPR static const VkImageCreateFlagBits VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR = VkImageCreateFlagBits::VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR;
VKBINDING_CONSTEXPR static const VkImageCreateFlagBits VK_IMAGE_CREATE_SUBSAMPLED_BIT_EXT = VkImageCreateFlagBits::VK_IMAGE_CREATE_SUBSAMPLED_BIT_EXT;
VKBINDING_CONSTEXPR static const VkImageUsageFlagBits VK_IMAGE_USAGE_FRAGMENT_DENSITY_MAP_BIT_EXT = VkImageUsageFlagBits::VK_IMAGE_USAGE_FRAGMENT_DENSITY_MAP_BIT_EXT;
VKBINDING_CONSTEXPR static const VkImageUsageFlagBits VK_IMAGE_USAGE_SHADING_RATE_IMAGE_BIT_NV = VkImageUsageFlagBits::VK_IMAGE_USAGE_SHADING_RATE_IMAGE_BIT_NV;
VKBINDING_CONSTEXPR static const VkImageViewCreateFlagBits VK_IMAGE_VIEW_CREATE_FRAGMENT_DENSITY_MAP_DYNAMIC_BIT_EXT = VkImageViewCreateFlagBits::VK_IMAGE_VIEW_CREATE_FRAGMENT_DENSITY_MAP_DYNAMIC_BIT_EXT;
VKBINDING_CONSTEXPR static const VkMemoryAllocateFlagBits VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT_KHR = VkMemoryAllocateFlagBits::VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT_KHR;
VKBINDING_CONSTEXPR static const VkMemoryHeapFlagBits VK_MEMORY_HEAP_MULTI_INSTANCE_BIT = VkMemoryHeapFlagBits::VK_MEMORY_HEAP_MULTI_INSTANCE_BIT;
VKBINDING_CONSTEXPR static const VkMemoryHeapFlagBits VK_MEMORY_HEAP_MULTI_INSTANCE_BIT_KHR = VkMemoryHeapFlagBits::VK_MEMORY_HEAP_MULTI_INSTANCE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkMemoryPropertyFlagBits VK_MEMORY_PROPERTY_PROTECTED_BIT = VkMemoryPropertyFlagBits::VK_MEMORY_PROPERTY_PROTECTED_BIT;
VKBINDING_CONSTEXPR static const vkbinding::SharedBitfield<VkAccessFlagBits, VkBufferCreateFlagBits, VkBufferUsageFlagBits, VkBuildAccelerationStructureFlagBitsNV, VkCommandPoolCreateFlagBits, VkConditionalRenderingFlagBitsEXT, VkDebugUtilsMessageSeverityFlagBitsEXT, VkDependencyFlagBits, VkDescriptorPoolCreateFlagBits, VkDescriptorSetLayoutCreateFlagBits, VkDeviceGroupPresentModeFlagBitsKHR, VkDeviceQueueCreateFlagBits, VkDisplayPlaneAlphaFlagBitsKHR, VkExternalFenceFeatureFlagBits, VkExternalFenceHandleTypeFlagBits, VkExternalMemoryFeatureFlagBits, VkExternalMemoryFeatureFlagBitsNV, VkExternalMemoryHandleTypeFlagBits, VkExternalMemoryHandleTypeFlagBitsNV, VkExternalSemaphoreFeatureFlagBits, VkExternalSemaphoreHandleTypeFlagBits, VkFenceImportFlagBits, VkFormatFeatureFlagBits, VkFramebufferCreateFlagBits, VkGeometryFlagBitsNV, VkGeometryInstanceFlagBitsNV, VkImageAspectFlagBits, VkImageCreateFlagBits, VkImageUsageFlagBits, VkImageViewCreateFlagBits, VkIndirectCommandsLayoutUsageFlagBitsNVX, VkMemoryAllocateFlagBits, VkMemoryHeapFlagBits, VkMemoryPropertyFlagBits, VkObjectEntryUsageFlagBitsNVX, VkPeerMemoryFeatureFlagBits, VkPipelineCreateFlagBits, VkPipelineCreationFeedbackFlagBitsEXT, VkPipelineShaderStageCreateFlagBits, VkPipelineStageFlagBits, VkQueueFlagBits, VkResolveModeFlagBitsKHR, VkSampleCountFlagBits, VkSamplerCreateFlagBits, VkSemaphoreImportFlagBits, VkShaderStageFlagBits, VkSubgroupFeatureFlagBits, VkSubpassDescriptionFlagBits, VkSurfaceCounterFlagBitsEXT, VkSwapchainCreateFlagBitsKHR> VK_NONE_BIT = VkFramebufferCreateFlagBits::VK_NONE_BIT;
VKBINDING_CONSTEXPR static const VkPeerMemoryFeatureFlagBits VK_PEER_MEMORY_FEATURE_COPY_DST_BIT_KHR = VkPeerMemoryFeatureFlagBits::VK_PEER_MEMORY_FEATURE_COPY_DST_BIT_KHR;
VKBINDING_CONSTEXPR static const VkPeerMemoryFeatureFlagBits VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT_KHR = VkPeerMemoryFeatureFlagBits::VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT_KHR;
VKBINDING_CONSTEXPR static const VkPeerMemoryFeatureFlagBits VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT_KHR = VkPeerMemoryFeatureFlagBits::VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT_KHR;
VKBINDING_CONSTEXPR static const VkPeerMemoryFeatureFlagBits VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT_KHR = VkPeerMemoryFeatureFlagBits::VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT_KHR;
VKBINDING_CONSTEXPR static const VkPipelineCreateFlagBits VK_PIPELINE_CREATE_DEFER_COMPILE_BIT_NV = VkPipelineCreateFlagBits::VK_PIPELINE_CREATE_DEFER_COMPILE_BIT_NV;
VKBINDING_CONSTEXPR static const VkPipelineCreateFlagBits VK_PIPELINE_CREATE_DISPATCH_BASE = VkPipelineCreateFlagBits::VK_PIPELINE_CREATE_DISPATCH_BASE;
VKBINDING_CONSTEXPR static const VkPipelineCreateFlagBits VK_PIPELINE_CREATE_DISPATCH_BASE_KHR = VkPipelineCreateFlagBits::VK_PIPELINE_CREATE_DISPATCH_BASE_KHR;
VKBINDING_CONSTEXPR static const VkPipelineCreateFlagBits VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT = VkPipelineCreateFlagBits::VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT;
VKBINDING_CONSTEXPR static const VkPipelineCreateFlagBits VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT_KHR = VkPipelineCreateFlagBits::VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT_KHR;
VKBINDING_CONSTEXPR static const VkPipelineShaderStageCreateFlagBits VK_PIPELINE_SHADER_STAGE_CREATE_ALLOW_VARYING_SUBGROUP_SIZE_BIT_EXT = VkPipelineShaderStageCreateFlagBits::VK_PIPELINE_SHADER_STAGE_CREATE_ALLOW_VARYING_SUBGROUP_SIZE_BIT_EXT;
VKBINDING_CONSTEXPR static const VkPipelineShaderStageCreateFlagBits VK_PIPELINE_SHADER_STAGE_CREATE_REQUIRE_FULL_SUBGROUPS_BIT_EXT = VkPipelineShaderStageCreateFlagBits::VK_PIPELINE_SHADER_STAGE_CREATE_REQUIRE_FULL_SUBGROUPS_BIT_EXT;
VKBINDING_CONSTEXPR static const VkPipelineStageFlagBits VK_PIPELINE_STAGE_ACCELERATION_STRUCTURE_BUILD_BIT_NV = VkPipelineStageFlagBits::VK_PIPELINE_STAGE_ACCELERATION_STRUCTURE_BUILD_BIT_NV;
VKBINDING_CONSTEXPR static const VkPipelineStageFlagBits VK_PIPELINE_STAGE_COMMAND_PROCESS_BIT_NVX = VkPipelineStageFlagBits::VK_PIPELINE_STAGE_COMMAND_PROCESS_BIT_NVX;
VKBINDING_CONSTEXPR static const VkPipelineStageFlagBits VK_PIPELINE_STAGE_CONDITIONAL_RENDERING_BIT_EXT = VkPipelineStageFlagBits::VK_PIPELINE_STAGE_CONDITIONAL_RENDERING_BIT_EXT;
VKBINDING_CONSTEXPR static const VkPipelineStageFlagBits VK_PIPELINE_STAGE_FRAGMENT_DENSITY_PROCESS_BIT_EXT = VkPipelineStageFlagBits::VK_PIPELINE_STAGE_FRAGMENT_DENSITY_PROCESS_BIT_EXT;
VKBINDING_CONSTEXPR static const VkPipelineStageFlagBits VK_PIPELINE_STAGE_MESH_SHADER_BIT_NV = VkPipelineStageFlagBits::VK_PIPELINE_STAGE_MESH_SHADER_BIT_NV;
VKBINDING_CONSTEXPR static const VkPipelineStageFlagBits VK_PIPELINE_STAGE_RAY_TRACING_SHADER_BIT_NV = VkPipelineStageFlagBits::VK_PIPELINE_STAGE_RAY_TRACING_SHADER_BIT_NV;
VKBINDING_CONSTEXPR static const VkPipelineStageFlagBits VK_PIPELINE_STAGE_SHADING_RATE_IMAGE_BIT_NV = VkPipelineStageFlagBits::VK_PIPELINE_STAGE_SHADING_RATE_IMAGE_BIT_NV;
VKBINDING_CONSTEXPR static const VkPipelineStageFlagBits VK_PIPELINE_STAGE_TASK_SHADER_BIT_NV = VkPipelineStageFlagBits::VK_PIPELINE_STAGE_TASK_SHADER_BIT_NV;
VKBINDING_CONSTEXPR static const VkPipelineStageFlagBits VK_PIPELINE_STAGE_TRANSFORM_FEEDBACK_BIT_EXT = VkPipelineStageFlagBits::VK_PIPELINE_STAGE_TRANSFORM_FEEDBACK_BIT_EXT;
VKBINDING_CONSTEXPR static const VkQueueFlagBits VK_QUEUE_PROTECTED_BIT = VkQueueFlagBits::VK_QUEUE_PROTECTED_BIT;
VKBINDING_CONSTEXPR static const VkSamplerCreateFlagBits VK_SAMPLER_CREATE_SUBSAMPLED_BIT_EXT = VkSamplerCreateFlagBits::VK_SAMPLER_CREATE_SUBSAMPLED_BIT_EXT;
VKBINDING_CONSTEXPR static const VkSamplerCreateFlagBits VK_SAMPLER_CREATE_SUBSAMPLED_COARSE_RECONSTRUCTION_BIT_EXT = VkSamplerCreateFlagBits::VK_SAMPLER_CREATE_SUBSAMPLED_COARSE_RECONSTRUCTION_BIT_EXT;
VKBINDING_CONSTEXPR static const VkSemaphoreImportFlagBits VK_SEMAPHORE_IMPORT_TEMPORARY_BIT_KHR = VkSemaphoreImportFlagBits::VK_SEMAPHORE_IMPORT_TEMPORARY_BIT_KHR;
VKBINDING_CONSTEXPR static const VkShaderStageFlagBits VK_SHADER_STAGE_ANY_HIT_BIT_NV = VkShaderStageFlagBits::VK_SHADER_STAGE_ANY_HIT_BIT_NV;
VKBINDING_CONSTEXPR static const VkShaderStageFlagBits VK_SHADER_STAGE_CALLABLE_BIT_NV = VkShaderStageFlagBits::VK_SHADER_STAGE_CALLABLE_BIT_NV;
VKBINDING_CONSTEXPR static const VkShaderStageFlagBits VK_SHADER_STAGE_CLOSEST_HIT_BIT_NV = VkShaderStageFlagBits::VK_SHADER_STAGE_CLOSEST_HIT_BIT_NV;
VKBINDING_CONSTEXPR static const VkShaderStageFlagBits VK_SHADER_STAGE_INTERSECTION_BIT_NV = VkShaderStageFlagBits::VK_SHADER_STAGE_INTERSECTION_BIT_NV;
VKBINDING_CONSTEXPR static const VkShaderStageFlagBits VK_SHADER_STAGE_MESH_BIT_NV = VkShaderStageFlagBits::VK_SHADER_STAGE_MESH_BIT_NV;
VKBINDING_CONSTEXPR static const VkShaderStageFlagBits VK_SHADER_STAGE_MISS_BIT_NV = VkShaderStageFlagBits::VK_SHADER_STAGE_MISS_BIT_NV;
VKBINDING_CONSTEXPR static const VkShaderStageFlagBits VK_SHADER_STAGE_RAYGEN_BIT_NV = VkShaderStageFlagBits::VK_SHADER_STAGE_RAYGEN_BIT_NV;
VKBINDING_CONSTEXPR static const VkShaderStageFlagBits VK_SHADER_STAGE_TASK_BIT_NV = VkShaderStageFlagBits::VK_SHADER_STAGE_TASK_BIT_NV;
VKBINDING_CONSTEXPR static const VkSubgroupFeatureFlagBits VK_SUBGROUP_FEATURE_PARTITIONED_BIT_NV = VkSubgroupFeatureFlagBits::VK_SUBGROUP_FEATURE_PARTITIONED_BIT_NV;
VKBINDING_CONSTEXPR static const VkSubpassDescriptionFlagBits VK_SUBPASS_DESCRIPTION_PER_VIEW_ATTRIBUTES_BIT_NVX = VkSubpassDescriptionFlagBits::VK_SUBPASS_DESCRIPTION_PER_VIEW_ATTRIBUTES_BIT_NVX;
VKBINDING_CONSTEXPR static const VkSubpassDescriptionFlagBits VK_SUBPASS_DESCRIPTION_PER_VIEW_POSITION_X_ONLY_BIT_NVX = VkSubpassDescriptionFlagBits::VK_SUBPASS_DESCRIPTION_PER_VIEW_POSITION_X_ONLY_BIT_NVX;
VKBINDING_CONSTEXPR static const VkSwapchainCreateFlagBitsKHR VK_SWAPCHAIN_CREATE_MUTABLE_FORMAT_BIT_KHR = VkSwapchainCreateFlagBitsKHR::VK_SWAPCHAIN_CREATE_MUTABLE_FORMAT_BIT_KHR;
VKBINDING_CONSTEXPR static const VkSwapchainCreateFlagBitsKHR VK_SWAPCHAIN_CREATE_PROTECTED_BIT_KHR = VkSwapchainCreateFlagBitsKHR::VK_SWAPCHAIN_CREATE_PROTECTED_BIT_KHR;
VKBINDING_CONSTEXPR static const VkSwapchainCreateFlagBitsKHR VK_SWAPCHAIN_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR = VkSwapchainCreateFlagBitsKHR::VK_SWAPCHAIN_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR;
VKBINDING_CONSTEXPR static const UnusedMask VK_UNUSED_BIT = UnusedMask::VK_UNUSED_BIT;


} // namespace vk