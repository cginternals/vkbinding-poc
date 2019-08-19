
#include "Meta_Maps.h"

#include <vkbinding/vk/bitfield.h>


using namespace vk;


namespace vkbinding { namespace aux
{


const std::unordered_map<std::string, VKbitfield> Meta_BitfieldsByString_0{};

const std::unordered_map<std::string, VKbitfield> Meta_BitfieldsByString_A =
{
    { "VK_ACCESS_ACCELERATION_STRUCTURE_READ_BIT_NV", static_cast<VKbitfield>(VkAccessFlags::VK_ACCESS_ACCELERATION_STRUCTURE_READ_BIT_NV) },
    { "VK_ACCESS_ACCELERATION_STRUCTURE_WRITE_BIT_NV", static_cast<VKbitfield>(VkAccessFlags::VK_ACCESS_ACCELERATION_STRUCTURE_WRITE_BIT_NV) },
    { "VK_ACCESS_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT", static_cast<VKbitfield>(VkAccessFlags::VK_ACCESS_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT) },
    { "VK_ACCESS_COMMAND_PROCESS_READ_BIT_NVX", static_cast<VKbitfield>(VkAccessFlags::VK_ACCESS_COMMAND_PROCESS_READ_BIT_NVX) },
    { "VK_ACCESS_COMMAND_PROCESS_WRITE_BIT_NVX", static_cast<VKbitfield>(VkAccessFlags::VK_ACCESS_COMMAND_PROCESS_WRITE_BIT_NVX) },
    { "VK_ACCESS_CONDITIONAL_RENDERING_READ_BIT_EXT", static_cast<VKbitfield>(VkAccessFlags::VK_ACCESS_CONDITIONAL_RENDERING_READ_BIT_EXT) },
    { "VK_ACCESS_FRAGMENT_DENSITY_MAP_READ_BIT_EXT", static_cast<VKbitfield>(VkAccessFlags::VK_ACCESS_FRAGMENT_DENSITY_MAP_READ_BIT_EXT) },
    { "VK_ACCESS_SHADING_RATE_IMAGE_READ_BIT_NV", static_cast<VKbitfield>(VkAccessFlags::VK_ACCESS_SHADING_RATE_IMAGE_READ_BIT_NV) },
    { "VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT", static_cast<VKbitfield>(VkAccessFlags::VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT) },
    { "VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT", static_cast<VKbitfield>(VkAccessFlags::VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT) },
    { "VK_ACCESS_TRANSFORM_FEEDBACK_WRITE_BIT_EXT", static_cast<VKbitfield>(VkAccessFlags::VK_ACCESS_TRANSFORM_FEEDBACK_WRITE_BIT_EXT) }
};

const std::unordered_map<std::string, VKbitfield> Meta_BitfieldsByString_B =
{
    { "VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_EXT", static_cast<VKbitfield>(VkBufferCreateFlags::VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_EXT) },
    { "VK_BUFFER_CREATE_PROTECTED_BIT", static_cast<VKbitfield>(VkBufferCreateFlags::VK_BUFFER_CREATE_PROTECTED_BIT) },
    { "VK_BUFFER_USAGE_CONDITIONAL_RENDERING_BIT_EXT", static_cast<VKbitfield>(VkBufferUsageFlags::VK_BUFFER_USAGE_CONDITIONAL_RENDERING_BIT_EXT) },
    { "VK_BUFFER_USAGE_RAY_TRACING_BIT_NV", static_cast<VKbitfield>(VkBufferUsageFlags::VK_BUFFER_USAGE_RAY_TRACING_BIT_NV) },
    { "VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT_EXT", static_cast<VKbitfield>(VkBufferUsageFlags::VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT_EXT) },
    { "VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT", static_cast<VKbitfield>(VkBufferUsageFlags::VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT) },
    { "VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT", static_cast<VKbitfield>(VkBufferUsageFlags::VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT) }
};

const std::unordered_map<std::string, VKbitfield> Meta_BitfieldsByString_C =
{
    { "VK_COMMAND_POOL_CREATE_PROTECTED_BIT", static_cast<VKbitfield>(VkCommandPoolCreateFlags::VK_COMMAND_POOL_CREATE_PROTECTED_BIT) }
};

const std::unordered_map<std::string, VKbitfield> Meta_BitfieldsByString_D =
{
    { "VK_DEPENDENCY_DEVICE_GROUP_BIT", static_cast<VKbitfield>(VkDependencyFlags::VK_DEPENDENCY_DEVICE_GROUP_BIT) },
    { "VK_DEPENDENCY_DEVICE_GROUP_BIT_KHR", static_cast<VKbitfield>(VkDependencyFlags::VK_DEPENDENCY_DEVICE_GROUP_BIT_KHR) },
    { "VK_DEPENDENCY_VIEW_LOCAL_BIT", static_cast<VKbitfield>(VkDependencyFlags::VK_DEPENDENCY_VIEW_LOCAL_BIT) },
    { "VK_DEPENDENCY_VIEW_LOCAL_BIT_KHR", static_cast<VKbitfield>(VkDependencyFlags::VK_DEPENDENCY_VIEW_LOCAL_BIT_KHR) },
    { "VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT_EXT", static_cast<VKbitfield>(VkDescriptorPoolCreateFlags::VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT_EXT) },
    { "VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR", static_cast<VKbitfield>(VkDescriptorSetLayoutCreateFlags::VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR) },
    { "VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT_EXT", static_cast<VKbitfield>(VkDescriptorSetLayoutCreateFlags::VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT_EXT) },
    { "VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT", static_cast<VKbitfield>(VkDeviceQueueCreateFlags::VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT) }
};

const std::unordered_map<std::string, VKbitfield> Meta_BitfieldsByString_E =
{
    { "VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT_KHR", static_cast<VKbitfield>(VkExternalFenceFeatureFlags::VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT_KHR) },
    { "VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT_KHR", static_cast<VKbitfield>(VkExternalFenceFeatureFlags::VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT_KHR) },
    { "VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR", static_cast<VKbitfield>(VkExternalFenceHandleTypeFlags::VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR) },
    { "VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR", static_cast<VKbitfield>(VkExternalFenceHandleTypeFlags::VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR) },
    { "VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR", static_cast<VKbitfield>(VkExternalFenceHandleTypeFlags::VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR) },
    { "VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT_KHR", static_cast<VKbitfield>(VkExternalFenceHandleTypeFlags::VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT_KHR) },
    { "VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_KHR", static_cast<VKbitfield>(VkExternalMemoryFeatureFlags::VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_KHR) },
    { "VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_KHR", static_cast<VKbitfield>(VkExternalMemoryFeatureFlags::VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_KHR) },
    { "VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_KHR", static_cast<VKbitfield>(VkExternalMemoryFeatureFlags::VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_KHR) },
    { "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT_KHR", static_cast<VKbitfield>(VkExternalMemoryHandleTypeFlags::VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT_KHR) },
    { "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT_KHR", static_cast<VKbitfield>(VkExternalMemoryHandleTypeFlags::VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT_KHR) },
    { "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT_KHR", static_cast<VKbitfield>(VkExternalMemoryHandleTypeFlags::VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT_KHR) },
    { "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT_KHR", static_cast<VKbitfield>(VkExternalMemoryHandleTypeFlags::VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT_KHR) },
    { "VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT", static_cast<VKbitfield>(VkExternalMemoryHandleTypeFlags::VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT) },
    { "VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_ALLOCATION_BIT_EXT", static_cast<VKbitfield>(VkExternalMemoryHandleTypeFlags::VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_ALLOCATION_BIT_EXT) },
    { "VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT", static_cast<VKbitfield>(VkExternalMemoryHandleTypeFlags::VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT) },
    { "VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT_KHR", static_cast<VKbitfield>(VkExternalMemoryHandleTypeFlags::VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT_KHR) },
    { "VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR", static_cast<VKbitfield>(VkExternalMemoryHandleTypeFlags::VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR) },
    { "VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR", static_cast<VKbitfield>(VkExternalMemoryHandleTypeFlags::VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR) },
    { "VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT_KHR", static_cast<VKbitfield>(VkExternalSemaphoreFeatureFlags::VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT_KHR) },
    { "VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT_KHR", static_cast<VKbitfield>(VkExternalSemaphoreFeatureFlags::VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT_KHR) },
    { "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT_KHR", static_cast<VKbitfield>(VkExternalSemaphoreHandleTypeFlags::VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT_KHR) },
    { "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR", static_cast<VKbitfield>(VkExternalSemaphoreHandleTypeFlags::VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR) },
    { "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR", static_cast<VKbitfield>(VkExternalSemaphoreHandleTypeFlags::VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR) },
    { "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR", static_cast<VKbitfield>(VkExternalSemaphoreHandleTypeFlags::VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR) },
    { "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT_KHR", static_cast<VKbitfield>(VkExternalSemaphoreHandleTypeFlags::VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT_KHR) }
};

const std::unordered_map<std::string, VKbitfield> Meta_BitfieldsByString_F =
{
    { "VK_FENCE_IMPORT_TEMPORARY_BIT_KHR", static_cast<VKbitfield>(VkFenceImportFlags::VK_FENCE_IMPORT_TEMPORARY_BIT_KHR) },
    { "VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT", static_cast<VKbitfield>(VkFormatFeatureFlags::VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT) },
    { "VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT_KHR", static_cast<VKbitfield>(VkFormatFeatureFlags::VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT_KHR) },
    { "VK_FORMAT_FEATURE_DISJOINT_BIT", static_cast<VKbitfield>(VkFormatFeatureFlags::VK_FORMAT_FEATURE_DISJOINT_BIT) },
    { "VK_FORMAT_FEATURE_DISJOINT_BIT_KHR", static_cast<VKbitfield>(VkFormatFeatureFlags::VK_FORMAT_FEATURE_DISJOINT_BIT_KHR) },
    { "VK_FORMAT_FEATURE_FRAGMENT_DENSITY_MAP_BIT_EXT", static_cast<VKbitfield>(VkFormatFeatureFlags::VK_FORMAT_FEATURE_FRAGMENT_DENSITY_MAP_BIT_EXT) },
    { "VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT", static_cast<VKbitfield>(VkFormatFeatureFlags::VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT) },
    { "VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT_KHR", static_cast<VKbitfield>(VkFormatFeatureFlags::VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT_KHR) },
    { "VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_EXT", static_cast<VKbitfield>(VkFormatFeatureFlags::VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_EXT) },
    { "VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG", static_cast<VKbitfield>(VkFormatFeatureFlags::VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG) },
    { "VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT_EXT", static_cast<VKbitfield>(VkFormatFeatureFlags::VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT_EXT) },
    { "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT", static_cast<VKbitfield>(VkFormatFeatureFlags::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT) },
    { "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT_KHR", static_cast<VKbitfield>(VkFormatFeatureFlags::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT_KHR) },
    { "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT", static_cast<VKbitfield>(VkFormatFeatureFlags::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT) },
    { "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT_KHR", static_cast<VKbitfield>(VkFormatFeatureFlags::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT_KHR) },
    { "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT", static_cast<VKbitfield>(VkFormatFeatureFlags::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT) },
    { "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT_KHR", static_cast<VKbitfield>(VkFormatFeatureFlags::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT_KHR) },
    { "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT", static_cast<VKbitfield>(VkFormatFeatureFlags::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT) },
    { "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT_KHR", static_cast<VKbitfield>(VkFormatFeatureFlags::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT_KHR) },
    { "VK_FORMAT_FEATURE_TRANSFER_DST_BIT", static_cast<VKbitfield>(VkFormatFeatureFlags::VK_FORMAT_FEATURE_TRANSFER_DST_BIT) },
    { "VK_FORMAT_FEATURE_TRANSFER_DST_BIT_KHR", static_cast<VKbitfield>(VkFormatFeatureFlags::VK_FORMAT_FEATURE_TRANSFER_DST_BIT_KHR) },
    { "VK_FORMAT_FEATURE_TRANSFER_SRC_BIT", static_cast<VKbitfield>(VkFormatFeatureFlags::VK_FORMAT_FEATURE_TRANSFER_SRC_BIT) },
    { "VK_FORMAT_FEATURE_TRANSFER_SRC_BIT_KHR", static_cast<VKbitfield>(VkFormatFeatureFlags::VK_FORMAT_FEATURE_TRANSFER_SRC_BIT_KHR) },
    { "VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT_KHR", static_cast<VKbitfield>(VkFramebufferCreateFlags::VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT_KHR) }
};

const std::unordered_map<std::string, VKbitfield> Meta_BitfieldsByString_G{};

const std::unordered_map<std::string, VKbitfield> Meta_BitfieldsByString_H{};

const std::unordered_map<std::string, VKbitfield> Meta_BitfieldsByString_I =
{
    { "VK_IMAGE_ASPECT_MEMORY_PLANE_0_BIT_EXT", static_cast<VKbitfield>(VkImageAspectFlags::VK_IMAGE_ASPECT_MEMORY_PLANE_0_BIT_EXT) },
    { "VK_IMAGE_ASPECT_MEMORY_PLANE_1_BIT_EXT", static_cast<VKbitfield>(VkImageAspectFlags::VK_IMAGE_ASPECT_MEMORY_PLANE_1_BIT_EXT) },
    { "VK_IMAGE_ASPECT_MEMORY_PLANE_2_BIT_EXT", static_cast<VKbitfield>(VkImageAspectFlags::VK_IMAGE_ASPECT_MEMORY_PLANE_2_BIT_EXT) },
    { "VK_IMAGE_ASPECT_MEMORY_PLANE_3_BIT_EXT", static_cast<VKbitfield>(VkImageAspectFlags::VK_IMAGE_ASPECT_MEMORY_PLANE_3_BIT_EXT) },
    { "VK_IMAGE_ASPECT_PLANE_0_BIT", static_cast<VKbitfield>(VkImageAspectFlags::VK_IMAGE_ASPECT_PLANE_0_BIT) },
    { "VK_IMAGE_ASPECT_PLANE_0_BIT_KHR", static_cast<VKbitfield>(VkImageAspectFlags::VK_IMAGE_ASPECT_PLANE_0_BIT_KHR) },
    { "VK_IMAGE_ASPECT_PLANE_1_BIT", static_cast<VKbitfield>(VkImageAspectFlags::VK_IMAGE_ASPECT_PLANE_1_BIT) },
    { "VK_IMAGE_ASPECT_PLANE_1_BIT_KHR", static_cast<VKbitfield>(VkImageAspectFlags::VK_IMAGE_ASPECT_PLANE_1_BIT_KHR) },
    { "VK_IMAGE_ASPECT_PLANE_2_BIT", static_cast<VKbitfield>(VkImageAspectFlags::VK_IMAGE_ASPECT_PLANE_2_BIT) },
    { "VK_IMAGE_ASPECT_PLANE_2_BIT_KHR", static_cast<VKbitfield>(VkImageAspectFlags::VK_IMAGE_ASPECT_PLANE_2_BIT_KHR) },
    { "VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT", static_cast<VKbitfield>(VkImageCreateFlags::VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT) },
    { "VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT_KHR", static_cast<VKbitfield>(VkImageCreateFlags::VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT_KHR) },
    { "VK_IMAGE_CREATE_ALIAS_BIT", static_cast<VKbitfield>(VkImageCreateFlags::VK_IMAGE_CREATE_ALIAS_BIT) },
    { "VK_IMAGE_CREATE_ALIAS_BIT_KHR", static_cast<VKbitfield>(VkImageCreateFlags::VK_IMAGE_CREATE_ALIAS_BIT_KHR) },
    { "VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT", static_cast<VKbitfield>(VkImageCreateFlags::VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT) },
    { "VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT_KHR", static_cast<VKbitfield>(VkImageCreateFlags::VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT_KHR) },
    { "VK_IMAGE_CREATE_CORNER_SAMPLED_BIT_NV", static_cast<VKbitfield>(VkImageCreateFlags::VK_IMAGE_CREATE_CORNER_SAMPLED_BIT_NV) },
    { "VK_IMAGE_CREATE_DISJOINT_BIT", static_cast<VKbitfield>(VkImageCreateFlags::VK_IMAGE_CREATE_DISJOINT_BIT) },
    { "VK_IMAGE_CREATE_DISJOINT_BIT_KHR", static_cast<VKbitfield>(VkImageCreateFlags::VK_IMAGE_CREATE_DISJOINT_BIT_KHR) },
    { "VK_IMAGE_CREATE_EXTENDED_USAGE_BIT", static_cast<VKbitfield>(VkImageCreateFlags::VK_IMAGE_CREATE_EXTENDED_USAGE_BIT) },
    { "VK_IMAGE_CREATE_EXTENDED_USAGE_BIT_KHR", static_cast<VKbitfield>(VkImageCreateFlags::VK_IMAGE_CREATE_EXTENDED_USAGE_BIT_KHR) },
    { "VK_IMAGE_CREATE_PROTECTED_BIT", static_cast<VKbitfield>(VkImageCreateFlags::VK_IMAGE_CREATE_PROTECTED_BIT) },
    { "VK_IMAGE_CREATE_SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_EXT", static_cast<VKbitfield>(VkImageCreateFlags::VK_IMAGE_CREATE_SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_EXT) },
    { "VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT", static_cast<VKbitfield>(VkImageCreateFlags::VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT) },
    { "VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR", static_cast<VKbitfield>(VkImageCreateFlags::VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR) },
    { "VK_IMAGE_CREATE_SUBSAMPLED_BIT_EXT", static_cast<VKbitfield>(VkImageCreateFlags::VK_IMAGE_CREATE_SUBSAMPLED_BIT_EXT) },
    { "VK_IMAGE_USAGE_FRAGMENT_DENSITY_MAP_BIT_EXT", static_cast<VKbitfield>(VkImageUsageFlags::VK_IMAGE_USAGE_FRAGMENT_DENSITY_MAP_BIT_EXT) },
    { "VK_IMAGE_USAGE_SHADING_RATE_IMAGE_BIT_NV", static_cast<VKbitfield>(VkImageUsageFlags::VK_IMAGE_USAGE_SHADING_RATE_IMAGE_BIT_NV) },
    { "VK_IMAGE_VIEW_CREATE_FRAGMENT_DENSITY_MAP_DYNAMIC_BIT_EXT", static_cast<VKbitfield>(VkImageViewCreateFlags::VK_IMAGE_VIEW_CREATE_FRAGMENT_DENSITY_MAP_DYNAMIC_BIT_EXT) }
};

const std::unordered_map<std::string, VKbitfield> Meta_BitfieldsByString_J{};

const std::unordered_map<std::string, VKbitfield> Meta_BitfieldsByString_K{};

const std::unordered_map<std::string, VKbitfield> Meta_BitfieldsByString_L{};

const std::unordered_map<std::string, VKbitfield> Meta_BitfieldsByString_M =
{
    { "VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT_KHR", static_cast<VKbitfield>(VkMemoryAllocateFlags::VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT_KHR) },
    { "VK_MEMORY_HEAP_MULTI_INSTANCE_BIT", static_cast<VKbitfield>(VkMemoryHeapFlags::VK_MEMORY_HEAP_MULTI_INSTANCE_BIT) },
    { "VK_MEMORY_HEAP_MULTI_INSTANCE_BIT_KHR", static_cast<VKbitfield>(VkMemoryHeapFlags::VK_MEMORY_HEAP_MULTI_INSTANCE_BIT_KHR) },
    { "VK_MEMORY_PROPERTY_PROTECTED_BIT", static_cast<VKbitfield>(VkMemoryPropertyFlags::VK_MEMORY_PROPERTY_PROTECTED_BIT) }
};

const std::unordered_map<std::string, VKbitfield> Meta_BitfieldsByString_N =
{
    { "VK_NONE_BIT", static_cast<VKbitfield>(VkAccessFlags::VK_NONE_BIT) }
};

const std::unordered_map<std::string, VKbitfield> Meta_BitfieldsByString_O{};

const std::unordered_map<std::string, VKbitfield> Meta_BitfieldsByString_P =
{
    { "VK_PEER_MEMORY_FEATURE_COPY_DST_BIT_KHR", static_cast<VKbitfield>(VkPeerMemoryFeatureFlags::VK_PEER_MEMORY_FEATURE_COPY_DST_BIT_KHR) },
    { "VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT_KHR", static_cast<VKbitfield>(VkPeerMemoryFeatureFlags::VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT_KHR) },
    { "VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT_KHR", static_cast<VKbitfield>(VkPeerMemoryFeatureFlags::VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT_KHR) },
    { "VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT_KHR", static_cast<VKbitfield>(VkPeerMemoryFeatureFlags::VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT_KHR) },
    { "VK_PIPELINE_CREATE_CAPTURE_INTERNAL_REPRESENTATIONS_BIT_KHR", static_cast<VKbitfield>(VkPipelineCreateFlags::VK_PIPELINE_CREATE_CAPTURE_INTERNAL_REPRESENTATIONS_BIT_KHR) },
    { "VK_PIPELINE_CREATE_CAPTURE_STATISTICS_BIT_KHR", static_cast<VKbitfield>(VkPipelineCreateFlags::VK_PIPELINE_CREATE_CAPTURE_STATISTICS_BIT_KHR) },
    { "VK_PIPELINE_CREATE_DEFER_COMPILE_BIT_NV", static_cast<VKbitfield>(VkPipelineCreateFlags::VK_PIPELINE_CREATE_DEFER_COMPILE_BIT_NV) },
    { "VK_PIPELINE_CREATE_DISPATCH_BASE", static_cast<VKbitfield>(VkPipelineCreateFlags::VK_PIPELINE_CREATE_DISPATCH_BASE) },
    { "VK_PIPELINE_CREATE_DISPATCH_BASE_KHR", static_cast<VKbitfield>(VkPipelineCreateFlags::VK_PIPELINE_CREATE_DISPATCH_BASE_KHR) },
    { "VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT", static_cast<VKbitfield>(VkPipelineCreateFlags::VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT) },
    { "VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT_KHR", static_cast<VKbitfield>(VkPipelineCreateFlags::VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT_KHR) },
    { "VK_PIPELINE_SHADER_STAGE_CREATE_ALLOW_VARYING_SUBGROUP_SIZE_BIT_EXT", static_cast<VKbitfield>(VkPipelineShaderStageCreateFlags::VK_PIPELINE_SHADER_STAGE_CREATE_ALLOW_VARYING_SUBGROUP_SIZE_BIT_EXT) },
    { "VK_PIPELINE_SHADER_STAGE_CREATE_REQUIRE_FULL_SUBGROUPS_BIT_EXT", static_cast<VKbitfield>(VkPipelineShaderStageCreateFlags::VK_PIPELINE_SHADER_STAGE_CREATE_REQUIRE_FULL_SUBGROUPS_BIT_EXT) },
    { "VK_PIPELINE_STAGE_ACCELERATION_STRUCTURE_BUILD_BIT_NV", static_cast<VKbitfield>(VkPipelineStageFlags::VK_PIPELINE_STAGE_ACCELERATION_STRUCTURE_BUILD_BIT_NV) },
    { "VK_PIPELINE_STAGE_COMMAND_PROCESS_BIT_NVX", static_cast<VKbitfield>(VkPipelineStageFlags::VK_PIPELINE_STAGE_COMMAND_PROCESS_BIT_NVX) },
    { "VK_PIPELINE_STAGE_CONDITIONAL_RENDERING_BIT_EXT", static_cast<VKbitfield>(VkPipelineStageFlags::VK_PIPELINE_STAGE_CONDITIONAL_RENDERING_BIT_EXT) },
    { "VK_PIPELINE_STAGE_FRAGMENT_DENSITY_PROCESS_BIT_EXT", static_cast<VKbitfield>(VkPipelineStageFlags::VK_PIPELINE_STAGE_FRAGMENT_DENSITY_PROCESS_BIT_EXT) },
    { "VK_PIPELINE_STAGE_MESH_SHADER_BIT_NV", static_cast<VKbitfield>(VkPipelineStageFlags::VK_PIPELINE_STAGE_MESH_SHADER_BIT_NV) },
    { "VK_PIPELINE_STAGE_RAY_TRACING_SHADER_BIT_NV", static_cast<VKbitfield>(VkPipelineStageFlags::VK_PIPELINE_STAGE_RAY_TRACING_SHADER_BIT_NV) },
    { "VK_PIPELINE_STAGE_SHADING_RATE_IMAGE_BIT_NV", static_cast<VKbitfield>(VkPipelineStageFlags::VK_PIPELINE_STAGE_SHADING_RATE_IMAGE_BIT_NV) },
    { "VK_PIPELINE_STAGE_TASK_SHADER_BIT_NV", static_cast<VKbitfield>(VkPipelineStageFlags::VK_PIPELINE_STAGE_TASK_SHADER_BIT_NV) },
    { "VK_PIPELINE_STAGE_TRANSFORM_FEEDBACK_BIT_EXT", static_cast<VKbitfield>(VkPipelineStageFlags::VK_PIPELINE_STAGE_TRANSFORM_FEEDBACK_BIT_EXT) }
};

const std::unordered_map<std::string, VKbitfield> Meta_BitfieldsByString_Q =
{
    { "VK_QUEUE_PROTECTED_BIT", static_cast<VKbitfield>(VkQueueFlags::VK_QUEUE_PROTECTED_BIT) }
};

const std::unordered_map<std::string, VKbitfield> Meta_BitfieldsByString_R{};

const std::unordered_map<std::string, VKbitfield> Meta_BitfieldsByString_S =
{
    { "VK_SAMPLER_CREATE_SUBSAMPLED_BIT_EXT", static_cast<VKbitfield>(VkSamplerCreateFlags::VK_SAMPLER_CREATE_SUBSAMPLED_BIT_EXT) },
    { "VK_SAMPLER_CREATE_SUBSAMPLED_COARSE_RECONSTRUCTION_BIT_EXT", static_cast<VKbitfield>(VkSamplerCreateFlags::VK_SAMPLER_CREATE_SUBSAMPLED_COARSE_RECONSTRUCTION_BIT_EXT) },
    { "VK_SEMAPHORE_IMPORT_TEMPORARY_BIT_KHR", static_cast<VKbitfield>(VkSemaphoreImportFlags::VK_SEMAPHORE_IMPORT_TEMPORARY_BIT_KHR) },
    { "VK_SHADER_STAGE_ANY_HIT_BIT_NV", static_cast<VKbitfield>(VkShaderStageFlags::VK_SHADER_STAGE_ANY_HIT_BIT_NV) },
    { "VK_SHADER_STAGE_CALLABLE_BIT_NV", static_cast<VKbitfield>(VkShaderStageFlags::VK_SHADER_STAGE_CALLABLE_BIT_NV) },
    { "VK_SHADER_STAGE_CLOSEST_HIT_BIT_NV", static_cast<VKbitfield>(VkShaderStageFlags::VK_SHADER_STAGE_CLOSEST_HIT_BIT_NV) },
    { "VK_SHADER_STAGE_INTERSECTION_BIT_NV", static_cast<VKbitfield>(VkShaderStageFlags::VK_SHADER_STAGE_INTERSECTION_BIT_NV) },
    { "VK_SHADER_STAGE_MESH_BIT_NV", static_cast<VKbitfield>(VkShaderStageFlags::VK_SHADER_STAGE_MESH_BIT_NV) },
    { "VK_SHADER_STAGE_MISS_BIT_NV", static_cast<VKbitfield>(VkShaderStageFlags::VK_SHADER_STAGE_MISS_BIT_NV) },
    { "VK_SHADER_STAGE_RAYGEN_BIT_NV", static_cast<VKbitfield>(VkShaderStageFlags::VK_SHADER_STAGE_RAYGEN_BIT_NV) },
    { "VK_SHADER_STAGE_TASK_BIT_NV", static_cast<VKbitfield>(VkShaderStageFlags::VK_SHADER_STAGE_TASK_BIT_NV) },
    { "VK_SUBGROUP_FEATURE_PARTITIONED_BIT_NV", static_cast<VKbitfield>(VkSubgroupFeatureFlags::VK_SUBGROUP_FEATURE_PARTITIONED_BIT_NV) },
    { "VK_SUBPASS_DESCRIPTION_PER_VIEW_ATTRIBUTES_BIT_NVX", static_cast<VKbitfield>(VkSubpassDescriptionFlags::VK_SUBPASS_DESCRIPTION_PER_VIEW_ATTRIBUTES_BIT_NVX) },
    { "VK_SUBPASS_DESCRIPTION_PER_VIEW_POSITION_X_ONLY_BIT_NVX", static_cast<VKbitfield>(VkSubpassDescriptionFlags::VK_SUBPASS_DESCRIPTION_PER_VIEW_POSITION_X_ONLY_BIT_NVX) },
    { "VK_SWAPCHAIN_CREATE_MUTABLE_FORMAT_BIT_KHR", static_cast<VKbitfield>(VkSwapchainCreateFlagsKHR::VK_SWAPCHAIN_CREATE_MUTABLE_FORMAT_BIT_KHR) },
    { "VK_SWAPCHAIN_CREATE_PROTECTED_BIT_KHR", static_cast<VKbitfield>(VkSwapchainCreateFlagsKHR::VK_SWAPCHAIN_CREATE_PROTECTED_BIT_KHR) },
    { "VK_SWAPCHAIN_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR", static_cast<VKbitfield>(VkSwapchainCreateFlagsKHR::VK_SWAPCHAIN_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR) }
};

const std::unordered_map<std::string, VKbitfield> Meta_BitfieldsByString_T{};

const std::unordered_map<std::string, VKbitfield> Meta_BitfieldsByString_U =
{
    { "VK_UNUSED_BIT", static_cast<VKbitfield>(UnusedMask::VK_UNUSED_BIT) }
};

const std::unordered_map<std::string, VKbitfield> Meta_BitfieldsByString_V{};

const std::unordered_map<std::string, VKbitfield> Meta_BitfieldsByString_W{};

const std::unordered_map<std::string, VKbitfield> Meta_BitfieldsByString_X{};

const std::unordered_map<std::string, VKbitfield> Meta_BitfieldsByString_Y{};

const std::unordered_map<std::string, VKbitfield> Meta_BitfieldsByString_Z{};

const std::array<std::unordered_map<std::string, vk::VKbitfield>, 27> Meta_BitfieldsByStringMaps =
{ {
    Meta_BitfieldsByString_0,
    Meta_BitfieldsByString_A,
    Meta_BitfieldsByString_B,
    Meta_BitfieldsByString_C,
    Meta_BitfieldsByString_D,
    Meta_BitfieldsByString_E,
    Meta_BitfieldsByString_F,
    Meta_BitfieldsByString_G,
    Meta_BitfieldsByString_H,
    Meta_BitfieldsByString_I,
    Meta_BitfieldsByString_J,
    Meta_BitfieldsByString_K,
    Meta_BitfieldsByString_L,
    Meta_BitfieldsByString_M,
    Meta_BitfieldsByString_N,
    Meta_BitfieldsByString_O,
    Meta_BitfieldsByString_P,
    Meta_BitfieldsByString_Q,
    Meta_BitfieldsByString_R,
    Meta_BitfieldsByString_S,
    Meta_BitfieldsByString_T,
    Meta_BitfieldsByString_U,
    Meta_BitfieldsByString_V,
    Meta_BitfieldsByString_W,
    Meta_BitfieldsByString_X,
    Meta_BitfieldsByString_Y,
    Meta_BitfieldsByString_Z
} };


} } // namespace vkbinding::aux