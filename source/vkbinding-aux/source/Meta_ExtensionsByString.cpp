
#include "Meta_Maps.h"

#include <vkbinding/vk/extension.h>


using namespace vk;


namespace vkbinding { namespace aux
{


const std::unordered_map<std::string, VKextension> Meta_ExtensionsByString_0{};

const std::unordered_map<std::string, VKextension> Meta_ExtensionsByString_A =
{
    { "VK_AMD_buffer_marker", VKextension::VK_AMD_buffer_marker },
    { "VK_AMD_display_native_hdr", VKextension::VK_AMD_display_native_hdr },
    { "VK_AMD_draw_indirect_count", VKextension::VK_AMD_draw_indirect_count },
    { "VK_AMD_gcn_shader", VKextension::VK_AMD_gcn_shader },
    { "VK_AMD_gpu_shader_half_float", VKextension::VK_AMD_gpu_shader_half_float },
    { "VK_AMD_gpu_shader_int16", VKextension::VK_AMD_gpu_shader_int16 },
    { "VK_AMD_memory_overallocation_behavior", VKextension::VK_AMD_memory_overallocation_behavior },
    { "VK_AMD_mixed_attachment_samples", VKextension::VK_AMD_mixed_attachment_samples },
    { "VK_AMD_negative_viewport_height", VKextension::VK_AMD_negative_viewport_height },
    { "VK_AMD_pipeline_compiler_control", VKextension::VK_AMD_pipeline_compiler_control },
    { "VK_AMD_rasterization_order", VKextension::VK_AMD_rasterization_order },
    { "VK_AMD_shader_ballot", VKextension::VK_AMD_shader_ballot },
    { "VK_AMD_shader_core_properties", VKextension::VK_AMD_shader_core_properties },
    { "VK_AMD_shader_core_properties2", VKextension::VK_AMD_shader_core_properties2 },
    { "VK_AMD_shader_explicit_vertex_parameter", VKextension::VK_AMD_shader_explicit_vertex_parameter },
    { "VK_AMD_shader_fragment_mask", VKextension::VK_AMD_shader_fragment_mask },
    { "VK_AMD_shader_image_load_store_lod", VKextension::VK_AMD_shader_image_load_store_lod },
    { "VK_AMD_shader_info", VKextension::VK_AMD_shader_info },
    { "VK_AMD_shader_trinary_minmax", VKextension::VK_AMD_shader_trinary_minmax },
    { "VK_AMD_texture_gather_bias_lod", VKextension::VK_AMD_texture_gather_bias_lod }
};

const std::unordered_map<std::string, VKextension> Meta_ExtensionsByString_B{};

const std::unordered_map<std::string, VKextension> Meta_ExtensionsByString_C{};

const std::unordered_map<std::string, VKextension> Meta_ExtensionsByString_D{};

const std::unordered_map<std::string, VKextension> Meta_ExtensionsByString_E =
{
    { "VK_EXT_astc_decode_mode", VKextension::VK_EXT_astc_decode_mode },
    { "VK_EXT_blend_operation_advanced", VKextension::VK_EXT_blend_operation_advanced },
    { "VK_EXT_buffer_device_address", VKextension::VK_EXT_buffer_device_address },
    { "VK_EXT_calibrated_timestamps", VKextension::VK_EXT_calibrated_timestamps },
    { "VK_EXT_conditional_rendering", VKextension::VK_EXT_conditional_rendering },
    { "VK_EXT_conservative_rasterization", VKextension::VK_EXT_conservative_rasterization },
    { "VK_EXT_debug_marker", VKextension::VK_EXT_debug_marker },
    { "VK_EXT_debug_report", VKextension::VK_EXT_debug_report },
    { "VK_EXT_debug_utils", VKextension::VK_EXT_debug_utils },
    { "VK_EXT_depth_clip_enable", VKextension::VK_EXT_depth_clip_enable },
    { "VK_EXT_depth_range_unrestricted", VKextension::VK_EXT_depth_range_unrestricted },
    { "VK_EXT_descriptor_indexing", VKextension::VK_EXT_descriptor_indexing },
    { "VK_EXT_direct_mode_display", VKextension::VK_EXT_direct_mode_display },
    { "VK_EXT_discard_rectangles", VKextension::VK_EXT_discard_rectangles },
    { "VK_EXT_display_control", VKextension::VK_EXT_display_control },
    { "VK_EXT_display_surface_counter", VKextension::VK_EXT_display_surface_counter },
    { "VK_EXT_external_memory_dma_buf", VKextension::VK_EXT_external_memory_dma_buf },
    { "VK_EXT_external_memory_host", VKextension::VK_EXT_external_memory_host },
    { "VK_EXT_filter_cubic", VKextension::VK_EXT_filter_cubic },
    { "VK_EXT_fragment_density_map", VKextension::VK_EXT_fragment_density_map },
    { "VK_EXT_fragment_shader_interlock", VKextension::VK_EXT_fragment_shader_interlock },
    { "VK_EXT_global_priority", VKextension::VK_EXT_global_priority },
    { "VK_EXT_hdr_metadata", VKextension::VK_EXT_hdr_metadata },
    { "VK_EXT_headless_surface", VKextension::VK_EXT_headless_surface },
    { "VK_EXT_host_query_reset", VKextension::VK_EXT_host_query_reset },
    { "VK_EXT_image_drm_format_modifier", VKextension::VK_EXT_image_drm_format_modifier },
    { "VK_EXT_index_type_uint8", VKextension::VK_EXT_index_type_uint8 },
    { "VK_EXT_inline_uniform_block", VKextension::VK_EXT_inline_uniform_block },
    { "VK_EXT_line_rasterization", VKextension::VK_EXT_line_rasterization },
    { "VK_EXT_memory_budget", VKextension::VK_EXT_memory_budget },
    { "VK_EXT_memory_priority", VKextension::VK_EXT_memory_priority },
    { "VK_EXT_pci_bus_info", VKextension::VK_EXT_pci_bus_info },
    { "VK_EXT_pipeline_creation_feedback", VKextension::VK_EXT_pipeline_creation_feedback },
    { "VK_EXT_post_depth_coverage", VKextension::VK_EXT_post_depth_coverage },
    { "VK_EXT_queue_family_foreign", VKextension::VK_EXT_queue_family_foreign },
    { "VK_EXT_sample_locations", VKextension::VK_EXT_sample_locations },
    { "VK_EXT_sampler_filter_minmax", VKextension::VK_EXT_sampler_filter_minmax },
    { "VK_EXT_scalar_block_layout", VKextension::VK_EXT_scalar_block_layout },
    { "VK_EXT_separate_stencil_usage", VKextension::VK_EXT_separate_stencil_usage },
    { "VK_EXT_shader_demote_to_helper_invocation", VKextension::VK_EXT_shader_demote_to_helper_invocation },
    { "VK_EXT_shader_stencil_export", VKextension::VK_EXT_shader_stencil_export },
    { "VK_EXT_shader_subgroup_ballot", VKextension::VK_EXT_shader_subgroup_ballot },
    { "VK_EXT_shader_subgroup_vote", VKextension::VK_EXT_shader_subgroup_vote },
    { "VK_EXT_shader_viewport_index_layer", VKextension::VK_EXT_shader_viewport_index_layer },
    { "VK_EXT_subgroup_size_control", VKextension::VK_EXT_subgroup_size_control },
    { "VK_EXT_swapchain_colorspace", VKextension::VK_EXT_swapchain_colorspace },
    { "VK_EXT_texel_buffer_alignment", VKextension::VK_EXT_texel_buffer_alignment },
    { "VK_EXT_texture_compression_astc_hdr", VKextension::VK_EXT_texture_compression_astc_hdr },
    { "VK_EXT_transform_feedback", VKextension::VK_EXT_transform_feedback },
    { "VK_EXT_validation_cache", VKextension::VK_EXT_validation_cache },
    { "VK_EXT_validation_features", VKextension::VK_EXT_validation_features },
    { "VK_EXT_validation_flags", VKextension::VK_EXT_validation_flags },
    { "VK_EXT_vertex_attribute_divisor", VKextension::VK_EXT_vertex_attribute_divisor },
    { "VK_EXT_ycbcr_image_arrays", VKextension::VK_EXT_ycbcr_image_arrays }
};

const std::unordered_map<std::string, VKextension> Meta_ExtensionsByString_F{};

const std::unordered_map<std::string, VKextension> Meta_ExtensionsByString_G =
{
    { "VK_GOOGLE_decorate_string", VKextension::VK_GOOGLE_decorate_string },
    { "VK_GOOGLE_display_timing", VKextension::VK_GOOGLE_display_timing },
    { "VK_GOOGLE_hlsl_functionality1", VKextension::VK_GOOGLE_hlsl_functionality1 }
};

const std::unordered_map<std::string, VKextension> Meta_ExtensionsByString_H{};

const std::unordered_map<std::string, VKextension> Meta_ExtensionsByString_I =
{
    { "VK_IMG_filter_cubic", VKextension::VK_IMG_filter_cubic },
    { "VK_IMG_format_pvrtc", VKextension::VK_IMG_format_pvrtc },
    { "VK_INTEL_performance_query", VKextension::VK_INTEL_performance_query },
    { "VK_INTEL_shader_integer_functions2", VKextension::VK_INTEL_shader_integer_functions2 }
};

const std::unordered_map<std::string, VKextension> Meta_ExtensionsByString_J{};

const std::unordered_map<std::string, VKextension> Meta_ExtensionsByString_K =
{
    { "VK_KHR_16bit_storage", VKextension::VK_KHR_16bit_storage },
    { "VK_KHR_8bit_storage", VKextension::VK_KHR_8bit_storage },
    { "VK_KHR_bind_memory2", VKextension::VK_KHR_bind_memory2 },
    { "VK_KHR_create_renderpass2", VKextension::VK_KHR_create_renderpass2 },
    { "VK_KHR_dedicated_allocation", VKextension::VK_KHR_dedicated_allocation },
    { "VK_KHR_depth_stencil_resolve", VKextension::VK_KHR_depth_stencil_resolve },
    { "VK_KHR_descriptor_update_template", VKextension::VK_KHR_descriptor_update_template },
    { "VK_KHR_device_group", VKextension::VK_KHR_device_group },
    { "VK_KHR_device_group_creation", VKextension::VK_KHR_device_group_creation },
    { "VK_KHR_display", VKextension::VK_KHR_display },
    { "VK_KHR_display_swapchain", VKextension::VK_KHR_display_swapchain },
    { "VK_KHR_draw_indirect_count", VKextension::VK_KHR_draw_indirect_count },
    { "VK_KHR_driver_properties", VKextension::VK_KHR_driver_properties },
    { "VK_KHR_external_fence", VKextension::VK_KHR_external_fence },
    { "VK_KHR_external_fence_capabilities", VKextension::VK_KHR_external_fence_capabilities },
    { "VK_KHR_external_fence_fd", VKextension::VK_KHR_external_fence_fd },
    { "VK_KHR_external_memory", VKextension::VK_KHR_external_memory },
    { "VK_KHR_external_memory_capabilities", VKextension::VK_KHR_external_memory_capabilities },
    { "VK_KHR_external_memory_fd", VKextension::VK_KHR_external_memory_fd },
    { "VK_KHR_external_semaphore", VKextension::VK_KHR_external_semaphore },
    { "VK_KHR_external_semaphore_capabilities", VKextension::VK_KHR_external_semaphore_capabilities },
    { "VK_KHR_external_semaphore_fd", VKextension::VK_KHR_external_semaphore_fd },
    { "VK_KHR_get_display_properties2", VKextension::VK_KHR_get_display_properties2 },
    { "VK_KHR_get_memory_requirements2", VKextension::VK_KHR_get_memory_requirements2 },
    { "VK_KHR_get_physical_device_properties2", VKextension::VK_KHR_get_physical_device_properties2 },
    { "VK_KHR_get_surface_capabilities2", VKextension::VK_KHR_get_surface_capabilities2 },
    { "VK_KHR_image_format_list", VKextension::VK_KHR_image_format_list },
    { "VK_KHR_imageless_framebuffer", VKextension::VK_KHR_imageless_framebuffer },
    { "VK_KHR_incremental_present", VKextension::VK_KHR_incremental_present },
    { "VK_KHR_maintenance1", VKextension::VK_KHR_maintenance1 },
    { "VK_KHR_maintenance2", VKextension::VK_KHR_maintenance2 },
    { "VK_KHR_maintenance3", VKextension::VK_KHR_maintenance3 },
    { "VK_KHR_multiview", VKextension::VK_KHR_multiview },
    { "VK_KHR_pipeline_executable_properties", VKextension::VK_KHR_pipeline_executable_properties },
    { "VK_KHR_push_descriptor", VKextension::VK_KHR_push_descriptor },
    { "VK_KHR_relaxed_block_layout", VKextension::VK_KHR_relaxed_block_layout },
    { "VK_KHR_sampler_mirror_clamp_to_edge", VKextension::VK_KHR_sampler_mirror_clamp_to_edge },
    { "VK_KHR_sampler_ycbcr_conversion", VKextension::VK_KHR_sampler_ycbcr_conversion },
    { "VK_KHR_shader_atomic_int64", VKextension::VK_KHR_shader_atomic_int64 },
    { "VK_KHR_shader_draw_parameters", VKextension::VK_KHR_shader_draw_parameters },
    { "VK_KHR_shader_float16_int8", VKextension::VK_KHR_shader_float16_int8 },
    { "VK_KHR_shader_float_controls", VKextension::VK_KHR_shader_float_controls },
    { "VK_KHR_shared_presentable_image", VKextension::VK_KHR_shared_presentable_image },
    { "VK_KHR_storage_buffer_storage_class", VKextension::VK_KHR_storage_buffer_storage_class },
    { "VK_KHR_surface", VKextension::VK_KHR_surface },
    { "VK_KHR_surface_protected_capabilities", VKextension::VK_KHR_surface_protected_capabilities },
    { "VK_KHR_swapchain", VKextension::VK_KHR_swapchain },
    { "VK_KHR_swapchain_mutable_format", VKextension::VK_KHR_swapchain_mutable_format },
    { "VK_KHR_uniform_buffer_standard_layout", VKextension::VK_KHR_uniform_buffer_standard_layout },
    { "VK_KHR_variable_pointers", VKextension::VK_KHR_variable_pointers },
    { "VK_KHR_vulkan_memory_model", VKextension::VK_KHR_vulkan_memory_model }
};

const std::unordered_map<std::string, VKextension> Meta_ExtensionsByString_L{};

const std::unordered_map<std::string, VKextension> Meta_ExtensionsByString_M{};

const std::unordered_map<std::string, VKextension> Meta_ExtensionsByString_N =
{
    { "VK_NV_clip_space_w_scaling", VKextension::VK_NV_clip_space_w_scaling },
    { "VK_NV_compute_shader_derivatives", VKextension::VK_NV_compute_shader_derivatives },
    { "VK_NV_cooperative_matrix", VKextension::VK_NV_cooperative_matrix },
    { "VK_NV_corner_sampled_image", VKextension::VK_NV_corner_sampled_image },
    { "VK_NV_coverage_reduction_mode", VKextension::VK_NV_coverage_reduction_mode },
    { "VK_NV_dedicated_allocation", VKextension::VK_NV_dedicated_allocation },
    { "VK_NV_dedicated_allocation_image_aliasing", VKextension::VK_NV_dedicated_allocation_image_aliasing },
    { "VK_NV_device_diagnostic_checkpoints", VKextension::VK_NV_device_diagnostic_checkpoints },
    { "VK_NV_external_memory", VKextension::VK_NV_external_memory },
    { "VK_NV_external_memory_capabilities", VKextension::VK_NV_external_memory_capabilities },
    { "VK_NV_fill_rectangle", VKextension::VK_NV_fill_rectangle },
    { "VK_NV_fragment_coverage_to_color", VKextension::VK_NV_fragment_coverage_to_color },
    { "VK_NV_fragment_shader_barycentric", VKextension::VK_NV_fragment_shader_barycentric },
    { "VK_NV_framebuffer_mixed_samples", VKextension::VK_NV_framebuffer_mixed_samples },
    { "VK_NV_geometry_shader_passthrough", VKextension::VK_NV_geometry_shader_passthrough },
    { "VK_NV_glsl_shader", VKextension::VK_NV_glsl_shader },
    { "VK_NV_mesh_shader", VKextension::VK_NV_mesh_shader },
    { "VK_NV_ray_tracing", VKextension::VK_NV_ray_tracing },
    { "VK_NV_representative_fragment_test", VKextension::VK_NV_representative_fragment_test },
    { "VK_NV_sample_mask_override_coverage", VKextension::VK_NV_sample_mask_override_coverage },
    { "VK_NV_scissor_exclusive", VKextension::VK_NV_scissor_exclusive },
    { "VK_NV_shader_image_footprint", VKextension::VK_NV_shader_image_footprint },
    { "VK_NV_shader_sm_builtins", VKextension::VK_NV_shader_sm_builtins },
    { "VK_NV_shader_subgroup_partitioned", VKextension::VK_NV_shader_subgroup_partitioned },
    { "VK_NV_shading_rate_image", VKextension::VK_NV_shading_rate_image },
    { "VK_NV_viewport_array2", VKextension::VK_NV_viewport_array2 },
    { "VK_NV_viewport_swizzle", VKextension::VK_NV_viewport_swizzle },
    { "VK_NVX_device_generated_commands", VKextension::VK_NVX_device_generated_commands },
    { "VK_NVX_image_view_handle", VKextension::VK_NVX_image_view_handle },
    { "VK_NVX_multiview_per_view_attributes", VKextension::VK_NVX_multiview_per_view_attributes }
};

const std::unordered_map<std::string, VKextension> Meta_ExtensionsByString_O{};

const std::unordered_map<std::string, VKextension> Meta_ExtensionsByString_P{};

const std::unordered_map<std::string, VKextension> Meta_ExtensionsByString_Q{};

const std::unordered_map<std::string, VKextension> Meta_ExtensionsByString_R{};

const std::unordered_map<std::string, VKextension> Meta_ExtensionsByString_S{};

const std::unordered_map<std::string, VKextension> Meta_ExtensionsByString_T{};

const std::unordered_map<std::string, VKextension> Meta_ExtensionsByString_U{};

const std::unordered_map<std::string, VKextension> Meta_ExtensionsByString_V{};

const std::unordered_map<std::string, VKextension> Meta_ExtensionsByString_W{};

const std::unordered_map<std::string, VKextension> Meta_ExtensionsByString_X{};

const std::unordered_map<std::string, VKextension> Meta_ExtensionsByString_Y{};

const std::unordered_map<std::string, VKextension> Meta_ExtensionsByString_Z{};

const std::array<std::unordered_map<std::string, vk::VKextension>, 27> Meta_ExtensionsByStringMaps =
{ {
    Meta_ExtensionsByString_0,
    Meta_ExtensionsByString_A,
    Meta_ExtensionsByString_B,
    Meta_ExtensionsByString_C,
    Meta_ExtensionsByString_D,
    Meta_ExtensionsByString_E,
    Meta_ExtensionsByString_F,
    Meta_ExtensionsByString_G,
    Meta_ExtensionsByString_H,
    Meta_ExtensionsByString_I,
    Meta_ExtensionsByString_J,
    Meta_ExtensionsByString_K,
    Meta_ExtensionsByString_L,
    Meta_ExtensionsByString_M,
    Meta_ExtensionsByString_N,
    Meta_ExtensionsByString_O,
    Meta_ExtensionsByString_P,
    Meta_ExtensionsByString_Q,
    Meta_ExtensionsByString_R,
    Meta_ExtensionsByString_S,
    Meta_ExtensionsByString_T,
    Meta_ExtensionsByString_U,
    Meta_ExtensionsByString_V,
    Meta_ExtensionsByString_W,
    Meta_ExtensionsByString_X,
    Meta_ExtensionsByString_Y,
    Meta_ExtensionsByString_Z
} };


} } // namespace vkbinding::aux