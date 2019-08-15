
#pragma once


#include <vkbinding/novk.h>

#include <vkbinding/vkbinding_features.h>

#include <vkbinding/SharedBitfield.h>


namespace vk
{


enum class UnusedMask : unsigned int
{
    GL_UNUSED_BIT                                                                                     = 0x00000000
};


enum class VkAccessFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_ACCESS_INDIRECT_COMMAND_READ_BIT                                                               = 0x1,
    VK_ACCESS_INPUT_ATTACHMENT_READ_BIT                                                               = 0x10,
    VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT                                                              = 0x100,
    VK_ACCESS_TRANSFER_WRITE_BIT                                                                      = 0x1000,
    VK_ACCESS_MEMORY_WRITE_BIT                                                                        = 0x10000,
    VK_ACCESS_CONDITIONAL_RENDERING_READ_BIT_EXT                                                      = 0x100000,
    VK_ACCESS_FRAGMENT_DENSITY_MAP_READ_BIT_EXT                                                       = 0x1000000,
    VK_ACCESS_RESERVED_28_BIT_KHR                                                                     = 0x10000000,
    VK_ACCESS_INDEX_READ_BIT                                                                          = 0x2,
    VK_ACCESS_SHADER_READ_BIT                                                                         = 0x20,
    VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT                                                       = 0x200,
    VK_ACCESS_HOST_READ_BIT                                                                           = 0x2000,
    VK_ACCESS_COMMAND_PROCESS_READ_BIT_NVX                                                            = 0x20000,
    VK_ACCESS_ACCELERATION_STRUCTURE_READ_BIT_NV                                                      = 0x200000,
    VK_ACCESS_TRANSFORM_FEEDBACK_WRITE_BIT_EXT                                                        = 0x2000000,
    VK_ACCESS_RESERVED_29_BIT_KHR                                                                     = 0x20000000,
    VK_ACCESS_VERTEX_ATTRIBUTE_READ_BIT                                                               = 0x4,
    VK_ACCESS_SHADER_WRITE_BIT                                                                        = 0x40,
    VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT                                                      = 0x400,
    VK_ACCESS_HOST_WRITE_BIT                                                                          = 0x4000,
    VK_ACCESS_COMMAND_PROCESS_WRITE_BIT_NVX                                                           = 0x40000,
    VK_ACCESS_ACCELERATION_STRUCTURE_WRITE_BIT_NV                                                     = 0x400000,
    VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT                                                 = 0x4000000,
    VK_ACCESS_RESERVED_30_BIT_KHR                                                                     = 0x40000000,
    VK_ACCESS_UNIFORM_READ_BIT                                                                        = 0x8,
    VK_ACCESS_COLOR_ATTACHMENT_READ_BIT                                                               = 0x80,
    VK_ACCESS_TRANSFER_READ_BIT                                                                       = 0x800,
    VK_ACCESS_MEMORY_READ_BIT                                                                         = 0x8000,
    VK_ACCESS_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT                                               = 0x80000,
    VK_ACCESS_SHADING_RATE_IMAGE_READ_BIT_NV                                                          = 0x800000,
    VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT                                                = 0x8000000,
    VK_ACCESS_RESERVED_31_BIT_KHR                                                                     = 0x80000000
};


enum class VkAttachmentDescriptionFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_ATTACHMENT_DESCRIPTION_MAY_ALIAS_BIT                                                           = 0x1
};


enum class VkBufferCreateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_BUFFER_CREATE_SPARSE_BINDING_BIT                                                               = 0x1,
    VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_EXT                                            = 0x10,
    VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT                                                             = 0x2,
    VK_BUFFER_CREATE_SPARSE_ALIASED_BIT                                                               = 0x4,
    VK_BUFFER_CREATE_PROTECTED_BIT                                                                    = 0x8
};


enum class VkBufferUsageFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_BUFFER_USAGE_TRANSFER_SRC_BIT                                                                  = 0x1,
    VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT                                                                = 0x10,
    VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT                                                               = 0x100,
    VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT                                         = 0x1000,
    VK_BUFFER_USAGE_RESERVED_16_BIT_KHR                                                               = 0x10000,
    VK_BUFFER_USAGE_TRANSFER_DST_BIT                                                                  = 0x2,
    VK_BUFFER_USAGE_STORAGE_BUFFER_BIT                                                                = 0x20,
    VK_BUFFER_USAGE_CONDITIONAL_RENDERING_BIT_EXT                                                     = 0x200,
    VK_BUFFER_USAGE_RESERVED_13_BIT_KHR                                                               = 0x2000,
    VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT_EXT                                                     = 0x20000,
    VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT                                                          = 0x4,
    VK_BUFFER_USAGE_INDEX_BUFFER_BIT                                                                  = 0x40,
    VK_BUFFER_USAGE_RAY_TRACING_BIT_NV                                                                = 0x400,
    VK_BUFFER_USAGE_RESERVED_14_BIT_KHR                                                               = 0x4000,
    VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT                                                          = 0x8,
    VK_BUFFER_USAGE_VERTEX_BUFFER_BIT                                                                 = 0x80,
    VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT                                                 = 0x800,
    VK_BUFFER_USAGE_RESERVED_15_BIT_KHR                                                               = 0x8000
};


enum class VkBufferViewCreateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkBuildAccelerationStructureFlagBitsNV : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_UPDATE_BIT_NV                                               = 0x1,
    VK_BUILD_ACCELERATION_STRUCTURE_LOW_MEMORY_BIT_NV                                                 = 0x10,
    VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_COMPACTION_BIT_NV                                           = 0x2,
    VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_TRACE_BIT_NV                                          = 0x4,
    VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_BUILD_BIT_NV                                          = 0x8
};


enum class VkColorComponentFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_COLOR_COMPONENT_R_BIT                                                                          = 0x1,
    VK_COLOR_COMPONENT_G_BIT                                                                          = 0x2,
    VK_COLOR_COMPONENT_B_BIT                                                                          = 0x4,
    VK_COLOR_COMPONENT_A_BIT                                                                          = 0x8
};


enum class VkCommandBufferResetFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_COMMAND_BUFFER_RESET_RELEASE_RESOURCES_BIT                                                     = 0x1
};


enum class VkCommandBufferUsageFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT                                                       = 0x1,
    VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT                                                  = 0x2,
    VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT                                                      = 0x4
};


enum class VkCommandPoolCreateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_COMMAND_POOL_CREATE_TRANSIENT_BIT                                                              = 0x1,
    VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT                                                   = 0x2,
    VK_COMMAND_POOL_CREATE_PROTECTED_BIT                                                              = 0x4
};


enum class VkCommandPoolResetFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_COMMAND_POOL_RESET_RELEASE_RESOURCES_BIT                                                       = 0x1
};


enum class VkCompositeAlphaFlagBitsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR                                                                 = 0x1,
    VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR                                                         = 0x2,
    VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR                                                        = 0x4,
    VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR                                                                = 0x8
};


enum class VkConditionalRenderingFlagBitsEXT : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_CONDITIONAL_RENDERING_INVERTED_BIT_EXT                                                         = 0x1
};


enum class VkCullModeFlagBits : unsigned int
{
    VK_CULL_MODE_NONE                                                                                 = 0,
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_CULL_MODE_FRONT_AND_BACK                                                                       = 0x00000003,
    VK_CULL_MODE_FRONT_BIT                                                                            = 0x1,
    VK_CULL_MODE_BACK_BIT                                                                             = 0x2
};


enum class VkDebugReportFlagBitsEXT : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_DEBUG_REPORT_INFORMATION_BIT_EXT                                                               = 0x1,
    VK_DEBUG_REPORT_DEBUG_BIT_EXT                                                                     = 0x10,
    VK_DEBUG_REPORT_WARNING_BIT_EXT                                                                   = 0x2,
    VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT                                                       = 0x4,
    VK_DEBUG_REPORT_ERROR_BIT_EXT                                                                     = 0x8
};


enum class VkDebugUtilsMessageSeverityFlagBitsEXT : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT                                                   = 0x1,
    VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT                                                      = 0x10,
    VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT                                                   = 0x100,
    VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT                                                     = 0x1000
};


enum class VkDebugUtilsMessageTypeFlagBitsEXT : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT                                                       = 0x1,
    VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT                                                    = 0x2,
    VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT                                                   = 0x4
};


enum class VkDependencyFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_DEPENDENCY_BY_REGION_BIT                                                                       = 0x1,
    VK_DEPENDENCY_VIEW_LOCAL_BIT                                                                      = 0x2,
    VK_DEPENDENCY_VIEW_LOCAL_BIT_KHR                                                                  = 0x2,
    VK_DEPENDENCY_DEVICE_GROUP_BIT                                                                    = 0x4,
    VK_DEPENDENCY_DEVICE_GROUP_BIT_KHR                                                                = 0x4
};


enum class VkDescriptorBindingFlagBitsEXT : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_DESCRIPTOR_BINDING_UPDATE_AFTER_BIND_BIT_EXT                                                   = 0x1,
    VK_DESCRIPTOR_BINDING_UPDATE_UNUSED_WHILE_PENDING_BIT_EXT                                         = 0x2,
    VK_DESCRIPTOR_BINDING_PARTIALLY_BOUND_BIT_EXT                                                     = 0x4,
    VK_DESCRIPTOR_BINDING_VARIABLE_DESCRIPTOR_COUNT_BIT_EXT                                           = 0x8
};


enum class VkDescriptorPoolCreateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT                                                 = 0x1,
    VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT_EXT                                               = 0x2
};


enum class VkDescriptorSetLayoutCreateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR                                           = 0x1,
    VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT_EXT                                    = 0x2
};


enum class VkDeviceCreateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkDeviceGroupPresentModeFlagBitsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHR                                                        = 0x1,
    VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHR                                                       = 0x2,
    VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHR                                                          = 0x4,
    VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHR                                           = 0x8
};


enum class VkDeviceQueueCreateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT                                                              = 0x1
};


enum class VkDisplayPlaneAlphaFlagBitsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR                                                             = 0x1,
    VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR                                                             = 0x2,
    VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR                                                          = 0x4,
    VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR                                            = 0x8
};


enum class VkExternalFenceFeatureFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT                                                          = 0x1,
    VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT_KHR                                                      = 0x1,
    VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT                                                          = 0x2,
    VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT_KHR                                                      = 0x2
};


enum class VkExternalFenceFeatureFlagBitsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkExternalFenceHandleTypeFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT                                                       = 0x1,
    VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR                                                   = 0x1,
    VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT                                                    = 0x2,
    VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR                                                = 0x2,
    VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT                                                = 0x4,
    VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR                                            = 0x4,
    VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT                                                         = 0x8,
    VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT_KHR                                                     = 0x8
};


enum class VkExternalFenceHandleTypeFlagBitsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkExternalMemoryFeatureFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT                                                     = 0x1,
    VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_KHR                                                 = 0x1,
    VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT                                                         = 0x2,
    VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_KHR                                                     = 0x2,
    VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT                                                         = 0x4,
    VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_KHR                                                     = 0x4
};


enum class VkExternalMemoryFeatureFlagBitsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkExternalMemoryFeatureFlagBitsNV : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_NV                                                  = 0x1,
    VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_NV                                                      = 0x2,
    VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_NV                                                      = 0x4
};


enum class VkExternalMemoryHandleTypeFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT                                                      = 0x1,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT_KHR                                                  = 0x1,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT                                              = 0x10,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT_KHR                                          = 0x10,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT                                 = 0x100,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT                                                   = 0x2,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR                                               = 0x2,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT                                                     = 0x20,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT_KHR                                                 = 0x20,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT                                                    = 0x200,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT                                               = 0x4,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR                                           = 0x4,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT                                                 = 0x40,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT_KHR                                             = 0x40,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_ANDROID_HARDWARE_BUFFER_BIT_ANDROID                                = 0x400,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT                                                  = 0x8,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT_KHR                                              = 0x8,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_ALLOCATION_BIT_EXT                                            = 0x80
};


enum class VkExternalMemoryHandleTypeFlagBitsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkExternalMemoryHandleTypeFlagBitsNV : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_NV                                                = 0x1,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_NV                                            = 0x2,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_BIT_NV                                                 = 0x4,
    VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_KMT_BIT_NV                                             = 0x8
};


enum class VkExternalSemaphoreFeatureFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT                                                      = 0x1,
    VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT_KHR                                                  = 0x1,
    VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT                                                      = 0x2,
    VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT_KHR                                                  = 0x2
};


enum class VkExternalSemaphoreFeatureFlagBitsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkExternalSemaphoreHandleTypeFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT                                                   = 0x1,
    VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR                                               = 0x1,
    VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT                                                     = 0x10,
    VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT_KHR                                                 = 0x10,
    VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT                                                = 0x2,
    VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR                                            = 0x2,
    VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT                                            = 0x4,
    VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR                                        = 0x4,
    VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT                                                 = 0x8,
    VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT_KHR                                             = 0x8
};


enum class VkExternalSemaphoreHandleTypeFlagBitsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkFenceCreateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_FENCE_CREATE_SIGNALED_BIT                                                                      = 0x1
};


enum class VkFenceImportFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_FENCE_IMPORT_TEMPORARY_BIT                                                                     = 0x1,
    VK_FENCE_IMPORT_TEMPORARY_BIT_KHR                                                                 = 0x1
};


enum class VkFenceImportFlagBitsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkFormatFeatureFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT                                                               = 0x1,
    VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT                                                        = 0x10,
    VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT                                                      = 0x100,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT                                                 = 0x1000,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT_EXT                                             = 0x10000,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT               = 0x100000,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT_KHR           = 0x100000,
    VK_FORMAT_FEATURE_FRAGMENT_DENSITY_MAP_BIT_EXT                                                    = 0x1000000,
    VK_FORMAT_FEATURE_RESERVED_28_BIT_KHR                                                             = 0x10000000,
    VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT                                                               = 0x2,
    VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT                                                 = 0x20,
    VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT                                                    = 0x200,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG                                              = 0x2000,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_EXT                                              = 0x2000,
    VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT                                                     = 0x20000,
    VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT_KHR                                                 = 0x20000,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT     = 0x200000,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT_KHR = 0x200000,
    VK_FORMAT_FEATURE_RESERVED_25_BIT_KHR                                                             = 0x2000000,
    VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT                                                        = 0x4,
    VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT                                                               = 0x40,
    VK_FORMAT_FEATURE_BLIT_SRC_BIT                                                                    = 0x400,
    VK_FORMAT_FEATURE_TRANSFER_SRC_BIT                                                                = 0x4000,
    VK_FORMAT_FEATURE_TRANSFER_SRC_BIT_KHR                                                            = 0x4000,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT                                = 0x40000,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT_KHR                            = 0x40000,
    VK_FORMAT_FEATURE_DISJOINT_BIT                                                                    = 0x400000,
    VK_FORMAT_FEATURE_DISJOINT_BIT_KHR                                                                = 0x400000,
    VK_FORMAT_FEATURE_RESERVED_26_BIT_KHR                                                             = 0x4000000,
    VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT                                                        = 0x8,
    VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT                                                            = 0x80,
    VK_FORMAT_FEATURE_BLIT_DST_BIT                                                                    = 0x800,
    VK_FORMAT_FEATURE_TRANSFER_DST_BIT                                                                = 0x8000,
    VK_FORMAT_FEATURE_TRANSFER_DST_BIT_KHR                                                            = 0x8000,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT               = 0x80000,
    VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT_KHR           = 0x80000,
    VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT                                                      = 0x800000,
    VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT_KHR                                                  = 0x800000,
    VK_FORMAT_FEATURE_RESERVED_27_BIT_KHR                                                             = 0x8000000
};


