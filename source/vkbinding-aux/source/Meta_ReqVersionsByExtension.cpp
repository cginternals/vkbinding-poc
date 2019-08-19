
#include "Meta_Maps.h"

#include <vkbinding/vk/extension.h>
#include <vkbinding/Version.h>


using namespace vk;


namespace vkbinding { namespace aux
{


const std::unordered_map<VKextension, Version> Meta_ReqVersionsByExtension =
{
    { VKextension::VK_KHR_16bit_storage, { 1, 1 } },
    { VKextension::VK_KHR_bind_memory2, { 1, 1 } },
    { VKextension::VK_KHR_dedicated_allocation, { 1, 1 } },
    { VKextension::VK_KHR_descriptor_update_template, { 1, 1 } },
    { VKextension::VK_KHR_device_group, { 1, 1 } },
    { VKextension::VK_KHR_device_group_creation, { 1, 1 } },
    { VKextension::VK_KHR_external_fence, { 1, 1 } },
    { VKextension::VK_KHR_external_fence_capabilities, { 1, 1 } },
    { VKextension::VK_KHR_external_memory, { 1, 1 } },
    { VKextension::VK_KHR_external_memory_capabilities, { 1, 1 } },
    { VKextension::VK_KHR_external_semaphore, { 1, 1 } },
    { VKextension::VK_KHR_external_semaphore_capabilities, { 1, 1 } },
    { VKextension::VK_KHR_get_memory_requirements2, { 1, 1 } },
    { VKextension::VK_KHR_get_physical_device_properties2, { 1, 1 } },
    { VKextension::VK_KHR_maintenance1, { 1, 1 } },
    { VKextension::VK_KHR_maintenance2, { 1, 1 } },
    { VKextension::VK_KHR_maintenance3, { 1, 1 } },
    { VKextension::VK_KHR_multiview, { 1, 1 } },
    { VKextension::VK_KHR_relaxed_block_layout, { 1, 1 } },
    { VKextension::VK_KHR_sampler_ycbcr_conversion, { 1, 1 } },
    { VKextension::VK_KHR_shader_draw_parameters, { 1, 1 } },
    { VKextension::VK_KHR_storage_buffer_storage_class, { 1, 1 } },
    { VKextension::VK_KHR_variable_pointers, { 1, 1 } }
};


} } // namespace vkbinding::aux