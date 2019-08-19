
#include "Meta_Maps.h"

#include <vkbinding/vk/bitfield.h>


using namespace vk;


namespace vkbinding { namespace aux
{


const std::unordered_map<UnusedMask, std::string> Meta_StringsByUnusedMask =
{
    { UnusedMask::VK_UNUSED_BIT, "VK_UNUSED_BIT" }
};

const std::unordered_map<VkAccessFlags, std::string> Meta_StringsByVkAccessFlags =
{
    { VkAccessFlags::VK_ACCESS_ACCELERATION_STRUCTURE_READ_BIT_NV, "VK_ACCESS_ACCELERATION_STRUCTURE_READ_BIT_NV" },
    { VkAccessFlags::VK_ACCESS_ACCELERATION_STRUCTURE_WRITE_BIT_NV, "VK_ACCESS_ACCELERATION_STRUCTURE_WRITE_BIT_NV" },
    { VkAccessFlags::VK_ACCESS_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT, "VK_ACCESS_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT" },
    { VkAccessFlags::VK_ACCESS_COMMAND_PROCESS_READ_BIT_NVX, "VK_ACCESS_COMMAND_PROCESS_READ_BIT_NVX" },
    { VkAccessFlags::VK_ACCESS_COMMAND_PROCESS_WRITE_BIT_NVX, "VK_ACCESS_COMMAND_PROCESS_WRITE_BIT_NVX" },
    { VkAccessFlags::VK_ACCESS_CONDITIONAL_RENDERING_READ_BIT_EXT, "VK_ACCESS_CONDITIONAL_RENDERING_READ_BIT_EXT" },
    { VkAccessFlags::VK_ACCESS_FRAGMENT_DENSITY_MAP_READ_BIT_EXT, "VK_ACCESS_FRAGMENT_DENSITY_MAP_READ_BIT_EXT" },
    { VkAccessFlags::VK_ACCESS_SHADING_RATE_IMAGE_READ_BIT_NV, "VK_ACCESS_SHADING_RATE_IMAGE_READ_BIT_NV" },
    { VkAccessFlags::VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT, "VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_READ_BIT_EXT" },
    { VkAccessFlags::VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT, "VK_ACCESS_TRANSFORM_FEEDBACK_COUNTER_WRITE_BIT_EXT" },
    { VkAccessFlags::VK_ACCESS_TRANSFORM_FEEDBACK_WRITE_BIT_EXT, "VK_ACCESS_TRANSFORM_FEEDBACK_WRITE_BIT_EXT" },
    { VkAccessFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkAttachmentDescriptionFlags, std::string> Meta_StringsByVkAttachmentDescriptionFlags =
{
    { VkAttachmentDescriptionFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkBufferCreateFlags, std::string> Meta_StringsByVkBufferCreateFlags =
{
    { VkBufferCreateFlags::VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_EXT, "VK_BUFFER_CREATE_DEVICE_ADDRESS_CAPTURE_REPLAY_BIT_EXT" },
    { VkBufferCreateFlags::VK_BUFFER_CREATE_PROTECTED_BIT, "VK_BUFFER_CREATE_PROTECTED_BIT" },
    { VkBufferCreateFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkBufferUsageFlags, std::string> Meta_StringsByVkBufferUsageFlags =
{
    { VkBufferUsageFlags::VK_BUFFER_USAGE_CONDITIONAL_RENDERING_BIT_EXT, "VK_BUFFER_USAGE_CONDITIONAL_RENDERING_BIT_EXT" },
    { VkBufferUsageFlags::VK_BUFFER_USAGE_RAY_TRACING_BIT_NV, "VK_BUFFER_USAGE_RAY_TRACING_BIT_NV" },
    { VkBufferUsageFlags::VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT_EXT, "VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT_EXT" },
    { VkBufferUsageFlags::VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT, "VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_BUFFER_BIT_EXT" },
    { VkBufferUsageFlags::VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT, "VK_BUFFER_USAGE_TRANSFORM_FEEDBACK_COUNTER_BUFFER_BIT_EXT" },
    { VkBufferUsageFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkBufferViewCreateFlags, std::string> Meta_StringsByVkBufferViewCreateFlags =
{
    { VkBufferViewCreateFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkBuildAccelerationStructureFlagsNV, std::string> Meta_StringsByVkBuildAccelerationStructureFlagsNV =
{
    { VkBuildAccelerationStructureFlagsNV::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkColorComponentFlags, std::string> Meta_StringsByVkColorComponentFlags =
{
    { VkColorComponentFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkCommandBufferResetFlags, std::string> Meta_StringsByVkCommandBufferResetFlags =
{
    { VkCommandBufferResetFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkCommandBufferUsageFlags, std::string> Meta_StringsByVkCommandBufferUsageFlags =
{
    { VkCommandBufferUsageFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkCommandPoolCreateFlags, std::string> Meta_StringsByVkCommandPoolCreateFlags =
{
    { VkCommandPoolCreateFlags::VK_COMMAND_POOL_CREATE_PROTECTED_BIT, "VK_COMMAND_POOL_CREATE_PROTECTED_BIT" },
    { VkCommandPoolCreateFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkCommandPoolResetFlags, std::string> Meta_StringsByVkCommandPoolResetFlags =
{
    { VkCommandPoolResetFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkCommandPoolTrimFlags, std::string> Meta_StringsByVkCommandPoolTrimFlags =
{
    { VkCommandPoolTrimFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkCommandPoolTrimFlagsKHR, std::string> Meta_StringsByVkCommandPoolTrimFlagsKHR =
{
    { VkCommandPoolTrimFlagsKHR::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkCompositeAlphaFlagsKHR, std::string> Meta_StringsByVkCompositeAlphaFlagsKHR =
{
    { VkCompositeAlphaFlagsKHR::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkConditionalRenderingFlagsEXT, std::string> Meta_StringsByVkConditionalRenderingFlagsEXT =
{
    { VkConditionalRenderingFlagsEXT::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkCullModeFlags, std::string> Meta_StringsByVkCullModeFlags =
{
    { VkCullModeFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkDebugReportFlagsEXT, std::string> Meta_StringsByVkDebugReportFlagsEXT =
{
    { VkDebugReportFlagsEXT::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkDebugUtilsMessageSeverityFlagsEXT, std::string> Meta_StringsByVkDebugUtilsMessageSeverityFlagsEXT =
{
    { VkDebugUtilsMessageSeverityFlagsEXT::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkDebugUtilsMessageTypeFlagsEXT, std::string> Meta_StringsByVkDebugUtilsMessageTypeFlagsEXT =
{
    { VkDebugUtilsMessageTypeFlagsEXT::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkDebugUtilsMessengerCallbackDataFlagsEXT, std::string> Meta_StringsByVkDebugUtilsMessengerCallbackDataFlagsEXT =
{
    { VkDebugUtilsMessengerCallbackDataFlagsEXT::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkDependencyFlags, std::string> Meta_StringsByVkDependencyFlags =
{
    { VkDependencyFlags::VK_DEPENDENCY_DEVICE_GROUP_BIT, "VK_DEPENDENCY_DEVICE_GROUP_BIT" },
    { VkDependencyFlags::VK_DEPENDENCY_DEVICE_GROUP_BIT_KHR, "VK_DEPENDENCY_DEVICE_GROUP_BIT_KHR" },
    { VkDependencyFlags::VK_DEPENDENCY_VIEW_LOCAL_BIT, "VK_DEPENDENCY_VIEW_LOCAL_BIT" },
    { VkDependencyFlags::VK_DEPENDENCY_VIEW_LOCAL_BIT_KHR, "VK_DEPENDENCY_VIEW_LOCAL_BIT_KHR" },
    { VkDependencyFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkDescriptorPoolCreateFlags, std::string> Meta_StringsByVkDescriptorPoolCreateFlags =
{
    { VkDescriptorPoolCreateFlags::VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT_EXT, "VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT_EXT" },
    { VkDescriptorPoolCreateFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkDescriptorPoolResetFlags, std::string> Meta_StringsByVkDescriptorPoolResetFlags =
{
    { VkDescriptorPoolResetFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkDescriptorSetLayoutCreateFlags, std::string> Meta_StringsByVkDescriptorSetLayoutCreateFlags =
{
    { VkDescriptorSetLayoutCreateFlags::VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR, "VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR" },
    { VkDescriptorSetLayoutCreateFlags::VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT_EXT, "VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT_EXT" },
    { VkDescriptorSetLayoutCreateFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkDescriptorUpdateTemplateCreateFlags, std::string> Meta_StringsByVkDescriptorUpdateTemplateCreateFlags =
{
    { VkDescriptorUpdateTemplateCreateFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkDescriptorUpdateTemplateCreateFlagsKHR, std::string> Meta_StringsByVkDescriptorUpdateTemplateCreateFlagsKHR =
{
    { VkDescriptorUpdateTemplateCreateFlagsKHR::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkDeviceCreateFlags, std::string> Meta_StringsByVkDeviceCreateFlags =
{
    { VkDeviceCreateFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkDeviceGroupPresentModeFlagsKHR, std::string> Meta_StringsByVkDeviceGroupPresentModeFlagsKHR =
{
    { VkDeviceGroupPresentModeFlagsKHR::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkDeviceQueueCreateFlags, std::string> Meta_StringsByVkDeviceQueueCreateFlags =
{
    { VkDeviceQueueCreateFlags::VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT, "VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT" },
    { VkDeviceQueueCreateFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkDisplayModeCreateFlagsKHR, std::string> Meta_StringsByVkDisplayModeCreateFlagsKHR =
{
    { VkDisplayModeCreateFlagsKHR::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkDisplayPlaneAlphaFlagsKHR, std::string> Meta_StringsByVkDisplayPlaneAlphaFlagsKHR =
{
    { VkDisplayPlaneAlphaFlagsKHR::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkDisplaySurfaceCreateFlagsKHR, std::string> Meta_StringsByVkDisplaySurfaceCreateFlagsKHR =
{
    { VkDisplaySurfaceCreateFlagsKHR::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkEventCreateFlags, std::string> Meta_StringsByVkEventCreateFlags =
{
    { VkEventCreateFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkExternalFenceFeatureFlagBitsKHR, std::string> Meta_StringsByVkExternalFenceFeatureFlagBitsKHR =
{
    { VkExternalFenceFeatureFlagBitsKHR::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkExternalFenceFeatureFlags, std::string> Meta_StringsByVkExternalFenceFeatureFlags =
{
    { VkExternalFenceFeatureFlags::VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT_KHR, "VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT_KHR" },
    { VkExternalFenceFeatureFlags::VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT_KHR, "VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT_KHR" },
    { VkExternalFenceFeatureFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkExternalFenceFeatureFlagsKHR, std::string> Meta_StringsByVkExternalFenceFeatureFlagsKHR =
{
    { VkExternalFenceFeatureFlagsKHR::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkExternalFenceHandleTypeFlagBitsKHR, std::string> Meta_StringsByVkExternalFenceHandleTypeFlagBitsKHR =
{
    { VkExternalFenceHandleTypeFlagBitsKHR::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkExternalFenceHandleTypeFlags, std::string> Meta_StringsByVkExternalFenceHandleTypeFlags =
{
    { VkExternalFenceHandleTypeFlags::VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR, "VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR" },
    { VkExternalFenceHandleTypeFlags::VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR, "VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR" },
    { VkExternalFenceHandleTypeFlags::VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR, "VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR" },
    { VkExternalFenceHandleTypeFlags::VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT_KHR, "VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT_KHR" },
    { VkExternalFenceHandleTypeFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkExternalFenceHandleTypeFlagsKHR, std::string> Meta_StringsByVkExternalFenceHandleTypeFlagsKHR =
{
    { VkExternalFenceHandleTypeFlagsKHR::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkExternalMemoryFeatureFlagBitsKHR, std::string> Meta_StringsByVkExternalMemoryFeatureFlagBitsKHR =
{
    { VkExternalMemoryFeatureFlagBitsKHR::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkExternalMemoryFeatureFlags, std::string> Meta_StringsByVkExternalMemoryFeatureFlags =
{
    { VkExternalMemoryFeatureFlags::VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_KHR, "VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_KHR" },
    { VkExternalMemoryFeatureFlags::VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_KHR, "VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_KHR" },
    { VkExternalMemoryFeatureFlags::VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_KHR, "VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_KHR" },
    { VkExternalMemoryFeatureFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkExternalMemoryFeatureFlagsKHR, std::string> Meta_StringsByVkExternalMemoryFeatureFlagsKHR =
{
    { VkExternalMemoryFeatureFlagsKHR::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkExternalMemoryFeatureFlagsNV, std::string> Meta_StringsByVkExternalMemoryFeatureFlagsNV =
{
    { VkExternalMemoryFeatureFlagsNV::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkExternalMemoryHandleTypeFlagBitsKHR, std::string> Meta_StringsByVkExternalMemoryHandleTypeFlagBitsKHR =
{
    { VkExternalMemoryHandleTypeFlagBitsKHR::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkExternalMemoryHandleTypeFlags, std::string> Meta_StringsByVkExternalMemoryHandleTypeFlags =
{
    { VkExternalMemoryHandleTypeFlags::VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT_KHR, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT_KHR" },
    { VkExternalMemoryHandleTypeFlags::VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT_KHR, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT_KHR" },
    { VkExternalMemoryHandleTypeFlags::VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT_KHR, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT_KHR" },
    { VkExternalMemoryHandleTypeFlags::VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT_KHR, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT_KHR" },
    { VkExternalMemoryHandleTypeFlags::VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT" },
    { VkExternalMemoryHandleTypeFlags::VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_ALLOCATION_BIT_EXT, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_ALLOCATION_BIT_EXT" },
    { VkExternalMemoryHandleTypeFlags::VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT" },
    { VkExternalMemoryHandleTypeFlags::VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT_KHR, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT_KHR" },
    { VkExternalMemoryHandleTypeFlags::VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR" },
    { VkExternalMemoryHandleTypeFlags::VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR, "VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR" },
    { VkExternalMemoryHandleTypeFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkExternalMemoryHandleTypeFlagsKHR, std::string> Meta_StringsByVkExternalMemoryHandleTypeFlagsKHR =
{
    { VkExternalMemoryHandleTypeFlagsKHR::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkExternalMemoryHandleTypeFlagsNV, std::string> Meta_StringsByVkExternalMemoryHandleTypeFlagsNV =
{
    { VkExternalMemoryHandleTypeFlagsNV::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkExternalSemaphoreFeatureFlagBitsKHR, std::string> Meta_StringsByVkExternalSemaphoreFeatureFlagBitsKHR =
{
    { VkExternalSemaphoreFeatureFlagBitsKHR::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkExternalSemaphoreFeatureFlags, std::string> Meta_StringsByVkExternalSemaphoreFeatureFlags =
{
    { VkExternalSemaphoreFeatureFlags::VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT_KHR, "VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT_KHR" },
    { VkExternalSemaphoreFeatureFlags::VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT_KHR, "VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT_KHR" },
    { VkExternalSemaphoreFeatureFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkExternalSemaphoreFeatureFlagsKHR, std::string> Meta_StringsByVkExternalSemaphoreFeatureFlagsKHR =
{
    { VkExternalSemaphoreFeatureFlagsKHR::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkExternalSemaphoreHandleTypeFlagBitsKHR, std::string> Meta_StringsByVkExternalSemaphoreHandleTypeFlagBitsKHR =
{
    { VkExternalSemaphoreHandleTypeFlagBitsKHR::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkExternalSemaphoreHandleTypeFlags, std::string> Meta_StringsByVkExternalSemaphoreHandleTypeFlags =
{
    { VkExternalSemaphoreHandleTypeFlags::VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT_KHR, "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT_KHR" },
    { VkExternalSemaphoreHandleTypeFlags::VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR, "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR" },
    { VkExternalSemaphoreHandleTypeFlags::VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR, "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR" },
    { VkExternalSemaphoreHandleTypeFlags::VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR, "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR" },
    { VkExternalSemaphoreHandleTypeFlags::VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT_KHR, "VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT_KHR" },
    { VkExternalSemaphoreHandleTypeFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkExternalSemaphoreHandleTypeFlagsKHR, std::string> Meta_StringsByVkExternalSemaphoreHandleTypeFlagsKHR =
{
    { VkExternalSemaphoreHandleTypeFlagsKHR::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkFenceCreateFlags, std::string> Meta_StringsByVkFenceCreateFlags =
{
    { VkFenceCreateFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkFenceImportFlagBitsKHR, std::string> Meta_StringsByVkFenceImportFlagBitsKHR =
{
    { VkFenceImportFlagBitsKHR::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkFenceImportFlags, std::string> Meta_StringsByVkFenceImportFlags =
{
    { VkFenceImportFlags::VK_FENCE_IMPORT_TEMPORARY_BIT_KHR, "VK_FENCE_IMPORT_TEMPORARY_BIT_KHR" },
    { VkFenceImportFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkFenceImportFlagsKHR, std::string> Meta_StringsByVkFenceImportFlagsKHR =
{
    { VkFenceImportFlagsKHR::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkFormatFeatureFlags, std::string> Meta_StringsByVkFormatFeatureFlags =
{
    { VkFormatFeatureFlags::VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT, "VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT" },
    { VkFormatFeatureFlags::VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT_KHR, "VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT_KHR" },
    { VkFormatFeatureFlags::VK_FORMAT_FEATURE_DISJOINT_BIT, "VK_FORMAT_FEATURE_DISJOINT_BIT" },
    { VkFormatFeatureFlags::VK_FORMAT_FEATURE_DISJOINT_BIT_KHR, "VK_FORMAT_FEATURE_DISJOINT_BIT_KHR" },
    { VkFormatFeatureFlags::VK_FORMAT_FEATURE_FRAGMENT_DENSITY_MAP_BIT_EXT, "VK_FORMAT_FEATURE_FRAGMENT_DENSITY_MAP_BIT_EXT" },
    { VkFormatFeatureFlags::VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT, "VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT" },
    { VkFormatFeatureFlags::VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT_KHR, "VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT_KHR" },
    { VkFormatFeatureFlags::VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_EXT, "VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_EXT" },
    { VkFormatFeatureFlags::VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG, "VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG" },
    { VkFormatFeatureFlags::VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT_EXT, "VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT_EXT" },
    { VkFormatFeatureFlags::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT, "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT" },
    { VkFormatFeatureFlags::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT_KHR, "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT_KHR" },
    { VkFormatFeatureFlags::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT, "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT" },
    { VkFormatFeatureFlags::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT_KHR, "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT_KHR" },
    { VkFormatFeatureFlags::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT, "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT" },
    { VkFormatFeatureFlags::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT_KHR, "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT_KHR" },
    { VkFormatFeatureFlags::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT, "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT" },
    { VkFormatFeatureFlags::VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT_KHR, "VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT_KHR" },
    { VkFormatFeatureFlags::VK_FORMAT_FEATURE_TRANSFER_DST_BIT, "VK_FORMAT_FEATURE_TRANSFER_DST_BIT" },
    { VkFormatFeatureFlags::VK_FORMAT_FEATURE_TRANSFER_DST_BIT_KHR, "VK_FORMAT_FEATURE_TRANSFER_DST_BIT_KHR" },
    { VkFormatFeatureFlags::VK_FORMAT_FEATURE_TRANSFER_SRC_BIT, "VK_FORMAT_FEATURE_TRANSFER_SRC_BIT" },
    { VkFormatFeatureFlags::VK_FORMAT_FEATURE_TRANSFER_SRC_BIT_KHR, "VK_FORMAT_FEATURE_TRANSFER_SRC_BIT_KHR" },
    { VkFormatFeatureFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkFramebufferCreateFlags, std::string> Meta_StringsByVkFramebufferCreateFlags =
{
    { VkFramebufferCreateFlags::VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT_KHR, "VK_FRAMEBUFFER_CREATE_IMAGELESS_BIT_KHR" },
    { VkFramebufferCreateFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkGeometryFlagsNV, std::string> Meta_StringsByVkGeometryFlagsNV =
{
    { VkGeometryFlagsNV::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkGeometryInstanceFlagsNV, std::string> Meta_StringsByVkGeometryInstanceFlagsNV =
{
    { VkGeometryInstanceFlagsNV::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkHeadlessSurfaceCreateFlagsEXT, std::string> Meta_StringsByVkHeadlessSurfaceCreateFlagsEXT =
{
    { VkHeadlessSurfaceCreateFlagsEXT::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkImageAspectFlags, std::string> Meta_StringsByVkImageAspectFlags =
{
    { VkImageAspectFlags::VK_IMAGE_ASPECT_MEMORY_PLANE_0_BIT_EXT, "VK_IMAGE_ASPECT_MEMORY_PLANE_0_BIT_EXT" },
    { VkImageAspectFlags::VK_IMAGE_ASPECT_MEMORY_PLANE_1_BIT_EXT, "VK_IMAGE_ASPECT_MEMORY_PLANE_1_BIT_EXT" },
    { VkImageAspectFlags::VK_IMAGE_ASPECT_MEMORY_PLANE_2_BIT_EXT, "VK_IMAGE_ASPECT_MEMORY_PLANE_2_BIT_EXT" },
    { VkImageAspectFlags::VK_IMAGE_ASPECT_MEMORY_PLANE_3_BIT_EXT, "VK_IMAGE_ASPECT_MEMORY_PLANE_3_BIT_EXT" },
    { VkImageAspectFlags::VK_IMAGE_ASPECT_PLANE_0_BIT, "VK_IMAGE_ASPECT_PLANE_0_BIT" },
    { VkImageAspectFlags::VK_IMAGE_ASPECT_PLANE_0_BIT_KHR, "VK_IMAGE_ASPECT_PLANE_0_BIT_KHR" },
    { VkImageAspectFlags::VK_IMAGE_ASPECT_PLANE_1_BIT, "VK_IMAGE_ASPECT_PLANE_1_BIT" },
    { VkImageAspectFlags::VK_IMAGE_ASPECT_PLANE_1_BIT_KHR, "VK_IMAGE_ASPECT_PLANE_1_BIT_KHR" },
    { VkImageAspectFlags::VK_IMAGE_ASPECT_PLANE_2_BIT, "VK_IMAGE_ASPECT_PLANE_2_BIT" },
    { VkImageAspectFlags::VK_IMAGE_ASPECT_PLANE_2_BIT_KHR, "VK_IMAGE_ASPECT_PLANE_2_BIT_KHR" },
    { VkImageAspectFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkImageCreateFlags, std::string> Meta_StringsByVkImageCreateFlags =
{
    { VkImageCreateFlags::VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT, "VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT" },
    { VkImageCreateFlags::VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT_KHR, "VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT_KHR" },
    { VkImageCreateFlags::VK_IMAGE_CREATE_ALIAS_BIT, "VK_IMAGE_CREATE_ALIAS_BIT" },
    { VkImageCreateFlags::VK_IMAGE_CREATE_ALIAS_BIT_KHR, "VK_IMAGE_CREATE_ALIAS_BIT_KHR" },
    { VkImageCreateFlags::VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT, "VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT" },
    { VkImageCreateFlags::VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT_KHR, "VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT_KHR" },
    { VkImageCreateFlags::VK_IMAGE_CREATE_CORNER_SAMPLED_BIT_NV, "VK_IMAGE_CREATE_CORNER_SAMPLED_BIT_NV" },
    { VkImageCreateFlags::VK_IMAGE_CREATE_DISJOINT_BIT, "VK_IMAGE_CREATE_DISJOINT_BIT" },
    { VkImageCreateFlags::VK_IMAGE_CREATE_DISJOINT_BIT_KHR, "VK_IMAGE_CREATE_DISJOINT_BIT_KHR" },
    { VkImageCreateFlags::VK_IMAGE_CREATE_EXTENDED_USAGE_BIT, "VK_IMAGE_CREATE_EXTENDED_USAGE_BIT" },
    { VkImageCreateFlags::VK_IMAGE_CREATE_EXTENDED_USAGE_BIT_KHR, "VK_IMAGE_CREATE_EXTENDED_USAGE_BIT_KHR" },
    { VkImageCreateFlags::VK_IMAGE_CREATE_PROTECTED_BIT, "VK_IMAGE_CREATE_PROTECTED_BIT" },
    { VkImageCreateFlags::VK_IMAGE_CREATE_SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_EXT, "VK_IMAGE_CREATE_SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_EXT" },
    { VkImageCreateFlags::VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT, "VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT" },
    { VkImageCreateFlags::VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR, "VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR" },
    { VkImageCreateFlags::VK_IMAGE_CREATE_SUBSAMPLED_BIT_EXT, "VK_IMAGE_CREATE_SUBSAMPLED_BIT_EXT" },
    { VkImageCreateFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkImageUsageFlags, std::string> Meta_StringsByVkImageUsageFlags =
{
    { VkImageUsageFlags::VK_IMAGE_USAGE_FRAGMENT_DENSITY_MAP_BIT_EXT, "VK_IMAGE_USAGE_FRAGMENT_DENSITY_MAP_BIT_EXT" },
    { VkImageUsageFlags::VK_IMAGE_USAGE_SHADING_RATE_IMAGE_BIT_NV, "VK_IMAGE_USAGE_SHADING_RATE_IMAGE_BIT_NV" },
    { VkImageUsageFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkImageViewCreateFlags, std::string> Meta_StringsByVkImageViewCreateFlags =
{
    { VkImageViewCreateFlags::VK_IMAGE_VIEW_CREATE_FRAGMENT_DENSITY_MAP_DYNAMIC_BIT_EXT, "VK_IMAGE_VIEW_CREATE_FRAGMENT_DENSITY_MAP_DYNAMIC_BIT_EXT" },
    { VkImageViewCreateFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkIndirectCommandsLayoutUsageFlagsNVX, std::string> Meta_StringsByVkIndirectCommandsLayoutUsageFlagsNVX =
{
    { VkIndirectCommandsLayoutUsageFlagsNVX::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkInstanceCreateFlags, std::string> Meta_StringsByVkInstanceCreateFlags =
{
    { VkInstanceCreateFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkMemoryAllocateFlagBitsKHR, std::string> Meta_StringsByVkMemoryAllocateFlagBitsKHR =
{
    { VkMemoryAllocateFlagBitsKHR::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkMemoryAllocateFlags, std::string> Meta_StringsByVkMemoryAllocateFlags =
{
    { VkMemoryAllocateFlags::VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT_KHR, "VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT_KHR" },
    { VkMemoryAllocateFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkMemoryAllocateFlagsKHR, std::string> Meta_StringsByVkMemoryAllocateFlagsKHR =
{
    { VkMemoryAllocateFlagsKHR::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkMemoryHeapFlags, std::string> Meta_StringsByVkMemoryHeapFlags =
{
    { VkMemoryHeapFlags::VK_MEMORY_HEAP_MULTI_INSTANCE_BIT, "VK_MEMORY_HEAP_MULTI_INSTANCE_BIT" },
    { VkMemoryHeapFlags::VK_MEMORY_HEAP_MULTI_INSTANCE_BIT_KHR, "VK_MEMORY_HEAP_MULTI_INSTANCE_BIT_KHR" },
    { VkMemoryHeapFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkMemoryMapFlags, std::string> Meta_StringsByVkMemoryMapFlags =
{
    { VkMemoryMapFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkMemoryPropertyFlags, std::string> Meta_StringsByVkMemoryPropertyFlags =
{
    { VkMemoryPropertyFlags::VK_MEMORY_PROPERTY_PROTECTED_BIT, "VK_MEMORY_PROPERTY_PROTECTED_BIT" },
    { VkMemoryPropertyFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkObjectEntryUsageFlagsNVX, std::string> Meta_StringsByVkObjectEntryUsageFlagsNVX =
{
    { VkObjectEntryUsageFlagsNVX::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkPeerMemoryFeatureFlagBitsKHR, std::string> Meta_StringsByVkPeerMemoryFeatureFlagBitsKHR =
{
    { VkPeerMemoryFeatureFlagBitsKHR::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkPeerMemoryFeatureFlags, std::string> Meta_StringsByVkPeerMemoryFeatureFlags =
{
    { VkPeerMemoryFeatureFlags::VK_NONE_BIT, "VK_NONE_BIT" },
    { VkPeerMemoryFeatureFlags::VK_PEER_MEMORY_FEATURE_COPY_DST_BIT_KHR, "VK_PEER_MEMORY_FEATURE_COPY_DST_BIT_KHR" },
    { VkPeerMemoryFeatureFlags::VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT_KHR, "VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT_KHR" },
    { VkPeerMemoryFeatureFlags::VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT_KHR, "VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT_KHR" },
    { VkPeerMemoryFeatureFlags::VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT_KHR, "VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT_KHR" }
};

const std::unordered_map<VkPeerMemoryFeatureFlagsKHR, std::string> Meta_StringsByVkPeerMemoryFeatureFlagsKHR =
{
    { VkPeerMemoryFeatureFlagsKHR::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkPipelineCacheCreateFlags, std::string> Meta_StringsByVkPipelineCacheCreateFlags =
{
    { VkPipelineCacheCreateFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkPipelineColorBlendStateCreateFlags, std::string> Meta_StringsByVkPipelineColorBlendStateCreateFlags =
{
    { VkPipelineColorBlendStateCreateFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkPipelineCompilerControlFlagsAMD, std::string> Meta_StringsByVkPipelineCompilerControlFlagsAMD =
{
    { VkPipelineCompilerControlFlagsAMD::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkPipelineCoverageModulationStateCreateFlagsNV, std::string> Meta_StringsByVkPipelineCoverageModulationStateCreateFlagsNV =
{
    { VkPipelineCoverageModulationStateCreateFlagsNV::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkPipelineCoverageReductionStateCreateFlagsNV, std::string> Meta_StringsByVkPipelineCoverageReductionStateCreateFlagsNV =
{
    { VkPipelineCoverageReductionStateCreateFlagsNV::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkPipelineCoverageToColorStateCreateFlagsNV, std::string> Meta_StringsByVkPipelineCoverageToColorStateCreateFlagsNV =
{
    { VkPipelineCoverageToColorStateCreateFlagsNV::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkPipelineCreateFlags, std::string> Meta_StringsByVkPipelineCreateFlags =
{
    { VkPipelineCreateFlags::VK_NONE_BIT, "VK_NONE_BIT" },
    { VkPipelineCreateFlags::VK_PIPELINE_CREATE_CAPTURE_INTERNAL_REPRESENTATIONS_BIT_KHR, "VK_PIPELINE_CREATE_CAPTURE_INTERNAL_REPRESENTATIONS_BIT_KHR" },
    { VkPipelineCreateFlags::VK_PIPELINE_CREATE_CAPTURE_STATISTICS_BIT_KHR, "VK_PIPELINE_CREATE_CAPTURE_STATISTICS_BIT_KHR" },
    { VkPipelineCreateFlags::VK_PIPELINE_CREATE_DEFER_COMPILE_BIT_NV, "VK_PIPELINE_CREATE_DEFER_COMPILE_BIT_NV" },
    { VkPipelineCreateFlags::VK_PIPELINE_CREATE_DISPATCH_BASE, "VK_PIPELINE_CREATE_DISPATCH_BASE" },
    { VkPipelineCreateFlags::VK_PIPELINE_CREATE_DISPATCH_BASE_KHR, "VK_PIPELINE_CREATE_DISPATCH_BASE_KHR" },
    { VkPipelineCreateFlags::VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT, "VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT" },
    { VkPipelineCreateFlags::VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT_KHR, "VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT_KHR" }
};

const std::unordered_map<VkPipelineCreationFeedbackFlagsEXT, std::string> Meta_StringsByVkPipelineCreationFeedbackFlagsEXT =
{
    { VkPipelineCreationFeedbackFlagsEXT::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkPipelineDepthStencilStateCreateFlags, std::string> Meta_StringsByVkPipelineDepthStencilStateCreateFlags =
{
    { VkPipelineDepthStencilStateCreateFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkPipelineDiscardRectangleStateCreateFlagsEXT, std::string> Meta_StringsByVkPipelineDiscardRectangleStateCreateFlagsEXT =
{
    { VkPipelineDiscardRectangleStateCreateFlagsEXT::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkPipelineDynamicStateCreateFlags, std::string> Meta_StringsByVkPipelineDynamicStateCreateFlags =
{
    { VkPipelineDynamicStateCreateFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkPipelineInputAssemblyStateCreateFlags, std::string> Meta_StringsByVkPipelineInputAssemblyStateCreateFlags =
{
    { VkPipelineInputAssemblyStateCreateFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkPipelineLayoutCreateFlags, std::string> Meta_StringsByVkPipelineLayoutCreateFlags =
{
    { VkPipelineLayoutCreateFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkPipelineMultisampleStateCreateFlags, std::string> Meta_StringsByVkPipelineMultisampleStateCreateFlags =
{
    { VkPipelineMultisampleStateCreateFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkPipelineRasterizationConservativeStateCreateFlagsEXT, std::string> Meta_StringsByVkPipelineRasterizationConservativeStateCreateFlagsEXT =
{
    { VkPipelineRasterizationConservativeStateCreateFlagsEXT::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkPipelineRasterizationDepthClipStateCreateFlagsEXT, std::string> Meta_StringsByVkPipelineRasterizationDepthClipStateCreateFlagsEXT =
{
    { VkPipelineRasterizationDepthClipStateCreateFlagsEXT::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkPipelineRasterizationStateCreateFlags, std::string> Meta_StringsByVkPipelineRasterizationStateCreateFlags =
{
    { VkPipelineRasterizationStateCreateFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkPipelineRasterizationStateStreamCreateFlagsEXT, std::string> Meta_StringsByVkPipelineRasterizationStateStreamCreateFlagsEXT =
{
    { VkPipelineRasterizationStateStreamCreateFlagsEXT::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkPipelineShaderStageCreateFlags, std::string> Meta_StringsByVkPipelineShaderStageCreateFlags =
{
    { VkPipelineShaderStageCreateFlags::VK_NONE_BIT, "VK_NONE_BIT" },
    { VkPipelineShaderStageCreateFlags::VK_PIPELINE_SHADER_STAGE_CREATE_ALLOW_VARYING_SUBGROUP_SIZE_BIT_EXT, "VK_PIPELINE_SHADER_STAGE_CREATE_ALLOW_VARYING_SUBGROUP_SIZE_BIT_EXT" },
    { VkPipelineShaderStageCreateFlags::VK_PIPELINE_SHADER_STAGE_CREATE_REQUIRE_FULL_SUBGROUPS_BIT_EXT, "VK_PIPELINE_SHADER_STAGE_CREATE_REQUIRE_FULL_SUBGROUPS_BIT_EXT" }
};

const std::unordered_map<VkPipelineStageFlags, std::string> Meta_StringsByVkPipelineStageFlags =
{
    { VkPipelineStageFlags::VK_NONE_BIT, "VK_NONE_BIT" },
    { VkPipelineStageFlags::VK_PIPELINE_STAGE_ACCELERATION_STRUCTURE_BUILD_BIT_NV, "VK_PIPELINE_STAGE_ACCELERATION_STRUCTURE_BUILD_BIT_NV" },
    { VkPipelineStageFlags::VK_PIPELINE_STAGE_COMMAND_PROCESS_BIT_NVX, "VK_PIPELINE_STAGE_COMMAND_PROCESS_BIT_NVX" },
    { VkPipelineStageFlags::VK_PIPELINE_STAGE_CONDITIONAL_RENDERING_BIT_EXT, "VK_PIPELINE_STAGE_CONDITIONAL_RENDERING_BIT_EXT" },
    { VkPipelineStageFlags::VK_PIPELINE_STAGE_FRAGMENT_DENSITY_PROCESS_BIT_EXT, "VK_PIPELINE_STAGE_FRAGMENT_DENSITY_PROCESS_BIT_EXT" },
    { VkPipelineStageFlags::VK_PIPELINE_STAGE_MESH_SHADER_BIT_NV, "VK_PIPELINE_STAGE_MESH_SHADER_BIT_NV" },
    { VkPipelineStageFlags::VK_PIPELINE_STAGE_RAY_TRACING_SHADER_BIT_NV, "VK_PIPELINE_STAGE_RAY_TRACING_SHADER_BIT_NV" },
    { VkPipelineStageFlags::VK_PIPELINE_STAGE_SHADING_RATE_IMAGE_BIT_NV, "VK_PIPELINE_STAGE_SHADING_RATE_IMAGE_BIT_NV" },
    { VkPipelineStageFlags::VK_PIPELINE_STAGE_TASK_SHADER_BIT_NV, "VK_PIPELINE_STAGE_TASK_SHADER_BIT_NV" },
    { VkPipelineStageFlags::VK_PIPELINE_STAGE_TRANSFORM_FEEDBACK_BIT_EXT, "VK_PIPELINE_STAGE_TRANSFORM_FEEDBACK_BIT_EXT" }
};

const std::unordered_map<VkPipelineTessellationStateCreateFlags, std::string> Meta_StringsByVkPipelineTessellationStateCreateFlags =
{
    { VkPipelineTessellationStateCreateFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkPipelineVertexInputStateCreateFlags, std::string> Meta_StringsByVkPipelineVertexInputStateCreateFlags =
{
    { VkPipelineVertexInputStateCreateFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkPipelineViewportStateCreateFlags, std::string> Meta_StringsByVkPipelineViewportStateCreateFlags =
{
    { VkPipelineViewportStateCreateFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkPipelineViewportSwizzleStateCreateFlagsNV, std::string> Meta_StringsByVkPipelineViewportSwizzleStateCreateFlagsNV =
{
    { VkPipelineViewportSwizzleStateCreateFlagsNV::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkQueryControlFlags, std::string> Meta_StringsByVkQueryControlFlags =
{
    { VkQueryControlFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkQueryPipelineStatisticFlags, std::string> Meta_StringsByVkQueryPipelineStatisticFlags =
{
    { VkQueryPipelineStatisticFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkQueryPoolCreateFlags, std::string> Meta_StringsByVkQueryPoolCreateFlags =
{
    { VkQueryPoolCreateFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkQueryResultFlags, std::string> Meta_StringsByVkQueryResultFlags =
{
    { VkQueryResultFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkQueueFlags, std::string> Meta_StringsByVkQueueFlags =
{
    { VkQueueFlags::VK_NONE_BIT, "VK_NONE_BIT" },
    { VkQueueFlags::VK_QUEUE_PROTECTED_BIT, "VK_QUEUE_PROTECTED_BIT" }
};

const std::unordered_map<VkRenderPassCreateFlags, std::string> Meta_StringsByVkRenderPassCreateFlags =
{
    { VkRenderPassCreateFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkResolveModeFlagsKHR, std::string> Meta_StringsByVkResolveModeFlagsKHR =
{
    { VkResolveModeFlagsKHR::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkSampleCountFlags, std::string> Meta_StringsByVkSampleCountFlags =
{
    { VkSampleCountFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkSamplerCreateFlags, std::string> Meta_StringsByVkSamplerCreateFlags =
{
    { VkSamplerCreateFlags::VK_NONE_BIT, "VK_NONE_BIT" },
    { VkSamplerCreateFlags::VK_SAMPLER_CREATE_SUBSAMPLED_BIT_EXT, "VK_SAMPLER_CREATE_SUBSAMPLED_BIT_EXT" },
    { VkSamplerCreateFlags::VK_SAMPLER_CREATE_SUBSAMPLED_COARSE_RECONSTRUCTION_BIT_EXT, "VK_SAMPLER_CREATE_SUBSAMPLED_COARSE_RECONSTRUCTION_BIT_EXT" }
};

const std::unordered_map<VkSemaphoreCreateFlags, std::string> Meta_StringsByVkSemaphoreCreateFlags =
{
    { VkSemaphoreCreateFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkSemaphoreImportFlagBitsKHR, std::string> Meta_StringsByVkSemaphoreImportFlagBitsKHR =
{
    { VkSemaphoreImportFlagBitsKHR::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkSemaphoreImportFlags, std::string> Meta_StringsByVkSemaphoreImportFlags =
{
    { VkSemaphoreImportFlags::VK_NONE_BIT, "VK_NONE_BIT" },
    { VkSemaphoreImportFlags::VK_SEMAPHORE_IMPORT_TEMPORARY_BIT_KHR, "VK_SEMAPHORE_IMPORT_TEMPORARY_BIT_KHR" }
};

const std::unordered_map<VkSemaphoreImportFlagsKHR, std::string> Meta_StringsByVkSemaphoreImportFlagsKHR =
{
    { VkSemaphoreImportFlagsKHR::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkShaderCorePropertiesFlagsAMD, std::string> Meta_StringsByVkShaderCorePropertiesFlagsAMD =
{
    { VkShaderCorePropertiesFlagsAMD::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkShaderModuleCreateFlags, std::string> Meta_StringsByVkShaderModuleCreateFlags =
{
    { VkShaderModuleCreateFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkShaderStageFlags, std::string> Meta_StringsByVkShaderStageFlags =
{
    { VkShaderStageFlags::VK_NONE_BIT, "VK_NONE_BIT" },
    { VkShaderStageFlags::VK_SHADER_STAGE_ANY_HIT_BIT_NV, "VK_SHADER_STAGE_ANY_HIT_BIT_NV" },
    { VkShaderStageFlags::VK_SHADER_STAGE_CALLABLE_BIT_NV, "VK_SHADER_STAGE_CALLABLE_BIT_NV" },
    { VkShaderStageFlags::VK_SHADER_STAGE_CLOSEST_HIT_BIT_NV, "VK_SHADER_STAGE_CLOSEST_HIT_BIT_NV" },
    { VkShaderStageFlags::VK_SHADER_STAGE_INTERSECTION_BIT_NV, "VK_SHADER_STAGE_INTERSECTION_BIT_NV" },
    { VkShaderStageFlags::VK_SHADER_STAGE_MESH_BIT_NV, "VK_SHADER_STAGE_MESH_BIT_NV" },
    { VkShaderStageFlags::VK_SHADER_STAGE_MISS_BIT_NV, "VK_SHADER_STAGE_MISS_BIT_NV" },
    { VkShaderStageFlags::VK_SHADER_STAGE_RAYGEN_BIT_NV, "VK_SHADER_STAGE_RAYGEN_BIT_NV" },
    { VkShaderStageFlags::VK_SHADER_STAGE_TASK_BIT_NV, "VK_SHADER_STAGE_TASK_BIT_NV" }
};

const std::unordered_map<VkSparseImageFormatFlags, std::string> Meta_StringsByVkSparseImageFormatFlags =
{
    { VkSparseImageFormatFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkSparseMemoryBindFlags, std::string> Meta_StringsByVkSparseMemoryBindFlags =
{
    { VkSparseMemoryBindFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkStencilFaceFlags, std::string> Meta_StringsByVkStencilFaceFlags =
{
    { VkStencilFaceFlags::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkSubgroupFeatureFlags, std::string> Meta_StringsByVkSubgroupFeatureFlags =
{
    { VkSubgroupFeatureFlags::VK_NONE_BIT, "VK_NONE_BIT" },
    { VkSubgroupFeatureFlags::VK_SUBGROUP_FEATURE_PARTITIONED_BIT_NV, "VK_SUBGROUP_FEATURE_PARTITIONED_BIT_NV" }
};

const std::unordered_map<VkSubpassDescriptionFlags, std::string> Meta_StringsByVkSubpassDescriptionFlags =
{
    { VkSubpassDescriptionFlags::VK_NONE_BIT, "VK_NONE_BIT" },
    { VkSubpassDescriptionFlags::VK_SUBPASS_DESCRIPTION_PER_VIEW_ATTRIBUTES_BIT_NVX, "VK_SUBPASS_DESCRIPTION_PER_VIEW_ATTRIBUTES_BIT_NVX" },
    { VkSubpassDescriptionFlags::VK_SUBPASS_DESCRIPTION_PER_VIEW_POSITION_X_ONLY_BIT_NVX, "VK_SUBPASS_DESCRIPTION_PER_VIEW_POSITION_X_ONLY_BIT_NVX" }
};

const std::unordered_map<VkSurfaceCounterFlagsEXT, std::string> Meta_StringsByVkSurfaceCounterFlagsEXT =
{
    { VkSurfaceCounterFlagsEXT::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkSurfaceTransformFlagsKHR, std::string> Meta_StringsByVkSurfaceTransformFlagsKHR =
{
    { VkSurfaceTransformFlagsKHR::VK_NONE_BIT, "VK_NONE_BIT" }
};

const std::unordered_map<VkSwapchainCreateFlagsKHR, std::string> Meta_StringsByVkSwapchainCreateFlagsKHR =
{
    { VkSwapchainCreateFlagsKHR::VK_NONE_BIT, "VK_NONE_BIT" },
    { VkSwapchainCreateFlagsKHR::VK_SWAPCHAIN_CREATE_MUTABLE_FORMAT_BIT_KHR, "VK_SWAPCHAIN_CREATE_MUTABLE_FORMAT_BIT_KHR" },
    { VkSwapchainCreateFlagsKHR::VK_SWAPCHAIN_CREATE_PROTECTED_BIT_KHR, "VK_SWAPCHAIN_CREATE_PROTECTED_BIT_KHR" },
    { VkSwapchainCreateFlagsKHR::VK_SWAPCHAIN_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR, "VK_SWAPCHAIN_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR" }
};

const std::unordered_map<VkValidationCacheCreateFlagsEXT, std::string> Meta_StringsByVkValidationCacheCreateFlagsEXT =
{
    { VkValidationCacheCreateFlagsEXT::VK_NONE_BIT, "VK_NONE_BIT" }
};


} } // namespace vkbinding::aux