enum class VkFramebufferCreateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT_KHR                                                           = 0x1
};


enum class VkGeometryFlagBitsNV : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_GEOMETRY_OPAQUE_BIT_NV                                                                         = 0x1,
    VK_GEOMETRY_NO_DUPLICATE_ANY_HIT_INVOCATION_BIT_NV                                                = 0x2
};


enum class VkGeometryInstanceFlagBitsNV : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_GEOMETRY_INSTANCE_TRIANGLE_CULL_DISABLE_BIT_NV                                                 = 0x1,
    VK_GEOMETRY_INSTANCE_TRIANGLE_FRONT_COUNTERCLOCKWISE_BIT_NV                                       = 0x2,
    VK_GEOMETRY_INSTANCE_FORCE_OPAQUE_BIT_NV                                                          = 0x4,
    VK_GEOMETRY_INSTANCE_FORCE_NO_OPAQUE_BIT_NV                                                       = 0x8
};


enum class VkImageAspectFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_IMAGE_ASPECT_COLOR_BIT                                                                         = 0x1,
    VK_IMAGE_ASPECT_PLANE_0_BIT                                                                       = 0x10,
    VK_IMAGE_ASPECT_PLANE_0_BIT_KHR                                                                   = 0x10,
    VK_IMAGE_ASPECT_MEMORY_PLANE_1_BIT_EXT                                                            = 0x100,
    VK_IMAGE_ASPECT_DEPTH_BIT                                                                         = 0x2,
    VK_IMAGE_ASPECT_PLANE_1_BIT                                                                       = 0x20,
    VK_IMAGE_ASPECT_PLANE_1_BIT_KHR                                                                   = 0x20,
    VK_IMAGE_ASPECT_MEMORY_PLANE_2_BIT_EXT                                                            = 0x200,
    VK_IMAGE_ASPECT_STENCIL_BIT                                                                       = 0x4,
    VK_IMAGE_ASPECT_PLANE_2_BIT                                                                       = 0x40,
    VK_IMAGE_ASPECT_PLANE_2_BIT_KHR                                                                   = 0x40,
    VK_IMAGE_ASPECT_MEMORY_PLANE_3_BIT_EXT                                                            = 0x400,
    VK_IMAGE_ASPECT_METADATA_BIT                                                                      = 0x8,
    VK_IMAGE_ASPECT_MEMORY_PLANE_0_BIT_EXT                                                            = 0x80
};


enum class VkImageCreateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_IMAGE_CREATE_SPARSE_BINDING_BIT                                                                = 0x1,
    VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT                                                               = 0x10,
    VK_IMAGE_CREATE_EXTENDED_USAGE_BIT                                                                = 0x100,
    VK_IMAGE_CREATE_EXTENDED_USAGE_BIT_KHR                                                            = 0x100,
    VK_IMAGE_CREATE_SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_EXT                                         = 0x1000,
    VK_IMAGE_CREATE_SPARSE_RESIDENCY_BIT                                                              = 0x2,
    VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT                                                           = 0x20,
    VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT_KHR                                                       = 0x20,
    VK_IMAGE_CREATE_DISJOINT_BIT                                                                      = 0x200,
    VK_IMAGE_CREATE_DISJOINT_BIT_KHR                                                                  = 0x200,
    VK_IMAGE_CREATE_CORNER_SAMPLED_BIT_NV                                                             = 0x2000,
    VK_IMAGE_CREATE_SPARSE_ALIASED_BIT                                                                = 0x4,
    VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT                                                   = 0x40,
    VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR                                               = 0x40,
    VK_IMAGE_CREATE_ALIAS_BIT                                                                         = 0x400,
    VK_IMAGE_CREATE_ALIAS_BIT_KHR                                                                     = 0x400,
    VK_IMAGE_CREATE_SUBSAMPLED_BIT_EXT                                                                = 0x4000,
    VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT                                                                = 0x8,
    VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT                                                   = 0x80,
    VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT_KHR                                               = 0x80,
    VK_IMAGE_CREATE_PROTECTED_BIT                                                                     = 0x800
};


enum class VkImageUsageFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_IMAGE_USAGE_TRANSFER_SRC_BIT                                                                   = 0x1,
    VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT                                                               = 0x10,
    VK_IMAGE_USAGE_SHADING_RATE_IMAGE_BIT_NV                                                          = 0x100,
    VK_IMAGE_USAGE_RESERVED_12_BIT_KHR                                                                = 0x1000,
    VK_IMAGE_USAGE_TRANSFER_DST_BIT                                                                   = 0x2,
    VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT                                                       = 0x20,
    VK_IMAGE_USAGE_FRAGMENT_DENSITY_MAP_BIT_EXT                                                       = 0x200,
    VK_IMAGE_USAGE_RESERVED_13_BIT_KHR                                                                = 0x2000,
    VK_IMAGE_USAGE_SAMPLED_BIT                                                                        = 0x4,
    VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT                                                           = 0x40,
    VK_IMAGE_USAGE_RESERVED_10_BIT_KHR                                                                = 0x400,
    VK_IMAGE_USAGE_RESERVED_14_BIT_KHR                                                                = 0x4000,
    VK_IMAGE_USAGE_STORAGE_BIT                                                                        = 0x8,
    VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT                                                               = 0x80,
    VK_IMAGE_USAGE_RESERVED_11_BIT_KHR                                                                = 0x800,
    VK_IMAGE_USAGE_RESERVED_15_BIT_KHR                                                                = 0x8000
};


enum class VkImageViewCreateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_IMAGE_VIEW_CREATE_FRAGMENT_DENSITY_MAP_DYNAMIC_BIT_EXT                                         = 0x1
};


enum class VkIndirectCommandsLayoutUsageFlagBitsNVX : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_NVX                                     = 0x1,
    VK_INDIRECT_COMMANDS_LAYOUT_USAGE_SPARSE_SEQUENCES_BIT_NVX                                        = 0x2,
    VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EMPTY_EXECUTIONS_BIT_NVX                                        = 0x4,
    VK_INDIRECT_COMMANDS_LAYOUT_USAGE_INDEXED_SEQUENCES_BIT_NVX                                       = 0x8
};


enum class VkInstanceCreateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkMemoryAllocateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT                                                                = 0x1,
    VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT_KHR                                                            = 0x1
};


enum class VkMemoryAllocateFlagBitsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkMemoryHeapFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_MEMORY_HEAP_DEVICE_LOCAL_BIT                                                                   = 0x1,
    VK_MEMORY_HEAP_MULTI_INSTANCE_BIT                                                                 = 0x2,
    VK_MEMORY_HEAP_MULTI_INSTANCE_BIT_KHR                                                             = 0x2
};


enum class VkMemoryPropertyFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT                                                               = 0x1,
    VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT                                                           = 0x10,
    VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT                                                               = 0x2,
    VK_MEMORY_PROPERTY_PROTECTED_BIT                                                                  = 0x20,
    VK_MEMORY_PROPERTY_HOST_COHERENT_BIT                                                              = 0x4,
    VK_MEMORY_PROPERTY_HOST_CACHED_BIT                                                                = 0x8
};


enum class VkObjectEntryUsageFlagBitsNVX : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_OBJECT_ENTRY_USAGE_GRAPHICS_BIT_NVX                                                            = 0x1,
    VK_OBJECT_ENTRY_USAGE_COMPUTE_BIT_NVX                                                             = 0x2
};


enum class VkPeerMemoryFeatureFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT                                                               = 0x1,
    VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT_KHR                                                           = 0x1,
    VK_PEER_MEMORY_FEATURE_COPY_DST_BIT                                                               = 0x2,
    VK_PEER_MEMORY_FEATURE_COPY_DST_BIT_KHR                                                           = 0x2,
    VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT                                                            = 0x4,
    VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT_KHR                                                        = 0x4,
    VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT                                                            = 0x8,
    VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT_KHR                                                        = 0x8
};


enum class VkPeerMemoryFeatureFlagBitsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPipelineCacheCreateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPipelineColorBlendStateCreateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPipelineCreateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_PIPELINE_CREATE_DISABLE_OPTIMIZATION_BIT                                                       = 0x1,
    VK_PIPELINE_CREATE_DISPATCH_BASE                                                                  = 0x10,
    VK_PIPELINE_CREATE_DISPATCH_BASE_KHR                                                              = 0x10,
    VK_PIPELINE_CREATE_ALLOW_DERIVATIVES_BIT                                                          = 0x2,
    VK_PIPELINE_CREATE_DEFER_COMPILE_BIT_NV                                                           = 0x20,
    VK_PIPELINE_CREATE_DERIVATIVE_BIT                                                                 = 0x4,
    VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT                                               = 0x8,
    VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT_KHR                                           = 0x8
};


enum class VkPipelineCreationFeedbackFlagBitsEXT : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_PIPELINE_CREATION_FEEDBACK_VALID_BIT_EXT                                                       = 0x1,
    VK_PIPELINE_CREATION_FEEDBACK_APPLICATION_PIPELINE_CACHE_HIT_BIT_EXT                              = 0x2,
    VK_PIPELINE_CREATION_FEEDBACK_BASE_PIPELINE_ACCELERATION_BIT_EXT                                  = 0x4
};


enum class VkPipelineDepthStencilStateCreateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPipelineDynamicStateCreateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPipelineInputAssemblyStateCreateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPipelineLayoutCreateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPipelineMultisampleStateCreateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPipelineRasterizationStateCreateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPipelineShaderStageCreateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_PIPELINE_SHADER_STAGE_CREATE_ALLOW_VARYING_SUBGROUP_SIZE_BIT_EXT                               = 0x1,
    VK_PIPELINE_SHADER_STAGE_CREATE_REQUIRE_FULL_SUBGROUPS_BIT_EXT                                    = 0x2,
    VK_PIPELINE_SHADER_STAGE_CREATE_RESERVED_2_BIT_NV                                                 = 0x4
};


enum class VkPipelineStageFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT                                                                 = 0x1,
    VK_PIPELINE_STAGE_TESSELLATION_CONTROL_SHADER_BIT                                                 = 0x10,
    VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT                                                        = 0x100,
    VK_PIPELINE_STAGE_TRANSFER_BIT                                                                    = 0x1000,
    VK_PIPELINE_STAGE_ALL_COMMANDS_BIT                                                                = 0x10000,
    VK_PIPELINE_STAGE_MESH_SHADER_BIT_NV                                                              = 0x100000,
    VK_PIPELINE_STAGE_TRANSFORM_FEEDBACK_BIT_EXT                                                      = 0x1000000,
    VK_PIPELINE_STAGE_DRAW_INDIRECT_BIT                                                               = 0x2,
    VK_PIPELINE_STAGE_TESSELLATION_EVALUATION_SHADER_BIT                                              = 0x20,
    VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT                                                         = 0x200,
    VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT                                                              = 0x2000,
    VK_PIPELINE_STAGE_COMMAND_PROCESS_BIT_NVX                                                         = 0x20000,
    VK_PIPELINE_STAGE_RAY_TRACING_SHADER_BIT_NV                                                       = 0x200000,
    VK_PIPELINE_STAGE_ACCELERATION_STRUCTURE_BUILD_BIT_NV                                             = 0x2000000,
    VK_PIPELINE_STAGE_VERTEX_INPUT_BIT                                                                = 0x4,
    VK_PIPELINE_STAGE_GEOMETRY_SHADER_BIT                                                             = 0x40,
    VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT                                                     = 0x400,
    VK_PIPELINE_STAGE_HOST_BIT                                                                        = 0x4000,
    VK_PIPELINE_STAGE_CONDITIONAL_RENDERING_BIT_EXT                                                   = 0x40000,
    VK_PIPELINE_STAGE_SHADING_RATE_IMAGE_BIT_NV                                                       = 0x400000,
    VK_PIPELINE_STAGE_RESERVED_26_BIT_KHR                                                             = 0x4000000,
    VK_PIPELINE_STAGE_VERTEX_SHADER_BIT                                                               = 0x8,
    VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT                                                             = 0x80,
    VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT                                                              = 0x800,
    VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT                                                                = 0x8000,
    VK_PIPELINE_STAGE_TASK_SHADER_BIT_NV                                                              = 0x80000,
    VK_PIPELINE_STAGE_FRAGMENT_DENSITY_PROCESS_BIT_EXT                                                = 0x800000,
    VK_PIPELINE_STAGE_RESERVED_27_BIT_KHR                                                             = 0x8000000
};


enum class VkPipelineTessellationStateCreateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPipelineVertexInputStateCreateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkPipelineViewportStateCreateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkQueryControlFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_QUERY_CONTROL_PRECISE_BIT                                                                      = 0x1
};


enum class VkQueryPipelineStatisticFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_VERTICES_BIT                                           = 0x1,
    VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_PRIMITIVES_BIT                                        = 0x10,
    VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_CONTROL_SHADER_PATCHES_BIT                               = 0x100,
    VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_PRIMITIVES_BIT                                         = 0x2,
    VK_QUERY_PIPELINE_STATISTIC_CLIPPING_INVOCATIONS_BIT                                              = 0x20,
    VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_EVALUATION_SHADER_INVOCATIONS_BIT                        = 0x200,
    VK_QUERY_PIPELINE_STATISTIC_VERTEX_SHADER_INVOCATIONS_BIT                                         = 0x4,
    VK_QUERY_PIPELINE_STATISTIC_CLIPPING_PRIMITIVES_BIT                                               = 0x40,
    VK_QUERY_PIPELINE_STATISTIC_COMPUTE_SHADER_INVOCATIONS_BIT                                        = 0x400,
    VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_INVOCATIONS_BIT                                       = 0x8,
    VK_QUERY_PIPELINE_STATISTIC_FRAGMENT_SHADER_INVOCATIONS_BIT                                       = 0x80
};


enum class VkQueryPoolCreateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkQueryResultFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_QUERY_RESULT_64_BIT                                                                            = 0x1,
    VK_QUERY_RESULT_WAIT_BIT                                                                          = 0x2,
    VK_QUERY_RESULT_WITH_AVAILABILITY_BIT                                                             = 0x4,
    VK_QUERY_RESULT_PARTIAL_BIT                                                                       = 0x8
};


enum class VkQueueFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_QUEUE_GRAPHICS_BIT                                                                             = 0x1,
    VK_QUEUE_PROTECTED_BIT                                                                            = 0x10,
    VK_QUEUE_COMPUTE_BIT                                                                              = 0x2,
    VK_QUEUE_RESERVED_5_BIT_KHR                                                                       = 0x20,
    VK_QUEUE_TRANSFER_BIT                                                                             = 0x4,
    VK_QUEUE_RESERVED_6_BIT_KHR                                                                       = 0x40,
    VK_QUEUE_SPARSE_BINDING_BIT                                                                       = 0x8
};


enum class VkRenderPassCreateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_RENDER_PASS_CREATE_RESERVED_0_BIT_KHR                                                          = 0x1,
    VK_RENDER_PASS_RESERVED_BIT_1_QCOM                                                                = 0x2
};


enum class VkResolveModeFlagBitsKHR : unsigned int
{
    VK_RESOLVE_MODE_NONE_KHR                                                                          = 0,
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_RESOLVE_MODE_SAMPLE_ZERO_BIT_KHR                                                               = 0x1,
    VK_RESOLVE_MODE_AVERAGE_BIT_KHR                                                                   = 0x2,
    VK_RESOLVE_MODE_MIN_BIT_KHR                                                                       = 0x4,
    VK_RESOLVE_MODE_MAX_BIT_KHR                                                                       = 0x8
};


