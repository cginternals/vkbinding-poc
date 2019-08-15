
#include "Meta_Maps.h"

#include <vkbinding/vk/bitfield.h>


using namespace vk;


namespace vkbinding { namespace aux
{


const std::unordered_map<UnusedMask, std::string> Meta_StringsByUnusedMask =
{
    { UnusedMask::VK_UNUSED_BIT, "VK_UNUSED_BIT" }
};

const std::unordered_map<VkAccessFlagBits, std::string> Meta_StringsByVkAccessFlagBits =
{
    { VkAccessFlagBits::VK_ACCESS_ACCELERATION_STRUCTURE_READ_BIT_NV, "VK_ACCESS_ACCELERATION_STRUCTURE_READ_BIT_NV" },
    { VkAccessFlagBits::VK_ACCESS_ACCELERATION_STRUCTURE_WRITE_BIT_NV, "VK_ACCESS_ACCELERATION_STRUCTURE_WRITE_BIT_NV" },
    { VkAccessFlagBits::VK_ACCESS_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT, "VK_ACCESS_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT" },
    { VkAccessFlagBits::VK_ACCESS_COMMAND_PROCESS_READ_BIT_NVX, "VK_ACCESS_COMMAND_PROCESS_READ_BIT_NVX" },
    { VkAccessFlagBits::VK_ACCESS_COMMAND_PROCESS_WRITE_BIT_NVX, "VK_ACCESS_COMMAND_PROCESS_WRITE_BIT_NVX" },
    { VkAccessFlagBits::VK_ACCESS_CONDITIONAL_RENDERING_READ_BIT_EXT, "VK_ACCESS_CONDITIONAL_RENDERING_READ_BIT_EXT" },
    { VkAccessFlagBits::VK_ACCESS_FRAGMENT_DENSITY_MAP_READ_BIT_EXT, "VK_ACCESS_FRAGMENT_DENSITY_MAP_READ_BIT_EXT" },
    { VkAccessFlagBits::VK_ACCESS_SHADING_RATE_IMAGE_READ_BIT_NV, "VK_ACCESS_SHADING_RATE_IMAGE_READ_BIT_NV" },
    { VkAccessFlagBits::VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT, "VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT" },
    { VkAccessFlagBits::VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT, "VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT" },
    { VkAccessFlagBits::VK_ACCESS_TRANSFORM_FEEDBACK_WRITE_BIT_EXT, "VK_ACCESS_TRANSFORM_FEEDBACK_WRITE_BIT_EXT" },
    { VkAccessFlagBits::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkBufferCreateFlagBits, std::string> Meta_StringsByVkBufferCreateFlagBits =
{
    { VkBufferCreateFlagBits::VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_EXT, "VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_EXT" },
    { VkBufferCreateFlagBits::VK_BUFFER_CREATE_PROTECTED_BIT, "VK_BUFFER_CREATE_PROTECTED_BIT" },
    { VkBufferCreateFlagBits::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkBufferUsageFlagBits, std::string> Meta_StringsByVkBufferUsageFlagBits =
{
    { VkBufferUsageFlagBits::VK_BUFFER_USAGE_CONDITIONAL_RENDERING_BIT_EXT, "VK_BUFFER_USAGE_CONDITIONAL_RENDERING_BIT_EXT" },
    { VkBufferUsageFlagBits::VK_BUFFER_USAGE_RAY_TRACING_BIT_NV, "VK_BUFFER_USAGE_RAY_TRACING_BIT_NV" },
    { VkBufferUsageFlagBits::VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT_EXT, "VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT_EXT" },
    { VkBufferUsageFlagBits::VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT, "VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT" },
    { VkBufferUsageFlagBits::VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT, "VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT" },
    { VkBufferUsageFlagBits::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkBuildAccelerationStructureFlagBitsNV, std::string> Meta_StringsByVkBuildAccelerationStructureFlagBitsNV =
{
    { VkBuildAccelerationStructureFlagBitsNV::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkCommandPoolCreateFlagBits, std::string> Meta_StringsByVkCommandPoolCreateFlagBits =
{
    { VkCommandPoolCreateFlagBits::VK_COMMAND_POOL_CREATE_PROTECTED_BIT, "VK_COMMAND_POOL_CREATE_PROTECTED_BIT" },
    { VkCommandPoolCreateFlagBits::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkConditionalRenderingFlagBitsEXT, std::string> Meta_StringsByVkConditionalRenderingFlagBitsEXT =
{
    { VkConditionalRenderingFlagBitsEXT::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkDebugUtilsMessageSeverityFlagBitsEXT, std::string> Meta_StringsByVkDebugUtilsMessageSeverityFlagBitsEXT =
{
    { VkDebugUtilsMessageSeverityFlagBitsEXT::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkDependencyFlagBits, std::string> Meta_StringsByVkDependencyFlagBits =
{
    { VkDependencyFlagBits::VK_DEPENDENCY_DEVICE_GROUP_BIT, "VK_DEPENDENCY_DEVICE_GROUP_BIT" },
    { VkDependencyFlagBits::VK_DEPENDENCY_DEVICE_GROUP_BIT_KHR, "VK_DEPENDENCY_DEVICE_GROUP_BIT_KHR" },
    { VkDependencyFlagBits::VK_DEPENDENCY_VIEW_LOCAL_BIT, "VK_DEPENDENCY_VIEW_LOCAL_BIT" },
    { VkDependencyFlagBits::VK_DEPENDENCY_VIEW_LOCAL_BIT_KHR, "VK_DEPENDENCY_VIEW_LOCAL_BIT_KHR" },
    { VkDependencyFlagBits::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkDescriptorPoolCreateFlagBits, std::string> Meta_StringsByVkDescriptorPoolCreateFlagBits =
{
    { VkDescriptorPoolCreateFlagBits::VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT_EXT, "VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT_EXT" },
    { VkDescriptorPoolCreateFlagBits::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkDescriptorSetLayoutCreateFlagBits, std::string> Meta_StringsByVkDescriptorSetLayoutCreateFlagBits =
{
    { VkDescriptorSetLayoutCreateFlagBits::VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR, "VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR" },
    { VkDescriptorSetLayoutCreateFlagBits::VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT_EXT, "VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT_EXT" },
    { VkDescriptorSetLayoutCreateFlagBits::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkDeviceGroupPresentModeFlagBitsKHR, std::string> Meta_StringsByVkDeviceGroupPresentModeFlagBitsKHR =
{
    { VkDeviceGroupPresentModeFlagBitsKHR::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkDeviceQueueCreateFlagBits, std::string> Meta_StringsByVkDeviceQueueCreateFlagBits =
{
    { VkDeviceQueueCreateFlagBits::VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT, "VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT" },
    { VkDeviceQueueCreateFlagBits::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkDisplayPlaneAlphaFlagBitsKHR, std::string> Meta_StringsByVkDisplayPlaneAlphaFlagBitsKHR =
{
    { VkDisplayPlaneAlphaFlagBitsKHR::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkExternalFenceFeatureFlagBits, std::string> Meta_StringsByVkExternalFenceFeatureFlagBits =
{
    { VkExternalFenceFeatureFlagBits::VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT_KHR, "VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT_KHR" },
    { VkExternalFenceFeatureFlagBits::VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT_KHR, "VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT_KHR" },
    { VkExternalFenceFeatureFlagBits::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkExternalFenceHandleTypeFlagBits, std::string> Meta_StringsByVkExternalFenceHandleTypeFlagBits =
{
    { VkExternalFenceHandleTypeFlagBits::VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR, "VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR" },
    { VkExternalFenceHandleTypeFlagBits::VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR, "VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR" },
    { VkExternalFenceHandleTypeFlagBits::VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR, "VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR" },
    { VkExternalFenceHandleTypeFlagBits::VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT_KHR, "VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT_KHR" },
    { VkExternalFenceHandleTypeFlagBits::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkExternalMemoryFeatureFlagBits, std::string> Meta_StringsByVkExternalMemoryFeatureFlagBits =
{
    { VkExternalMemoryFeatureFlagBits::VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_KHR, "VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_KHR" },
    { VkExternalMemoryFeatureFlagBits::VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_KHR, "VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_KHR" },
    { VkExternalMemoryFeatureFlagBits::VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_KHR, "VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_KHR" },
    { VkExternalMemoryFeatureFlagBits::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkExternalMemoryFeatureFlagBitsNV, std::string> Meta_StringsByVkExternalMemoryFeatureFlagBitsNV =
{
    { VkExternalMemoryFeatureFlagBitsNV::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkExternalMemoryHandleTypeFlagBits, std::string> Meta_StringsByVkExternalMemoryHandleTypeFlagBits =
{
    { VkExternalMemoryHandleTypeFlagBits::VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT_KHR, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT_KHR" },
    { VkExternalMemoryHandleTypeFlagBits::VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT_KHR, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT_KHR" },
    { VkExternalMemoryHandleTypeFlagBits::VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT_KHR, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT_KHR" },
    { VkExternalMemoryHandleTypeFlagBits::VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT_KHR, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT_KHR" },
    { VkExternalMemoryHandleTypeFlagBits::VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT" },
    { VkExternalMemoryHandleTypeFlagBits::VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_ALLOCATION_BIT_EXT, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_ALLOCATION_BIT_EXT" },
    { VkExternalMemoryHandleTypeFlagBits::VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT" },
    { VkExternalMemoryHandleTypeFlagBits::VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT_KHR, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT_KHR" },
    { VkExternalMemoryHandleTypeFlagBits::VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR" },
    { VkExternalMemoryHandleTypeFlagBits::VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR" },
    { VkExternalMemoryHandleTypeFlagBits::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkExternalMemoryHandleTypeFlagBitsNV, std::string> Meta_StringsByVkExternalMemoryHandleTypeFlagBitsNV =
{
    { VkExternalMemoryHandleTypeFlagBitsNV::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkExternalSemaphoreFeatureFlagBits, std::string> Meta_StringsByVkExternalSemaphoreFeatureFlagBits =
{
    { VkExternalSemaphoreFeatureFlagBits::VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT_KHR, "VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT_KHR" },
    { VkExternalSemaphoreFeatureFlagBits::VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT_KHR, "VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT_KHR" },
    { VkExternalSemaphoreFeatureFlagBits::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkExternalSemaphoreHandleTypeFlagBits, std::string> Meta_StringsByVkExternalSemaphoreHandleTypeFlagBits =
{
    { VkExternalSemaphoreHandleTypeFlagBits::VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT_KHR, "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT_KHR" },
    { VkExternalSemaphoreHandleTypeFlagBits::VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR, "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR" },
    { VkExternalSemaphoreHandleTypeFlagBits::VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR, "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR" },
    { VkExternalSemaphoreHandleTypeFlagBits::VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR, "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR" },
    { VkExternalSemaphoreHandleTypeFlagBits::VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT_KHR, "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT_KHR" },
    { VkExternalSemaphoreHandleTypeFlagBits::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkFenceImportFlagBits, std::string> Meta_StringsByVkFenceImportFlagBits =
{
    { VkFenceImportFlagBits::VK_FENCE_IMPORT_TEMPORARY_BIT_KHR, "VK_FENCE_IMPORT_TEMPORARY_BIT_KHR" },
    { VkFenceImportFlagBits::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkFormatFeatureFlagBits, std::string> Meta_StringsByVkFormatFeatureFlagBits =
{
    { VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT, "VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT" },
    { VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT_KHR, "VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT_KHR" },
    { VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_DISJOINT_BIT, "VK_FORMAT_FEATURE_DISJOINT_BIT" },
    { VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_DISJOINT_BIT_KHR, "VK_FORMAT_FEATURE_DISJOINT_BIT_KHR" },
    { VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_FRAGMENT_DENSITY_MAP_BIT_EXT, "VK_FORMAT_FEATURE_FRAGMENT_DENSITY_MAP_BIT_EXT" },
    { VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT, "VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT" },
    { VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT_KHR, "VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT_KHR" },
    { VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_EXT, "VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_EXT" },
    { VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG, "VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG" },
    { VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT_EXT, "VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT_EXT" },
    { VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT, "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT" },
    { VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT_KHR, "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT_KHR" },
    { VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT, "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT" },
    { VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT_KHR, "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT_KHR" },
    { VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT, "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT" },
    { VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT_KHR, "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT_KHR" },
    { VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT, "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT" },
    { VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT_KHR, "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT_KHR" },
    { VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_TRANSFER_DST_BIT, "VK_FORMAT_FEATURE_TRANSFER_DST_BIT" },
    { VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_TRANSFER_DST_BIT_KHR, "VK_FORMAT_FEATURE_TRANSFER_DST_BIT_KHR" },
    { VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_TRANSFER_SRC_BIT, "VK_FORMAT_FEATURE_TRANSFER_SRC_BIT" },
    { VkFormatFeatureFlagBits::VK_FORMAT_FEATURE_TRANSFER_SRC_BIT_KHR, "VK_FORMAT_FEATURE_TRANSFER_SRC_BIT_KHR" },
    { VkFormatFeatureFlagBits::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkFramebufferCreateFlagBits, std::string> Meta_StringsByVkFramebufferCreateFlagBits =
{
    { VkFramebufferCreateFlagBits::VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT_KHR, "VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT_KHR" },
    { VkFramebufferCreateFlagBits::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkGeometryFlagBitsNV, std::string> Meta_StringsByVkGeometryFlagBitsNV =
{
    { VkGeometryFlagBitsNV::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkGeometryInstanceFlagBitsNV, std::string> Meta_StringsByVkGeometryInstanceFlagBitsNV =
{
    { VkGeometryInstanceFlagBitsNV::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkImageAspectFlagBits, std::string> Meta_StringsByVkImageAspectFlagBits =
{
    { VkImageAspectFlagBits::VK_IMAGE_ASPECT_MEMORY_PLANE_0_BIT_EXT, "VK_IMAGE_ASPECT_MEMORY_PLANE_0_BIT_EXT" },
    { VkImageAspectFlagBits::VK_IMAGE_ASPECT_MEMORY_PLANE_1_BIT_EXT, "VK_IMAGE_ASPECT_MEMORY_PLANE_1_BIT_EXT" },
    { VkImageAspectFlagBits::VK_IMAGE_ASPECT_MEMORY_PLANE_2_BIT_EXT, "VK_IMAGE_ASPECT_MEMORY_PLANE_2_BIT_EXT" },
    { VkImageAspectFlagBits::VK_IMAGE_ASPECT_MEMORY_PLANE_3_BIT_EXT, "VK_IMAGE_ASPECT_MEMORY_PLANE_3_BIT_EXT" },
    { VkImageAspectFlagBits::VK_IMAGE_ASPECT_PLANE_0_BIT, "VK_IMAGE_ASPECT_PLANE_0_BIT" },
    { VkImageAspectFlagBits::VK_IMAGE_ASPECT_PLANE_0_BIT_KHR, "VK_IMAGE_ASPECT_PLANE_0_BIT_KHR" },
    { VkImageAspectFlagBits::VK_IMAGE_ASPECT_PLANE_1_BIT, "VK_IMAGE_ASPECT_PLANE_1_BIT" },
    { VkImageAspectFlagBits::VK_IMAGE_ASPECT_PLANE_1_BIT_KHR, "VK_IMAGE_ASPECT_PLANE_1_BIT_KHR" },
    { VkImageAspectFlagBits::VK_IMAGE_ASPECT_PLANE_2_BIT, "VK_IMAGE_ASPECT_PLANE_2_BIT" },
    { VkImageAspectFlagBits::VK_IMAGE_ASPECT_PLANE_2_BIT_KHR, "VK_IMAGE_ASPECT_PLANE_2_BIT_KHR" },
    { VkImageAspectFlagBits::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkImageCreateFlagBits, std::string> Meta_StringsByVkImageCreateFlagBits =
{
    { VkImageCreateFlagBits::VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT, "VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT" },
    { VkImageCreateFlagBits::VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT_KHR, "VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT_KHR" },
    { VkImageCreateFlagBits::VK_IMAGE_CREATE_ALIAS_BIT, "VK_IMAGE_CREATE_ALIAS_BIT" },
    { VkImageCreateFlagBits::VK_IMAGE_CREATE_ALIAS_BIT_KHR, "VK_IMAGE_CREATE_ALIAS_BIT_KHR" },
    { VkImageCreateFlagBits::VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT, "VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT" },
    { VkImageCreateFlagBits::VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT_KHR, "VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT_KHR" },
    { VkImageCreateFlagBits::VK_IMAGE_CREATE_CORNER_SAMPLED_BIT_NV, "VK_IMAGE_CREATE_CORNER_SAMPLED_BIT_NV" },
    { VkImageCreateFlagBits::VK_IMAGE_CREATE_DISJOINT_BIT, "VK_IMAGE_CREATE_DISJOINT_BIT" },
    { VkImageCreateFlagBits::VK_IMAGE_CREATE_DISJOINT_BIT_KHR, "VK_IMAGE_CREATE_DISJOINT_BIT_KHR" },
    { VkImageCreateFlagBits::VK_IMAGE_CREATE_EXTENDED_USAGE_BIT, "VK_IMAGE_CREATE_EXTENDED_USAGE_BIT" },
    { VkImageCreateFlagBits::VK_IMAGE_CREATE_EXTENDED_USAGE_BIT_KHR, "VK_IMAGE_CREATE_EXTENDED_USAGE_BIT_KHR" },
    { VkImageCreateFlagBits::VK_IMAGE_CREATE_PROTECTED_BIT, "VK_IMAGE_CREATE_PROTECTED_BIT" },
    { VkImageCreateFlagBits::VK_IMAGE_CREATE_SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_EXT, "VK_IMAGE_CREATE_SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_EXT" },
    { VkImageCreateFlagBits::VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT, "VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT" },
    { VkImageCreateFlagBits::VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR, "VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR" },
    { VkImageCreateFlagBits::VK_IMAGE_CREATE_SUBSAMPLED_BIT_EXT, "VK_IMAGE_CREATE_SUBSAMPLED_BIT_EXT" },
    { VkImageCreateFlagBits::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkImageUsageFlagBits, std::string> Meta_StringsByVkImageUsageFlagBits =
{
    { VkImageUsageFlagBits::VK_IMAGE_USAGE_FRAGMENT_DENSITY_MAP_BIT_EXT, "VK_IMAGE_USAGE_FRAGMENT_DENSITY_MAP_BIT_EXT" },
    { VkImageUsageFlagBits::VK_IMAGE_USAGE_SHADING_RATE_IMAGE_BIT_NV, "VK_IMAGE_USAGE_SHADING_RATE_IMAGE_BIT_NV" },
    { VkImageUsageFlagBits::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkImageViewCreateFlagBits, std::string> Meta_StringsByVkImageViewCreateFlagBits =
{
    { VkImageViewCreateFlagBits::VK_IMAGE_VIEW_CREATE_FRAGMENT_DENSITY_MAP_DYNAMIC_BIT_EXT, "VK_IMAGE_VIEW_CREATE_FRAGMENT_DENSITY_MAP_DYNAMIC_BIT_EXT" },
    { VkImageViewCreateFlagBits::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkIndirectCommandsLayoutUsageFlagBitsNVX, std::string> Meta_StringsByVkIndirectCommandsLayoutUsageFlagBitsNVX =
{
    { VkIndirectCommandsLayoutUsageFlagBitsNVX::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkMemoryAllocateFlagBits, std::string> Meta_StringsByVkMemoryAllocateFlagBits =
{
    { VkMemoryAllocateFlagBits::VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT_KHR, "VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT_KHR" },
    { VkMemoryAllocateFlagBits::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkMemoryHeapFlagBits, std::string> Meta_StringsByVkMemoryHeapFlagBits =
{
    { VkMemoryHeapFlagBits::VK_MEMORY_HEAP_MULTI_INSTANCE_BIT, "VK_MEMORY_HEAP_MULTI_INSTANCE_BIT" },
    { VkMemoryHeapFlagBits::VK_MEMORY_HEAP_MULTI_INSTANCE_BIT_KHR, "VK_MEMORY_HEAP_MULTI_INSTANCE_BIT_KHR" },
    { VkMemoryHeapFlagBits::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkMemoryPropertyFlagBits, std::string> Meta_StringsByVkMemoryPropertyFlagBits =
{
    { VkMemoryPropertyFlagBits::VK_MEMORY_PROPERTY_PROTECTED_BIT, "VK_MEMORY_PROPERTY_PROTECTED_BIT" },
    { VkMemoryPropertyFlagBits::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkObjectEntryUsageFlagBitsNVX, std::string> Meta_StringsByVkObjectEntryUsageFlagBitsNVX =
{
    { VkObjectEntryUsageFlagBitsNVX::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkPeerMemoryFeatureFlagBits, std::string> Meta_StringsByVkPeerMemoryFeatureFlagBits =
{
    { VkPeerMemoryFeatureFlagBits::VK_NONE_BIT, "VK_NONE_BIT" },
    { VkPeerMemoryFeatureFlagBits::VK_PEER_MEMORY_FEATURE_COPY_DST_BIT_KHR, "VK_PEER_MEMORY_FEATURE_COPY_DST_BIT_KHR" },
    { VkPeerMemoryFeatureFlagBits::VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT_KHR, "VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT_KHR" },
    { VkPeerMemoryFeatureFlagBits::VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT_KHR, "VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT_KHR" },
    { VkPeerMemoryFeatureFlagBits::VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT_KHR, "VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT_KHR" }
};

const std::unordered_map<VkPipelineCreateFlagBits, std::string> Meta_StringsByVkPipelineCreateFlagBits =
{
    { VkPipelineCreateFlagBits::VK_NONE_BIT, "VK_NONE_BIT" },
    { VkPipelineCreateFlagBits::VK_PIPELINE_CREATE_DEFER_COMPILE_BIT_NV, "VK_PIPELINE_CREATE_DEFER_COMPILE_BIT_NV" },
    { VkPipelineCreateFlagBits::VK_PIPELINE_CREATE_DISPATCH_BASE, "VK_PIPELINE_CREATE_DISPATCH_BASE" },
    { VkPipelineCreateFlagBits::VK_PIPELINE_CREATE_DISPATCH_BASE_KHR, "VK_PIPELINE_CREATE_DISPATCH_BASE_KHR" },
    { VkPipelineCreateFlagBits::VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT, "VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT" },
    { VkPipelineCreateFlagBits::VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT_KHR, "VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT_KHR" }
};

const std::unordered_map<VkPipelineCreationFeedbackFlagBitsEXT, std::string> Meta_StringsByVkPipelineCreationFeedbackFlagBitsEXT =
{
    { VkPipelineCreationFeedbackFlagBitsEXT::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkPipelineShaderStageCreateFlagBits, std::string> Meta_StringsByVkPipelineShaderStageCreateFlagBits =
{
    { VkPipelineShaderStageCreateFlagBits::VK_NONE_BIT, "VK_NONE_BIT" },
    { VkPipelineShaderStageCreateFlagBits::VK_PIPELINE_SHADER_STAGE_CREATE_ALLOW_VARYING_SUBGROUP_SIZE_BIT_EXT, "VK_PIPELINE_SHADER_STAGE_CREATE_ALLOW_VARYING_SUBGROUP_SIZE_BIT_EXT" },
    { VkPipelineShaderStageCreateFlagBits::VK_PIPELINE_SHADER_STAGE_CREATE_REQUIRE_FULL_SUBGROUPS_BIT_EXT, "VK_PIPELINE_SHADER_STAGE_CREATE_REQUIRE_FULL_SUBGROUPS_BIT_EXT" }
};

const std::unordered_map<VkPipelineStageFlagBits, std::string> Meta_StringsByVkPipelineStageFlagBits =
{
    { VkPipelineStageFlagBits::VK_NONE_BIT, "VK_NONE_BIT" },
    { VkPipelineStageFlagBits::VK_PIPELINE_STAGE_ACCELERATION_STRUCTURE_BUILD_BIT_NV, "VK_PIPELINE_STAGE_ACCELERATION_STRUCTURE_BUILD_BIT_NV" },
    { VkPipelineStageFlagBits::VK_PIPELINE_STAGE_COMMAND_PROCESS_BIT_NVX, "VK_PIPELINE_STAGE_COMMAND_PROCESS_BIT_NVX" },
    { VkPipelineStageFlagBits::VK_PIPELINE_STAGE_CONDITIONAL_RENDERING_BIT_EXT, "VK_PIPELINE_STAGE_CONDITIONAL_RENDERING_BIT_EXT" },
    { VkPipelineStageFlagBits::VK_PIPELINE_STAGE_FRAGMENT_DENSITY_PROCESS_BIT_EXT, "VK_PIPELINE_STAGE_FRAGMENT_DENSITY_PROCESS_BIT_EXT" },
    { VkPipelineStageFlagBits::VK_PIPELINE_STAGE_MESH_SHADER_BIT_NV, "VK_PIPELINE_STAGE_MESH_SHADER_BIT_NV" },
    { VkPipelineStageFlagBits::VK_PIPELINE_STAGE_RAY_TRACING_SHADER_BIT_NV, "VK_PIPELINE_STAGE_RAY_TRACING_SHADER_BIT_NV" },
    { VkPipelineStageFlagBits::VK_PIPELINE_STAGE_SHADING_RATE_IMAGE_BIT_NV, "VK_PIPELINE_STAGE_SHADING_RATE_IMAGE_BIT_NV" },
    { VkPipelineStageFlagBits::VK_PIPELINE_STAGE_TASK_SHADER_BIT_NV, "VK_PIPELINE_STAGE_TASK_SHADER_BIT_NV" },
    { VkPipelineStageFlagBits::VK_PIPELINE_STAGE_TRANSFORM_FEEDBACK_BIT_EXT, "VK_PIPELINE_STAGE_TRANSFORM_FEEDBACK_BIT_EXT" }
};

const std::unordered_map<VkQueueFlagBits, std::string> Meta_StringsByVkQueueFlagBits =
{
    { VkQueueFlagBits::VK_NONE_BIT, "VK_NONE_BIT" },
    { VkQueueFlagBits::VK_QUEUE_PROTECTED_BIT, "VK_QUEUE_PROTECTED_BIT" }
};

const std::unordered_map<VkResolveModeFlagBitsKHR, std::string> Meta_StringsByVkResolveModeFlagBitsKHR =
{
    { VkResolveModeFlagBitsKHR::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkSampleCountFlagBits, std::string> Meta_StringsByVkSampleCountFlagBits =
{
    { VkSampleCountFlagBits::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkSamplerCreateFlagBits, std::string> Meta_StringsByVkSamplerCreateFlagBits =
{
    { VkSamplerCreateFlagBits::VK_NONE_BIT, "VK_NONE_BIT" },
    { VkSamplerCreateFlagBits::VK_SAMPLER_CREATE_SUBSAMPLED_BIT_EXT, "VK_SAMPLER_CREATE_SUBSAMPLED_BIT_EXT" },
    { VkSamplerCreateFlagBits::VK_SAMPLER_CREATE_SUBSAMPLED_COARSE_RECONSTRUCTION_BIT_EXT, "VK_SAMPLER_CREATE_SUBSAMPLED_COARSE_RECONSTRUCTION_BIT_EXT" }
};

const std::unordered_map<VkSemaphoreImportFlagBits, std::string> Meta_StringsByVkSemaphoreImportFlagBits =
{
    { VkSemaphoreImportFlagBits::VK_NONE_BIT, "VK_NONE_BIT" },
    { VkSemaphoreImportFlagBits::VK_SEMAPHORE_IMPORT_TEMPORARY_BIT_KHR, "VK_SEMAPHORE_IMPORT_TEMPORARY_BIT_KHR" }
};

const std::unordered_map<VkShaderStageFlagBits, std::string> Meta_StringsByVkShaderStageFlagBits =
{
    { VkShaderStageFlagBits::VK_NONE_BIT, "VK_NONE_BIT" },
    { VkShaderStageFlagBits::VK_SHADER_STAGE_ANY_HIT_BIT_NV, "VK_SHADER_STAGE_ANY_HIT_BIT_NV" },
    { VkShaderStageFlagBits::VK_SHADER_STAGE_CALLABLE_BIT_NV, "VK_SHADER_STAGE_CALLABLE_BIT_NV" },
    { VkShaderStageFlagBits::VK_SHADER_STAGE_CLOSEST_HIT_BIT_NV, "VK_SHADER_STAGE_CLOSEST_HIT_BIT_NV" },
    { VkShaderStageFlagBits::VK_SHADER_STAGE_INTERSECTION_BIT_NV, "VK_SHADER_STAGE_INTERSECTION_BIT_NV" },
    { VkShaderStageFlagBits::VK_SHADER_STAGE_MESH_BIT_NV, "VK_SHADER_STAGE_MESH_BIT_NV" },
    { VkShaderStageFlagBits::VK_SHADER_STAGE_MISS_BIT_NV, "VK_SHADER_STAGE_MISS_BIT_NV" },
    { VkShaderStageFlagBits::VK_SHADER_STAGE_RAYGEN_BIT_NV, "VK_SHADER_STAGE_RAYGEN_BIT_NV" },
    { VkShaderStageFlagBits::VK_SHADER_STAGE_TASK_BIT_NV, "VK_SHADER_STAGE_TASK_BIT_NV" }
};

const std::unordered_map<VkSubgroupFeatureFlagBits, std::string> Meta_StringsByVkSubgroupFeatureFlagBits =
{
    { VkSubgroupFeatureFlagBits::VK_NONE_BIT, "VK_NONE_BIT" },
    { VkSubgroupFeatureFlagBits::VK_SUBGROUP_FEATURE_PARTITIONED_BIT_NV, "VK_SUBGROUP_FEATURE_PARTITIONED_BIT_NV" }
};

const std::unordered_map<VkSubpassDescriptionFlagBits, std::string> Meta_StringsByVkSubpassDescriptionFlagBits =
{
    { VkSubpassDescriptionFlagBits::VK_NONE_BIT, "VK_NONE_BIT" },
    { VkSubpassDescriptionFlagBits::VK_SUBPASS_DESCRIPTION_PER_VIEW_ATTRIBUTES_BIT_NVX, "VK_SUBPASS_DESCRIPTION_PER_VIEW_ATTRIBUTES_BIT_NVX" },
    { VkSubpassDescriptionFlagBits::VK_SUBPASS_DESCRIPTION_PER_VIEW_POSITION_X_ONLY_BIT_NVX, "VK_SUBPASS_DESCRIPTION_PER_VIEW_POSITION_X_ONLY_BIT_NVX" }
};

const std::unordered_map<VkSurfaceCounterFlagBitsEXT, std::string> Meta_StringsByVkSurfaceCounterFlagBitsEXT =
{
    { VkSurfaceCounterFlagBitsEXT::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkSwapchainCreateFlagBitsKHR, std::string> Meta_StringsByVkSwapchainCreateFlagBitsKHR =
{
    { VkSwapchainCreateFlagBitsKHR::VK_NONE_BIT, "VK_NONE_BIT" },
    { VkSwapchainCreateFlagBitsKHR::VK_SWAPCHAIN_CREATE_MUTABLE_FORMAT_BIT_KHR, "VK_SWAPCHAIN_CREATE_MUTABLE_FORMAT_BIT_KHR" },
    { VkSwapchainCreateFlagBitsKHR::VK_SWAPCHAIN_CREATE_PROTECTED_BIT_KHR, "VK_SWAPCHAIN_CREATE_PROTECTED_BIT_KHR" },
    { VkSwapchainCreateFlagBitsKHR::VK_SWAPCHAIN_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR, "VK_SWAPCHAIN_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR" }
};


} } // namespace vkbinding::aux