enum class VkSampleCountFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_SAMPLE_COUNT_1_BIT                                                                             = 0x1,
    VK_SAMPLE_COUNT_16_BIT                                                                            = 0x10,
    VK_SAMPLE_COUNT_2_BIT                                                                             = 0x2,
    VK_SAMPLE_COUNT_32_BIT                                                                            = 0x20,
    VK_SAMPLE_COUNT_4_BIT                                                                             = 0x4,
    VK_SAMPLE_COUNT_64_BIT                                                                            = 0x40,
    VK_SAMPLE_COUNT_8_BIT                                                                             = 0x8
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
    VK_SEMAPHORE_IMPORT_TEMPORARY_BIT                                                                 = 0x1,
    VK_SEMAPHORE_IMPORT_TEMPORARY_BIT_KHR                                                             = 0x1
};


enum class VkSemaphoreImportFlagBitsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0 // Generic VK_NONE_BIT
};


enum class VkShaderModuleCreateFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_SHADER_MODULE_CREATE_RESERVED_0_BIT_NV                                                         = 0x1
};


enum class VkShaderStageFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_SHADER_STAGE_ALL_GRAPHICS                                                                      = 0x0000001F,
    VK_SHADER_STAGE_VERTEX_BIT                                                                        = 0x1,
    VK_SHADER_STAGE_FRAGMENT_BIT                                                                      = 0x10,
    VK_SHADER_STAGE_RAYGEN_BIT_NV                                                                     = 0x100,
    VK_SHADER_STAGE_INTERSECTION_BIT_NV                                                               = 0x1000,
    VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT                                                          = 0x2,
    VK_SHADER_STAGE_COMPUTE_BIT                                                                       = 0x20,
    VK_SHADER_STAGE_ANY_HIT_BIT_NV                                                                    = 0x200,
    VK_SHADER_STAGE_CALLABLE_BIT_NV                                                                   = 0x2000,
    VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT                                                       = 0x4,
    VK_SHADER_STAGE_TASK_BIT_NV                                                                       = 0x40,
    VK_SHADER_STAGE_CLOSEST_HIT_BIT_NV                                                                = 0x400,
    VK_SHADER_STAGE_ALL                                                                               = 0x7FFFFFFF,
    VK_SHADER_STAGE_GEOMETRY_BIT                                                                      = 0x8,
    VK_SHADER_STAGE_MESH_BIT_NV                                                                       = 0x80,
    VK_SHADER_STAGE_MISS_BIT_NV                                                                       = 0x800
};


enum class VkSparseImageFormatFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT                                                         = 0x1,
    VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT                                                       = 0x2,
    VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT                                                 = 0x4
};


enum class VkSparseMemoryBindFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_SPARSE_MEMORY_BIND_METADATA_BIT                                                                = 0x1
};


enum class VkStencilFaceFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_STENCIL_FACE_FRONT_AND_BACK                                                                    = 0x00000003,
    VK_STENCIL_FRONT_AND_BACK                                                                         = 0x00000003,
    VK_STENCIL_FACE_FRONT_BIT                                                                         = 0x1,
    VK_STENCIL_FACE_BACK_BIT                                                                          = 0x2
};


enum class VkSubgroupFeatureFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_SUBGROUP_FEATURE_BASIC_BIT                                                                     = 0x1,
    VK_SUBGROUP_FEATURE_SHUFFLE_BIT                                                                   = 0x10,
    VK_SUBGROUP_FEATURE_PARTITIONED_BIT_NV                                                            = 0x100,
    VK_SUBGROUP_FEATURE_VOTE_BIT                                                                      = 0x2,
    VK_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT                                                          = 0x20,
    VK_SUBGROUP_FEATURE_ARITHMETIC_BIT                                                                = 0x4,
    VK_SUBGROUP_FEATURE_CLUSTERED_BIT                                                                 = 0x40,
    VK_SUBGROUP_FEATURE_BALLOT_BIT                                                                    = 0x8,
    VK_SUBGROUP_FEATURE_QUAD_BIT                                                                      = 0x80
};


enum class VkSubpassDescriptionFlagBits : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_SUBPASS_DESCRIPTION_PER_VIEW_ATTRIBUTES_BIT_NVX                                                = 0x1,
    VK_SUBPASS_DESCRIPTION_PER_VIEW_POSITION_X_ONLY_BIT_NVX                                           = 0x2,
    VK_SUBPASS_DESCRIPTION_RESERVED_2_BIT_QCOM                                                        = 0x4,
    VK_SUBPASS_DESCRIPTION_RESERVED_3_BIT_QCOM                                                        = 0x8
};


enum class VkSurfaceCounterFlagBitsEXT : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_SURFACE_COUNTER_VBLANK_EXT                                                                     = 0x1
};


enum class VkSurfaceTransformFlagBitsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR                                                             = 0x1,
    VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR                                                    = 0x10,
    VK_SURFACE_TRANSFORM_INHERIT_BIT_KHR                                                              = 0x100,
    VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR                                                            = 0x2,
    VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR                                          = 0x20,
    VK_SURFACE_TRANSFORM_ROTATE_180_BIT_KHR                                                           = 0x4,
    VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR                                         = 0x40,
    VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR                                                           = 0x8,
    VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR                                         = 0x80
};


enum class VkSwapchainCreateFlagBitsKHR : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_SWAPCHAIN_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR                                           = 0x1,
    VK_SWAPCHAIN_CREATE_PROTECTED_BIT_KHR                                                             = 0x2,
    VK_SWAPCHAIN_CREATE_MUTABLE_FORMAT_BIT_KHR                                                        = 0x4
};


enum class VkSwapchainImageUsageFlagBitsANDROID : unsigned int
{
    VK_NONE_BIT                                                                                       = 0x0, // Generic VK_NONE_BIT
    VK_SWAPCHAIN_IMAGE_USAGE_SHARED_BIT_ANDROID                                                       = 0x1
};


// import bitfields to namespace

VKBINDING_CONSTEXPR static const UnusedMask GL_UNUSED_BIT = UnusedMask::GL_UNUSED_BIT;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_ACCELERATION_STRUCTURE_READ_BIT_NV = VkAccessFlagBits::VK_ACCESS_ACCELERATION_STRUCTURE_READ_BIT_NV;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_ACCELERATION_STRUCTURE_WRITE_BIT_NV = VkAccessFlagBits::VK_ACCESS_ACCELERATION_STRUCTURE_WRITE_BIT_NV;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_COLOR_ATTACHMENT_READ_BIT = VkAccessFlagBits::VK_ACCESS_COLOR_ATTACHMENT_READ_BIT;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT = VkAccessFlagBits::VK_ACCESS_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT = VkAccessFlagBits::VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_COMMAND_PROCESS_READ_BIT_NVX = VkAccessFlagBits::VK_ACCESS_COMMAND_PROCESS_READ_BIT_NVX;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_COMMAND_PROCESS_WRITE_BIT_NVX = VkAccessFlagBits::VK_ACCESS_COMMAND_PROCESS_WRITE_BIT_NVX;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_CONDITIONAL_RENDERING_READ_BIT_EXT = VkAccessFlagBits::VK_ACCESS_CONDITIONAL_RENDERING_READ_BIT_EXT;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT = VkAccessFlagBits::VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT = VkAccessFlagBits::VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_FRAGMENT_DENSITY_MAP_READ_BIT_EXT = VkAccessFlagBits::VK_ACCESS_FRAGMENT_DENSITY_MAP_READ_BIT_EXT;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_HOST_READ_BIT = VkAccessFlagBits::VK_ACCESS_HOST_READ_BIT;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_HOST_WRITE_BIT = VkAccessFlagBits::VK_ACCESS_HOST_WRITE_BIT;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_INDEX_READ_BIT = VkAccessFlagBits::VK_ACCESS_INDEX_READ_BIT;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_INDIRECT_COMMAND_READ_BIT = VkAccessFlagBits::VK_ACCESS_INDIRECT_COMMAND_READ_BIT;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_INPUT_ATTACHMENT_READ_BIT = VkAccessFlagBits::VK_ACCESS_INPUT_ATTACHMENT_READ_BIT;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_MEMORY_READ_BIT = VkAccessFlagBits::VK_ACCESS_MEMORY_READ_BIT;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_MEMORY_WRITE_BIT = VkAccessFlagBits::VK_ACCESS_MEMORY_WRITE_BIT;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_RESERVED_28_BIT_KHR = VkAccessFlagBits::VK_ACCESS_RESERVED_28_BIT_KHR;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_RESERVED_29_BIT_KHR = VkAccessFlagBits::VK_ACCESS_RESERVED_29_BIT_KHR;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_RESERVED_30_BIT_KHR = VkAccessFlagBits::VK_ACCESS_RESERVED_30_BIT_KHR;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_RESERVED_31_BIT_KHR = VkAccessFlagBits::VK_ACCESS_RESERVED_31_BIT_KHR;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_SHADER_READ_BIT = VkAccessFlagBits::VK_ACCESS_SHADER_READ_BIT;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_SHADER_WRITE_BIT = VkAccessFlagBits::VK_ACCESS_SHADER_WRITE_BIT;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_SHADING_RATE_IMAGE_READ_BIT_NV = VkAccessFlagBits::VK_ACCESS_SHADING_RATE_IMAGE_READ_BIT_NV;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_TRANSFER_READ_BIT = VkAccessFlagBits::VK_ACCESS_TRANSFER_READ_BIT;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_TRANSFER_WRITE_BIT = VkAccessFlagBits::VK_ACCESS_TRANSFER_WRITE_BIT;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT = VkAccessFlagBits::VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT = VkAccessFlagBits::VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_TRANSFORM_FEEDBACK_WRITE_BIT_EXT = VkAccessFlagBits::VK_ACCESS_TRANSFORM_FEEDBACK_WRITE_BIT_EXT;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_UNIFORM_READ_BIT = VkAccessFlagBits::VK_ACCESS_UNIFORM_READ_BIT;
VKBINDING_CONSTEXPR static const VkAccessFlagBits VK_ACCESS_VERTEX_ATTRIBUTE_READ_BIT = VkAccessFlagBits::VK_ACCESS_VERTEX_ATTRIBUTE_READ_BIT;
VKBINDING_CONSTEXPR static const VkAttachmentDescriptionFlagBits VK_ATTACHMENT_DESCRIPTION_MAY_ALIAS_BIT = VkAttachmentDescriptionFlagBits::VK_ATTACHMENT_DESCRIPTION_MAY_ALIAS_BIT;
VKBINDING_CONSTEXPR static const VkBufferCreateFlagBits VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_EXT = VkBufferCreateFlagBits::VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_EXT;
VKBINDING_CONSTEXPR static const VkBufferCreateFlagBits VK_BUFFER_CREATE_PROTECTED_BIT = VkBufferCreateFlagBits::VK_BUFFER_CREATE_PROTECTED_BIT;
VKBINDING_CONSTEXPR static const VkBufferCreateFlagBits VK_BUFFER_CREATE_SPARSE_ALIASED_BIT = VkBufferCreateFlagBits::VK_BUFFER_CREATE_SPARSE_ALIASED_BIT;
VKBINDING_CONSTEXPR static const VkBufferCreateFlagBits VK_BUFFER_CREATE_SPARSE_BINDING_BIT = VkBufferCreateFlagBits::VK_BUFFER_CREATE_SPARSE_BINDING_BIT;
VKBINDING_CONSTEXPR static const VkBufferCreateFlagBits VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT = VkBufferCreateFlagBits::VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT;
VKBINDING_CONSTEXPR static const VkBufferUsageFlagBits VK_BUFFER_USAGE_CONDITIONAL_RENDERING_BIT_EXT = VkBufferUsageFlagBits::VK_BUFFER_USAGE_CONDITIONAL_RENDERING_BIT_EXT;
VKBINDING_CONSTEXPR static const VkBufferUsageFlagBits VK_BUFFER_USAGE_INDEX_BUFFER_BIT = VkBufferUsageFlagBits::VK_BUFFER_USAGE_INDEX_BUFFER_BIT;
VKBINDING_CONSTEXPR static const VkBufferUsageFlagBits VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT = VkBufferUsageFlagBits::VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT;
VKBINDING_CONSTEXPR static const VkBufferUsageFlagBits VK_BUFFER_USAGE_RAY_TRACING_BIT_NV = VkBufferUsageFlagBits::VK_BUFFER_USAGE_RAY_TRACING_BIT_NV;
VKBINDING_CONSTEXPR static const VkBufferUsageFlagBits VK_BUFFER_USAGE_RESERVED_13_BIT_KHR = VkBufferUsageFlagBits::VK_BUFFER_USAGE_RESERVED_13_BIT_KHR;
VKBINDING_CONSTEXPR static const VkBufferUsageFlagBits VK_BUFFER_USAGE_RESERVED_14_BIT_KHR = VkBufferUsageFlagBits::VK_BUFFER_USAGE_RESERVED_14_BIT_KHR;
VKBINDING_CONSTEXPR static const VkBufferUsageFlagBits VK_BUFFER_USAGE_RESERVED_15_BIT_KHR = VkBufferUsageFlagBits::VK_BUFFER_USAGE_RESERVED_15_BIT_KHR;
VKBINDING_CONSTEXPR static const VkBufferUsageFlagBits VK_BUFFER_USAGE_RESERVED_16_BIT_KHR = VkBufferUsageFlagBits::VK_BUFFER_USAGE_RESERVED_16_BIT_KHR;
VKBINDING_CONSTEXPR static const VkBufferUsageFlagBits VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT_EXT = VkBufferUsageFlagBits::VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT_EXT;
VKBINDING_CONSTEXPR static const VkBufferUsageFlagBits VK_BUFFER_USAGE_STORAGE_BUFFER_BIT = VkBufferUsageFlagBits::VK_BUFFER_USAGE_STORAGE_BUFFER_BIT;
VKBINDING_CONSTEXPR static const VkBufferUsageFlagBits VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT = VkBufferUsageFlagBits::VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT;
VKBINDING_CONSTEXPR static const VkBufferUsageFlagBits VK_BUFFER_USAGE_TRANSFER_DST_BIT = VkBufferUsageFlagBits::VK_BUFFER_USAGE_TRANSFER_DST_BIT;
VKBINDING_CONSTEXPR static const VkBufferUsageFlagBits VK_BUFFER_USAGE_TRANSFER_SRC_BIT = VkBufferUsageFlagBits::VK_BUFFER_USAGE_TRANSFER_SRC_BIT;
VKBINDING_CONSTEXPR static const VkBufferUsageFlagBits VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT = VkBufferUsageFlagBits::VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT;
VKBINDING_CONSTEXPR static const VkBufferUsageFlagBits VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT = VkBufferUsageFlagBits::VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT;
VKBINDING_CONSTEXPR static const VkBufferUsageFlagBits VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT = VkBufferUsageFlagBits::VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT;
VKBINDING_CONSTEXPR static const VkBufferUsageFlagBits VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT = VkBufferUsageFlagBits::VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT;
VKBINDING_CONSTEXPR static const VkBufferUsageFlagBits VK_BUFFER_USAGE_VERTEX_BUFFER_BIT = VkBufferUsageFlagBits::VK_BUFFER_USAGE_VERTEX_BUFFER_BIT;
VKBINDING_CONSTEXPR static const VkBuildAccelerationStructureFlagBitsNV VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_COMPACTION_BIT_NV = VkBuildAccelerationStructureFlagBitsNV::VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_COMPACTION_BIT_NV;
VKBINDING_CONSTEXPR static const VkBuildAccelerationStructureFlagBitsNV VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_UPDATE_BIT_NV = VkBuildAccelerationStructureFlagBitsNV::VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_UPDATE_BIT_NV;
VKBINDING_CONSTEXPR static const VkBuildAccelerationStructureFlagBitsNV VK_BUILD_ACCELERATION_STRUCTURE_LOW_MEMORY_BIT_NV = VkBuildAccelerationStructureFlagBitsNV::VK_BUILD_ACCELERATION_STRUCTURE_LOW_MEMORY_BIT_NV;
VKBINDING_CONSTEXPR static const VkBuildAccelerationStructureFlagBitsNV VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_BUILD_BIT_NV = VkBuildAccelerationStructureFlagBitsNV::VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_BUILD_BIT_NV;
VKBINDING_CONSTEXPR static const VkBuildAccelerationStructureFlagBitsNV VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_TRACE_BIT_NV = VkBuildAccelerationStructureFlagBitsNV::VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_TRACE_BIT_NV;
VKBINDING_CONSTEXPR static const VkColorComponentFlagBits VK_COLOR_COMPONENT_A_BIT = VkColorComponentFlagBits::VK_COLOR_COMPONENT_A_BIT;
VKBINDING_CONSTEXPR static const VkColorComponentFlagBits VK_COLOR_COMPONENT_B_BIT = VkColorComponentFlagBits::VK_COLOR_COMPONENT_B_BIT;
VKBINDING_CONSTEXPR static const VkColorComponentFlagBits VK_COLOR_COMPONENT_G_BIT = VkColorComponentFlagBits::VK_COLOR_COMPONENT_G_BIT;
VKBINDING_CONSTEXPR static const VkColorComponentFlagBits VK_COLOR_COMPONENT_R_BIT = VkColorComponentFlagBits::VK_COLOR_COMPONENT_R_BIT;
VKBINDING_CONSTEXPR static const VkCommandBufferResetFlagBits VK_COMMAND_BUFFER_RESET_RELEASE_RESOURCES_BIT = VkCommandBufferResetFlagBits::VK_COMMAND_BUFFER_RESET_RELEASE_RESOURCES_BIT;
VKBINDING_CONSTEXPR static const VkCommandBufferUsageFlagBits VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT = VkCommandBufferUsageFlagBits::VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
VKBINDING_CONSTEXPR static const VkCommandBufferUsageFlagBits VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT = VkCommandBufferUsageFlagBits::VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT;
VKBINDING_CONSTEXPR static const VkCommandBufferUsageFlagBits VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT = VkCommandBufferUsageFlagBits::VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT;
VKBINDING_CONSTEXPR static const VkCommandPoolCreateFlagBits VK_COMMAND_POOL_CREATE_PROTECTED_BIT = VkCommandPoolCreateFlagBits::VK_COMMAND_POOL_CREATE_PROTECTED_BIT;
VKBINDING_CONSTEXPR static const VkCommandPoolCreateFlagBits VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT = VkCommandPoolCreateFlagBits::VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
VKBINDING_CONSTEXPR static const VkCommandPoolCreateFlagBits VK_COMMAND_POOL_CREATE_TRANSIENT_BIT = VkCommandPoolCreateFlagBits::VK_COMMAND_POOL_CREATE_TRANSIENT_BIT;
VKBINDING_CONSTEXPR static const VkCommandPoolResetFlagBits VK_COMMAND_POOL_RESET_RELEASE_RESOURCES_BIT = VkCommandPoolResetFlagBits::VK_COMMAND_POOL_RESET_RELEASE_RESOURCES_BIT;
VKBINDING_CONSTEXPR static const VkCompositeAlphaFlagBitsKHR VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR = VkCompositeAlphaFlagBitsKHR::VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR;
VKBINDING_CONSTEXPR static const VkCompositeAlphaFlagBitsKHR VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR = VkCompositeAlphaFlagBitsKHR::VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkCompositeAlphaFlagBitsKHR VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR = VkCompositeAlphaFlagBitsKHR::VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR;
VKBINDING_CONSTEXPR static const VkCompositeAlphaFlagBitsKHR VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR = VkCompositeAlphaFlagBitsKHR::VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR;
VKBINDING_CONSTEXPR static const VkConditionalRenderingFlagBitsEXT VK_CONDITIONAL_RENDERING_INVERTED_BIT_EXT = VkConditionalRenderingFlagBitsEXT::VK_CONDITIONAL_RENDERING_INVERTED_BIT_EXT;
VKBINDING_CONSTEXPR static const VkCullModeFlagBits VK_CULL_MODE_BACK_BIT = VkCullModeFlagBits::VK_CULL_MODE_BACK_BIT;
VKBINDING_CONSTEXPR static const VkCullModeFlagBits VK_CULL_MODE_FRONT_AND_BACK = VkCullModeFlagBits::VK_CULL_MODE_FRONT_AND_BACK;
VKBINDING_CONSTEXPR static const VkCullModeFlagBits VK_CULL_MODE_FRONT_BIT = VkCullModeFlagBits::VK_CULL_MODE_FRONT_BIT;
VKBINDING_CONSTEXPR static const VkCullModeFlagBits VK_CULL_MODE_NONE = VkCullModeFlagBits::VK_CULL_MODE_NONE;
VKBINDING_CONSTEXPR static const VkDebugReportFlagBitsEXT VK_DEBUG_REPORT_DEBUG_BIT_EXT = VkDebugReportFlagBitsEXT::VK_DEBUG_REPORT_DEBUG_BIT_EXT;
VKBINDING_CONSTEXPR static const VkDebugReportFlagBitsEXT VK_DEBUG_REPORT_ERROR_BIT_EXT = VkDebugReportFlagBitsEXT::VK_DEBUG_REPORT_ERROR_BIT_EXT;
VKBINDING_CONSTEXPR static const VkDebugReportFlagBitsEXT VK_DEBUG_REPORT_INFORMATION_BIT_EXT = VkDebugReportFlagBitsEXT::VK_DEBUG_REPORT_INFORMATION_BIT_EXT;
VKBINDING_CONSTEXPR static const VkDebugReportFlagBitsEXT VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT = VkDebugReportFlagBitsEXT::VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT;
VKBINDING_CONSTEXPR static const VkDebugReportFlagBitsEXT VK_DEBUG_REPORT_WARNING_BIT_EXT = VkDebugReportFlagBitsEXT::VK_DEBUG_REPORT_WARNING_BIT_EXT;
VKBINDING_CONSTEXPR static const VkDebugUtilsMessageSeverityFlagBitsEXT VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT = VkDebugUtilsMessageSeverityFlagBitsEXT::VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT;
VKBINDING_CONSTEXPR static const VkDebugUtilsMessageSeverityFlagBitsEXT VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT = VkDebugUtilsMessageSeverityFlagBitsEXT::VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT;
VKBINDING_CONSTEXPR static const VkDebugUtilsMessageSeverityFlagBitsEXT VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT = VkDebugUtilsMessageSeverityFlagBitsEXT::VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT;
VKBINDING_CONSTEXPR static const VkDebugUtilsMessageSeverityFlagBitsEXT VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT = VkDebugUtilsMessageSeverityFlagBitsEXT::VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT;
VKBINDING_CONSTEXPR static const VkDebugUtilsMessageTypeFlagBitsEXT VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT = VkDebugUtilsMessageTypeFlagBitsEXT::VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT;
VKBINDING_CONSTEXPR static const VkDebugUtilsMessageTypeFlagBitsEXT VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT = VkDebugUtilsMessageTypeFlagBitsEXT::VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT;
VKBINDING_CONSTEXPR static const VkDebugUtilsMessageTypeFlagBitsEXT VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT = VkDebugUtilsMessageTypeFlagBitsEXT::VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT;
VKBINDING_CONSTEXPR static const VkDependencyFlagBits VK_DEPENDENCY_BY_REGION_BIT = VkDependencyFlagBits::VK_DEPENDENCY_BY_REGION_BIT;
VKBINDING_CONSTEXPR static const VkDependencyFlagBits VK_DEPENDENCY_DEVICE_GROUP_BIT = VkDependencyFlagBits::VK_DEPENDENCY_DEVICE_GROUP_BIT;
VKBINDING_CONSTEXPR static const VkDependencyFlagBits VK_DEPENDENCY_DEVICE_GROUP_BIT_KHR = VkDependencyFlagBits::VK_DEPENDENCY_DEVICE_GROUP_BIT_KHR;
VKBINDING_CONSTEXPR static const VkDependencyFlagBits VK_DEPENDENCY_VIEW_LOCAL_BIT = VkDependencyFlagBits::VK_DEPENDENCY_VIEW_LOCAL_BIT;
VKBINDING_CONSTEXPR static const VkDependencyFlagBits VK_DEPENDENCY_VIEW_LOCAL_BIT_KHR = VkDependencyFlagBits::VK_DEPENDENCY_VIEW_LOCAL_BIT_KHR;
VKBINDING_CONSTEXPR static const VkDescriptorBindingFlagBitsEXT VK_DESCRIPTOR_BINDING_PARTIALLY_BOUND_BIT_EXT = VkDescriptorBindingFlagBitsEXT::VK_DESCRIPTOR_BINDING_PARTIALLY_BOUND_BIT_EXT;
VKBINDING_CONSTEXPR static const VkDescriptorBindingFlagBitsEXT VK_DESCRIPTOR_BINDING_UPDATE_AFTER_BIND_BIT_EXT = VkDescriptorBindingFlagBitsEXT::VK_DESCRIPTOR_BINDING_UPDATE_AFTER_BIND_BIT_EXT;
VKBINDING_CONSTEXPR static const VkDescriptorBindingFlagBitsEXT VK_DESCRIPTOR_BINDING_UPDATE_UNUSED_WHILE_PENDING_BIT_EXT = VkDescriptorBindingFlagBitsEXT::VK_DESCRIPTOR_BINDING_UPDATE_UNUSED_WHILE_PENDING_BIT_EXT;
VKBINDING_CONSTEXPR static const VkDescriptorBindingFlagBitsEXT VK_DESCRIPTOR_BINDING_VARIABLE_DESCRIPTOR_COUNT_BIT_EXT = VkDescriptorBindingFlagBitsEXT::VK_DESCRIPTOR_BINDING_VARIABLE_DESCRIPTOR_COUNT_BIT_EXT;
VKBINDING_CONSTEXPR static const VkDescriptorPoolCreateFlagBits VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT = VkDescriptorPoolCreateFlagBits::VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT;
VKBINDING_CONSTEXPR static const VkDescriptorPoolCreateFlagBits VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT_EXT = VkDescriptorPoolCreateFlagBits::VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT_EXT;
VKBINDING_CONSTEXPR static const VkDescriptorSetLayoutCreateFlagBits VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR = VkDescriptorSetLayoutCreateFlagBits::VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR;
VKBINDING_CONSTEXPR static const VkDescriptorSetLayoutCreateFlagBits VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT_EXT = VkDescriptorSetLayoutCreateFlagBits::VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT_EXT;
VKBINDING_CONSTEXPR static const VkDeviceGroupPresentModeFlagBitsKHR VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHR = VkDeviceGroupPresentModeFlagBitsKHR::VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHR;
VKBINDING_CONSTEXPR static const VkDeviceGroupPresentModeFlagBitsKHR VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHR = VkDeviceGroupPresentModeFlagBitsKHR::VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkDeviceGroupPresentModeFlagBitsKHR VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHR = VkDeviceGroupPresentModeFlagBitsKHR::VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkDeviceGroupPresentModeFlagBitsKHR VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHR = VkDeviceGroupPresentModeFlagBitsKHR::VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHR;
VKBINDING_CONSTEXPR static const VkDeviceQueueCreateFlagBits VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT = VkDeviceQueueCreateFlagBits::VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT;
VKBINDING_CONSTEXPR static const VkDisplayPlaneAlphaFlagBitsKHR VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR = VkDisplayPlaneAlphaFlagBitsKHR::VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR;
VKBINDING_CONSTEXPR static const VkDisplayPlaneAlphaFlagBitsKHR VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR = VkDisplayPlaneAlphaFlagBitsKHR::VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkDisplayPlaneAlphaFlagBitsKHR VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR = VkDisplayPlaneAlphaFlagBitsKHR::VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR;
VKBINDING_CONSTEXPR static const VkDisplayPlaneAlphaFlagBitsKHR VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR = VkDisplayPlaneAlphaFlagBitsKHR::VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalFenceFeatureFlagBits VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT = VkExternalFenceFeatureFlagBits::VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT;
VKBINDING_CONSTEXPR static const VkExternalFenceFeatureFlagBits VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT_KHR = VkExternalFenceFeatureFlagBits::VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalFenceFeatureFlagBits VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT = VkExternalFenceFeatureFlagBits::VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT;
VKBINDING_CONSTEXPR static const VkExternalFenceFeatureFlagBits VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT_KHR = VkExternalFenceFeatureFlagBits::VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalFenceHandleTypeFlagBits VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT = VkExternalFenceHandleTypeFlagBits::VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT;
VKBINDING_CONSTEXPR static const VkExternalFenceHandleTypeFlagBits VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR = VkExternalFenceHandleTypeFlagBits::VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalFenceHandleTypeFlagBits VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT = VkExternalFenceHandleTypeFlagBits::VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT;
VKBINDING_CONSTEXPR static const VkExternalFenceHandleTypeFlagBits VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR = VkExternalFenceHandleTypeFlagBits::VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalFenceHandleTypeFlagBits VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT = VkExternalFenceHandleTypeFlagBits::VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT;
VKBINDING_CONSTEXPR static const VkExternalFenceHandleTypeFlagBits VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR = VkExternalFenceHandleTypeFlagBits::VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalFenceHandleTypeFlagBits VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT = VkExternalFenceHandleTypeFlagBits::VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT;
VKBINDING_CONSTEXPR static const VkExternalFenceHandleTypeFlagBits VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT_KHR = VkExternalFenceHandleTypeFlagBits::VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalMemoryFeatureFlagBits VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT = VkExternalMemoryFeatureFlagBits::VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT;
VKBINDING_CONSTEXPR static const VkExternalMemoryFeatureFlagBits VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_KHR = VkExternalMemoryFeatureFlagBits::VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalMemoryFeatureFlagBitsNV VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_NV = VkExternalMemoryFeatureFlagBitsNV::VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_NV;
VKBINDING_CONSTEXPR static const VkExternalMemoryFeatureFlagBits VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT = VkExternalMemoryFeatureFlagBits::VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT;
VKBINDING_CONSTEXPR static const VkExternalMemoryFeatureFlagBits VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_KHR = VkExternalMemoryFeatureFlagBits::VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalMemoryFeatureFlagBitsNV VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_NV = VkExternalMemoryFeatureFlagBitsNV::VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_NV;
VKBINDING_CONSTEXPR static const VkExternalMemoryFeatureFlagBits VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT = VkExternalMemoryFeatureFlagBits::VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT;
VKBINDING_CONSTEXPR static const VkExternalMemoryFeatureFlagBits VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_KHR = VkExternalMemoryFeatureFlagBits::VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalMemoryFeatureFlagBitsNV VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_NV = VkExternalMemoryFeatureFlagBitsNV::VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_NV;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlagBits VK_EXTERNAL_MEMORY_HANDLE_TYPE_ANDROID_HARDWARE_BUFFER_BIT_ANDROID = VkExternalMemoryHandleTypeFlagBits::VK_EXTERNAL_MEMORY_HANDLE_TYPE_ANDROID_HARDWARE_BUFFER_BIT_ANDROID;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlagBitsNV VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_BIT_NV = VkExternalMemoryHandleTypeFlagBitsNV::VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_BIT_NV;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlagBitsNV VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_KMT_BIT_NV = VkExternalMemoryHandleTypeFlagBitsNV::VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_KMT_BIT_NV;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlagBits VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT = VkExternalMemoryHandleTypeFlagBits::VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlagBits VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT_KHR = VkExternalMemoryHandleTypeFlagBits::VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlagBits VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT = VkExternalMemoryHandleTypeFlagBits::VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlagBits VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT_KHR = VkExternalMemoryHandleTypeFlagBits::VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlagBits VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT = VkExternalMemoryHandleTypeFlagBits::VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlagBits VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT_KHR = VkExternalMemoryHandleTypeFlagBits::VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlagBits VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT = VkExternalMemoryHandleTypeFlagBits::VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlagBits VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT_KHR = VkExternalMemoryHandleTypeFlagBits::VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlagBits VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT = VkExternalMemoryHandleTypeFlagBits::VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlagBits VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_ALLOCATION_BIT_EXT = VkExternalMemoryHandleTypeFlagBits::VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_ALLOCATION_BIT_EXT;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlagBits VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT = VkExternalMemoryHandleTypeFlagBits::VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlagBits VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT = VkExternalMemoryHandleTypeFlagBits::VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlagBits VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT_KHR = VkExternalMemoryHandleTypeFlagBits::VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlagBits VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT = VkExternalMemoryHandleTypeFlagBits::VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlagBits VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR = VkExternalMemoryHandleTypeFlagBits::VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlagBitsNV VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_NV = VkExternalMemoryHandleTypeFlagBitsNV::VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_NV;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlagBits VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT = VkExternalMemoryHandleTypeFlagBits::VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlagBits VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR = VkExternalMemoryHandleTypeFlagBits::VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalMemoryHandleTypeFlagBitsNV VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_NV = VkExternalMemoryHandleTypeFlagBitsNV::VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_NV;
VKBINDING_CONSTEXPR static const VkExternalSemaphoreFeatureFlagBits VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT = VkExternalSemaphoreFeatureFlagBits::VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT;
VKBINDING_CONSTEXPR static const VkExternalSemaphoreFeatureFlagBits VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT_KHR = VkExternalSemaphoreFeatureFlagBits::VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalSemaphoreFeatureFlagBits VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT = VkExternalSemaphoreFeatureFlagBits::VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT;
VKBINDING_CONSTEXPR static const VkExternalSemaphoreFeatureFlagBits VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT_KHR = VkExternalSemaphoreFeatureFlagBits::VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalSemaphoreHandleTypeFlagBits VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT = VkExternalSemaphoreHandleTypeFlagBits::VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT;
VKBINDING_CONSTEXPR static const VkExternalSemaphoreHandleTypeFlagBits VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT_KHR = VkExternalSemaphoreHandleTypeFlagBits::VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalSemaphoreHandleTypeFlagBits VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT = VkExternalSemaphoreHandleTypeFlagBits::VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT;
VKBINDING_CONSTEXPR static const VkExternalSemaphoreHandleTypeFlagBits VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR = VkExternalSemaphoreHandleTypeFlagBits::VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalSemaphoreHandleTypeFlagBits VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT = VkExternalSemaphoreHandleTypeFlagBits::VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT;
VKBINDING_CONSTEXPR static const VkExternalSemaphoreHandleTypeFlagBits VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR = VkExternalSemaphoreHandleTypeFlagBits::VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalSemaphoreHandleTypeFlagBits VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT = VkExternalSemaphoreHandleTypeFlagBits::VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT;
VKBINDING_CONSTEXPR static const VkExternalSemaphoreHandleTypeFlagBits VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR = VkExternalSemaphoreHandleTypeFlagBits::VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR;
VKBINDING_CONSTEXPR static const VkExternalSemaphoreHandleTypeFlagBits VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT = VkExternalSemaphoreHandleTypeFlagBits::VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT;
VKBINDING_CONSTEXPR static const VkExternalSemaphoreHandleTypeFlagBits VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT_KHR = VkExternalSemaphoreHandleTypeFlagBits::VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT_KHR;
VKBINDING_CONSTEXPR static const VkFenceCreateFlagBits VK_FENCE_CREATE_SIGNALED_BIT = VkFenceCreateFlagBits::VK_FENCE_CREATE_SIGNALED_BIT;
VKBINDING_CONSTEXPR static const VkFenceImportFlagBits VK_FENCE_IMPORT_TEMPORARY_BIT = VkFenceImportFlagBits::VK_FENCE_IMPORT_TEMPORARY_BIT;
VKBINDING_CONSTEXPR static const VkFenceImportFlagBits VK_FENCE_IMPORT_TEMPORARY_BIT_KHR = VkFenceImportFlagBits::VK_FENCE_IMPORT_TEMPORARY_BIT_KHR;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_BLIT_DST_BIT = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_BLIT_DST_BIT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_BLIT_SRC_BIT = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_BLIT_SRC_BIT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT_KHR = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT_KHR;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_DISJOINT_BIT = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_DISJOINT_BIT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_DISJOINT_BIT_KHR = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_DISJOINT_BIT_KHR;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_FRAGMENT_DENSITY_MAP_BIT_EXT = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_FRAGMENT_DENSITY_MAP_BIT_EXT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT_KHR = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT_KHR;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_RESERVED_25_BIT_KHR = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_RESERVED_25_BIT_KHR;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_RESERVED_26_BIT_KHR = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_RESERVED_26_BIT_KHR;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_RESERVED_27_BIT_KHR = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_RESERVED_27_BIT_KHR;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_RESERVED_28_BIT_KHR = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_RESERVED_28_BIT_KHR;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_EXT = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_EXT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT_EXT = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT_EXT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT_KHR = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT_KHR;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT_KHR = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT_KHR = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT_KHR;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT_KHR = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT_KHR;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_TRANSFER_DST_BIT = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_TRANSFER_DST_BIT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_TRANSFER_DST_BIT_KHR = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_TRANSFER_DST_BIT_KHR;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_TRANSFER_SRC_BIT = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_TRANSFER_SRC_BIT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_TRANSFER_SRC_BIT_KHR = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_TRANSFER_SRC_BIT_KHR;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT;
VKBINDING_CONSTEXPR static const VkFormatFeatureFlagBits VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT = VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT;
VKBINDING_CONSTEXPR static const VkFramebufferCreateFlagBits VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT_KHR = VkFramebufferCreateFlagBits::VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT_KHR;
VKBINDING_CONSTEXPR static const VkGeometryInstanceFlagBitsNV VK_GEOMETRY_INSTANCE_FORCE_NO_OPAQUE_BIT_NV = VkGeometryInstanceFlagBitsNV::VK_GEOMETRY_INSTANCE_FORCE_NO_OPAQUE_BIT_NV;
VKBINDING_CONSTEXPR static const VkGeometryInstanceFlagBitsNV VK_GEOMETRY_INSTANCE_FORCE_OPAQUE_BIT_NV = VkGeometryInstanceFlagBitsNV::VK_GEOMETRY_INSTANCE_FORCE_OPAQUE_BIT_NV;
VKBINDING_CONSTEXPR static const VkGeometryInstanceFlagBitsNV VK_GEOMETRY_INSTANCE_TRIANGLE_CULL_DISABLE_BIT_NV = VkGeometryInstanceFlagBitsNV::VK_GEOMETRY_INSTANCE_TRIANGLE_CULL_DISABLE_BIT_NV;
VKBINDING_CONSTEXPR static const VkGeometryInstanceFlagBitsNV VK_GEOMETRY_INSTANCE_TRIANGLE_FRONT_COUNTERCLOCKWISE_BIT_NV = VkGeometryInstanceFlagBitsNV::VK_GEOMETRY_INSTANCE_TRIANGLE_FRONT_COUNTERCLOCKWISE_BIT_NV;
VKBINDING_CONSTEXPR static const VkGeometryFlagBitsNV VK_GEOMETRY_NO_DUPLICATE_ANY_HIT_INVOCATION_BIT_NV = VkGeometryFlagBitsNV::VK_GEOMETRY_NO_DUPLICATE_ANY_HIT_INVOCATION_BIT_NV;
VKBINDING_CONSTEXPR static const VkGeometryFlagBitsNV VK_GEOMETRY_OPAQUE_BIT_NV = VkGeometryFlagBitsNV::VK_GEOMETRY_OPAQUE_BIT_NV;
VKBINDING_CONSTEXPR static const VkImageAspectFlagBits VK_IMAGE_ASPECT_COLOR_BIT = VkImageAspectFlagBits::VK_IMAGE_ASPECT_COLOR_BIT;
VKBINDING_CONSTEXPR static const VkImageAspectFlagBits VK_IMAGE_ASPECT_DEPTH_BIT = VkImageAspectFlagBits::VK_IMAGE_ASPECT_DEPTH_BIT;
VKBINDING_CONSTEXPR static const VkImageAspectFlagBits VK_IMAGE_ASPECT_MEMORY_PLANE_0_BIT_EXT = VkImageAspectFlagBits::VK_IMAGE_ASPECT_MEMORY_PLANE_0_BIT_EXT;
VKBINDING_CONSTEXPR static const VkImageAspectFlagBits VK_IMAGE_ASPECT_MEMORY_PLANE_1_BIT_EXT = VkImageAspectFlagBits::VK_IMAGE_ASPECT_MEMORY_PLANE_1_BIT_EXT;
VKBINDING_CONSTEXPR static const VkImageAspectFlagBits VK_IMAGE_ASPECT_MEMORY_PLANE_2_BIT_EXT = VkImageAspectFlagBits::VK_IMAGE_ASPECT_MEMORY_PLANE_2_BIT_EXT;
VKBINDING_CONSTEXPR static const VkImageAspectFlagBits VK_IMAGE_ASPECT_MEMORY_PLANE_3_BIT_EXT = VkImageAspectFlagBits::VK_IMAGE_ASPECT_MEMORY_PLANE_3_BIT_EXT;
VKBINDING_CONSTEXPR static const VkImageAspectFlagBits VK_IMAGE_ASPECT_METADATA_BIT = VkImageAspectFlagBits::VK_IMAGE_ASPECT_METADATA_BIT;
VKBINDING_CONSTEXPR static const VkImageAspectFlagBits VK_IMAGE_ASPECT_PLANE_0_BIT = VkImageAspectFlagBits::VK_IMAGE_ASPECT_PLANE_0_BIT;
VKBINDING_CONSTEXPR static const VkImageAspectFlagBits VK_IMAGE_ASPECT_PLANE_0_BIT_KHR = VkImageAspectFlagBits::VK_IMAGE_ASPECT_PLANE_0_BIT_KHR;
VKBINDING_CONSTEXPR static const VkImageAspectFlagBits VK_IMAGE_ASPECT_PLANE_1_BIT = VkImageAspectFlagBits::VK_IMAGE_ASPECT_PLANE_1_BIT;
VKBINDING_CONSTEXPR static const VkImageAspectFlagBits VK_IMAGE_ASPECT_PLANE_1_BIT_KHR = VkImageAspectFlagBits::VK_IMAGE_ASPECT_PLANE_1_BIT_KHR;
VKBINDING_CONSTEXPR static const VkImageAspectFlagBits VK_IMAGE_ASPECT_PLANE_2_BIT = VkImageAspectFlagBits::VK_IMAGE_ASPECT_PLANE_2_BIT;
VKBINDING_CONSTEXPR static const VkImageAspectFlagBits VK_IMAGE_ASPECT_PLANE_2_BIT_KHR = VkImageAspectFlagBits::VK_IMAGE_ASPECT_PLANE_2_BIT_KHR;
VKBINDING_CONSTEXPR static const VkImageAspectFlagBits VK_IMAGE_ASPECT_STENCIL_BIT = VkImageAspectFlagBits::VK_IMAGE_ASPECT_STENCIL_BIT;
VKBINDING_CONSTEXPR static const VkImageCreateFlagBits VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT = VkImageCreateFlagBits::VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT;
VKBINDING_CONSTEXPR static const VkImageCreateFlagBits VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT_KHR = VkImageCreateFlagBits::VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkImageCreateFlagBits VK_IMAGE_CREATE_ALIAS_BIT = VkImageCreateFlagBits::VK_IMAGE_CREATE_ALIAS_BIT;
VKBINDING_CONSTEXPR static const VkImageCreateFlagBits VK_IMAGE_CREATE_ALIAS_BIT_KHR = VkImageCreateFlagBits::VK_IMAGE_CREATE_ALIAS_BIT_KHR;
VKBINDING_CONSTEXPR static const VkImageCreateFlagBits VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT = VkImageCreateFlagBits::VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT;
VKBINDING_CONSTEXPR static const VkImageCreateFlagBits VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT_KHR = VkImageCreateFlagBits::VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkImageCreateFlagBits VK_IMAGE_CREATE_CORNER_SAMPLED_BIT_NV = VkImageCreateFlagBits::VK_IMAGE_CREATE_CORNER_SAMPLED_BIT_NV;
VKBINDING_CONSTEXPR static const VkImageCreateFlagBits VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT = VkImageCreateFlagBits::VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT;
VKBINDING_CONSTEXPR static const VkImageCreateFlagBits VK_IMAGE_CREATE_DISJOINT_BIT = VkImageCreateFlagBits::VK_IMAGE_CREATE_DISJOINT_BIT;
VKBINDING_CONSTEXPR static const VkImageCreateFlagBits VK_IMAGE_CREATE_DISJOINT_BIT_KHR = VkImageCreateFlagBits::VK_IMAGE_CREATE_DISJOINT_BIT_KHR;
VKBINDING_CONSTEXPR static const VkImageCreateFlagBits VK_IMAGE_CREATE_EXTENDED_USAGE_BIT = VkImageCreateFlagBits::VK_IMAGE_CREATE_EXTENDED_USAGE_BIT;
VKBINDING_CONSTEXPR static const VkImageCreateFlagBits VK_IMAGE_CREATE_EXTENDED_USAGE_BIT_KHR = VkImageCreateFlagBits::VK_IMAGE_CREATE_EXTENDED_USAGE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkImageCreateFlagBits VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT = VkImageCreateFlagBits::VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT;
VKBINDING_CONSTEXPR static const VkImageCreateFlagBits VK_IMAGE_CREATE_PROTECTED_BIT = VkImageCreateFlagBits::VK_IMAGE_CREATE_PROTECTED_BIT;
VKBINDING_CONSTEXPR static const VkImageCreateFlagBits VK_IMAGE_CREATE_SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_EXT = VkImageCreateFlagBits::VK_IMAGE_CREATE_SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_EXT;
VKBINDING_CONSTEXPR static const VkImageCreateFlagBits VK_IMAGE_CREATE_SPARSE_ALIASED_BIT = VkImageCreateFlagBits::VK_IMAGE_CREATE_SPARSE_ALIASED_BIT;
VKBINDING_CONSTEXPR static const VkImageCreateFlagBits VK_IMAGE_CREATE_SPARSE_BINDING_BIT = VkImageCreateFlagBits::VK_IMAGE_CREATE_SPARSE_BINDING_BIT;
VKBINDING_CONSTEXPR static const VkImageCreateFlagBits VK_IMAGE_CREATE_SPARSE_RESIDENCY_BIT = VkImageCreateFlagBits::VK_IMAGE_CREATE_SPARSE_RESIDENCY_BIT;
VKBINDING_CONSTEXPR static const VkImageCreateFlagBits VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT = VkImageCreateFlagBits::VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT;
VKBINDING_CONSTEXPR static const VkImageCreateFlagBits VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR = VkImageCreateFlagBits::VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR;
VKBINDING_CONSTEXPR static const VkImageCreateFlagBits VK_IMAGE_CREATE_SUBSAMPLED_BIT_EXT = VkImageCreateFlagBits::VK_IMAGE_CREATE_SUBSAMPLED_BIT_EXT;
VKBINDING_CONSTEXPR static const VkImageUsageFlagBits VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT = VkImageUsageFlagBits::VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT;
VKBINDING_CONSTEXPR static const VkImageUsageFlagBits VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT = VkImageUsageFlagBits::VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT;
VKBINDING_CONSTEXPR static const VkImageUsageFlagBits VK_IMAGE_USAGE_FRAGMENT_DENSITY_MAP_BIT_EXT = VkImageUsageFlagBits::VK_IMAGE_USAGE_FRAGMENT_DENSITY_MAP_BIT_EXT;
VKBINDING_CONSTEXPR static const VkImageUsageFlagBits VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT = VkImageUsageFlagBits::VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT;
VKBINDING_CONSTEXPR static const VkImageUsageFlagBits VK_IMAGE_USAGE_RESERVED_10_BIT_KHR = VkImageUsageFlagBits::VK_IMAGE_USAGE_RESERVED_10_BIT_KHR;
VKBINDING_CONSTEXPR static const VkImageUsageFlagBits VK_IMAGE_USAGE_RESERVED_11_BIT_KHR = VkImageUsageFlagBits::VK_IMAGE_USAGE_RESERVED_11_BIT_KHR;
VKBINDING_CONSTEXPR static const VkImageUsageFlagBits VK_IMAGE_USAGE_RESERVED_12_BIT_KHR = VkImageUsageFlagBits::VK_IMAGE_USAGE_RESERVED_12_BIT_KHR;
VKBINDING_CONSTEXPR static const VkImageUsageFlagBits VK_IMAGE_USAGE_RESERVED_13_BIT_KHR = VkImageUsageFlagBits::VK_IMAGE_USAGE_RESERVED_13_BIT_KHR;
VKBINDING_CONSTEXPR static const VkImageUsageFlagBits VK_IMAGE_USAGE_RESERVED_14_BIT_KHR = VkImageUsageFlagBits::VK_IMAGE_USAGE_RESERVED_14_BIT_KHR;
VKBINDING_CONSTEXPR static const VkImageUsageFlagBits VK_IMAGE_USAGE_RESERVED_15_BIT_KHR = VkImageUsageFlagBits::VK_IMAGE_USAGE_RESERVED_15_BIT_KHR;
VKBINDING_CONSTEXPR static const VkImageUsageFlagBits VK_IMAGE_USAGE_SAMPLED_BIT = VkImageUsageFlagBits::VK_IMAGE_USAGE_SAMPLED_BIT;
VKBINDING_CONSTEXPR static const VkImageUsageFlagBits VK_IMAGE_USAGE_SHADING_RATE_IMAGE_BIT_NV = VkImageUsageFlagBits::VK_IMAGE_USAGE_SHADING_RATE_IMAGE_BIT_NV;
VKBINDING_CONSTEXPR static const VkImageUsageFlagBits VK_IMAGE_USAGE_STORAGE_BIT = VkImageUsageFlagBits::VK_IMAGE_USAGE_STORAGE_BIT;
VKBINDING_CONSTEXPR static const VkImageUsageFlagBits VK_IMAGE_USAGE_TRANSFER_DST_BIT = VkImageUsageFlagBits::VK_IMAGE_USAGE_TRANSFER_DST_BIT;
VKBINDING_CONSTEXPR static const VkImageUsageFlagBits VK_IMAGE_USAGE_TRANSFER_SRC_BIT = VkImageUsageFlagBits::VK_IMAGE_USAGE_TRANSFER_SRC_BIT;
VKBINDING_CONSTEXPR static const VkImageUsageFlagBits VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT = VkImageUsageFlagBits::VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT;
VKBINDING_CONSTEXPR static const VkImageViewCreateFlagBits VK_IMAGE_VIEW_CREATE_FRAGMENT_DENSITY_MAP_DYNAMIC_BIT_EXT = VkImageViewCreateFlagBits::VK_IMAGE_VIEW_CREATE_FRAGMENT_DENSITY_MAP_DYNAMIC_BIT_EXT;
VKBINDING_CONSTEXPR static const VkIndirectCommandsLayoutUsageFlagBitsNVX VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EMPTY_EXECUTIONS_BIT_NVX = VkIndirectCommandsLayoutUsageFlagBitsNVX::VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EMPTY_EXECUTIONS_BIT_NVX;
VKBINDING_CONSTEXPR static const VkIndirectCommandsLayoutUsageFlagBitsNVX VK_INDIRECT_COMMANDS_LAYOUT_USAGE_INDEXED_SEQUENCES_BIT_NVX = VkIndirectCommandsLayoutUsageFlagBitsNVX::VK_INDIRECT_COMMANDS_LAYOUT_USAGE_INDEXED_SEQUENCES_BIT_NVX;
VKBINDING_CONSTEXPR static const VkIndirectCommandsLayoutUsageFlagBitsNVX VK_INDIRECT_COMMANDS_LAYOUT_USAGE_SPARSE_SEQUENCES_BIT_NVX = VkIndirectCommandsLayoutUsageFlagBitsNVX::VK_INDIRECT_COMMANDS_LAYOUT_USAGE_SPARSE_SEQUENCES_BIT_NVX;
VKBINDING_CONSTEXPR static const VkIndirectCommandsLayoutUsageFlagBitsNVX VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_NVX = VkIndirectCommandsLayoutUsageFlagBitsNVX::VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_NVX;
VKBINDING_CONSTEXPR static const VkMemoryAllocateFlagBits VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT = VkMemoryAllocateFlagBits::VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT;
VKBINDING_CONSTEXPR static const VkMemoryAllocateFlagBits VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT_KHR = VkMemoryAllocateFlagBits::VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT_KHR;
VKBINDING_CONSTEXPR static const VkMemoryHeapFlagBits VK_MEMORY_HEAP_DEVICE_LOCAL_BIT = VkMemoryHeapFlagBits::VK_MEMORY_HEAP_DEVICE_LOCAL_BIT;
VKBINDING_CONSTEXPR static const VkMemoryHeapFlagBits VK_MEMORY_HEAP_MULTI_INSTANCE_BIT = VkMemoryHeapFlagBits::VK_MEMORY_HEAP_MULTI_INSTANCE_BIT;
VKBINDING_CONSTEXPR static const VkMemoryHeapFlagBits VK_MEMORY_HEAP_MULTI_INSTANCE_BIT_KHR = VkMemoryHeapFlagBits::VK_MEMORY_HEAP_MULTI_INSTANCE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkMemoryPropertyFlagBits VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT = VkMemoryPropertyFlagBits::VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT;
VKBINDING_CONSTEXPR static const VkMemoryPropertyFlagBits VK_MEMORY_PROPERTY_HOST_CACHED_BIT = VkMemoryPropertyFlagBits::VK_MEMORY_PROPERTY_HOST_CACHED_BIT;
VKBINDING_CONSTEXPR static const VkMemoryPropertyFlagBits VK_MEMORY_PROPERTY_HOST_COHERENT_BIT = VkMemoryPropertyFlagBits::VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
VKBINDING_CONSTEXPR static const VkMemoryPropertyFlagBits VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT = VkMemoryPropertyFlagBits::VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT;
VKBINDING_CONSTEXPR static const VkMemoryPropertyFlagBits VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT = VkMemoryPropertyFlagBits::VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT;
VKBINDING_CONSTEXPR static const VkMemoryPropertyFlagBits VK_MEMORY_PROPERTY_PROTECTED_BIT = VkMemoryPropertyFlagBits::VK_MEMORY_PROPERTY_PROTECTED_BIT;
VKBINDING_CONSTEXPR static const vkbinding::SharedBitfield<VkAccessFlagBits, VkAttachmentDescriptionFlagBits, VkBufferCreateFlagBits, VkBufferUsageFlagBits, VkBufferViewCreateFlagBits, VkBuildAccelerationStructureFlagBitsNV, VkColorComponentFlagBits, VkCommandBufferResetFlagBits, VkCommandBufferUsageFlagBits, VkCommandPoolCreateFlagBits, VkCommandPoolResetFlagBits, VkCompositeAlphaFlagBitsKHR, VkConditionalRenderingFlagBitsEXT, VkCullModeFlagBits, VkDebugReportFlagBitsEXT, VkDebugUtilsMessageSeverityFlagBitsEXT, VkDebugUtilsMessageTypeFlagBitsEXT, VkDependencyFlagBits, VkDescriptorBindingFlagBitsEXT, VkDescriptorPoolCreateFlagBits, VkDescriptorSetLayoutCreateFlagBits, VkDeviceCreateFlagBits, VkDeviceGroupPresentModeFlagBitsKHR, VkDeviceQueueCreateFlagBits, VkDisplayPlaneAlphaFlagBitsKHR, VkExternalFenceFeatureFlagBits, VkExternalFenceFeatureFlagBitsKHR, VkExternalFenceHandleTypeFlagBits, VkExternalFenceHandleTypeFlagBitsKHR, VkExternalMemoryFeatureFlagBits, VkExternalMemoryFeatureFlagBitsKHR, VkExternalMemoryFeatureFlagBitsNV, VkExternalMemoryHandleTypeFlagBits, VkExternalMemoryHandleTypeFlagBitsKHR, VkExternalMemoryHandleTypeFlagBitsNV, VkExternalSemaphoreFeatureFlagBits, VkExternalSemaphoreFeatureFlagBitsKHR, VkExternalSemaphoreHandleTypeFlagBits, VkExternalSemaphoreHandleTypeFlagBitsKHR, VkFenceCreateFlagBits, VkFenceImportFlagBits, VkFenceImportFlagBitsKHR, VkFormatFeatureFlagBits, VkFramebufferCreateFlagBits, VkGeometryFlagBitsNV, VkGeometryInstanceFlagBitsNV, VkImageAspectFlagBits, VkImageCreateFlagBits, VkImageUsageFlagBits, VkImageViewCreateFlagBits, VkIndirectCommandsLayoutUsageFlagBitsNVX, VkInstanceCreateFlagBits, VkMemoryAllocateFlagBits, VkMemoryAllocateFlagBitsKHR, VkMemoryHeapFlagBits, VkMemoryPropertyFlagBits, VkObjectEntryUsageFlagBitsNVX, VkPeerMemoryFeatureFlagBits, VkPeerMemoryFeatureFlagBitsKHR, VkPipelineCacheCreateFlagBits, VkPipelineColorBlendStateCreateFlagBits, VkPipelineCreateFlagBits, VkPipelineCreationFeedbackFlagBitsEXT, VkPipelineDepthStencilStateCreateFlagBits, VkPipelineDynamicStateCreateFlagBits, VkPipelineInputAssemblyStateCreateFlagBits, VkPipelineLayoutCreateFlagBits, VkPipelineMultisampleStateCreateFlagBits, VkPipelineRasterizationStateCreateFlagBits, VkPipelineShaderStageCreateFlagBits, VkPipelineStageFlagBits, VkPipelineTessellationStateCreateFlagBits, VkPipelineVertexInputStateCreateFlagBits, VkPipelineViewportStateCreateFlagBits, VkQueryControlFlagBits, VkQueryPipelineStatisticFlagBits, VkQueryPoolCreateFlagBits, VkQueryResultFlagBits, VkQueueFlagBits, VkRenderPassCreateFlagBits, VkResolveModeFlagBitsKHR, VkSampleCountFlagBits, VkSamplerCreateFlagBits, VkSemaphoreImportFlagBits, VkSemaphoreImportFlagBitsKHR, VkShaderModuleCreateFlagBits, VkShaderStageFlagBits, VkSparseImageFormatFlagBits, VkSparseMemoryBindFlagBits, VkStencilFaceFlagBits, VkSubgroupFeatureFlagBits, VkSubpassDescriptionFlagBits, VkSurfaceCounterFlagBitsEXT, VkSurfaceTransformFlagBitsKHR, VkSwapchainCreateFlagBitsKHR, VkSwapchainImageUsageFlagBitsANDROID> VK_NONE_BIT = VkFramebufferCreateFlagBits::VK_NONE_BIT;
VKBINDING_CONSTEXPR static const VkObjectEntryUsageFlagBitsNVX VK_OBJECT_ENTRY_USAGE_COMPUTE_BIT_NVX = VkObjectEntryUsageFlagBitsNVX::VK_OBJECT_ENTRY_USAGE_COMPUTE_BIT_NVX;
VKBINDING_CONSTEXPR static const VkObjectEntryUsageFlagBitsNVX VK_OBJECT_ENTRY_USAGE_GRAPHICS_BIT_NVX = VkObjectEntryUsageFlagBitsNVX::VK_OBJECT_ENTRY_USAGE_GRAPHICS_BIT_NVX;
VKBINDING_CONSTEXPR static const VkPeerMemoryFeatureFlagBits VK_PEER_MEMORY_FEATURE_COPY_DST_BIT = VkPeerMemoryFeatureFlagBits::VK_PEER_MEMORY_FEATURE_COPY_DST_BIT;
VKBINDING_CONSTEXPR static const VkPeerMemoryFeatureFlagBits VK_PEER_MEMORY_FEATURE_COPY_DST_BIT_KHR = VkPeerMemoryFeatureFlagBits::VK_PEER_MEMORY_FEATURE_COPY_DST_BIT_KHR;
VKBINDING_CONSTEXPR static const VkPeerMemoryFeatureFlagBits VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT = VkPeerMemoryFeatureFlagBits::VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT;
VKBINDING_CONSTEXPR static const VkPeerMemoryFeatureFlagBits VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT_KHR = VkPeerMemoryFeatureFlagBits::VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT_KHR;
VKBINDING_CONSTEXPR static const VkPeerMemoryFeatureFlagBits VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT = VkPeerMemoryFeatureFlagBits::VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT;
VKBINDING_CONSTEXPR static const VkPeerMemoryFeatureFlagBits VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT_KHR = VkPeerMemoryFeatureFlagBits::VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT_KHR;
VKBINDING_CONSTEXPR static const VkPeerMemoryFeatureFlagBits VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT = VkPeerMemoryFeatureFlagBits::VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT;
VKBINDING_CONSTEXPR static const VkPeerMemoryFeatureFlagBits VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT_KHR = VkPeerMemoryFeatureFlagBits::VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT_KHR;
VKBINDING_CONSTEXPR static const VkPipelineCreateFlagBits VK_PIPELINE_CREATE_ALLOW_DERIVATIVES_BIT = VkPipelineCreateFlagBits::VK_PIPELINE_CREATE_ALLOW_DERIVATIVES_BIT;
VKBINDING_CONSTEXPR static const VkPipelineCreateFlagBits VK_PIPELINE_CREATE_DEFER_COMPILE_BIT_NV = VkPipelineCreateFlagBits::VK_PIPELINE_CREATE_DEFER_COMPILE_BIT_NV;
VKBINDING_CONSTEXPR static const VkPipelineCreateFlagBits VK_PIPELINE_CREATE_DERIVATIVE_BIT = VkPipelineCreateFlagBits::VK_PIPELINE_CREATE_DERIVATIVE_BIT;
VKBINDING_CONSTEXPR static const VkPipelineCreateFlagBits VK_PIPELINE_CREATE_DISABLE_OPTIMIZATION_BIT = VkPipelineCreateFlagBits::VK_PIPELINE_CREATE_DISABLE_OPTIMIZATION_BIT;
VKBINDING_CONSTEXPR static const VkPipelineCreateFlagBits VK_PIPELINE_CREATE_DISPATCH_BASE = VkPipelineCreateFlagBits::VK_PIPELINE_CREATE_DISPATCH_BASE;
VKBINDING_CONSTEXPR static const VkPipelineCreateFlagBits VK_PIPELINE_CREATE_DISPATCH_BASE_KHR = VkPipelineCreateFlagBits::VK_PIPELINE_CREATE_DISPATCH_BASE_KHR;
VKBINDING_CONSTEXPR static const VkPipelineCreateFlagBits VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT = VkPipelineCreateFlagBits::VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT;
VKBINDING_CONSTEXPR static const VkPipelineCreateFlagBits VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT_KHR = VkPipelineCreateFlagBits::VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT_KHR;
VKBINDING_CONSTEXPR static const VkPipelineCreationFeedbackFlagBitsEXT VK_PIPELINE_CREATION_FEEDBACK_APPLICATION_PIPELINE_CACHE_HIT_BIT_EXT = VkPipelineCreationFeedbackFlagBitsEXT::VK_PIPELINE_CREATION_FEEDBACK_APPLICATION_PIPELINE_CACHE_HIT_BIT_EXT;
VKBINDING_CONSTEXPR static const VkPipelineCreationFeedbackFlagBitsEXT VK_PIPELINE_CREATION_FEEDBACK_BASE_PIPELINE_ACCELERATION_BIT_EXT = VkPipelineCreationFeedbackFlagBitsEXT::VK_PIPELINE_CREATION_FEEDBACK_BASE_PIPELINE_ACCELERATION_BIT_EXT;
VKBINDING_CONSTEXPR static const VkPipelineCreationFeedbackFlagBitsEXT VK_PIPELINE_CREATION_FEEDBACK_VALID_BIT_EXT = VkPipelineCreationFeedbackFlagBitsEXT::VK_PIPELINE_CREATION_FEEDBACK_VALID_BIT_EXT;
VKBINDING_CONSTEXPR static const VkPipelineShaderStageCreateFlagBits VK_PIPELINE_SHADER_STAGE_CREATE_ALLOW_VARYING_SUBGROUP_SIZE_BIT_EXT = VkPipelineShaderStageCreateFlagBits::VK_PIPELINE_SHADER_STAGE_CREATE_ALLOW_VARYING_SUBGROUP_SIZE_BIT_EXT;
VKBINDING_CONSTEXPR static const VkPipelineShaderStageCreateFlagBits VK_PIPELINE_SHADER_STAGE_CREATE_REQUIRE_FULL_SUBGROUPS_BIT_EXT = VkPipelineShaderStageCreateFlagBits::VK_PIPELINE_SHADER_STAGE_CREATE_REQUIRE_FULL_SUBGROUPS_BIT_EXT;
VKBINDING_CONSTEXPR static const VkPipelineShaderStageCreateFlagBits VK_PIPELINE_SHADER_STAGE_CREATE_RESERVED_2_BIT_NV = VkPipelineShaderStageCreateFlagBits::VK_PIPELINE_SHADER_STAGE_CREATE_RESERVED_2_BIT_NV;
VKBINDING_CONSTEXPR static const VkPipelineStageFlagBits VK_PIPELINE_STAGE_ACCELERATION_STRUCTURE_BUILD_BIT_NV = VkPipelineStageFlagBits::VK_PIPELINE_STAGE_ACCELERATION_STRUCTURE_BUILD_BIT_NV;
VKBINDING_CONSTEXPR static const VkPipelineStageFlagBits VK_PIPELINE_STAGE_ALL_COMMANDS_BIT = VkPipelineStageFlagBits::VK_PIPELINE_STAGE_ALL_COMMANDS_BIT;
VKBINDING_CONSTEXPR static const VkPipelineStageFlagBits VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT = VkPipelineStageFlagBits::VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT;
VKBINDING_CONSTEXPR static const VkPipelineStageFlagBits VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT = VkPipelineStageFlagBits::VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT;
VKBINDING_CONSTEXPR static const VkPipelineStageFlagBits VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT = VkPipelineStageFlagBits::VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;
VKBINDING_CONSTEXPR static const VkPipelineStageFlagBits VK_PIPELINE_STAGE_COMMAND_PROCESS_BIT_NVX = VkPipelineStageFlagBits::VK_PIPELINE_STAGE_COMMAND_PROCESS_BIT_NVX;
VKBINDING_CONSTEXPR static const VkPipelineStageFlagBits VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT = VkPipelineStageFlagBits::VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT;
VKBINDING_CONSTEXPR static const VkPipelineStageFlagBits VK_PIPELINE_STAGE_CONDITIONAL_RENDERING_BIT_EXT = VkPipelineStageFlagBits::VK_PIPELINE_STAGE_CONDITIONAL_RENDERING_BIT_EXT;
VKBINDING_CONSTEXPR static const VkPipelineStageFlagBits VK_PIPELINE_STAGE_DRAW_INDIRECT_BIT = VkPipelineStageFlagBits::VK_PIPELINE_STAGE_DRAW_INDIRECT_BIT;
VKBINDING_CONSTEXPR static const VkPipelineStageFlagBits VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT = VkPipelineStageFlagBits::VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT;
VKBINDING_CONSTEXPR static const VkPipelineStageFlagBits VK_PIPELINE_STAGE_FRAGMENT_DENSITY_PROCESS_BIT_EXT = VkPipelineStageFlagBits::VK_PIPELINE_STAGE_FRAGMENT_DENSITY_PROCESS_BIT_EXT;
VKBINDING_CONSTEXPR static const VkPipelineStageFlagBits VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT = VkPipelineStageFlagBits::VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT;
VKBINDING_CONSTEXPR static const VkPipelineStageFlagBits VK_PIPELINE_STAGE_GEOMETRY_SHADER_BIT = VkPipelineStageFlagBits::VK_PIPELINE_STAGE_GEOMETRY_SHADER_BIT;
VKBINDING_CONSTEXPR static const VkPipelineStageFlagBits VK_PIPELINE_STAGE_HOST_BIT = VkPipelineStageFlagBits::VK_PIPELINE_STAGE_HOST_BIT;
VKBINDING_CONSTEXPR static const VkPipelineStageFlagBits VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT = VkPipelineStageFlagBits::VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT;
VKBINDING_CONSTEXPR static const VkPipelineStageFlagBits VK_PIPELINE_STAGE_MESH_SHADER_BIT_NV = VkPipelineStageFlagBits::VK_PIPELINE_STAGE_MESH_SHADER_BIT_NV;
VKBINDING_CONSTEXPR static const VkPipelineStageFlagBits VK_PIPELINE_STAGE_RAY_TRACING_SHADER_BIT_NV = VkPipelineStageFlagBits::VK_PIPELINE_STAGE_RAY_TRACING_SHADER_BIT_NV;
VKBINDING_CONSTEXPR static const VkPipelineStageFlagBits VK_PIPELINE_STAGE_RESERVED_26_BIT_KHR = VkPipelineStageFlagBits::VK_PIPELINE_STAGE_RESERVED_26_BIT_KHR;
VKBINDING_CONSTEXPR static const VkPipelineStageFlagBits VK_PIPELINE_STAGE_RESERVED_27_BIT_KHR = VkPipelineStageFlagBits::VK_PIPELINE_STAGE_RESERVED_27_BIT_KHR;
VKBINDING_CONSTEXPR static const VkPipelineStageFlagBits VK_PIPELINE_STAGE_SHADING_RATE_IMAGE_BIT_NV = VkPipelineStageFlagBits::VK_PIPELINE_STAGE_SHADING_RATE_IMAGE_BIT_NV;
VKBINDING_CONSTEXPR static const VkPipelineStageFlagBits VK_PIPELINE_STAGE_TASK_SHADER_BIT_NV = VkPipelineStageFlagBits::VK_PIPELINE_STAGE_TASK_SHADER_BIT_NV;
VKBINDING_CONSTEXPR static const VkPipelineStageFlagBits VK_PIPELINE_STAGE_TESSELLATION_CONTROL_SHADER_BIT = VkPipelineStageFlagBits::VK_PIPELINE_STAGE_TESSELLATION_CONTROL_SHADER_BIT;
VKBINDING_CONSTEXPR static const VkPipelineStageFlagBits VK_PIPELINE_STAGE_TESSELLATION_EVALUATION_SHADER_BIT = VkPipelineStageFlagBits::VK_PIPELINE_STAGE_TESSELLATION_EVALUATION_SHADER_BIT;
VKBINDING_CONSTEXPR static const VkPipelineStageFlagBits VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT = VkPipelineStageFlagBits::VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT;
VKBINDING_CONSTEXPR static const VkPipelineStageFlagBits VK_PIPELINE_STAGE_TRANSFER_BIT = VkPipelineStageFlagBits::VK_PIPELINE_STAGE_TRANSFER_BIT;
VKBINDING_CONSTEXPR static const VkPipelineStageFlagBits VK_PIPELINE_STAGE_TRANSFORM_FEEDBACK_BIT_EXT = VkPipelineStageFlagBits::VK_PIPELINE_STAGE_TRANSFORM_FEEDBACK_BIT_EXT;
VKBINDING_CONSTEXPR static const VkPipelineStageFlagBits VK_PIPELINE_STAGE_VERTEX_INPUT_BIT = VkPipelineStageFlagBits::VK_PIPELINE_STAGE_VERTEX_INPUT_BIT;
VKBINDING_CONSTEXPR static const VkPipelineStageFlagBits VK_PIPELINE_STAGE_VERTEX_SHADER_BIT = VkPipelineStageFlagBits::VK_PIPELINE_STAGE_VERTEX_SHADER_BIT;
VKBINDING_CONSTEXPR static const VkQueryControlFlagBits VK_QUERY_CONTROL_PRECISE_BIT = VkQueryControlFlagBits::VK_QUERY_CONTROL_PRECISE_BIT;
VKBINDING_CONSTEXPR static const VkQueryPipelineStatisticFlagBits VK_QUERY_PIPELINE_STATISTIC_CLIPPING_INVOCATIONS_BIT = VkQueryPipelineStatisticFlagBits::VK_QUERY_PIPELINE_STATISTIC_CLIPPING_INVOCATIONS_BIT;
VKBINDING_CONSTEXPR static const VkQueryPipelineStatisticFlagBits VK_QUERY_PIPELINE_STATISTIC_CLIPPING_PRIMITIVES_BIT = VkQueryPipelineStatisticFlagBits::VK_QUERY_PIPELINE_STATISTIC_CLIPPING_PRIMITIVES_BIT;
VKBINDING_CONSTEXPR static const VkQueryPipelineStatisticFlagBits VK_QUERY_PIPELINE_STATISTIC_COMPUTE_SHADER_INVOCATIONS_BIT = VkQueryPipelineStatisticFlagBits::VK_QUERY_PIPELINE_STATISTIC_COMPUTE_SHADER_INVOCATIONS_BIT;
VKBINDING_CONSTEXPR static const VkQueryPipelineStatisticFlagBits VK_QUERY_PIPELINE_STATISTIC_FRAGMENT_SHADER_INVOCATIONS_BIT = VkQueryPipelineStatisticFlagBits::VK_QUERY_PIPELINE_STATISTIC_FRAGMENT_SHADER_INVOCATIONS_BIT;
VKBINDING_CONSTEXPR static const VkQueryPipelineStatisticFlagBits VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_INVOCATIONS_BIT = VkQueryPipelineStatisticFlagBits::VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_INVOCATIONS_BIT;
VKBINDING_CONSTEXPR static const VkQueryPipelineStatisticFlagBits VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_PRIMITIVES_BIT = VkQueryPipelineStatisticFlagBits::VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_PRIMITIVES_BIT;
VKBINDING_CONSTEXPR static const VkQueryPipelineStatisticFlagBits VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_PRIMITIVES_BIT = VkQueryPipelineStatisticFlagBits::VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_PRIMITIVES_BIT;
VKBINDING_CONSTEXPR static const VkQueryPipelineStatisticFlagBits VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_VERTICES_BIT = VkQueryPipelineStatisticFlagBits::VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_VERTICES_BIT;
VKBINDING_CONSTEXPR static const VkQueryPipelineStatisticFlagBits VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_CONTROL_SHADER_PATCHES_BIT = VkQueryPipelineStatisticFlagBits::VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_CONTROL_SHADER_PATCHES_BIT;
VKBINDING_CONSTEXPR static const VkQueryPipelineStatisticFlagBits VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_EVALUATION_SHADER_INVOCATIONS_BIT = VkQueryPipelineStatisticFlagBits::VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_EVALUATION_SHADER_INVOCATIONS_BIT;
VKBINDING_CONSTEXPR static const VkQueryPipelineStatisticFlagBits VK_QUERY_PIPELINE_STATISTIC_VERTEX_SHADER_INVOCATIONS_BIT = VkQueryPipelineStatisticFlagBits::VK_QUERY_PIPELINE_STATISTIC_VERTEX_SHADER_INVOCATIONS_BIT;
VKBINDING_CONSTEXPR static const VkQueryResultFlagBits VK_QUERY_RESULT_64_BIT = VkQueryResultFlagBits::VK_QUERY_RESULT_64_BIT;
VKBINDING_CONSTEXPR static const VkQueryResultFlagBits VK_QUERY_RESULT_PARTIAL_BIT = VkQueryResultFlagBits::VK_QUERY_RESULT_PARTIAL_BIT;
VKBINDING_CONSTEXPR static const VkQueryResultFlagBits VK_QUERY_RESULT_WAIT_BIT = VkQueryResultFlagBits::VK_QUERY_RESULT_WAIT_BIT;
VKBINDING_CONSTEXPR static const VkQueryResultFlagBits VK_QUERY_RESULT_WITH_AVAILABILITY_BIT = VkQueryResultFlagBits::VK_QUERY_RESULT_WITH_AVAILABILITY_BIT;
VKBINDING_CONSTEXPR static const VkQueueFlagBits VK_QUEUE_COMPUTE_BIT = VkQueueFlagBits::VK_QUEUE_COMPUTE_BIT;
VKBINDING_CONSTEXPR static const VkQueueFlagBits VK_QUEUE_GRAPHICS_BIT = VkQueueFlagBits::VK_QUEUE_GRAPHICS_BIT;
VKBINDING_CONSTEXPR static const VkQueueFlagBits VK_QUEUE_PROTECTED_BIT = VkQueueFlagBits::VK_QUEUE_PROTECTED_BIT;
VKBINDING_CONSTEXPR static const VkQueueFlagBits VK_QUEUE_RESERVED_5_BIT_KHR = VkQueueFlagBits::VK_QUEUE_RESERVED_5_BIT_KHR;
VKBINDING_CONSTEXPR static const VkQueueFlagBits VK_QUEUE_RESERVED_6_BIT_KHR = VkQueueFlagBits::VK_QUEUE_RESERVED_6_BIT_KHR;
VKBINDING_CONSTEXPR static const VkQueueFlagBits VK_QUEUE_SPARSE_BINDING_BIT = VkQueueFlagBits::VK_QUEUE_SPARSE_BINDING_BIT;
VKBINDING_CONSTEXPR static const VkQueueFlagBits VK_QUEUE_TRANSFER_BIT = VkQueueFlagBits::VK_QUEUE_TRANSFER_BIT;
VKBINDING_CONSTEXPR static const VkRenderPassCreateFlagBits VK_RENDER_PASS_CREATE_RESERVED_0_BIT_KHR = VkRenderPassCreateFlagBits::VK_RENDER_PASS_CREATE_RESERVED_0_BIT_KHR;
VKBINDING_CONSTEXPR static const VkRenderPassCreateFlagBits VK_RENDER_PASS_RESERVED_BIT_1_QCOM = VkRenderPassCreateFlagBits::VK_RENDER_PASS_RESERVED_BIT_1_QCOM;
VKBINDING_CONSTEXPR static const VkResolveModeFlagBitsKHR VK_RESOLVE_MODE_AVERAGE_BIT_KHR = VkResolveModeFlagBitsKHR::VK_RESOLVE_MODE_AVERAGE_BIT_KHR;
VKBINDING_CONSTEXPR static const VkResolveModeFlagBitsKHR VK_RESOLVE_MODE_MAX_BIT_KHR = VkResolveModeFlagBitsKHR::VK_RESOLVE_MODE_MAX_BIT_KHR;
VKBINDING_CONSTEXPR static const VkResolveModeFlagBitsKHR VK_RESOLVE_MODE_MIN_BIT_KHR = VkResolveModeFlagBitsKHR::VK_RESOLVE_MODE_MIN_BIT_KHR;
VKBINDING_CONSTEXPR static const VkResolveModeFlagBitsKHR VK_RESOLVE_MODE_NONE_KHR = VkResolveModeFlagBitsKHR::VK_RESOLVE_MODE_NONE_KHR;
VKBINDING_CONSTEXPR static const VkResolveModeFlagBitsKHR VK_RESOLVE_MODE_SAMPLE_ZERO_BIT_KHR = VkResolveModeFlagBitsKHR::VK_RESOLVE_MODE_SAMPLE_ZERO_BIT_KHR;
VKBINDING_CONSTEXPR static const VkSampleCountFlagBits VK_SAMPLE_COUNT_16_BIT = VkSampleCountFlagBits::VK_SAMPLE_COUNT_16_BIT;
VKBINDING_CONSTEXPR static const VkSampleCountFlagBits VK_SAMPLE_COUNT_1_BIT = VkSampleCountFlagBits::VK_SAMPLE_COUNT_1_BIT;
VKBINDING_CONSTEXPR static const VkSampleCountFlagBits VK_SAMPLE_COUNT_2_BIT = VkSampleCountFlagBits::VK_SAMPLE_COUNT_2_BIT;
VKBINDING_CONSTEXPR static const VkSampleCountFlagBits VK_SAMPLE_COUNT_32_BIT = VkSampleCountFlagBits::VK_SAMPLE_COUNT_32_BIT;
VKBINDING_CONSTEXPR static const VkSampleCountFlagBits VK_SAMPLE_COUNT_4_BIT = VkSampleCountFlagBits::VK_SAMPLE_COUNT_4_BIT;
VKBINDING_CONSTEXPR static const VkSampleCountFlagBits VK_SAMPLE_COUNT_64_BIT = VkSampleCountFlagBits::VK_SAMPLE_COUNT_64_BIT;
VKBINDING_CONSTEXPR static const VkSampleCountFlagBits VK_SAMPLE_COUNT_8_BIT = VkSampleCountFlagBits::VK_SAMPLE_COUNT_8_BIT;
VKBINDING_CONSTEXPR static const VkSamplerCreateFlagBits VK_SAMPLER_CREATE_SUBSAMPLED_BIT_EXT = VkSamplerCreateFlagBits::VK_SAMPLER_CREATE_SUBSAMPLED_BIT_EXT;
VKBINDING_CONSTEXPR static const VkSamplerCreateFlagBits VK_SAMPLER_CREATE_SUBSAMPLED_COARSE_RECONSTRUCTION_BIT_EXT = VkSamplerCreateFlagBits::VK_SAMPLER_CREATE_SUBSAMPLED_COARSE_RECONSTRUCTION_BIT_EXT;
VKBINDING_CONSTEXPR static const VkSemaphoreImportFlagBits VK_SEMAPHORE_IMPORT_TEMPORARY_BIT = VkSemaphoreImportFlagBits::VK_SEMAPHORE_IMPORT_TEMPORARY_BIT;
VKBINDING_CONSTEXPR static const VkSemaphoreImportFlagBits VK_SEMAPHORE_IMPORT_TEMPORARY_BIT_KHR = VkSemaphoreImportFlagBits::VK_SEMAPHORE_IMPORT_TEMPORARY_BIT_KHR;
VKBINDING_CONSTEXPR static const VkShaderModuleCreateFlagBits VK_SHADER_MODULE_CREATE_RESERVED_0_BIT_NV = VkShaderModuleCreateFlagBits::VK_SHADER_MODULE_CREATE_RESERVED_0_BIT_NV;
VKBINDING_CONSTEXPR static const VkShaderStageFlagBits VK_SHADER_STAGE_ALL = VkShaderStageFlagBits::VK_SHADER_STAGE_ALL;
VKBINDING_CONSTEXPR static const VkShaderStageFlagBits VK_SHADER_STAGE_ALL_GRAPHICS = VkShaderStageFlagBits::VK_SHADER_STAGE_ALL_GRAPHICS;
VKBINDING_CONSTEXPR static const VkShaderStageFlagBits VK_SHADER_STAGE_ANY_HIT_BIT_NV = VkShaderStageFlagBits::VK_SHADER_STAGE_ANY_HIT_BIT_NV;
VKBINDING_CONSTEXPR static const VkShaderStageFlagBits VK_SHADER_STAGE_CALLABLE_BIT_NV = VkShaderStageFlagBits::VK_SHADER_STAGE_CALLABLE_BIT_NV;
VKBINDING_CONSTEXPR static const VkShaderStageFlagBits VK_SHADER_STAGE_CLOSEST_HIT_BIT_NV = VkShaderStageFlagBits::VK_SHADER_STAGE_CLOSEST_HIT_BIT_NV;
VKBINDING_CONSTEXPR static const VkShaderStageFlagBits VK_SHADER_STAGE_COMPUTE_BIT = VkShaderStageFlagBits::VK_SHADER_STAGE_COMPUTE_BIT;
VKBINDING_CONSTEXPR static const VkShaderStageFlagBits VK_SHADER_STAGE_FRAGMENT_BIT = VkShaderStageFlagBits::VK_SHADER_STAGE_FRAGMENT_BIT;
VKBINDING_CONSTEXPR static const VkShaderStageFlagBits VK_SHADER_STAGE_GEOMETRY_BIT = VkShaderStageFlagBits::VK_SHADER_STAGE_GEOMETRY_BIT;
VKBINDING_CONSTEXPR static const VkShaderStageFlagBits VK_SHADER_STAGE_INTERSECTION_BIT_NV = VkShaderStageFlagBits::VK_SHADER_STAGE_INTERSECTION_BIT_NV;
VKBINDING_CONSTEXPR static const VkShaderStageFlagBits VK_SHADER_STAGE_MESH_BIT_NV = VkShaderStageFlagBits::VK_SHADER_STAGE_MESH_BIT_NV;
VKBINDING_CONSTEXPR static const VkShaderStageFlagBits VK_SHADER_STAGE_MISS_BIT_NV = VkShaderStageFlagBits::VK_SHADER_STAGE_MISS_BIT_NV;
VKBINDING_CONSTEXPR static const VkShaderStageFlagBits VK_SHADER_STAGE_RAYGEN_BIT_NV = VkShaderStageFlagBits::VK_SHADER_STAGE_RAYGEN_BIT_NV;
VKBINDING_CONSTEXPR static const VkShaderStageFlagBits VK_SHADER_STAGE_TASK_BIT_NV = VkShaderStageFlagBits::VK_SHADER_STAGE_TASK_BIT_NV;
VKBINDING_CONSTEXPR static const VkShaderStageFlagBits VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT = VkShaderStageFlagBits::VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT;
VKBINDING_CONSTEXPR static const VkShaderStageFlagBits VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT = VkShaderStageFlagBits::VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT;
VKBINDING_CONSTEXPR static const VkShaderStageFlagBits VK_SHADER_STAGE_VERTEX_BIT = VkShaderStageFlagBits::VK_SHADER_STAGE_VERTEX_BIT;
VKBINDING_CONSTEXPR static const VkSparseImageFormatFlagBits VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT = VkSparseImageFormatFlagBits::VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT;
VKBINDING_CONSTEXPR static const VkSparseImageFormatFlagBits VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT = VkSparseImageFormatFlagBits::VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT;
VKBINDING_CONSTEXPR static const VkSparseImageFormatFlagBits VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT = VkSparseImageFormatFlagBits::VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT;
VKBINDING_CONSTEXPR static const VkSparseMemoryBindFlagBits VK_SPARSE_MEMORY_BIND_METADATA_BIT = VkSparseMemoryBindFlagBits::VK_SPARSE_MEMORY_BIND_METADATA_BIT;
VKBINDING_CONSTEXPR static const VkStencilFaceFlagBits VK_STENCIL_FACE_BACK_BIT = VkStencilFaceFlagBits::VK_STENCIL_FACE_BACK_BIT;
VKBINDING_CONSTEXPR static const VkStencilFaceFlagBits VK_STENCIL_FACE_FRONT_AND_BACK = VkStencilFaceFlagBits::VK_STENCIL_FACE_FRONT_AND_BACK;
VKBINDING_CONSTEXPR static const VkStencilFaceFlagBits VK_STENCIL_FACE_FRONT_BIT = VkStencilFaceFlagBits::VK_STENCIL_FACE_FRONT_BIT;
VKBINDING_CONSTEXPR static const VkStencilFaceFlagBits VK_STENCIL_FRONT_AND_BACK = VkStencilFaceFlagBits::VK_STENCIL_FRONT_AND_BACK;
VKBINDING_CONSTEXPR static const VkSubgroupFeatureFlagBits VK_SUBGROUP_FEATURE_ARITHMETIC_BIT = VkSubgroupFeatureFlagBits::VK_SUBGROUP_FEATURE_ARITHMETIC_BIT;
VKBINDING_CONSTEXPR static const VkSubgroupFeatureFlagBits VK_SUBGROUP_FEATURE_BALLOT_BIT = VkSubgroupFeatureFlagBits::VK_SUBGROUP_FEATURE_BALLOT_BIT;
VKBINDING_CONSTEXPR static const VkSubgroupFeatureFlagBits VK_SUBGROUP_FEATURE_BASIC_BIT = VkSubgroupFeatureFlagBits::VK_SUBGROUP_FEATURE_BASIC_BIT;
VKBINDING_CONSTEXPR static const VkSubgroupFeatureFlagBits VK_SUBGROUP_FEATURE_CLUSTERED_BIT = VkSubgroupFeatureFlagBits::VK_SUBGROUP_FEATURE_CLUSTERED_BIT;
VKBINDING_CONSTEXPR static const VkSubgroupFeatureFlagBits VK_SUBGROUP_FEATURE_PARTITIONED_BIT_NV = VkSubgroupFeatureFlagBits::VK_SUBGROUP_FEATURE_PARTITIONED_BIT_NV;
VKBINDING_CONSTEXPR static const VkSubgroupFeatureFlagBits VK_SUBGROUP_FEATURE_QUAD_BIT = VkSubgroupFeatureFlagBits::VK_SUBGROUP_FEATURE_QUAD_BIT;
VKBINDING_CONSTEXPR static const VkSubgroupFeatureFlagBits VK_SUBGROUP_FEATURE_SHUFFLE_BIT = VkSubgroupFeatureFlagBits::VK_SUBGROUP_FEATURE_SHUFFLE_BIT;
VKBINDING_CONSTEXPR static const VkSubgroupFeatureFlagBits VK_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT = VkSubgroupFeatureFlagBits::VK_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT;
VKBINDING_CONSTEXPR static const VkSubgroupFeatureFlagBits VK_SUBGROUP_FEATURE_VOTE_BIT = VkSubgroupFeatureFlagBits::VK_SUBGROUP_FEATURE_VOTE_BIT;
VKBINDING_CONSTEXPR static const VkSubpassDescriptionFlagBits VK_SUBPASS_DESCRIPTION_PER_VIEW_ATTRIBUTES_BIT_NVX = VkSubpassDescriptionFlagBits::VK_SUBPASS_DESCRIPTION_PER_VIEW_ATTRIBUTES_BIT_NVX;
VKBINDING_CONSTEXPR static const VkSubpassDescriptionFlagBits VK_SUBPASS_DESCRIPTION_PER_VIEW_POSITION_X_ONLY_BIT_NVX = VkSubpassDescriptionFlagBits::VK_SUBPASS_DESCRIPTION_PER_VIEW_POSITION_X_ONLY_BIT_NVX;
VKBINDING_CONSTEXPR static const VkSubpassDescriptionFlagBits VK_SUBPASS_DESCRIPTION_RESERVED_2_BIT_QCOM = VkSubpassDescriptionFlagBits::VK_SUBPASS_DESCRIPTION_RESERVED_2_BIT_QCOM;
VKBINDING_CONSTEXPR static const VkSubpassDescriptionFlagBits VK_SUBPASS_DESCRIPTION_RESERVED_3_BIT_QCOM = VkSubpassDescriptionFlagBits::VK_SUBPASS_DESCRIPTION_RESERVED_3_BIT_QCOM;
VKBINDING_CONSTEXPR static const VkSurfaceCounterFlagBitsEXT VK_SURFACE_COUNTER_VBLANK_EXT = VkSurfaceCounterFlagBitsEXT::VK_SURFACE_COUNTER_VBLANK_EXT;
VKBINDING_CONSTEXPR static const VkSurfaceTransformFlagBitsKHR VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR = VkSurfaceTransformFlagBitsKHR::VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR;
VKBINDING_CONSTEXPR static const VkSurfaceTransformFlagBitsKHR VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR = VkSurfaceTransformFlagBitsKHR::VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR;
VKBINDING_CONSTEXPR static const VkSurfaceTransformFlagBitsKHR VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR = VkSurfaceTransformFlagBitsKHR::VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR;
VKBINDING_CONSTEXPR static const VkSurfaceTransformFlagBitsKHR VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR = VkSurfaceTransformFlagBitsKHR::VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR;
VKBINDING_CONSTEXPR static const VkSurfaceTransformFlagBitsKHR VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR = VkSurfaceTransformFlagBitsKHR::VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR;
VKBINDING_CONSTEXPR static const VkSurfaceTransformFlagBitsKHR VK_SURFACE_TRANSFORM_INHERIT_BIT_KHR = VkSurfaceTransformFlagBitsKHR::VK_SURFACE_TRANSFORM_INHERIT_BIT_KHR;
VKBINDING_CONSTEXPR static const VkSurfaceTransformFlagBitsKHR VK_SURFACE_TRANSFORM_ROTATE_180_BIT_KHR = VkSurfaceTransformFlagBitsKHR::VK_SURFACE_TRANSFORM_ROTATE_180_BIT_KHR;
VKBINDING_CONSTEXPR static const VkSurfaceTransformFlagBitsKHR VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR = VkSurfaceTransformFlagBitsKHR::VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR;
VKBINDING_CONSTEXPR static const VkSurfaceTransformFlagBitsKHR VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR = VkSurfaceTransformFlagBitsKHR::VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR;
VKBINDING_CONSTEXPR static const VkSwapchainCreateFlagBitsKHR VK_SWAPCHAIN_CREATE_MUTABLE_FORMAT_BIT_KHR = VkSwapchainCreateFlagBitsKHR::VK_SWAPCHAIN_CREATE_MUTABLE_FORMAT_BIT_KHR;
VKBINDING_CONSTEXPR static const VkSwapchainCreateFlagBitsKHR VK_SWAPCHAIN_CREATE_PROTECTED_BIT_KHR = VkSwapchainCreateFlagBitsKHR::VK_SWAPCHAIN_CREATE_PROTECTED_BIT_KHR;
VKBINDING_CONSTEXPR static const VkSwapchainCreateFlagBitsKHR VK_SWAPCHAIN_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR = VkSwapchainCreateFlagBitsKHR::VK_SWAPCHAIN_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR;
VKBINDING_CONSTEXPR static const VkSwapchainImageUsageFlagBitsANDROID VK_SWAPCHAIN_IMAGE_USAGE_SHARED_BIT_ANDROID = VkSwapchainImageUsageFlagBitsANDROID::VK_SWAPCHAIN_IMAGE_USAGE_SHARED_BIT_ANDROID;


} // namespace vk