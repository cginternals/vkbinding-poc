
#pragma once


#include <vkbinding/novk.h>

#include <vkbinding/vkbinding_features.h>


namespace vk
{


enum class VKenum : unsigned int
{
    // UNGROUPED

    VK_AMD_BUFFER_MARKER_EXTENSION_NAME                                               = "VK_AMD_buffer_marker",
    VK_AMD_DISPLAY_NATIVE_HDR_EXTENSION_NAME                                          = "VK_AMD_display_native_hdr",
    VK_AMD_DRAW_INDIRECT_COUNT_EXTENSION_NAME                                         = "VK_AMD_draw_indirect_count",
    VK_AMD_EXTENSION_134_EXTENSION_NAME                                               = "VK_AMD_extension_134",
    VK_AMD_EXTENSION_135_EXTENSION_NAME                                               = "VK_AMD_extension_135",
    VK_AMD_EXTENSION_136_EXTENSION_NAME                                               = "VK_AMD_extension_136",
    VK_AMD_EXTENSION_140_EXTENSION_NAME                                               = "VK_AMD_extension_140",
    VK_AMD_EXTENSION_142_EXTENSION_NAME                                               = "VK_AMD_extension_142",
    VK_AMD_EXTENSION_143_EXTENSION_NAME                                               = "VK_AMD_extension_143",
    VK_AMD_EXTENSION_17_EXTENSION_NAME                                                = "VK_AMD_extension_17",
    VK_AMD_EXTENSION_18_EXTENSION_NAME                                                = "VK_AMD_extension_18",
    VK_KHR_EXTENSION_182_EXTENSION_NAME                                               = "VK_AMD_extension_182",
    VK_KHR_EXTENSION_183_EXTENSION_NAME                                               = "VK_AMD_extension_183",
    VK_KHR_EXTENSION_184_EXTENSION_NAME                                               = "VK_AMD_extension_184",
    VK_KHR_EXTENSION_187_EXTENSION_NAME                                               = "VK_AMD_extension_187",
    VK_KHR_EXTENSION_188_EXTENSION_NAME                                               = "VK_AMD_extension_188",
    VK_KHR_EXTENSION_189_EXTENSION_NAME                                               = "VK_AMD_extension_189",
    VK_AMD_EXTENSION_20_EXTENSION_NAME                                                = "VK_AMD_extension_20",
    VK_AMD_EXTENSION_227_EXTENSION_NAME                                               = "VK_AMD_extension_227",
    VK_AMD_EXTENSION_228_EXTENSION_NAME                                               = "VK_AMD_extension_228",
    VK_AMD_EXTENSION_229_EXTENSION_NAME                                               = "VK_AMD_extension_229",
    VK_AMD_EXTENSION_230_EXTENSION_NAME                                               = "VK_AMD_extension_230",
    VK_AMD_EXTENSION_231_EXTENSION_NAME                                               = "VK_AMD_extension_231",
    VK_AMD_EXTENSION_232_EXTENSION_NAME                                               = "VK_AMD_extension_232",
    VK_AMD_EXTENSION_233_EXTENSION_NAME                                               = "VK_AMD_extension_233",
    VK_AMD_EXTENSION_234_EXTENSION_NAME                                               = "VK_AMD_extension_234",
    VK_AMD_EXTENSION_235_EXTENSION_NAME                                               = "VK_AMD_extension_235",
    VK_AMD_EXTENSION_236_EXTENSION_NAME                                               = "VK_AMD_extension_236",
    VK_AMD_EXTENSION_24_EXTENSION_NAME                                                = "VK_AMD_extension_24",
    VK_AMD_EXTENSION_25_EXTENSION_NAME                                                = "VK_AMD_extension_25",
    VK_AMD_EXTENSION_32_EXTENSION_NAME                                                = "VK_AMD_extension_32",
    VK_AMD_EXTENSION_33_EXTENSION_NAME                                                = "VK_AMD_extension_33",
    VK_AMD_EXTENSION_35_EXTENSION_NAME                                                = "VK_AMD_extension_35",
    VK_AMD_EXTENSION_39_EXTENSION_NAME                                                = "VK_AMD_extension_39",
    VK_AMD_EXTENSION_40_EXTENSION_NAME                                                = "VK_AMD_extension_40",
    VK_AMD_EXTENSION_41_EXTENSION_NAME                                                = "VK_AMD_extension_41",
    VK_AMD_EXTENSION_44_EXTENSION_NAME                                                = "VK_AMD_extension_44",
    VK_AMD_EXTENSION_45_EXTENSION_NAME                                                = "VK_AMD_extension_45",
    VK_AMD_EXTENSION_46_EXTENSION_NAME                                                = "VK_AMD_extension_46",
    VK_AMD_GCN_SHADER_EXTENSION_NAME                                                  = "VK_AMD_gcn_shader",
    VK_AMD_GPU_SHADER_HALF_FLOAT_EXTENSION_NAME                                       = "VK_AMD_gpu_shader_half_float",
    VK_AMD_GPU_SHADER_INT16_EXTENSION_NAME                                            = "VK_AMD_gpu_shader_int16",
    VK_AMD_MEMORY_OVERALLOCATION_BEHAVIOR_EXTENSION_NAME                              = "VK_AMD_memory_overallocation_behavior",
    VK_AMD_MIXED_ATTACHMENT_SAMPLES_EXTENSION_NAME                                    = "VK_AMD_mixed_attachment_samples",
    VK_AMD_NEGATIVE_VIEWPORT_HEIGHT_EXTENSION_NAME                                    = "VK_AMD_negative_viewport_height",
    VK_AMD_RASTERIZATION_ORDER_EXTENSION_NAME                                         = "VK_AMD_rasterization_order",
    VK_AMD_SHADER_BALLOT_EXTENSION_NAME                                               = "VK_AMD_shader_ballot",
    VK_AMD_SHADER_CORE_PROPERTIES_EXTENSION_NAME                                      = "VK_AMD_shader_core_properties",
    VK_AMD_SHADER_EXPLICIT_VERTEX_PARAMETER_EXTENSION_NAME                            = "VK_AMD_shader_explicit_vertex_parameter",
    VK_AMD_SHADER_FRAGMENT_MASK_EXTENSION_NAME                                        = "VK_AMD_shader_fragment_mask",
    VK_AMD_SHADER_IMAGE_LOAD_STORE_LOD_EXTENSION_NAME                                 = "VK_AMD_shader_image_load_store_lod",
    VK_AMD_SHADER_INFO_EXTENSION_NAME                                                 = "VK_AMD_shader_info",
    VK_AMD_SHADER_TRINARY_MINMAX_EXTENSION_NAME                                       = "VK_AMD_shader_trinary_minmax",
    VK_AMD_TEXTURE_GATHER_BIAS_LOD_EXTENSION_NAME                                     = "VK_AMD_texture_gather_bias_lod",
    VK_ANDROID_EXTERNAL_MEMORY_ANDROID_HARDWARE_BUFFER_EXTENSION_NAME                 = "VK_ANDROID_external_memory_android_hardware_buffer",
    VK_ANDROID_NATIVE_BUFFER_NAME                                                     = "VK_ANDROID_native_buffer",
    VK_ARM_extension_281                                                              = "VK_ARM_extension_281",
    VK_BRCM_EXTENSION_264_EXTENSION_NAME                                              = "VK_BRCM_extension_264",
    VK_BRCM_EXTENSION_265_EXTENSION_NAME                                              = "VK_BRCM_extension_265",
    VK_EXT_ACQUIRE_XLIB_DISPLAY_EXTENSION_NAME                                        = "VK_EXT_acquire_xlib_display",
    VK_EXT_ASTC_DECODE_MODE_EXTENSION_NAME                                            = "VK_EXT_astc_decode_mode",
    VK_EXT_BLEND_OPERATION_ADVANCED_EXTENSION_NAME                                    = "VK_EXT_blend_operation_advanced",
    VK_EXT_BUFFER_DEVICE_ADDRESS_EXTENSION_NAME                                       = "VK_EXT_buffer_device_address",
    VK_EXT_CALIBRATED_TIMESTAMPS_EXTENSION_NAME                                       = "VK_EXT_calibrated_timestamps",
    VK_EXT_CONDITIONAL_RENDERING_EXTENSION_NAME                                       = "VK_EXT_conditional_rendering",
    VK_EXT_CONSERVATIVE_RASTERIZATION_EXTENSION_NAME                                  = "VK_EXT_conservative_rasterization",
    VK_EXT_DEBUG_MARKER_EXTENSION_NAME                                                = "VK_EXT_debug_marker",
    VK_EXT_DEBUG_REPORT_EXTENSION_NAME                                                = "VK_EXT_debug_report",
    VK_EXT_DEBUG_UTILS_EXTENSION_NAME                                                 = "VK_EXT_debug_utils",
    VK_EXT_DEPTH_CLIP_ENABLE_EXTENSION_NAME                                           = "VK_EXT_depth_clip_enable",
    VK_EXT_DEPTH_RANGE_UNRESTRICTED_EXTENSION_NAME                                    = "VK_EXT_depth_range_unrestricted",
    VK_EXT_DESCRIPTOR_INDEXING_EXTENSION_NAME                                         = "VK_EXT_descriptor_indexing",
    VK_EXT_DIRECT_MODE_DISPLAY_EXTENSION_NAME                                         = "VK_EXT_direct_mode_display",
    VK_EXT_DISCARD_RECTANGLES_EXTENSION_NAME                                          = "VK_EXT_discard_rectangles",
    VK_EXT_DISPLAY_CONTROL_EXTENSION_NAME                                             = "VK_EXT_display_control",
    VK_EXT_DISPLAY_SURFACE_COUNTER_EXTENSION_NAME                                     = "VK_EXT_display_surface_counter",
    VK_EXT_EXTENSION_160_EXTENSION_NAME                                               = "VK_EXT_extension_160",
    VK_EXT_EXTENSION_220_EXTENSION_NAME                                               = "VK_EXT_extension_220",
    VK_EXT_EXTENSION_223_EXTENSION_NAME                                               = "VK_EXT_extension_223",
    VK_EXT_EXTENSION_246_EXTENSION_NAME                                               = "VK_EXT_extension_246",
    VK_EXT_EXTENSION_255_EXTENSION_NAME                                               = "VK_EXT_extension_255",
    VK_EXT_EXTENSION_258_EXTENSION_NAME                                               = "VK_EXT_extension_258",
    VK_EXT_EXTENSION_259_EXTENSION_NAME                                               = "VK_EXT_extension_259",
    VK_EXT_extension_267                                                              = "VK_EXT_extension_267",
    VK_EXT_extension_284                                                              = "VK_EXT_extension_284",
    VK_EXT_extension_285                                                              = "VK_EXT_extension_285",
    VK_EXT_extension_286                                                              = "VK_EXT_extension_286",
    VK_EXT_EXTERNAL_MEMORY_DMA_BUF_EXTENSION_NAME                                     = "VK_EXT_external_memory_dma_buf",
    VK_EXT_EXTERNAL_MEMORY_HOST_EXTENSION_NAME                                        = "VK_EXT_external_memory_host",
    VK_EXT_FILTER_CUBIC_EXTENSION_NAME                                                = "VK_EXT_filter_cubic",
    VK_EXT_FRAGMENT_DENSITY_MAP_EXTENSION_NAME                                        = "VK_EXT_fragment_density_map",
    VK_EXT_FRAGMENT_SHADER_INTERLOCK_EXTENSION_NAME                                   = "VK_EXT_fragment_shader_interlock",
    VK_EXT_FULL_SCREEN_EXCLUSIVE_EXTENSION_NAME                                       = "VK_EXT_full_screen_exclusive",
    VK_EXT_GLOBAL_PRIORITY_EXTENSION_NAME                                             = "VK_EXT_global_priority",
    VK_EXT_HDR_METADATA_EXTENSION_NAME                                                = "VK_EXT_hdr_metadata",
    VK_EXT_HEADLESS_SURFACE_EXTENSION_NAME                                            = "VK_EXT_headless_surface",
    VK_EXT_HOST_QUERY_RESET_EXTENSION_NAME                                            = "VK_EXT_host_query_reset",
    VK_EXT_IMAGE_DRM_FORMAT_MODIFIER_EXTENSION_NAME                                   = "VK_EXT_image_drm_format_modifier",
    VK_EXT_INDEX_TYPE_UINT8_EXTENSION_NAME                                            = "VK_EXT_index_type_uint8",
    VK_EXT_INLINE_UNIFORM_BLOCK_EXTENSION_NAME                                        = "VK_EXT_inline_uniform_block",
    VK_EXT_LINE_RASTERIZATION_EXTENSION_NAME                                          = "VK_EXT_line_rasterization",
    VK_EXT_MEMORY_BUDGET_EXTENSION_NAME                                               = "VK_EXT_memory_budget",
    VK_EXT_MEMORY_PRIORITY_EXTENSION_NAME                                             = "VK_EXT_memory_priority",
    VK_EXT_METAL_SURFACE_EXTENSION_NAME                                               = "VK_EXT_metal_surface",
    VK_EXT_PCI_BUS_INFO_EXTENSION_NAME                                                = "VK_EXT_pci_bus_info",
    VK_EXT_PIPELINE_CREATION_FEEDBACK_EXTENSION_NAME                                  = "VK_EXT_pipeline_creation_feedback",
    VK_EXT_POST_DEPTH_COVERAGE_EXTENSION_NAME                                         = "VK_EXT_post_depth_coverage",
    VK_EXT_QUEUE_FAMILY_FOREIGN_EXTENSION_NAME                                        = "VK_EXT_queue_family_foreign",
    VK_EXT_SAMPLE_LOCATIONS_EXTENSION_NAME                                            = "VK_EXT_sample_locations",
    VK_EXT_SAMPLER_FILTER_MINMAX_EXTENSION_NAME                                       = "VK_EXT_sampler_filter_minmax",
    VK_EXT_SCALAR_BLOCK_LAYOUT_EXTENSION_NAME                                         = "VK_EXT_scalar_block_layout",
    VK_EXT_SEPARATE_STENCIL_USAGE_EXTENSION_NAME                                      = "VK_EXT_separate_stencil_usage",
    VK_EXT_SHADER_DEMOTE_TO_HELPER_INVOCATION_EXTENSION_NAME                          = "VK_EXT_shader_demote_to_helper_invocation",
    VK_EXT_SHADER_STENCIL_EXPORT_EXTENSION_NAME                                       = "VK_EXT_shader_stencil_export",
    VK_EXT_SHADER_SUBGROUP_BALLOT_EXTENSION_NAME                                      = "VK_EXT_shader_subgroup_ballot",
    VK_EXT_SHADER_SUBGROUP_VOTE_EXTENSION_NAME                                        = "VK_EXT_shader_subgroup_vote",
    VK_EXT_SHADER_VIEWPORT_INDEX_LAYER_EXTENSION_NAME                                 = "VK_EXT_shader_viewport_index_layer",
    VK_EXT_SUBGROUP_SIZE_CONTROL_EXTENSION_NAME                                       = "VK_EXT_subgroup_size_control",
    VK_EXT_SWAPCHAIN_COLOR_SPACE_EXTENSION_NAME                                       = "VK_EXT_swapchain_colorspace",
    VK_EXT_TEXEL_BUFFER_ALIGNMENT_EXTENSION_NAME                                      = "VK_EXT_texel_buffer_alignment",
    VK_EXT_TEXTURE_COMPRESSION_ASTC_HDR_EXTENSION_NAME                                = "VK_EXT_texture_compression_astc_hdr",
    VK_EXT_TRANSFORM_FEEDBACK_EXTENSION_NAME                                          = "VK_EXT_transform_feedback",
    VK_EXT_VALIDATION_CACHE_EXTENSION_NAME                                            = "VK_EXT_validation_cache",
    VK_EXT_VALIDATION_FEATURES_EXTENSION_NAME                                         = "VK_EXT_validation_features",
    VK_EXT_VALIDATION_FLAGS_EXTENSION_NAME                                            = "VK_EXT_validation_flags",
    VK_EXT_VERTEX_ATTRIBUTE_DIVISOR_EXTENSION_NAME                                    = "VK_EXT_vertex_attribute_divisor",
    VK_EXT_YCBCR_IMAGE_ARRAYS_EXTENSION_NAME                                          = "VK_EXT_ycbcr_image_arrays",
    VK_FUCHSIA_IMAGEPIPE_SURFACE_EXTENSION_NAME                                       = "VK_FUCHSIA_imagepipe_surface",
    VK_GOOGLE_EXTENSION_263_EXTENSION_NAME                                            = "VK_GGP_extension_263",
    VK_GGP_FRAME_TOKEN_EXTENSION_NAME                                                 = "VK_GGP_frame_token",
    VK_GGP_STREAM_DESCRIPTOR_SURFACE_EXTENSION_NAME                                   = "VK_GGP_stream_descriptor_surface",
    VK_GOOGLE_DECORATE_STRING_EXTENSION_NAME                                          = "VK_GOOGLE_decorate_string",
    VK_GOOGLE_DISPLAY_TIMING_EXTENSION_NAME                                           = "VK_GOOGLE_display_timing",
    VK_GOOGLE_EXTENSION_194_EXTENSION_NAME                                            = "VK_GOOGLE_extension_194",
    VK_GOOGLE_EXTENSION_195_EXTENSION_NAME                                            = "VK_GOOGLE_extension_195",
    VK_GOOGLE_EXTENSION_196_EXTENSION_NAME                                            = "VK_GOOGLE_extension_196",
    VK_GOOGLE_EXTENSION_49_EXTENSION_NAME                                             = "VK_GOOGLE_extension_49",
    VK_GOOGLE_HLSL_FUNCTIONALITY1_EXTENSION_NAME                                      = "VK_GOOGLE_hlsl_functionality1",
    VK_IMG_EXTENSION_107_EXTENSION_NAME                                               = "VK_IMG_extension_107",
    VK_IMG_EXTENSION_108_EXTENSION_NAME                                               = "VK_IMG_extension_108",
    VK_IMG_EXTENSION_111_EXTENSION_NAME                                               = "VK_IMG_extension_111",
    VK_IMG_EXTENSION_69_EXTENSION_NAME                                                = "VK_IMG_extension_69",
    VK_IMG_FILTER_CUBIC_EXTENSION_NAME                                                = "VK_IMG_filter_cubic",
    VK_IMG_FORMAT_PVRTC_EXTENSION_NAME                                                = "VK_IMG_format_pvrtc",
    VK_INTEL_EXTENSION_243_EXTENSION_NAME                                             = "VK_INTEL_extension_243",
    VK_INTEL_PERFORMANCE_QUERY_EXTENSION_NAME                                         = "VK_INTEL_performance_query",
    VK_INTEL_SHADER_INTEGER_FUNCTIONS_2_EXTENSION_NAME                                = "VK_INTEL_shader_integer_functions2",
    VK_KHR_16BIT_STORAGE_EXTENSION_NAME                                               = "VK_KHR_16bit_storage",
    VK_KHR_8BIT_STORAGE_EXTENSION_NAME                                                = "VK_KHR_8bit_storage",
    VK_KHR_ANDROID_SURFACE_EXTENSION_NAME                                             = "VK_KHR_android_surface",
    VK_KHR_BIND_MEMORY_2_EXTENSION_NAME                                               = "VK_KHR_bind_memory2",
    VK_KHR_CREATE_RENDERPASS_2_EXTENSION_NAME                                         = "VK_KHR_create_renderpass2",
    VK_KHR_DEDICATED_ALLOCATION_EXTENSION_NAME                                        = "VK_KHR_dedicated_allocation",
    VK_KHR_DEPTH_STENCIL_RESOLVE_EXTENSION_NAME                                       = "VK_KHR_depth_stencil_resolve",
    VK_KHR_DESCRIPTOR_UPDATE_TEMPLATE_EXTENSION_NAME                                  = "VK_KHR_descriptor_update_template",
    VK_KHR_DEVICE_GROUP_EXTENSION_NAME                                                = "VK_KHR_device_group",
    VK_KHR_DEVICE_GROUP_CREATION_EXTENSION_NAME                                       = "VK_KHR_device_group_creation",
    VK_KHR_DISPLAY_EXTENSION_NAME                                                     = "VK_KHR_display",
    VK_KHR_DISPLAY_SWAPCHAIN_EXTENSION_NAME                                           = "VK_KHR_display_swapchain",
    VK_KHR_DRAW_INDIRECT_COUNT_EXTENSION_NAME                                         = "VK_KHR_draw_indirect_count",
    VK_KHR_DRIVER_PROPERTIES_EXTENSION_NAME                                           = "VK_KHR_driver_properties",
    VK_KHR_EXTENSION_117_EXTENSION_NAME                                               = "VK_KHR_extension_117",
    VK_KHR_EXTENSION_119_EXTENSION_NAME                                               = "VK_KHR_extension_119",
    VK_KHR_EXTENSION_176_EXTENSION_NAME                                               = "VK_KHR_extension_176",
    VK_KHR_EXTENSION_177_EXTENSION_NAME                                               = "VK_KHR_extension_177",
    VK_KHR_EXTENSION_208_EXTENSION_NAME                                               = "VK_KHR_extension_208",
    VK_KHR_EXTENSION_209_EXTENSION_NAME                                               = "VK_KHR_extension_209",
    VK_KHR_EXTENSION_216_EXTENSION_NAME                                               = "VK_KHR_extension_216",
    VK_KHR_EXTENSION_217_EXTENSION_NAME                                               = "VK_KHR_extension_217",
    VK_KHR_EXTENSION_221_EXTENSION_NAME                                               = "VK_KHR_extension_221",
    VK_KHR_EXTENSION_237_EXTENSION_NAME                                               = "VK_KHR_extension_237",
    VK_KHR_EXTENSION_249_EXTENSION_NAME                                               = "VK_KHR_extension_249",
    VK_EXT_extension_268                                                              = "VK_KHR_extension_268",
    VK_KHR_extension_269                                                              = "VK_KHR_extension_269",
    VK_INTEL_extension_270                                                            = "VK_KHR_extension_270",
    VK_INTEL_extension_271                                                            = "VK_KHR_extension_271",
    VK_INTEL_extension_272                                                            = "VK_KHR_extension_272",
    VK_INTEL_extension_273                                                            = "VK_KHR_extension_273",
    VK_INTEL_extension_274                                                            = "VK_KHR_extension_274",
    VK_KHR_extension_275                                                              = "VK_KHR_extension_275",
    VK_KHR_extension_276                                                              = "VK_KHR_extension_276",
    VK_KHR_extension_280                                                              = "VK_KHR_extension_280",
    VK_KHR_EXTERNAL_FENCE_EXTENSION_NAME                                              = "VK_KHR_external_fence",
    VK_KHR_EXTERNAL_FENCE_CAPABILITIES_EXTENSION_NAME                                 = "VK_KHR_external_fence_capabilities",
    VK_KHR_EXTERNAL_FENCE_FD_EXTENSION_NAME                                           = "VK_KHR_external_fence_fd",
    VK_KHR_EXTERNAL_FENCE_WIN32_EXTENSION_NAME                                        = "VK_KHR_external_fence_win32",
    VK_KHR_EXTERNAL_MEMORY_EXTENSION_NAME                                             = "VK_KHR_external_memory",
    VK_KHR_EXTERNAL_MEMORY_CAPABILITIES_EXTENSION_NAME                                = "VK_KHR_external_memory_capabilities",
    VK_KHR_EXTERNAL_MEMORY_FD_EXTENSION_NAME                                          = "VK_KHR_external_memory_fd",
    VK_KHR_EXTERNAL_MEMORY_WIN32_EXTENSION_NAME                                       = "VK_KHR_external_memory_win32",
    VK_KHR_EXTERNAL_SEMAPHORE_EXTENSION_NAME                                          = "VK_KHR_external_semaphore",
    VK_KHR_EXTERNAL_SEMAPHORE_CAPABILITIES_EXTENSION_NAME                             = "VK_KHR_external_semaphore_capabilities",
    VK_KHR_EXTERNAL_SEMAPHORE_FD_EXTENSION_NAME                                       = "VK_KHR_external_semaphore_fd",
    VK_KHR_EXTERNAL_SEMAPHORE_WIN32_EXTENSION_NAME                                    = "VK_KHR_external_semaphore_win32",
    VK_KHR_GET_DISPLAY_PROPERTIES_2_EXTENSION_NAME                                    = "VK_KHR_get_display_properties2",
    VK_KHR_GET_MEMORY_REQUIREMENTS_2_EXTENSION_NAME                                   = "VK_KHR_get_memory_requirements2",
    VK_KHR_GET_PHYSICAL_DEVICE_PROPERTIES_2_EXTENSION_NAME                            = "VK_KHR_get_physical_device_properties2",
    VK_KHR_GET_SURFACE_CAPABILITIES_2_EXTENSION_NAME                                  = "VK_KHR_get_surface_capabilities2",
    VK_KHR_IMAGE_FORMAT_LIST_EXTENSION_NAME                                           = "VK_KHR_image_format_list",
    VK_KHR_IMAGELESS_FRAMEBUFFER_EXTENSION_NAME                                       = "VK_KHR_imageless_framebuffer",
    VK_KHR_INCREMENTAL_PRESENT_EXTENSION_NAME                                         = "VK_KHR_incremental_present",
    VK_KHR_MAINTENANCE1_EXTENSION_NAME                                                = "VK_KHR_maintenance1",
    VK_KHR_MAINTENANCE2_EXTENSION_NAME                                                = "VK_KHR_maintenance2",
    VK_KHR_MAINTENANCE3_EXTENSION_NAME                                                = "VK_KHR_maintenance3",
    VK_KHR_MIR_SURFACE_EXTENSION_NAME                                                 = "VK_KHR_mir_surface",
    VK_KHR_MULTIVIEW_EXTENSION_NAME                                                   = "VK_KHR_multiview",
    VK_KHR_PUSH_DESCRIPTOR_EXTENSION_NAME                                             = "VK_KHR_push_descriptor",
    VK_KHR_RELAXED_BLOCK_LAYOUT_EXTENSION_NAME                                        = "VK_KHR_relaxed_block_layout",
    VK_KHR_SAMPLER_MIRROR_CLAMP_TO_EDGE_EXTENSION_NAME                                = "VK_KHR_sampler_mirror_clamp_to_edge",
    VK_KHR_SAMPLER_YCBCR_CONVERSION_EXTENSION_NAME                                    = "VK_KHR_sampler_ycbcr_conversion",
    VK_KHR_SHADER_ATOMIC_INT64_EXTENSION_NAME                                         = "VK_KHR_shader_atomic_int64",
    VK_KHR_SHADER_DRAW_PARAMETERS_EXTENSION_NAME                                      = "VK_KHR_shader_draw_parameters",
    VK_KHR_SHADER_FLOAT16_INT8_EXTENSION_NAME                                         = "VK_KHR_shader_float16_int8",
    VK_KHR_SHADER_FLOAT_CONTROLS_EXTENSION_NAME                                       = "VK_KHR_shader_float_controls",
    VK_KHR_SHARED_PRESENTABLE_IMAGE_EXTENSION_NAME                                    = "VK_KHR_shared_presentable_image",
    VK_KHR_STORAGE_BUFFER_STORAGE_CLASS_EXTENSION_NAME                                = "VK_KHR_storage_buffer_storage_class",
    VK_KHR_SURFACE_EXTENSION_NAME                                                     = "VK_KHR_surface",
    VK_KHR_SURFACE_PROTECTED_CAPABILITIES_EXTENSION_NAME                              = "VK_KHR_surface_protected_capabilities",
    VK_KHR_SWAPCHAIN_EXTENSION_NAME                                                   = "VK_KHR_swapchain",
    VK_KHR_SWAPCHAIN_MUTABLE_FORMAT_EXTENSION_NAME                                    = "VK_KHR_swapchain_mutable_format",
    VK_KHR_UNIFORM_BUFFER_STANDARD_LAYOUT_EXTENSION_NAME                              = "VK_KHR_uniform_buffer_standard_layout",
    VK_KHR_VARIABLE_POINTERS_EXTENSION_NAME                                           = "VK_KHR_variable_pointers",
    VK_KHR_VULKAN_MEMORY_MODEL_EXTENSION_NAME                                         = "VK_KHR_vulkan_memory_model",
    VK_KHR_WAYLAND_SURFACE_EXTENSION_NAME                                             = "VK_KHR_wayland_surface",
    VK_KHR_WIN32_KEYED_MUTEX_EXTENSION_NAME                                           = "VK_KHR_win32_keyed_mutex",
    VK_KHR_WIN32_SURFACE_EXTENSION_NAME                                               = "VK_KHR_win32_surface",
    VK_KHR_XCB_SURFACE_EXTENSION_NAME                                                 = "VK_KHR_xcb_surface",
    VK_KHR_XLIB_SURFACE_EXTENSION_NAME                                                = "VK_KHR_xlib_surface",
    VK_MESA_EXTENSION_244_EXTENSION_NAME                                              = "VK_MESA_extension_244",
    VK_MVK_IOS_SURFACE_EXTENSION_NAME                                                 = "VK_MVK_ios_surface",
    VK_MVK_MACOS_SURFACE_EXTENSION_NAME                                               = "VK_MVK_macos_surface",
    VK_MVK_MOLTENVK_EXTENSION_NAME                                                    = "VK_MVK_moltenvk",
    VK_NN_VI_SURFACE_EXTENSION_NAME                                                   = "VK_NN_vi_surface",
    VK_NV_CLIP_SPACE_W_SCALING_EXTENSION_NAME                                         = "VK_NV_clip_space_w_scaling",
    VK_NV_COMPUTE_SHADER_DERIVATIVES_EXTENSION_NAME                                   = "VK_NV_compute_shader_derivatives",
    VK_NV_COOPERATIVE_MATRIX_EXTENSION_NAME                                           = "VK_NV_cooperative_matrix",
    VK_NV_CORNER_SAMPLED_IMAGE_EXTENSION_NAME                                         = "VK_NV_corner_sampled_image",
    VK_NV_COVERAGE_REDUCTION_MODE_EXTENSION_NAME                                      = "VK_NV_coverage_reduction_mode",
    VK_NV_DEDICATED_ALLOCATION_EXTENSION_NAME                                         = "VK_NV_dedicated_allocation",
    VK_NV_DEDICATED_ALLOCATION_IMAGE_ALIASING_EXTENSION_NAME                          = "VK_NV_dedicated_allocation_image_aliasing",
    VK_NV_DEVICE_DIAGNOSTIC_CHECKPOINTS_EXTENSION_NAME                                = "VK_NV_device_diagnostic_checkpoints",
    VK_NV_EXTENSION_101_EXTENSION_NAME                                                = "VK_NV_extension_101",
    VK_NV_EXTENSION_104_EXTENSION_NAME                                                = "VK_NV_extension_104",
    VK_NV_EXTENSION_151_EXTENSION_NAME                                                = "VK_NV_extension_151",
    VK_NV_EXTENSION_152_EXTENSION_NAME                                                = "VK_NV_extension_152",
    VK_EXT_EXTENSION_164_EXTENSION_NAME                                               = "VK_NV_extension_164",
    VK_EXT_EXTENSION_168_EXTENSION_NAME                                               = "VK_NV_extension_168",
    VK_NV_EXTENSION_242_EXTENSION_NAME                                                = "VK_NV_extension_242",
    VK_NV_EXTENSION_261_EXTENSION_NAME                                                = "VK_NV_extension_261",
    VK_NV_extension_278                                                               = "VK_NV_extension_278",
    VK_NV_extension_279                                                               = "VK_NV_extension_279",
    VK_EXT_EXTENSION_28_EXTENSION_NAME                                                = "VK_NV_extension_28",
    VK_NV_EXTENSION_52_EXTENSION_NAME                                                 = "VK_NV_extension_52",
    VK_NV_EXTENSION_53_EXTENSION_NAME                                                 = "VK_NV_extension_53",
    VK_NV_EXTERNAL_MEMORY_EXTENSION_NAME                                              = "VK_NV_external_memory",
    VK_NV_EXTERNAL_MEMORY_CAPABILITIES_EXTENSION_NAME                                 = "VK_NV_external_memory_capabilities",
    VK_NV_EXTERNAL_MEMORY_WIN32_EXTENSION_NAME                                        = "VK_NV_external_memory_win32",
    VK_NV_FILL_RECTANGLE_EXTENSION_NAME                                               = "VK_NV_fill_rectangle",
    VK_NV_FRAGMENT_COVERAGE_TO_COLOR_EXTENSION_NAME                                   = "VK_NV_fragment_coverage_to_color",
    VK_NV_FRAGMENT_SHADER_BARYCENTRIC_EXTENSION_NAME                                  = "VK_NV_fragment_shader_barycentric",
    VK_NV_FRAMEBUFFER_MIXED_SAMPLES_EXTENSION_NAME                                    = "VK_NV_framebuffer_mixed_samples",
    VK_NV_GEOMETRY_SHADER_PASSTHROUGH_EXTENSION_NAME                                  = "VK_NV_geometry_shader_passthrough",
    VK_NV_GLSL_SHADER_EXTENSION_NAME                                                  = "VK_NV_glsl_shader",
    VK_NV_MESH_SHADER_EXTENSION_NAME                                                  = "VK_NV_mesh_shader",
    VK_NV_RAY_TRACING_EXTENSION_NAME                                                  = "VK_NV_ray_tracing",
    VK_NV_REPRESENTATIVE_FRAGMENT_TEST_EXTENSION_NAME                                 = "VK_NV_representative_fragment_test",
    VK_NV_SAMPLE_MASK_OVERRIDE_COVERAGE_EXTENSION_NAME                                = "VK_NV_sample_mask_override_coverage",
    VK_NV_SCISSOR_EXCLUSIVE_EXTENSION_NAME                                            = "VK_NV_scissor_exclusive",
    VK_NV_SHADER_IMAGE_FOOTPRINT_EXTENSION_NAME                                       = "VK_NV_shader_image_footprint",
    VK_NV_SHADER_SM_BUILTINS_EXTENSION_NAME                                           = "VK_NV_shader_sm_builtins",
    VK_NV_SHADER_SUBGROUP_PARTITIONED_EXTENSION_NAME                                  = "VK_NV_shader_subgroup_partitioned",
    VK_NV_SHADING_RATE_IMAGE_EXTENSION_NAME                                           = "VK_NV_shading_rate_image",
    VK_NV_VIEWPORT_ARRAY2_EXTENSION_NAME                                              = "VK_NV_viewport_array2",
    VK_NV_VIEWPORT_SWIZZLE_EXTENSION_NAME                                             = "VK_NV_viewport_swizzle",
    VK_NV_WIN32_KEYED_MUTEX_EXTENSION_NAME                                            = "VK_NV_win32_keyed_mutex",
    VK_NVX_DEVICE_GENERATED_COMMANDS_EXTENSION_NAME                                   = "VK_NVX_device_generated_commands",
    VK_NVX_EXTENSION_30_EXTENSION_NAME                                                = "VK_NVX_extension_30",
    VK_NVX_EXTENSION_48_EXTENSION_NAME                                                = "VK_NVX_extension_48",
    VK_NVX_IMAGE_VIEW_HANDLE_EXTENSION_NAME                                           = "VK_NVX_image_view_handle",
    VK_NVX_MULTIVIEW_PER_VIEW_ATTRIBUTES_EXTENSION_NAME                               = "VK_NVX_multiview_per_view_attributes",
    VK_QCOM_extension_172_EXTENSION_NAME                                              = "VK_QCOM_extension_172",
    VK_QCOM_extension_173_EXTENSION_NAME                                              = "VK_QCOM_extension_173",
    VK_QCOM_extension_174_EXTENSION_NAME                                              = "VK_QCOM_extension_174",
    VK_QCOM_extension_283                                                             = "VK_QCOM_extension_283",
    VK_REMAINING_MIP_LEVELS                                                           = (~0U),
    VK_REMAINING_ARRAY_LAYERS                                                         = (~0U),
    VK_ATTACHMENT_UNUSED                                                              = (~0U),
    VK_QUEUE_FAMILY_IGNORED                                                           = (~0U),
    VK_SUBPASS_EXTERNAL                                                               = (~0U),
    VK_SHADER_UNUSED_NV                                                               = (~0U),
    VK_QUEUE_FAMILY_EXTERNAL                                                          = (~0U-1),
    VK_QUEUE_FAMILY_EXTERNAL_KHR                                                      = (~0U-1),
    VK_QUEUE_FAMILY_FOREIGN_EXT                                                       = (~0U-2),
    VK_WHOLE_SIZE                                                                     = (~0ULL),
    VK_AMD_EXTENSION_17_SPEC_VERSION                                                  = 0,
    VK_AMD_EXTENSION_18_SPEC_VERSION                                                  = 0,
    VK_AMD_EXTENSION_20_SPEC_VERSION                                                  = 0,
    VK_AMD_EXTENSION_24_SPEC_VERSION                                                  = 0,
    VK_AMD_EXTENSION_25_SPEC_VERSION                                                  = 0,
    VK_EXT_EXTENSION_28_SPEC_VERSION                                                  = 0,
    VK_NVX_EXTENSION_30_SPEC_VERSION                                                  = 0,
    VK_AMD_EXTENSION_32_SPEC_VERSION                                                  = 0,
    VK_AMD_EXTENSION_33_SPEC_VERSION                                                  = 0,
    VK_AMD_EXTENSION_35_SPEC_VERSION                                                  = 0,
    VK_AMD_EXTENSION_39_SPEC_VERSION                                                  = 0,
    VK_AMD_EXTENSION_40_SPEC_VERSION                                                  = 0,
    VK_AMD_EXTENSION_41_SPEC_VERSION                                                  = 0,
    VK_AMD_EXTENSION_44_SPEC_VERSION                                                  = 0,
    VK_AMD_EXTENSION_45_SPEC_VERSION                                                  = 0,
    VK_AMD_EXTENSION_46_SPEC_VERSION                                                  = 0,
    VK_NVX_EXTENSION_48_SPEC_VERSION                                                  = 0,
    VK_GOOGLE_EXTENSION_49_SPEC_VERSION                                               = 0,
    VK_NV_EXTENSION_52_SPEC_VERSION                                                   = 0,
    VK_NV_EXTENSION_53_SPEC_VERSION                                                   = 0,
    VK_IMG_EXTENSION_69_SPEC_VERSION                                                  = 0,
    VK_NV_EXTENSION_101_SPEC_VERSION                                                  = 0,
    VK_NV_EXTENSION_104_SPEC_VERSION                                                  = 0,
    VK_IMG_EXTENSION_107_SPEC_VERSION                                                 = 0,
    VK_IMG_EXTENSION_108_SPEC_VERSION                                                 = 0,
    VK_IMG_EXTENSION_111_SPEC_VERSION                                                 = 0,
    VK_KHR_EXTENSION_117_SPEC_VERSION                                                 = 0,
    VK_KHR_EXTENSION_119_SPEC_VERSION                                                 = 0,
    VK_MVK_MOLTENVK_SPEC_VERSION                                                      = 0,
    VK_AMD_EXTENSION_134_SPEC_VERSION                                                 = 0,
    VK_AMD_EXTENSION_135_SPEC_VERSION                                                 = 0,
    VK_AMD_EXTENSION_136_SPEC_VERSION                                                 = 0,
    VK_AMD_EXTENSION_140_SPEC_VERSION                                                 = 0,
    VK_AMD_EXTENSION_142_SPEC_VERSION                                                 = 0,
    VK_AMD_EXTENSION_143_SPEC_VERSION                                                 = 0,
    VK_NV_EXTENSION_151_SPEC_VERSION                                                  = 0,
    VK_NV_EXTENSION_152_SPEC_VERSION                                                  = 0,
    VK_EXT_EXTENSION_160_SPEC_VERSION                                                 = 0,
    VK_EXT_EXTENSION_164_SPEC_VERSION                                                 = 0,
    VK_EXT_EXTENSION_168_SPEC_VERSION                                                 = 0,
    VK_QCOM_extension_172_SPEC_VERSION                                                = 0,
    VK_QCOM_extension_173_SPEC_VERSION                                                = 0,
    VK_QCOM_extension_174_SPEC_VERSION                                                = 0,
    VK_KHR_EXTENSION_176_SPEC_VERSION                                                 = 0,
    VK_KHR_EXTENSION_177_SPEC_VERSION                                                 = 0,
    VK_KHR_EXTENSION_182_SPEC_VERSION                                                 = 0,
    VK_KHR_EXTENSION_183_SPEC_VERSION                                                 = 0,
    VK_KHR_EXTENSION_184_SPEC_VERSION                                                 = 0,
    VK_KHR_EXTENSION_187_SPEC_VERSION                                                 = 0,
    VK_KHR_EXTENSION_188_SPEC_VERSION                                                 = 0,
    VK_KHR_EXTENSION_189_SPEC_VERSION                                                 = 0,
    VK_GOOGLE_EXTENSION_194_SPEC_VERSION                                              = 0,
    VK_GOOGLE_EXTENSION_195_SPEC_VERSION                                              = 0,
    VK_GOOGLE_EXTENSION_196_SPEC_VERSION                                              = 0,
    VK_KHR_EXTENSION_208_SPEC_VERSION                                                 = 0,
    VK_KHR_EXTENSION_209_SPEC_VERSION                                                 = 0,
    VK_KHR_EXTENSION_216_SPEC_VERSION                                                 = 0,
    VK_KHR_EXTENSION_217_SPEC_VERSION                                                 = 0,
    VK_EXT_EXTENSION_220_SPEC_VERSION                                                 = 0,
    VK_KHR_EXTENSION_221_SPEC_VERSION                                                 = 0,
    VK_EXT_EXTENSION_223_SPEC_VERSION                                                 = 0,
    VK_AMD_EXTENSION_227_SPEC_VERSION                                                 = 0,
    VK_AMD_EXTENSION_228_SPEC_VERSION                                                 = 0,
    VK_AMD_EXTENSION_229_SPEC_VERSION                                                 = 0,
    VK_AMD_EXTENSION_230_SPEC_VERSION                                                 = 0,
    VK_AMD_EXTENSION_231_SPEC_VERSION                                                 = 0,
    VK_AMD_EXTENSION_232_SPEC_VERSION                                                 = 0,
    VK_AMD_EXTENSION_233_SPEC_VERSION                                                 = 0,
    VK_AMD_EXTENSION_234_SPEC_VERSION                                                 = 0,
    VK_AMD_EXTENSION_235_SPEC_VERSION                                                 = 0,
    VK_AMD_EXTENSION_236_SPEC_VERSION                                                 = 0,
    VK_KHR_EXTENSION_237_SPEC_VERSION                                                 = 0,
    VK_NV_EXTENSION_242_SPEC_VERSION                                                  = 0,
    VK_INTEL_EXTENSION_243_SPEC_VERSION                                               = 0,
    VK_MESA_EXTENSION_244_SPEC_VERSION                                                = 0,
    VK_EXT_EXTENSION_246_SPEC_VERSION                                                 = 0,
    VK_KHR_EXTENSION_249_SPEC_VERSION                                                 = 0,
    VK_EXT_EXTENSION_255_SPEC_VERSION                                                 = 0,
    VK_EXT_HEADLESS_SURFACE_SPEC_VERSION                                              = 0,
    VK_EXT_EXTENSION_258_SPEC_VERSION                                                 = 0,
    VK_EXT_EXTENSION_259_SPEC_VERSION                                                 = 0,
    VK_NV_EXTENSION_261_SPEC_VERSION                                                  = 0,
    VK_GOOGLE_EXTENSION_263_SPEC_VERSION                                              = 0,
    VK_BRCM_EXTENSION_264_SPEC_VERSION                                                = 0,
    VK_BRCM_EXTENSION_265_SPEC_VERSION                                                = 0,
    VK_EXT_EXTENSION_267_SPEC_VERSION                                                 = 0,
    VK_EXT_EXTENSION_268_SPEC_VERSION                                                 = 0,
    VK_KHR_EXTENSION_269_SPEC_VERSION                                                 = 0,
    VK_INTEL_EXTENSION_270_SPEC_VERSION                                               = 0,
    VK_INTEL_EXTENSION_271_SPEC_VERSION                                               = 0,
    VK_INTEL_EXTENSION_272_SPEC_VERSION                                               = 0,
    VK_INTEL_EXTENSION_273_SPEC_VERSION                                               = 0,
    VK_INTEL_EXTENSION_274_SPEC_VERSION                                               = 0,
    VK_KHR_EXTENSION_275_SPEC_VERSION                                                 = 0,
    VK_KHR_EXTENSION_276_SPEC_VERSION                                                 = 0,
    VK_NV_EXTENSION_278_SPEC_VERSION                                                  = 0,
    VK_NV_EXTENSION_279_SPEC_VERSION                                                  = 0,
    VK_KHR_EXTENSION_280_SPEC_VERSION                                                 = 0,
    VK_ARM_EXTENSION_281_SPEC_VERSION                                                 = 0,
    VK_QCOM_EXTENSION_283_SPEC_VERSION                                                = 0,
    VK_EXT_EXTENSION_284_SPEC_VERSION                                                 = 0,
    VK_EXT_EXTENSION_285_SPEC_VERSION                                                 = 0,
    VK_EXT_EXTENSION_286_SPEC_VERSION                                                 = 0,
    VK_NV_GLSL_SHADER_SPEC_VERSION                                                    = 1,
    VK_EXT_DEPTH_RANGE_UNRESTRICTED_SPEC_VERSION                                      = 1,
    VK_KHR_SAMPLER_MIRROR_CLAMP_TO_EDGE_SPEC_VERSION                                  = 1,
    VK_IMG_FILTER_CUBIC_SPEC_VERSION                                                  = 1,
    VK_AMD_RASTERIZATION_ORDER_SPEC_VERSION                                           = 1,
    VK_AMD_SHADER_TRINARY_MINMAX_SPEC_VERSION                                         = 1,
    VK_AMD_SHADER_EXPLICIT_VERTEX_PARAMETER_SPEC_VERSION                              = 1,
    VK_AMD_GCN_SHADER_SPEC_VERSION                                                    = 1,
    VK_NV_DEDICATED_ALLOCATION_SPEC_VERSION                                           = 1,
    VK_EXT_TRANSFORM_FEEDBACK_SPEC_VERSION                                            = 1,
    VK_NVX_IMAGE_VIEW_HANDLE_SPEC_VERSION                                             = 1,
    VK_AMD_DRAW_INDIRECT_COUNT_SPEC_VERSION                                           = 1,
    VK_AMD_NEGATIVE_VIEWPORT_HEIGHT_SPEC_VERSION                                      = 1,
    VK_AMD_SHADER_BALLOT_SPEC_VERSION                                                 = 1,
    VK_AMD_TEXTURE_GATHER_BIAS_LOD_SPEC_VERSION                                       = 1,
    VK_AMD_SHADER_INFO_SPEC_VERSION                                                   = 1,
    VK_AMD_SHADER_IMAGE_LOAD_STORE_LOD_SPEC_VERSION                                   = 1,
    VK_GGP_STREAM_DESCRIPTOR_SURFACE_SPEC_VERSION                                     = 1,
    VK_KHR_MULTIVIEW_SPEC_VERSION                                                     = 1,
    VK_IMG_FORMAT_PVRTC_SPEC_VERSION                                                  = 1,
    VK_NV_EXTERNAL_MEMORY_CAPABILITIES_SPEC_VERSION                                   = 1,
    VK_NV_EXTERNAL_MEMORY_SPEC_VERSION                                                = 1,
    VK_NV_EXTERNAL_MEMORY_WIN32_SPEC_VERSION                                          = 1,
    VK_NV_WIN32_KEYED_MUTEX_SPEC_VERSION                                              = 1,
    VK_KHR_GET_PHYSICAL_DEVICE_PROPERTIES_2_SPEC_VERSION                              = 1,
    VK_EXT_VALIDATION_FLAGS_SPEC_VERSION                                              = 1,
    VK_NN_VI_SURFACE_SPEC_VERSION                                                     = 1,
    VK_KHR_SHADER_DRAW_PARAMETERS_SPEC_VERSION                                        = 1,
    VK_EXT_SHADER_SUBGROUP_BALLOT_SPEC_VERSION                                        = 1,
    VK_EXT_SHADER_SUBGROUP_VOTE_SPEC_VERSION                                          = 1,
    VK_EXT_TEXTURE_COMPRESSION_ASTC_HDR_SPEC_VERSION                                  = 1,
    VK_EXT_ASTC_DECODE_MODE_SPEC_VERSION                                              = 1,
    VK_KHR_DEVICE_GROUP_CREATION_SPEC_VERSION                                         = 1,
    VK_KHR_EXTERNAL_MEMORY_CAPABILITIES_SPEC_VERSION                                  = 1,
    VK_KHR_EXTERNAL_MEMORY_SPEC_VERSION                                               = 1,
    VK_KHR_EXTERNAL_MEMORY_WIN32_SPEC_VERSION                                         = 1,
    VK_KHR_EXTERNAL_MEMORY_FD_SPEC_VERSION                                            = 1,
    VK_KHR_WIN32_KEYED_MUTEX_SPEC_VERSION                                             = 1,
    VK_KHR_EXTERNAL_SEMAPHORE_CAPABILITIES_SPEC_VERSION                               = 1,
    VK_KHR_EXTERNAL_SEMAPHORE_SPEC_VERSION                                            = 1,
    VK_KHR_EXTERNAL_SEMAPHORE_WIN32_SPEC_VERSION                                      = 1,
    VK_KHR_EXTERNAL_SEMAPHORE_FD_SPEC_VERSION                                         = 1,
    VK_EXT_CONDITIONAL_RENDERING_SPEC_VERSION                                         = 1,
    VK_KHR_SHADER_FLOAT16_INT8_SPEC_VERSION                                           = 1,
    VK_KHR_16BIT_STORAGE_SPEC_VERSION                                                 = 1,
    VK_KHR_INCREMENTAL_PRESENT_SPEC_VERSION                                           = 1,
    VK_KHR_DESCRIPTOR_UPDATE_TEMPLATE_SPEC_VERSION                                    = 1,
    VK_NV_CLIP_SPACE_W_SCALING_SPEC_VERSION                                           = 1,
    VK_EXT_DIRECT_MODE_DISPLAY_SPEC_VERSION                                           = 1,
    VK_EXT_ACQUIRE_XLIB_DISPLAY_SPEC_VERSION                                          = 1,
    VK_EXT_DISPLAY_SURFACE_COUNTER_SPEC_VERSION                                       = 1,
    VK_EXT_DISPLAY_CONTROL_SPEC_VERSION                                               = 1,
    VK_GOOGLE_DISPLAY_TIMING_SPEC_VERSION                                             = 1,
    VK_NV_SAMPLE_MASK_OVERRIDE_COVERAGE_SPEC_VERSION                                  = 1,
    VK_NV_GEOMETRY_SHADER_PASSTHROUGH_SPEC_VERSION                                    = 1,
    VK_NV_VIEWPORT_ARRAY2_SPEC_VERSION                                                = 1,
    VK_NVX_MULTIVIEW_PER_VIEW_ATTRIBUTES_SPEC_VERSION                                 = 1,
    VK_NV_VIEWPORT_SWIZZLE_SPEC_VERSION                                               = 1,
    VK_EXT_DISCARD_RECTANGLES_SPEC_VERSION                                            = 1,
    VK_EXT_CONSERVATIVE_RASTERIZATION_SPEC_VERSION                                    = 1,
    VK_EXT_DEPTH_CLIP_ENABLE_SPEC_VERSION                                             = 1,
    VK_EXT_HDR_METADATA_SPEC_VERSION                                                  = 1,
    VK_KHR_IMAGELESS_FRAMEBUFFER_SPEC_VERSION                                         = 1,
    VK_KHR_CREATE_RENDERPASS_2_SPEC_VERSION                                           = 1,
    VK_KHR_SHARED_PRESENTABLE_IMAGE_SPEC_VERSION                                      = 1,
    VK_KHR_EXTERNAL_FENCE_CAPABILITIES_SPEC_VERSION                                   = 1,
    VK_KHR_EXTERNAL_FENCE_SPEC_VERSION                                                = 1,
    VK_KHR_EXTERNAL_FENCE_WIN32_SPEC_VERSION                                          = 1,
    VK_KHR_EXTERNAL_FENCE_FD_SPEC_VERSION                                             = 1,
    VK_KHR_MAINTENANCE2_SPEC_VERSION                                                  = 1,
    VK_KHR_GET_SURFACE_CAPABILITIES_2_SPEC_VERSION                                    = 1,
    VK_KHR_VARIABLE_POINTERS_SPEC_VERSION                                             = 1,
    VK_KHR_GET_DISPLAY_PROPERTIES_2_SPEC_VERSION                                      = 1,
    VK_EXT_EXTERNAL_MEMORY_DMA_BUF_SPEC_VERSION                                       = 1,
    VK_EXT_QUEUE_FAMILY_FOREIGN_SPEC_VERSION                                          = 1,
    VK_EXT_DEBUG_UTILS_SPEC_VERSION                                                   = 1,
    VK_EXT_SAMPLER_FILTER_MINMAX_SPEC_VERSION                                         = 1,
    VK_KHR_STORAGE_BUFFER_STORAGE_CLASS_SPEC_VERSION                                  = 1,
    VK_AMD_MIXED_ATTACHMENT_SAMPLES_SPEC_VERSION                                      = 1,
    VK_AMD_SHADER_FRAGMENT_MASK_SPEC_VERSION                                          = 1,
    VK_EXT_INLINE_UNIFORM_BLOCK_SPEC_VERSION                                          = 1,
    VK_EXT_SHADER_STENCIL_EXPORT_SPEC_VERSION                                         = 1,
    VK_EXT_SAMPLE_LOCATIONS_SPEC_VERSION                                              = 1,
    VK_KHR_RELAXED_BLOCK_LAYOUT_SPEC_VERSION                                          = 1,
    VK_KHR_GET_MEMORY_REQUIREMENTS_2_SPEC_VERSION                                     = 1,
    VK_KHR_IMAGE_FORMAT_LIST_SPEC_VERSION                                             = 1,
    VK_NV_FRAGMENT_COVERAGE_TO_COLOR_SPEC_VERSION                                     = 1,
    VK_NV_FRAMEBUFFER_MIXED_SAMPLES_SPEC_VERSION                                      = 1,
    VK_NV_FILL_RECTANGLE_SPEC_VERSION                                                 = 1,
    VK_NV_SHADER_SM_BUILTINS_SPEC_VERSION                                             = 1,
    VK_EXT_POST_DEPTH_COVERAGE_SPEC_VERSION                                           = 1,
    VK_KHR_SAMPLER_YCBCR_CONVERSION_SPEC_VERSION                                      = 1,
    VK_KHR_BIND_MEMORY_2_SPEC_VERSION                                                 = 1,
    VK_EXT_IMAGE_DRM_FORMAT_MODIFIER_SPEC_VERSION                                     = 1,
    VK_EXT_VALIDATION_CACHE_SPEC_VERSION                                              = 1,
    VK_EXT_SHADER_VIEWPORT_INDEX_LAYER_SPEC_VERSION                                   = 1,
    VK_NV_REPRESENTATIVE_FRAGMENT_TEST_SPEC_VERSION                                   = 1,
    VK_KHR_MAINTENANCE3_SPEC_VERSION                                                  = 1,
    VK_KHR_DRAW_INDIRECT_COUNT_SPEC_VERSION                                           = 1,
    VK_KHR_8BIT_STORAGE_SPEC_VERSION                                                  = 1,
    VK_EXT_EXTERNAL_MEMORY_HOST_SPEC_VERSION                                          = 1,
    VK_AMD_BUFFER_MARKER_SPEC_VERSION                                                 = 1,
    VK_KHR_SHADER_ATOMIC_INT64_SPEC_VERSION                                           = 1,
    VK_EXT_CALIBRATED_TIMESTAMPS_SPEC_VERSION                                         = 1,
    VK_AMD_SHADER_CORE_PROPERTIES_SPEC_VERSION                                        = 1,
    VK_AMD_MEMORY_OVERALLOCATION_BEHAVIOR_SPEC_VERSION                                = 1,
    VK_GGP_FRAME_TOKEN_SPEC_VERSION                                                   = 1,
    VK_EXT_PIPELINE_CREATION_FEEDBACK_SPEC_VERSION                                    = 1,
    VK_KHR_DRIVER_PROPERTIES_SPEC_VERSION                                             = 1,
    VK_NV_SHADER_SUBGROUP_PARTITIONED_SPEC_VERSION                                    = 1,
    VK_KHR_DEPTH_STENCIL_RESOLVE_SPEC_VERSION                                         = 1,
    VK_KHR_SWAPCHAIN_MUTABLE_FORMAT_SPEC_VERSION                                      = 1,
    VK_NV_COMPUTE_SHADER_DERIVATIVES_SPEC_VERSION                                     = 1,
    VK_NV_MESH_SHADER_SPEC_VERSION                                                    = 1,
    VK_NV_FRAGMENT_SHADER_BARYCENTRIC_SPEC_VERSION                                    = 1,
    VK_NV_SHADER_IMAGE_FOOTPRINT_SPEC_VERSION                                         = 1,
    VK_NV_SCISSOR_EXCLUSIVE_SPEC_VERSION                                              = 1,
    VK_INTEL_SHADER_INTEGER_FUNCTIONS_2_SPEC_VERSION                                  = 1,
    VK_INTEL_PERFORMANCE_QUERY_SPEC_VERSION                                           = 1,
    VK_AMD_DISPLAY_NATIVE_HDR_SPEC_VERSION                                            = 1,
    VK_FUCHSIA_IMAGEPIPE_SURFACE_SPEC_VERSION                                         = 1,
    VK_EXT_METAL_SURFACE_SPEC_VERSION                                                 = 1,
    VK_EXT_FRAGMENT_DENSITY_MAP_SPEC_VERSION                                          = 1,
    VK_EXT_SCALAR_BLOCK_LAYOUT_SPEC_VERSION                                           = 1,
    VK_GOOGLE_HLSL_FUNCTIONALITY1_SPEC_VERSION                                        = 1,
    VK_GOOGLE_DECORATE_STRING_SPEC_VERSION                                            = 1,
    VK_EXT_SUBGROUP_SIZE_CONTROL_SPEC_VERSION                                         = 1,
    VK_EXT_MEMORY_BUDGET_SPEC_VERSION                                                 = 1,
    VK_EXT_MEMORY_PRIORITY_SPEC_VERSION                                               = 1,
    VK_KHR_SURFACE_PROTECTED_CAPABILITIES_SPEC_VERSION                                = 1,
    VK_NV_DEDICATED_ALLOCATION_IMAGE_ALIASING_SPEC_VERSION                            = 1,
    VK_EXT_SEPARATE_STENCIL_USAGE_SPEC_VERSION                                        = 1,
    VK_EXT_VALIDATION_FEATURES_SPEC_VERSION                                           = 1,
    VK_NV_COOPERATIVE_MATRIX_SPEC_VERSION                                             = 1,
    VK_NV_COVERAGE_REDUCTION_MODE_SPEC_VERSION                                        = 1,
    VK_EXT_FRAGMENT_SHADER_INTERLOCK_SPEC_VERSION                                     = 1,
    VK_EXT_YCBCR_IMAGE_ARRAYS_SPEC_VERSION                                            = 1,
    VK_KHR_UNIFORM_BUFFER_STANDARD_LAYOUT_SPEC_VERSION                                = 1,
    VK_EXT_LINE_RASTERIZATION_SPEC_VERSION                                            = 1,
    VK_EXT_HOST_QUERY_RESET_SPEC_VERSION                                              = 1,
    VK_EXT_INDEX_TYPE_UINT8_SPEC_VERSION                                              = 1,
    VK_EXT_SHADER_DEMOTE_TO_HELPER_INVOCATION_SPEC_VERSION                            = 1,
    VK_EXT_TEXEL_BUFFER_ALIGNMENT_SPEC_VERSION                                        = 1,
    VK_LOD_CLAMP_NONE                                                                 = 1000.0f,
    VK_ANDROID_NATIVE_BUFFER_NUMBER                                                   = 11,
    VK_UUID_SIZE                                                                      = 16,
    VK_MAX_MEMORY_HEAPS                                                               = 16,
    VK_AMD_GPU_SHADER_HALF_FLOAT_SPEC_VERSION                                         = 2,
    VK_NV_CORNER_SAMPLED_IMAGE_SPEC_VERSION                                           = 2,
    VK_KHR_MAINTENANCE1_SPEC_VERSION                                                  = 2,
    VK_KHR_PUSH_DESCRIPTOR_SPEC_VERSION                                               = 2,
    VK_MVK_IOS_SURFACE_SPEC_VERSION                                                   = 2,
    VK_MVK_MACOS_SURFACE_SPEC_VERSION                                                 = 2,
    VK_AMD_GPU_SHADER_INT16_SPEC_VERSION                                              = 2,
    VK_EXT_BLEND_OPERATION_ADVANCED_SPEC_VERSION                                      = 2,
    VK_EXT_DESCRIPTOR_INDEXING_SPEC_VERSION                                           = 2,
    VK_EXT_FILTER_CUBIC_SPEC_VERSION                                                  = 2,
    VK_EXT_GLOBAL_PRIORITY_SPEC_VERSION                                               = 2,
    VK_NV_DEVICE_DIAGNOSTIC_CHECKPOINTS_SPEC_VERSION                                  = 2,
    VK_EXT_PCI_BUS_INFO_SPEC_VERSION                                                  = 2,
    VK_EXT_BUFFER_DEVICE_ADDRESS_SPEC_VERSION                                         = 2,
    VK_KHR_DISPLAY_SPEC_VERSION                                                       = 21,
    VK_KHR_SURFACE_SPEC_VERSION                                                       = 25,
    VK_MAX_PHYSICAL_DEVICE_NAME_SIZE                                                  = 256,
    VK_MAX_EXTENSION_NAME_SIZE                                                        = 256,
    VK_MAX_DESCRIPTION_SIZE                                                           = 256,
    VK_MAX_DRIVER_NAME_SIZE_KHR                                                       = 256,
    VK_MAX_DRIVER_INFO_SIZE_KHR                                                       = 256,
    VK_KHR_DEVICE_GROUP_SPEC_VERSION                                                  = 3,
    VK_NVX_DEVICE_GENERATED_COMMANDS_SPEC_VERSION                                     = 3,
    VK_KHR_DEDICATED_ALLOCATION_SPEC_VERSION                                          = 3,
    VK_ANDROID_EXTERNAL_MEMORY_ANDROID_HARDWARE_BUFFER_SPEC_VERSION                   = 3,
    VK_NV_SHADING_RATE_IMAGE_SPEC_VERSION                                             = 3,
    VK_NV_RAY_TRACING_SPEC_VERSION                                                    = 3,
    VK_EXT_VERTEX_ATTRIBUTE_DIVISOR_SPEC_VERSION                                      = 3,
    VK_KHR_VULKAN_MEMORY_MODEL_SPEC_VERSION                                           = 3,
    VK_EXT_FULL_SCREEN_EXCLUSIVE_SPEC_VERSION                                         = 3,
    VK_MAX_MEMORY_TYPES                                                               = 32,
    VK_MAX_DEVICE_GROUP_SIZE                                                          = 32,
    VK_MAX_DEVICE_GROUP_SIZE_KHR                                                      = 32,
    VK_KHR_MIR_SURFACE_SPEC_VERSION                                                   = 4,
    VK_EXT_DEBUG_MARKER_SPEC_VERSION                                                  = 4,
    VK_EXT_SWAPCHAIN_COLOR_SPACE_SPEC_VERSION                                         = 4,
    VK_KHR_SHADER_FLOAT_CONTROLS_SPEC_VERSION                                         = 4,
    VK_KHR_XLIB_SURFACE_SPEC_VERSION                                                  = 6,
    VK_KHR_XCB_SURFACE_SPEC_VERSION                                                   = 6,
    VK_KHR_WAYLAND_SURFACE_SPEC_VERSION                                               = 6,
    VK_KHR_ANDROID_SURFACE_SPEC_VERSION                                               = 6,
    VK_KHR_WIN32_SURFACE_SPEC_VERSION                                                 = 6,
    VK_KHR_SWAPCHAIN_SPEC_VERSION                                                     = 70,
    VK_LUID_SIZE                                                                      = 8,
    VK_LUID_SIZE_KHR                                                                  = 8,
    VK_ANDROID_NATIVE_BUFFER_SPEC_VERSION                                             = 8,
    VK_KHR_DISPLAY_SWAPCHAIN_SPEC_VERSION                                             = 9,
    VK_EXT_DEBUG_REPORT_SPEC_VERSION                                                  = 9,

    // VkAccelerationStructureMemoryRequirementsTypeNV

    VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_OBJECT_NV                      = 0,
    VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_BUILD_SCRATCH_NV               = 1,
    VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_UPDATE_SCRATCH_NV              = 2,

    // VkAccelerationStructureTypeNV

    VK_ACCELERATION_STRUCTURE_TYPE_TOP_LEVEL_NV                                       = 0,
    VK_ACCELERATION_STRUCTURE_TYPE_BOTTOM_LEVEL_NV                                    = 1,

    // VkAttachmentLoadOp

    VK_ATTACHMENT_LOAD_OP_LOAD                                                        = 0,
    VK_ATTACHMENT_LOAD_OP_CLEAR                                                       = 1,
    VK_ATTACHMENT_LOAD_OP_DONT_CARE                                                   = 2,

    // VkAttachmentStoreOp

    VK_ATTACHMENT_STORE_OP_STORE                                                      = 0,
    VK_ATTACHMENT_STORE_OP_DONT_CARE                                                  = 1,

    // VkBlendFactor

    VK_BLEND_FACTOR_ZERO                                                              = 0,
    VK_BLEND_FACTOR_ONE                                                               = 1,
    VK_BLEND_FACTOR_CONSTANT_COLOR                                                    = 10,
    VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR                                          = 11,
    VK_BLEND_FACTOR_CONSTANT_ALPHA                                                    = 12,
    VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_ALPHA                                          = 13,
    VK_BLEND_FACTOR_SRC_ALPHA_SATURATE                                                = 14,
    VK_BLEND_FACTOR_SRC1_COLOR                                                        = 15,
    VK_BLEND_FACTOR_ONE_MINUS_SRC1_COLOR                                              = 16,
    VK_BLEND_FACTOR_SRC1_ALPHA                                                        = 17,
    VK_BLEND_FACTOR_ONE_MINUS_SRC1_ALPHA                                              = 18,
    VK_BLEND_FACTOR_SRC_COLOR                                                         = 2,
    VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR                                               = 3,
    VK_BLEND_FACTOR_DST_COLOR                                                         = 4,
    VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR                                               = 5,
    VK_BLEND_FACTOR_SRC_ALPHA                                                         = 6,
    VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA                                               = 7,
    VK_BLEND_FACTOR_DST_ALPHA                                                         = 8,
    VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA                                               = 9,

    // VkBlendOp

    VK_BLEND_OP_ADD                                                                   = 0,
    VK_BLEND_OP_ZERO_EXT                                                              = 0x3b9d0c20,
    VK_BLEND_OP_SRC_EXT                                                               = 0x3b9d0c21,
    VK_BLEND_OP_DST_EXT                                                               = 0x3b9d0c22,
    VK_BLEND_OP_SRC_OVER_EXT                                                          = 0x3b9d0c23,
    VK_BLEND_OP_DST_OVER_EXT                                                          = 0x3b9d0c24,
    VK_BLEND_OP_SRC_IN_EXT                                                            = 0x3b9d0c25,
    VK_BLEND_OP_DST_IN_EXT                                                            = 0x3b9d0c26,
    VK_BLEND_OP_SRC_OUT_EXT                                                           = 0x3b9d0c27,
    VK_BLEND_OP_DST_OUT_EXT                                                           = 0x3b9d0c28,
    VK_BLEND_OP_SRC_ATOP_EXT                                                          = 0x3b9d0c29,
    VK_BLEND_OP_DST_ATOP_EXT                                                          = 0x3b9d0c2a,
    VK_BLEND_OP_XOR_EXT                                                               = 0x3b9d0c2b,
    VK_BLEND_OP_MULTIPLY_EXT                                                          = 0x3b9d0c2c,
    VK_BLEND_OP_SCREEN_EXT                                                            = 0x3b9d0c2d,
    VK_BLEND_OP_OVERLAY_EXT                                                           = 0x3b9d0c2e,
    VK_BLEND_OP_DARKEN_EXT                                                            = 0x3b9d0c2f,
    VK_BLEND_OP_LIGHTEN_EXT                                                           = 0x3b9d0c30,
    VK_BLEND_OP_COLORDODGE_EXT                                                        = 0x3b9d0c31,
    VK_BLEND_OP_COLORBURN_EXT                                                         = 0x3b9d0c32,
    VK_BLEND_OP_HARDLIGHT_EXT                                                         = 0x3b9d0c33,
    VK_BLEND_OP_SOFTLIGHT_EXT                                                         = 0x3b9d0c34,
    VK_BLEND_OP_DIFFERENCE_EXT                                                        = 0x3b9d0c35,
    VK_BLEND_OP_EXCLUSION_EXT                                                         = 0x3b9d0c36,
    VK_BLEND_OP_INVERT_EXT                                                            = 0x3b9d0c37,
    VK_BLEND_OP_INVERT_RGB_EXT                                                        = 0x3b9d0c38,
    VK_BLEND_OP_LINEARDODGE_EXT                                                       = 0x3b9d0c39,
    VK_BLEND_OP_LINEARBURN_EXT                                                        = 0x3b9d0c3a,
    VK_BLEND_OP_VIVIDLIGHT_EXT                                                        = 0x3b9d0c3b,
    VK_BLEND_OP_LINEARLIGHT_EXT                                                       = 0x3b9d0c3c,
    VK_BLEND_OP_PINLIGHT_EXT                                                          = 0x3b9d0c3d,
    VK_BLEND_OP_HARDMIX_EXT                                                           = 0x3b9d0c3e,
    VK_BLEND_OP_HSL_HUE_EXT                                                           = 0x3b9d0c3f,
    VK_BLEND_OP_HSL_SATURATION_EXT                                                    = 0x3b9d0c40,
    VK_BLEND_OP_HSL_COLOR_EXT                                                         = 0x3b9d0c41,
    VK_BLEND_OP_HSL_LUMINOSITY_EXT                                                    = 0x3b9d0c42,
    VK_BLEND_OP_PLUS_EXT                                                              = 0x3b9d0c43,
    VK_BLEND_OP_PLUS_CLAMPED_EXT                                                      = 0x3b9d0c44,
    VK_BLEND_OP_PLUS_CLAMPED_ALPHA_EXT                                                = 0x3b9d0c45,
    VK_BLEND_OP_PLUS_DARKER_EXT                                                       = 0x3b9d0c46,
    VK_BLEND_OP_MINUS_EXT                                                             = 0x3b9d0c47,
    VK_BLEND_OP_MINUS_CLAMPED_EXT                                                     = 0x3b9d0c48,
    VK_BLEND_OP_CONTRAST_EXT                                                          = 0x3b9d0c49,
    VK_BLEND_OP_INVERT_OVG_EXT                                                        = 0x3b9d0c4a,
    VK_BLEND_OP_RED_EXT                                                               = 0x3b9d0c4b,
    VK_BLEND_OP_GREEN_EXT                                                             = 0x3b9d0c4c,
    VK_BLEND_OP_BLUE_EXT                                                              = 0x3b9d0c4d,
    VK_BLEND_OP_SUBTRACT                                                              = 1,
    VK_BLEND_OP_REVERSE_SUBTRACT                                                      = 2,
    VK_BLEND_OP_MIN                                                                   = 3,
    VK_BLEND_OP_MAX                                                                   = 4,

    // VkBlendOverlapEXT

    VK_BLEND_OVERLAP_UNCORRELATED_EXT                                                 = 0,
    VK_BLEND_OVERLAP_DISJOINT_EXT                                                     = 1,
    VK_BLEND_OVERLAP_CONJOINT_EXT                                                     = 2,

    // VkBorderColor

    VK_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK                                           = 0,
    VK_BORDER_COLOR_INT_TRANSPARENT_BLACK                                             = 1,
    VK_BORDER_COLOR_FLOAT_OPAQUE_BLACK                                                = 2,
    VK_BORDER_COLOR_INT_OPAQUE_BLACK                                                  = 3,
    VK_BORDER_COLOR_FLOAT_OPAQUE_WHITE                                                = 4,
    VK_BORDER_COLOR_INT_OPAQUE_WHITE                                                  = 5,

    // VkChromaLocation

    VK_CHROMA_LOCATION_COSITED_EVEN                                                   = 0,
    VK_CHROMA_LOCATION_COSITED_EVEN_KHR                                               = 0,
    VK_CHROMA_LOCATION_MIDPOINT                                                       = 1,
    VK_CHROMA_LOCATION_MIDPOINT_KHR                                                   = 1,

    // VkCoarseSampleOrderTypeNV

    VK_COARSE_SAMPLE_ORDER_TYPE_DEFAULT_NV                                            = 0,
    VK_COARSE_SAMPLE_ORDER_TYPE_CUSTOM_NV                                             = 1,
    VK_COARSE_SAMPLE_ORDER_TYPE_PIXEL_MAJOR_NV                                        = 2,
    VK_COARSE_SAMPLE_ORDER_TYPE_SAMPLE_MAJOR_NV                                       = 3,

    // VkColorSpaceKHR

    VK_COLOR_SPACE_SRGB_NONLINEAR_KHR                                                 = 0,
    VK_COLORSPACE_SRGB_NONLINEAR_KHR                                                  = 0,
    VK_COLOR_SPACE_DISPLAY_P3_NONLINEAR_EXT                                           = 0x3b9c6041,
    VK_COLOR_SPACE_EXTENDED_SRGB_LINEAR_EXT                                           = 0x3b9c6042,
    VK_COLOR_SPACE_DISPLAY_P3_LINEAR_EXT                                              = 0x3b9c6043,
    VK_COLOR_SPACE_DCI_P3_LINEAR_EXT                                                  = 0x3b9c6043,
    VK_COLOR_SPACE_DCI_P3_NONLINEAR_EXT                                               = 0x3b9c6044,
    VK_COLOR_SPACE_BT709_LINEAR_EXT                                                   = 0x3b9c6045,
    VK_COLOR_SPACE_BT709_NONLINEAR_EXT                                                = 0x3b9c6046,
    VK_COLOR_SPACE_BT2020_LINEAR_EXT                                                  = 0x3b9c6047,
    VK_COLOR_SPACE_HDR10_ST2084_EXT                                                   = 0x3b9c6048,
    VK_COLOR_SPACE_DOLBYVISION_EXT                                                    = 0x3b9c6049,
    VK_COLOR_SPACE_HDR10_HLG_EXT                                                      = 0x3b9c604a,
    VK_COLOR_SPACE_ADOBERGB_LINEAR_EXT                                                = 0x3b9c604b,
    VK_COLOR_SPACE_ADOBERGB_NONLINEAR_EXT                                             = 0x3b9c604c,
    VK_COLOR_SPACE_PASS_THROUGH_EXT                                                   = 0x3b9c604d,
    VK_COLOR_SPACE_EXTENDED_SRGB_NONLINEAR_EXT                                        = 0x3b9c604e,
    VK_COLOR_SPACE_DISPLAY_NATIVE_AMD                                                 = 0x3b9e0a08,

    // VkCommandBufferLevel

    VK_COMMAND_BUFFER_LEVEL_PRIMARY                                                   = 0,
    VK_COMMAND_BUFFER_LEVEL_SECONDARY                                                 = 1,

    // VkCompareOp

    VK_COMPARE_OP_NEVER                                                               = 0,
    VK_COMPARE_OP_LESS                                                                = 1,
    VK_COMPARE_OP_EQUAL                                                               = 2,
    VK_COMPARE_OP_LESS_OR_EQUAL                                                       = 3,
    VK_COMPARE_OP_GREATER                                                             = 4,
    VK_COMPARE_OP_NOT_EQUAL                                                           = 5,
    VK_COMPARE_OP_GREATER_OR_EQUAL                                                    = 6,
    VK_COMPARE_OP_ALWAYS                                                              = 7,

    // VkComponentSwizzle

    VK_COMPONENT_SWIZZLE_IDENTITY                                                     = 0,
    VK_COMPONENT_SWIZZLE_ZERO                                                         = 1,
    VK_COMPONENT_SWIZZLE_ONE                                                          = 2,
    VK_COMPONENT_SWIZZLE_R                                                            = 3,
    VK_COMPONENT_SWIZZLE_G                                                            = 4,
    VK_COMPONENT_SWIZZLE_B                                                            = 5,
    VK_COMPONENT_SWIZZLE_A                                                            = 6,

    // VkComponentTypeNV

    VK_COMPONENT_TYPE_FLOAT16_NV                                                      = 0,
    VK_COMPONENT_TYPE_FLOAT32_NV                                                      = 1,
    VK_COMPONENT_TYPE_UINT64_NV                                                       = 10,
    VK_COMPONENT_TYPE_FLOAT64_NV                                                      = 2,
    VK_COMPONENT_TYPE_SINT8_NV                                                        = 3,
    VK_COMPONENT_TYPE_SINT16_NV                                                       = 4,
    VK_COMPONENT_TYPE_SINT32_NV                                                       = 5,
    VK_COMPONENT_TYPE_SINT64_NV                                                       = 6,
    VK_COMPONENT_TYPE_UINT8_NV                                                        = 7,
    VK_COMPONENT_TYPE_UINT16_NV                                                       = 8,
    VK_COMPONENT_TYPE_UINT32_NV                                                       = 9,

    // VkConservativeRasterizationModeEXT

    VK_CONSERVATIVE_RASTERIZATION_MODE_DISABLED_EXT                                   = 0,
    VK_CONSERVATIVE_RASTERIZATION_MODE_OVERESTIMATE_EXT                               = 1,
    VK_CONSERVATIVE_RASTERIZATION_MODE_UNDERESTIMATE_EXT                              = 2,

    // VkCopyAccelerationStructureModeNV

    VK_COPY_ACCELERATION_STRUCTURE_MODE_CLONE_NV                                      = 0,
    VK_COPY_ACCELERATION_STRUCTURE_MODE_COMPACT_NV                                    = 1,

    // VkCoverageModulationModeNV

    VK_COVERAGE_MODULATION_MODE_NONE_NV                                               = 0,
    VK_COVERAGE_MODULATION_MODE_RGB_NV                                                = 1,
    VK_COVERAGE_MODULATION_MODE_ALPHA_NV                                              = 2,
    VK_COVERAGE_MODULATION_MODE_RGBA_NV                                               = 3,

    // VkCoverageReductionModeNV

    VK_COVERAGE_REDUCTION_MODE_MERGE_NV                                               = 0,
    VK_COVERAGE_REDUCTION_MODE_TRUNCATE_NV                                            = 1,

    // VkDebugReportObjectTypeEXT

    VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT                                           = 0,
    VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_EXT                          = 0x3b9af4f8,
    VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_EXT                        = 0x3b9af4f8,
    VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_KHR_EXT                    = 0x3b9af4f8,
    VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_KHR_EXT                      = 0x3b9af4f8,
    VK_DEBUG_REPORT_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV_EXT                         = 0x3b9d4e88,
    VK_DEBUG_REPORT_OBJECT_TYPE_INSTANCE_EXT                                          = 1,
    VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_EXT                                             = 10,
    VK_DEBUG_REPORT_OBJECT_TYPE_EVENT_EXT                                             = 11,
    VK_DEBUG_REPORT_OBJECT_TYPE_QUERY_POOL_EXT                                        = 12,
    VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_VIEW_EXT                                       = 13,
    VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_VIEW_EXT                                        = 14,
    VK_DEBUG_REPORT_OBJECT_TYPE_SHADER_MODULE_EXT                                     = 15,
    VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_CACHE_EXT                                    = 16,
    VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_LAYOUT_EXT                                   = 17,
    VK_DEBUG_REPORT_OBJECT_TYPE_RENDER_PASS_EXT                                       = 18,
    VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_EXT                                          = 19,
    VK_DEBUG_REPORT_OBJECT_TYPE_PHYSICAL_DEVICE_EXT                                   = 2,
    VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT_EXT                             = 20,
    VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_EXT                                           = 21,
    VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_POOL_EXT                                   = 22,
    VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_EXT                                    = 23,
    VK_DEBUG_REPORT_OBJECT_TYPE_FRAMEBUFFER_EXT                                       = 24,
    VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_POOL_EXT                                      = 25,
    VK_DEBUG_REPORT_OBJECT_TYPE_SURFACE_KHR_EXT                                       = 26,
    VK_DEBUG_REPORT_OBJECT_TYPE_SWAPCHAIN_KHR_EXT                                     = 27,
    VK_DEBUG_REPORT_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT_EXT                         = 28,
    VK_DEBUG_REPORT_OBJECT_TYPE_DEBUG_REPORT_EXT                                      = 28,
    VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_KHR_EXT                                       = 29,
    VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_EXT                                            = 3,
    VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_MODE_KHR_EXT                                  = 30,
    VK_DEBUG_REPORT_OBJECT_TYPE_OBJECT_TABLE_NVX_EXT                                  = 31,
    VK_DEBUG_REPORT_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_NVX_EXT                      = 32,
    VK_DEBUG_REPORT_OBJECT_TYPE_VALIDATION_CACHE_EXT_EXT                              = 33,
    VK_DEBUG_REPORT_OBJECT_TYPE_VALIDATION_CACHE_EXT                                  = 33,
    VK_DEBUG_REPORT_OBJECT_TYPE_QUEUE_EXT                                             = 4,
    VK_DEBUG_REPORT_OBJECT_TYPE_SEMAPHORE_EXT                                         = 5,
    VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_BUFFER_EXT                                    = 6,
    VK_DEBUG_REPORT_OBJECT_TYPE_FENCE_EXT                                             = 7,
    VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_MEMORY_EXT                                     = 8,
    VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_EXT                                            = 9,

    // VkDescriptorType

    VK_DESCRIPTOR_TYPE_SAMPLER                                                        = 0,
    VK_DESCRIPTOR_TYPE_INLINE_UNIFORM_BLOCK_EXT                                       = 0x3b9ce510,
    VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_NV                                      = 0x3b9d4e88,
    VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER                                         = 1,
    VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT                                               = 10,
    VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE                                                  = 2,
    VK_DESCRIPTOR_TYPE_STORAGE_IMAGE                                                  = 3,
    VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER                                           = 4,
    VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER                                           = 5,
    VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER                                                 = 6,
    VK_DESCRIPTOR_TYPE_STORAGE_BUFFER                                                 = 7,
    VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC                                         = 8,
    VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC                                         = 9,

    // VkDescriptorUpdateTemplateType

    VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET                                 = 0,
    VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET_KHR                             = 0,
    VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_PUSH_DESCRIPTORS_KHR                           = 1,

    // VkDeviceEventTypeEXT

    VK_DEVICE_EVENT_TYPE_DISPLAY_HOTPLUG_EXT                                          = 0,

    // VkDiscardRectangleModeEXT

    VK_DISCARD_RECTANGLE_MODE_INCLUSIVE_EXT                                           = 0,
    VK_DISCARD_RECTANGLE_MODE_EXCLUSIVE_EXT                                           = 1,

    // VkDisplayEventTypeEXT

    VK_DISPLAY_EVENT_TYPE_FIRST_PIXEL_OUT_EXT                                         = 0,

    // VkDisplayPowerStateEXT

    VK_DISPLAY_POWER_STATE_OFF_EXT                                                    = 0,
    VK_DISPLAY_POWER_STATE_SUSPEND_EXT                                                = 1,
    VK_DISPLAY_POWER_STATE_ON_EXT                                                     = 2,

    // VkDriverIdKHR

    VK_DRIVER_ID_AMD_PROPRIETARY_KHR                                                  = 1,
    VK_DRIVER_ID_GOOGLE_SWIFTSHADER_KHR                                               = 10,
    VK_DRIVER_ID_GGP_PROPRIETARY_KHR                                                  = 11,
    VK_DRIVER_ID_BROADCOM_PROPRIETARY_KHR                                             = 12,
    VK_DRIVER_ID_AMD_OPEN_SOURCE_KHR                                                  = 2,
    VK_DRIVER_ID_MESA_RADV_KHR                                                        = 3,
    VK_DRIVER_ID_NVIDIA_PROPRIETARY_KHR                                               = 4,
    VK_DRIVER_ID_INTEL_PROPRIETARY_WINDOWS_KHR                                        = 5,
    VK_DRIVER_ID_INTEL_OPEN_SOURCE_MESA_KHR                                           = 6,
    VK_DRIVER_ID_IMAGINATION_PROPRIETARY_KHR                                          = 7,
    VK_DRIVER_ID_QUALCOMM_PROPRIETARY_KHR                                             = 8,
    VK_DRIVER_ID_ARM_PROPRIETARY_KHR                                                  = 9,

    // VkDynamicState

    VK_DYNAMIC_STATE_VIEWPORT                                                         = 0,
    VK_DYNAMIC_STATE_VIEWPORT_W_SCALING_NV                                            = 0x3b9c1dd8,
    VK_DYNAMIC_STATE_DISCARD_RECTANGLE_EXT                                            = 0x3b9c4cb8,
    VK_DYNAMIC_STATE_SAMPLE_LOCATIONS_EXT                                             = 0x3b9cf898,
    VK_DYNAMIC_STATE_VIEWPORT_SHADING_RATE_PALETTE_NV                                 = 0x3b9d4aa4,
    VK_DYNAMIC_STATE_VIEWPORT_COARSE_SAMPLE_ORDER_NV                                  = 0x3b9d4aa6,
    VK_DYNAMIC_STATE_EXCLUSIVE_SCISSOR_NV                                             = 0x3b9deac9,
    VK_DYNAMIC_STATE_LINE_STIPPLE_EXT                                                 = 0x3b9ebdb8,
    VK_DYNAMIC_STATE_SCISSOR                                                          = 1,
    VK_DYNAMIC_STATE_LINE_WIDTH                                                       = 2,
    VK_DYNAMIC_STATE_DEPTH_BIAS                                                       = 3,
    VK_DYNAMIC_STATE_BLEND_CONSTANTS                                                  = 4,
    VK_DYNAMIC_STATE_DEPTH_BOUNDS                                                     = 5,
    VK_DYNAMIC_STATE_STENCIL_COMPARE_MASK                                             = 6,
    VK_DYNAMIC_STATE_STENCIL_WRITE_MASK                                               = 7,
    VK_DYNAMIC_STATE_STENCIL_REFERENCE                                                = 8,

    // VkFilter

    VK_FILTER_NEAREST                                                                 = 0,
    VK_FILTER_CUBIC_IMG                                                               = 0x3b9b0498,
    VK_FILTER_CUBIC_EXT                                                               = 0x3b9b0498,
    VK_FILTER_LINEAR                                                                  = 1,

    // VkFormat

    VK_FORMAT_UNDEFINED                                                               = 0,
    VK_FORMAT_PVRTC1_2BPP_UNORM_BLOCK_IMG                                             = 0x3b9b9cf0,
    VK_FORMAT_PVRTC1_4BPP_UNORM_BLOCK_IMG                                             = 0x3b9b9cf1,
    VK_FORMAT_PVRTC2_2BPP_UNORM_BLOCK_IMG                                             = 0x3b9b9cf2,
    VK_FORMAT_PVRTC2_4BPP_UNORM_BLOCK_IMG                                             = 0x3b9b9cf3,
    VK_FORMAT_PVRTC1_2BPP_SRGB_BLOCK_IMG                                              = 0x3b9b9cf4,
    VK_FORMAT_PVRTC1_4BPP_SRGB_BLOCK_IMG                                              = 0x3b9b9cf5,
    VK_FORMAT_PVRTC2_2BPP_SRGB_BLOCK_IMG                                              = 0x3b9b9cf6,
    VK_FORMAT_PVRTC2_4BPP_SRGB_BLOCK_IMG                                              = 0x3b9b9cf7,
    VK_FORMAT_ASTC_4x4_SFLOAT_BLOCK_EXT                                               = 0x3b9bcbd0,
    VK_FORMAT_ASTC_5x4_SFLOAT_BLOCK_EXT                                               = 0x3b9bcbd1,
    VK_FORMAT_ASTC_5x5_SFLOAT_BLOCK_EXT                                               = 0x3b9bcbd2,
    VK_FORMAT_ASTC_6x5_SFLOAT_BLOCK_EXT                                               = 0x3b9bcbd3,
    VK_FORMAT_ASTC_6x6_SFLOAT_BLOCK_EXT                                               = 0x3b9bcbd4,
    VK_FORMAT_ASTC_8x5_SFLOAT_BLOCK_EXT                                               = 0x3b9bcbd5,
    VK_FORMAT_ASTC_8x6_SFLOAT_BLOCK_EXT                                               = 0x3b9bcbd6,
    VK_FORMAT_ASTC_8x8_SFLOAT_BLOCK_EXT                                               = 0x3b9bcbd7,
    VK_FORMAT_ASTC_10x5_SFLOAT_BLOCK_EXT                                              = 0x3b9bcbd8,
    VK_FORMAT_ASTC_10x6_SFLOAT_BLOCK_EXT                                              = 0x3b9bcbd9,
    VK_FORMAT_ASTC_10x8_SFLOAT_BLOCK_EXT                                              = 0x3b9bcbda,
    VK_FORMAT_ASTC_10x10_SFLOAT_BLOCK_EXT                                             = 0x3b9bcbdb,
    VK_FORMAT_ASTC_12x10_SFLOAT_BLOCK_EXT                                             = 0x3b9bcbdc,
    VK_FORMAT_ASTC_12x12_SFLOAT_BLOCK_EXT                                             = 0x3b9bcbdd,
    VK_FORMAT_G8B8G8R8_422_UNORM                                                      = 0x3b9d2b60,
    VK_FORMAT_G8B8G8R8_422_UNORM_KHR                                                  = 0x3b9d2b60,
    VK_FORMAT_B8G8R8G8_422_UNORM                                                      = 0x3b9d2b61,
    VK_FORMAT_B8G8R8G8_422_UNORM_KHR                                                  = 0x3b9d2b61,
    VK_FORMAT_G8_B8_R8_3PLANE_420_UNORM                                               = 0x3b9d2b62,
    VK_FORMAT_G8_B8_R8_3PLANE_420_UNORM_KHR                                           = 0x3b9d2b62,
    VK_FORMAT_G8_B8R8_2PLANE_420_UNORM                                                = 0x3b9d2b63,
    VK_FORMAT_G8_B8R8_2PLANE_420_UNORM_KHR                                            = 0x3b9d2b63,
    VK_FORMAT_G8_B8_R8_3PLANE_422_UNORM                                               = 0x3b9d2b64,
    VK_FORMAT_G8_B8_R8_3PLANE_422_UNORM_KHR                                           = 0x3b9d2b64,
    VK_FORMAT_G8_B8R8_2PLANE_422_UNORM                                                = 0x3b9d2b65,
    VK_FORMAT_G8_B8R8_2PLANE_422_UNORM_KHR                                            = 0x3b9d2b65,
    VK_FORMAT_G8_B8_R8_3PLANE_444_UNORM                                               = 0x3b9d2b66,
    VK_FORMAT_G8_B8_R8_3PLANE_444_UNORM_KHR                                           = 0x3b9d2b66,
    VK_FORMAT_R10X6_UNORM_PACK16                                                      = 0x3b9d2b67,
    VK_FORMAT_R10X6_UNORM_PACK16_KHR                                                  = 0x3b9d2b67,
    VK_FORMAT_R10X6G10X6_UNORM_2PACK16                                                = 0x3b9d2b68,
    VK_FORMAT_R10X6G10X6_UNORM_2PACK16_KHR                                            = 0x3b9d2b68,
    VK_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16                                      = 0x3b9d2b69,
    VK_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16_KHR                                  = 0x3b9d2b69,
    VK_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16                                  = 0x3b9d2b6a,
    VK_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16_KHR                              = 0x3b9d2b6a,
    VK_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16                                  = 0x3b9d2b6b,
    VK_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16_KHR                              = 0x3b9d2b6b,
    VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16                              = 0x3b9d2b6c,
    VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16_KHR                          = 0x3b9d2b6c,
    VK_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16                               = 0x3b9d2b6d,
    VK_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16_KHR                           = 0x3b9d2b6d,
    VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16                              = 0x3b9d2b6e,
    VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16_KHR                          = 0x3b9d2b6e,
    VK_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16                               = 0x3b9d2b6f,
    VK_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16_KHR                           = 0x3b9d2b6f,
    VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16                              = 0x3b9d2b70,
    VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16_KHR                          = 0x3b9d2b70,
    VK_FORMAT_R12X4_UNORM_PACK16                                                      = 0x3b9d2b71,
    VK_FORMAT_R12X4_UNORM_PACK16_KHR                                                  = 0x3b9d2b71,
    VK_FORMAT_R12X4G12X4_UNORM_2PACK16                                                = 0x3b9d2b72,
    VK_FORMAT_R12X4G12X4_UNORM_2PACK16_KHR                                            = 0x3b9d2b72,
    VK_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16                                      = 0x3b9d2b73,
    VK_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16_KHR                                  = 0x3b9d2b73,
    VK_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16                                  = 0x3b9d2b74,
    VK_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16_KHR                              = 0x3b9d2b74,
    VK_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16                                  = 0x3b9d2b75,
    VK_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16_KHR                              = 0x3b9d2b75,
    VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16                              = 0x3b9d2b76,
    VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16_KHR                          = 0x3b9d2b76,
    VK_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16                               = 0x3b9d2b77,
    VK_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16_KHR                           = 0x3b9d2b77,
    VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16                              = 0x3b9d2b78,
    VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16_KHR                          = 0x3b9d2b78,
    VK_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16                               = 0x3b9d2b79,
    VK_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16_KHR                           = 0x3b9d2b79,
    VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16                              = 0x3b9d2b7a,
    VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16_KHR                          = 0x3b9d2b7a,
    VK_FORMAT_G16B16G16R16_422_UNORM                                                  = 0x3b9d2b7b,
    VK_FORMAT_G16B16G16R16_422_UNORM_KHR                                              = 0x3b9d2b7b,
    VK_FORMAT_B16G16R16G16_422_UNORM                                                  = 0x3b9d2b7c,
    VK_FORMAT_B16G16R16G16_422_UNORM_KHR                                              = 0x3b9d2b7c,
    VK_FORMAT_G16_B16_R16_3PLANE_420_UNORM                                            = 0x3b9d2b7d,
    VK_FORMAT_G16_B16_R16_3PLANE_420_UNORM_KHR                                        = 0x3b9d2b7d,
    VK_FORMAT_G16_B16R16_2PLANE_420_UNORM                                             = 0x3b9d2b7e,
    VK_FORMAT_G16_B16R16_2PLANE_420_UNORM_KHR                                         = 0x3b9d2b7e,
    VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM                                            = 0x3b9d2b7f,
    VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM_KHR                                        = 0x3b9d2b7f,
    VK_FORMAT_G16_B16R16_2PLANE_422_UNORM                                             = 0x3b9d2b80,
    VK_FORMAT_G16_B16R16_2PLANE_422_UNORM_KHR                                         = 0x3b9d2b80,
    VK_FORMAT_G16_B16_R16_3PLANE_444_UNORM                                            = 0x3b9d2b81,
    VK_FORMAT_G16_B16_R16_3PLANE_444_UNORM_KHR                                        = 0x3b9d2b81,
    VK_FORMAT_R4G4_UNORM_PACK8                                                        = 1,
    VK_FORMAT_R8_SNORM                                                                = 10,
    VK_FORMAT_R32_SFLOAT                                                              = 100,
    VK_FORMAT_R32G32_UINT                                                             = 101,
    VK_FORMAT_R32G32_SINT                                                             = 102,
    VK_FORMAT_R32G32_SFLOAT                                                           = 103,
    VK_FORMAT_R32G32B32_UINT                                                          = 104,
    VK_FORMAT_R32G32B32_SINT                                                          = 105,
    VK_FORMAT_R32G32B32_SFLOAT                                                        = 106,
    VK_FORMAT_R32G32B32A32_UINT                                                       = 107,
    VK_FORMAT_R32G32B32A32_SINT                                                       = 108,
    VK_FORMAT_R32G32B32A32_SFLOAT                                                     = 109,
    VK_FORMAT_R8_USCALED                                                              = 11,
    VK_FORMAT_R64_UINT                                                                = 110,
    VK_FORMAT_R64_SINT                                                                = 111,
    VK_FORMAT_R64_SFLOAT                                                              = 112,
    VK_FORMAT_R64G64_UINT                                                             = 113,
    VK_FORMAT_R64G64_SINT                                                             = 114,
    VK_FORMAT_R64G64_SFLOAT                                                           = 115,
    VK_FORMAT_R64G64B64_UINT                                                          = 116,
    VK_FORMAT_R64G64B64_SINT                                                          = 117,
    VK_FORMAT_R64G64B64_SFLOAT                                                        = 118,
    VK_FORMAT_R64G64B64A64_UINT                                                       = 119,
    VK_FORMAT_R8_SSCALED                                                              = 12,
    VK_FORMAT_R64G64B64A64_SINT                                                       = 120,
    VK_FORMAT_R64G64B64A64_SFLOAT                                                     = 121,
    VK_FORMAT_B10G11R11_UFLOAT_PACK32                                                 = 122,
    VK_FORMAT_E5B9G9R9_UFLOAT_PACK32                                                  = 123,
    VK_FORMAT_D16_UNORM                                                               = 124,
    VK_FORMAT_X8_D24_UNORM_PACK32                                                     = 125,
    VK_FORMAT_D32_SFLOAT                                                              = 126,
    VK_FORMAT_S8_UINT                                                                 = 127,
    VK_FORMAT_D16_UNORM_S8_UINT                                                       = 128,
    VK_FORMAT_D24_UNORM_S8_UINT                                                       = 129,
    VK_FORMAT_R8_UINT                                                                 = 13,
    VK_FORMAT_D32_SFLOAT_S8_UINT                                                      = 130,
    VK_FORMAT_BC1_RGB_UNORM_BLOCK                                                     = 131,
    VK_FORMAT_BC1_RGB_SRGB_BLOCK                                                      = 132,
    VK_FORMAT_BC1_RGBA_UNORM_BLOCK                                                    = 133,
    VK_FORMAT_BC1_RGBA_SRGB_BLOCK                                                     = 134,
    VK_FORMAT_BC2_UNORM_BLOCK                                                         = 135,
    VK_FORMAT_BC2_SRGB_BLOCK                                                          = 136,
    VK_FORMAT_BC3_UNORM_BLOCK                                                         = 137,
    VK_FORMAT_BC3_SRGB_BLOCK                                                          = 138,
    VK_FORMAT_BC4_UNORM_BLOCK                                                         = 139,
    VK_FORMAT_R8_SINT                                                                 = 14,
    VK_FORMAT_BC4_SNORM_BLOCK                                                         = 140,
    VK_FORMAT_BC5_UNORM_BLOCK                                                         = 141,
    VK_FORMAT_BC5_SNORM_BLOCK                                                         = 142,
    VK_FORMAT_BC6H_UFLOAT_BLOCK                                                       = 143,
    VK_FORMAT_BC6H_SFLOAT_BLOCK                                                       = 144,
    VK_FORMAT_BC7_UNORM_BLOCK                                                         = 145,
    VK_FORMAT_BC7_SRGB_BLOCK                                                          = 146,
    VK_FORMAT_ETC2_R8G8B8_UNORM_BLOCK                                                 = 147,
    VK_FORMAT_ETC2_R8G8B8_SRGB_BLOCK                                                  = 148,
    VK_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK                                               = 149,
    VK_FORMAT_R8_SRGB                                                                 = 15,
    VK_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK                                                = 150,
    VK_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK                                               = 151,
    VK_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK                                                = 152,
    VK_FORMAT_EAC_R11_UNORM_BLOCK                                                     = 153,
    VK_FORMAT_EAC_R11_SNORM_BLOCK                                                     = 154,
    VK_FORMAT_EAC_R11G11_UNORM_BLOCK                                                  = 155,
    VK_FORMAT_EAC_R11G11_SNORM_BLOCK                                                  = 156,
    VK_FORMAT_ASTC_4x4_UNORM_BLOCK                                                    = 157,
    VK_FORMAT_ASTC_4x4_SRGB_BLOCK                                                     = 158,
    VK_FORMAT_ASTC_5x4_UNORM_BLOCK                                                    = 159,
    VK_FORMAT_R8G8_UNORM                                                              = 16,
    VK_FORMAT_ASTC_5x4_SRGB_BLOCK                                                     = 160,
    VK_FORMAT_ASTC_5x5_UNORM_BLOCK                                                    = 161,
    VK_FORMAT_ASTC_5x5_SRGB_BLOCK                                                     = 162,
    VK_FORMAT_ASTC_6x5_UNORM_BLOCK                                                    = 163,
    VK_FORMAT_ASTC_6x5_SRGB_BLOCK                                                     = 164,
    VK_FORMAT_ASTC_6x6_UNORM_BLOCK                                                    = 165,
    VK_FORMAT_ASTC_6x6_SRGB_BLOCK                                                     = 166,
    VK_FORMAT_ASTC_8x5_UNORM_BLOCK                                                    = 167,
    VK_FORMAT_ASTC_8x5_SRGB_BLOCK                                                     = 168,
    VK_FORMAT_ASTC_8x6_UNORM_BLOCK                                                    = 169,
    VK_FORMAT_R8G8_SNORM                                                              = 17,
    VK_FORMAT_ASTC_8x6_SRGB_BLOCK                                                     = 170,
    VK_FORMAT_ASTC_8x8_UNORM_BLOCK                                                    = 171,
    VK_FORMAT_ASTC_8x8_SRGB_BLOCK                                                     = 172,
    VK_FORMAT_ASTC_10x5_UNORM_BLOCK                                                   = 173,
    VK_FORMAT_ASTC_10x5_SRGB_BLOCK                                                    = 174,
    VK_FORMAT_ASTC_10x6_UNORM_BLOCK                                                   = 175,
    VK_FORMAT_ASTC_10x6_SRGB_BLOCK                                                    = 176,
    VK_FORMAT_ASTC_10x8_UNORM_BLOCK                                                   = 177,
    VK_FORMAT_ASTC_10x8_SRGB_BLOCK                                                    = 178,
    VK_FORMAT_ASTC_10x10_UNORM_BLOCK                                                  = 179,
    VK_FORMAT_R8G8_USCALED                                                            = 18,
    VK_FORMAT_ASTC_10x10_SRGB_BLOCK                                                   = 180,
    VK_FORMAT_ASTC_12x10_UNORM_BLOCK                                                  = 181,
    VK_FORMAT_ASTC_12x10_SRGB_BLOCK                                                   = 182,
    VK_FORMAT_ASTC_12x12_UNORM_BLOCK                                                  = 183,
    VK_FORMAT_ASTC_12x12_SRGB_BLOCK                                                   = 184,
    VK_FORMAT_R8G8_SSCALED                                                            = 19,
    VK_FORMAT_R4G4B4A4_UNORM_PACK16                                                   = 2,
    VK_FORMAT_R8G8_UINT                                                               = 20,
    VK_FORMAT_R8G8_SINT                                                               = 21,
    VK_FORMAT_R8G8_SRGB                                                               = 22,
    VK_FORMAT_R8G8B8_UNORM                                                            = 23,
    VK_FORMAT_R8G8B8_SNORM                                                            = 24,
    VK_FORMAT_R8G8B8_USCALED                                                          = 25,
    VK_FORMAT_R8G8B8_SSCALED                                                          = 26,
    VK_FORMAT_R8G8B8_UINT                                                             = 27,
    VK_FORMAT_R8G8B8_SINT                                                             = 28,
    VK_FORMAT_R8G8B8_SRGB                                                             = 29,
    VK_FORMAT_B4G4R4A4_UNORM_PACK16                                                   = 3,
    VK_FORMAT_B8G8R8_UNORM                                                            = 30,
    VK_FORMAT_B8G8R8_SNORM                                                            = 31,
    VK_FORMAT_B8G8R8_USCALED                                                          = 32,
    VK_FORMAT_B8G8R8_SSCALED                                                          = 33,
    VK_FORMAT_B8G8R8_UINT                                                             = 34,
    VK_FORMAT_B8G8R8_SINT                                                             = 35,
    VK_FORMAT_B8G8R8_SRGB                                                             = 36,
    VK_FORMAT_R8G8B8A8_UNORM                                                          = 37,
    VK_FORMAT_R8G8B8A8_SNORM                                                          = 38,
    VK_FORMAT_R8G8B8A8_USCALED                                                        = 39,
    VK_FORMAT_R5G6B5_UNORM_PACK16                                                     = 4,
    VK_FORMAT_R8G8B8A8_SSCALED                                                        = 40,
    VK_FORMAT_R8G8B8A8_UINT                                                           = 41,
    VK_FORMAT_R8G8B8A8_SINT                                                           = 42,
    VK_FORMAT_R8G8B8A8_SRGB                                                           = 43,
    VK_FORMAT_B8G8R8A8_UNORM                                                          = 44,
    VK_FORMAT_B8G8R8A8_SNORM                                                          = 45,
    VK_FORMAT_B8G8R8A8_USCALED                                                        = 46,
    VK_FORMAT_B8G8R8A8_SSCALED                                                        = 47,
    VK_FORMAT_B8G8R8A8_UINT                                                           = 48,
    VK_FORMAT_B8G8R8A8_SINT                                                           = 49,
    VK_FORMAT_B5G6R5_UNORM_PACK16                                                     = 5,
    VK_FORMAT_B8G8R8A8_SRGB                                                           = 50,
    VK_FORMAT_A8B8G8R8_UNORM_PACK32                                                   = 51,
    VK_FORMAT_A8B8G8R8_SNORM_PACK32                                                   = 52,
    VK_FORMAT_A8B8G8R8_USCALED_PACK32                                                 = 53,
    VK_FORMAT_A8B8G8R8_SSCALED_PACK32                                                 = 54,
    VK_FORMAT_A8B8G8R8_UINT_PACK32                                                    = 55,
    VK_FORMAT_A8B8G8R8_SINT_PACK32                                                    = 56,
    VK_FORMAT_A8B8G8R8_SRGB_PACK32                                                    = 57,
    VK_FORMAT_A2R10G10B10_UNORM_PACK32                                                = 58,
    VK_FORMAT_A2R10G10B10_SNORM_PACK32                                                = 59,
    VK_FORMAT_R5G5B5A1_UNORM_PACK16                                                   = 6,
    VK_FORMAT_A2R10G10B10_USCALED_PACK32                                              = 60,
    VK_FORMAT_A2R10G10B10_SSCALED_PACK32                                              = 61,
    VK_FORMAT_A2R10G10B10_UINT_PACK32                                                 = 62,
    VK_FORMAT_A2R10G10B10_SINT_PACK32                                                 = 63,
    VK_FORMAT_A2B10G10R10_UNORM_PACK32                                                = 64,
    VK_FORMAT_A2B10G10R10_SNORM_PACK32                                                = 65,
    VK_FORMAT_A2B10G10R10_USCALED_PACK32                                              = 66,
    VK_FORMAT_A2B10G10R10_SSCALED_PACK32                                              = 67,
    VK_FORMAT_A2B10G10R10_UINT_PACK32                                                 = 68,
    VK_FORMAT_A2B10G10R10_SINT_PACK32                                                 = 69,
    VK_FORMAT_B5G5R5A1_UNORM_PACK16                                                   = 7,
    VK_FORMAT_R16_UNORM                                                               = 70,
    VK_FORMAT_R16_SNORM                                                               = 71,
    VK_FORMAT_R16_USCALED                                                             = 72,
    VK_FORMAT_R16_SSCALED                                                             = 73,
    VK_FORMAT_R16_UINT                                                                = 74,
    VK_FORMAT_R16_SINT                                                                = 75,
    VK_FORMAT_R16_SFLOAT                                                              = 76,
    VK_FORMAT_R16G16_UNORM                                                            = 77,
    VK_FORMAT_R16G16_SNORM                                                            = 78,
    VK_FORMAT_R16G16_USCALED                                                          = 79,
    VK_FORMAT_A1R5G5B5_UNORM_PACK16                                                   = 8,
    VK_FORMAT_R16G16_SSCALED                                                          = 80,
    VK_FORMAT_R16G16_UINT                                                             = 81,
    VK_FORMAT_R16G16_SINT                                                             = 82,
    VK_FORMAT_R16G16_SFLOAT                                                           = 83,
    VK_FORMAT_R16G16B16_UNORM                                                         = 84,
    VK_FORMAT_R16G16B16_SNORM                                                         = 85,
    VK_FORMAT_R16G16B16_USCALED                                                       = 86,
    VK_FORMAT_R16G16B16_SSCALED                                                       = 87,
    VK_FORMAT_R16G16B16_UINT                                                          = 88,
    VK_FORMAT_R16G16B16_SINT                                                          = 89,
    VK_FORMAT_R8_UNORM                                                                = 9,
    VK_FORMAT_R16G16B16_SFLOAT                                                        = 90,
    VK_FORMAT_R16G16B16A16_UNORM                                                      = 91,
    VK_FORMAT_R16G16B16A16_SNORM                                                      = 92,
    VK_FORMAT_R16G16B16A16_USCALED                                                    = 93,
    VK_FORMAT_R16G16B16A16_SSCALED                                                    = 94,
    VK_FORMAT_R16G16B16A16_UINT                                                       = 95,
    VK_FORMAT_R16G16B16A16_SINT                                                       = 96,
    VK_FORMAT_R16G16B16A16_SFLOAT                                                     = 97,
    VK_FORMAT_R32_UINT                                                                = 98,
    VK_FORMAT_R32_SINT                                                                = 99,

    // VkFrontFace

    VK_FRONT_FACE_COUNTER_CLOCKWISE                                                   = 0,
    VK_FRONT_FACE_CLOCKWISE                                                           = 1,

    // VkFullScreenExclusiveEXT

    VK_FULL_SCREEN_EXCLUSIVE_DEFAULT_EXT                                              = 0,
    VK_FULL_SCREEN_EXCLUSIVE_ALLOWED_EXT                                              = 1,
    VK_FULL_SCREEN_EXCLUSIVE_DISALLOWED_EXT                                           = 2,
    VK_FULL_SCREEN_EXCLUSIVE_APPLICATION_CONTROLLED_EXT                               = 3,

    // VkGeometryTypeNV

    VK_GEOMETRY_TYPE_TRIANGLES_NV                                                     = 0,
    VK_GEOMETRY_TYPE_AABBS_NV                                                         = 1,

    // VkImageLayout

    VK_IMAGE_LAYOUT_UNDEFINED                                                         = 0,
    VK_IMAGE_LAYOUT_PRESENT_SRC_KHR                                                   = 0x3b9acdea,
    VK_IMAGE_LAYOUT_SHARED_PRESENT_KHR                                                = 0x3b9c7b98,
    VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL                        = 0x3b9c9308,
    VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL_KHR                    = 0x3b9c9308,
    VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL                        = 0x3b9c9309,
    VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL_KHR                    = 0x3b9c9309,
    VK_IMAGE_LAYOUT_SHADING_RATE_OPTIMAL_NV                                           = 0x3b9d4aa3,
    VK_IMAGE_LAYOUT_FRAGMENT_DENSITY_MAP_OPTIMAL_EXT                                  = 0x3b9e1d90,
    VK_IMAGE_LAYOUT_GENERAL                                                           = 1,
    VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL                                          = 2,
    VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL                                  = 3,
    VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL                                   = 4,
    VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL                                          = 5,
    VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL                                              = 6,
    VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL                                              = 7,
    VK_IMAGE_LAYOUT_PREINITIALIZED                                                    = 8,

    // VkImageTiling

    VK_IMAGE_TILING_OPTIMAL                                                           = 0,
    VK_IMAGE_TILING_DRM_FORMAT_MODIFIER_EXT                                           = 0x3b9d3330,
    VK_IMAGE_TILING_LINEAR                                                            = 1,

    // VkImageType

    VK_IMAGE_TYPE_1D                                                                  = 0,
    VK_IMAGE_TYPE_2D                                                                  = 1,
    VK_IMAGE_TYPE_3D                                                                  = 2,

    // VkImageViewType

    VK_IMAGE_VIEW_TYPE_1D                                                             = 0,
    VK_IMAGE_VIEW_TYPE_2D                                                             = 1,
    VK_IMAGE_VIEW_TYPE_3D                                                             = 2,
    VK_IMAGE_VIEW_TYPE_CUBE                                                           = 3,
    VK_IMAGE_VIEW_TYPE_1D_ARRAY                                                       = 4,
    VK_IMAGE_VIEW_TYPE_2D_ARRAY                                                       = 5,
    VK_IMAGE_VIEW_TYPE_CUBE_ARRAY                                                     = 6,

    // VkIndexType

    VK_INDEX_TYPE_UINT16                                                              = 0,
    VK_INDEX_TYPE_NONE_NV                                                             = 0x3b9d4e88,
    VK_INDEX_TYPE_UINT8_EXT                                                           = 0x3b9ed528,
    VK_INDEX_TYPE_UINT32                                                              = 1,

    // VkIndirectCommandsTokenTypeNVX

    VK_INDIRECT_COMMANDS_TOKEN_TYPE_PIPELINE_NVX                                      = 0,
    VK_INDIRECT_COMMANDS_TOKEN_TYPE_DESCRIPTOR_SET_NVX                                = 1,
    VK_INDIRECT_COMMANDS_TOKEN_TYPE_INDEX_BUFFER_NVX                                  = 2,
    VK_INDIRECT_COMMANDS_TOKEN_TYPE_VERTEX_BUFFER_NVX                                 = 3,
    VK_INDIRECT_COMMANDS_TOKEN_TYPE_PUSH_CONSTANT_NVX                                 = 4,
    VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_INDEXED_NVX                                  = 5,
    VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_NVX                                          = 6,
    VK_INDIRECT_COMMANDS_TOKEN_TYPE_DISPATCH_NVX                                      = 7,

    // VkInternalAllocationType

    VK_INTERNAL_ALLOCATION_TYPE_EXECUTABLE                                            = 0,

    // VkLineRasterizationModeEXT

    VK_LINE_RASTERIZATION_MODE_DEFAULT_EXT                                            = 0,
    VK_LINE_RASTERIZATION_MODE_RECTANGULAR_EXT                                        = 1,
    VK_LINE_RASTERIZATION_MODE_BRESENHAM_EXT                                          = 2,
    VK_LINE_RASTERIZATION_MODE_RECTANGULAR_SMOOTH_EXT                                 = 3,

    // VkLogicOp

    VK_LOGIC_OP_CLEAR                                                                 = 0,
    VK_LOGIC_OP_AND                                                                   = 1,
    VK_LOGIC_OP_INVERT                                                                = 10,
    VK_LOGIC_OP_OR_REVERSE                                                            = 11,
    VK_LOGIC_OP_COPY_INVERTED                                                         = 12,
    VK_LOGIC_OP_OR_INVERTED                                                           = 13,
    VK_LOGIC_OP_NAND                                                                  = 14,
    VK_LOGIC_OP_SET                                                                   = 15,
    VK_LOGIC_OP_AND_REVERSE                                                           = 2,
    VK_LOGIC_OP_COPY                                                                  = 3,
    VK_LOGIC_OP_AND_INVERTED                                                          = 4,
    VK_LOGIC_OP_NO_OP                                                                 = 5,
    VK_LOGIC_OP_XOR                                                                   = 6,
    VK_LOGIC_OP_OR                                                                    = 7,
    VK_LOGIC_OP_NOR                                                                   = 8,
    VK_LOGIC_OP_EQUIVALENT                                                            = 9,

    // VkMemoryOverallocationBehaviorAMD

    VK_MEMORY_OVERALLOCATION_BEHAVIOR_DEFAULT_AMD                                     = 0,
    VK_MEMORY_OVERALLOCATION_BEHAVIOR_ALLOWED_AMD                                     = 1,
    VK_MEMORY_OVERALLOCATION_BEHAVIOR_DISALLOWED_AMD                                  = 2,

    // VkObjectEntryTypeNVX

    VK_OBJECT_ENTRY_TYPE_DESCRIPTOR_SET_NVX                                           = 0,
    VK_OBJECT_ENTRY_TYPE_PIPELINE_NVX                                                 = 1,
    VK_OBJECT_ENTRY_TYPE_INDEX_BUFFER_NVX                                             = 2,
    VK_OBJECT_ENTRY_TYPE_VERTEX_BUFFER_NVX                                            = 3,
    VK_OBJECT_ENTRY_TYPE_PUSH_CONSTANT_NVX                                            = 4,

    // VkObjectType

    VK_OBJECT_TYPE_UNKNOWN                                                            = 0,
    VK_OBJECT_TYPE_SURFACE_KHR                                                        = 0x3b9aca00,
    VK_OBJECT_TYPE_SWAPCHAIN_KHR                                                      = 0x3b9acde8,
    VK_OBJECT_TYPE_DISPLAY_KHR                                                        = 0x3b9ad1d0,
    VK_OBJECT_TYPE_DISPLAY_MODE_KHR                                                   = 0x3b9ad1d1,
    VK_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT                                          = 0x3b9af4f8,
    VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE                                         = 0x3b9c1608,
    VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_KHR                                     = 0x3b9c1608,
    VK_OBJECT_TYPE_OBJECT_TABLE_NVX                                                   = 0x3b9c19f0,
    VK_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_NVX                                       = 0x3b9c19f1,
    VK_OBJECT_TYPE_DEBUG_UTILS_MESSENGER_EXT                                          = 0x3b9cbe00,
    VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION                                           = 0x3b9d2b60,
    VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_KHR                                       = 0x3b9d2b60,
    VK_OBJECT_TYPE_VALIDATION_CACHE_EXT                                               = 0x3b9d3b00,
    VK_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV                                          = 0x3b9d4e88,
    VK_OBJECT_TYPE_PERFORMANCE_CONFIGURATION_INTEL                                    = 0x3b9dfe50,
    VK_OBJECT_TYPE_INSTANCE                                                           = 1,
    VK_OBJECT_TYPE_IMAGE                                                              = 10,
    VK_OBJECT_TYPE_EVENT                                                              = 11,
    VK_OBJECT_TYPE_QUERY_POOL                                                         = 12,
    VK_OBJECT_TYPE_BUFFER_VIEW                                                        = 13,
    VK_OBJECT_TYPE_IMAGE_VIEW                                                         = 14,
    VK_OBJECT_TYPE_SHADER_MODULE                                                      = 15,
    VK_OBJECT_TYPE_PIPELINE_CACHE                                                     = 16,
    VK_OBJECT_TYPE_PIPELINE_LAYOUT                                                    = 17,
    VK_OBJECT_TYPE_RENDER_PASS                                                        = 18,
    VK_OBJECT_TYPE_PIPELINE                                                           = 19,
    VK_OBJECT_TYPE_PHYSICAL_DEVICE                                                    = 2,
    VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT                                              = 20,
    VK_OBJECT_TYPE_SAMPLER                                                            = 21,
    VK_OBJECT_TYPE_DESCRIPTOR_POOL                                                    = 22,
    VK_OBJECT_TYPE_DESCRIPTOR_SET                                                     = 23,
    VK_OBJECT_TYPE_FRAMEBUFFER                                                        = 24,
    VK_OBJECT_TYPE_COMMAND_POOL                                                       = 25,
    VK_OBJECT_TYPE_DEVICE                                                             = 3,
    VK_OBJECT_TYPE_QUEUE                                                              = 4,
    VK_OBJECT_TYPE_SEMAPHORE                                                          = 5,
    VK_OBJECT_TYPE_COMMAND_BUFFER                                                     = 6,
    VK_OBJECT_TYPE_FENCE                                                              = 7,
    VK_OBJECT_TYPE_DEVICE_MEMORY                                                      = 8,
    VK_OBJECT_TYPE_BUFFER                                                             = 9,

    // VkPerformanceConfigurationTypeINTEL

    VK_PERFORMANCE_CONFIGURATION_TYPE_COMMAND_QUEUE_METRICS_DISCOVERY_ACTIVATED_INTEL = 0,

    // VkPerformanceOverrideTypeINTEL

    VK_PERFORMANCE_OVERRIDE_TYPE_NULL_HARDWARE_INTEL                                  = 0,
    VK_PERFORMANCE_OVERRIDE_TYPE_FLUSH_GPU_CACHES_INTEL                               = 1,

    // VkPerformanceParameterTypeINTEL

    VK_PERFORMANCE_PARAMETER_TYPE_HW_COUNTERS_SUPPORTED_INTEL                         = 0,
    VK_PERFORMANCE_PARAMETER_TYPE_STREAM_MARKER_VALID_BITS_INTEL                      = 1,

    // VkPerformanceValueTypeINTEL

    VK_PERFORMANCE_VALUE_TYPE_UINT32_INTEL                                            = 0,
    VK_PERFORMANCE_VALUE_TYPE_UINT64_INTEL                                            = 1,
    VK_PERFORMANCE_VALUE_TYPE_FLOAT_INTEL                                             = 2,
    VK_PERFORMANCE_VALUE_TYPE_BOOL_INTEL                                              = 3,
    VK_PERFORMANCE_VALUE_TYPE_STRING_INTEL                                            = 4,

    // VkPhysicalDeviceType

    VK_PHYSICAL_DEVICE_TYPE_OTHER                                                     = 0,
    VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU                                            = 1,
    VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU                                              = 2,
    VK_PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU                                               = 3,
    VK_PHYSICAL_DEVICE_TYPE_CPU                                                       = 4,

    // VkPipelineBindPoint

    VK_PIPELINE_BIND_POINT_GRAPHICS                                                   = 0,
    VK_PIPELINE_BIND_POINT_RAY_TRACING_NV                                             = 0x3b9d4e88,
    VK_PIPELINE_BIND_POINT_COMPUTE                                                    = 1,

    // VkPipelineCacheHeaderVersion

    VK_PIPELINE_CACHE_HEADER_VERSION_ONE                                              = 1,

    // VkPointClippingBehavior

    VK_POINT_CLIPPING_BEHAVIOR_ALL_CLIP_PLANES                                        = 0,
    VK_POINT_CLIPPING_BEHAVIOR_ALL_CLIP_PLANES_KHR                                    = 0,
    VK_POINT_CLIPPING_BEHAVIOR_USER_CLIP_PLANES_ONLY                                  = 1,
    VK_POINT_CLIPPING_BEHAVIOR_USER_CLIP_PLANES_ONLY_KHR                              = 1,

    // VkPolygonMode

    VK_POLYGON_MODE_FILL                                                              = 0,
    VK_POLYGON_MODE_FILL_RECTANGLE_NV                                                 = 0x3b9d1fa8,
    VK_POLYGON_MODE_LINE                                                              = 1,
    VK_POLYGON_MODE_POINT                                                             = 2,

    // VkPresentModeKHR

    VK_PRESENT_MODE_IMMEDIATE_KHR                                                     = 0,
    VK_PRESENT_MODE_SHARED_DEMAND_REFRESH_KHR                                         = 0x3b9c7b98,
    VK_PRESENT_MODE_SHARED_CONTINUOUS_REFRESH_KHR                                     = 0x3b9c7b99,
    VK_PRESENT_MODE_MAILBOX_KHR                                                       = 1,
    VK_PRESENT_MODE_FIFO_KHR                                                          = 2,
    VK_PRESENT_MODE_FIFO_RELAXED_KHR                                                  = 3,

    // VkPrimitiveTopology

    VK_PRIMITIVE_TOPOLOGY_POINT_LIST                                                  = 0,
    VK_PRIMITIVE_TOPOLOGY_LINE_LIST                                                   = 1,
    VK_PRIMITIVE_TOPOLOGY_PATCH_LIST                                                  = 10,
    VK_PRIMITIVE_TOPOLOGY_LINE_STRIP                                                  = 2,
    VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST                                               = 3,
    VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP                                              = 4,
    VK_PRIMITIVE_TOPOLOGY_TRIANGLE_FAN                                                = 5,
    VK_PRIMITIVE_TOPOLOGY_LINE_LIST_WITH_ADJACENCY                                    = 6,
    VK_PRIMITIVE_TOPOLOGY_LINE_STRIP_WITH_ADJACENCY                                   = 7,
    VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST_WITH_ADJACENCY                                = 8,
    VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP_WITH_ADJACENCY                               = 9,

    // VkQueryPoolSamplingModeINTEL

    VK_QUERY_POOL_SAMPLING_MODE_MANUAL_INTEL                                          = 0,

    // VkQueryType

    VK_QUERY_TYPE_OCCLUSION                                                           = 0,
    VK_QUERY_TYPE_RESERVED_8                                                          = 0x3b9b23e0,
    VK_QUERY_TYPE_RESERVED_4                                                          = 0x3b9b27c4,
    VK_QUERY_TYPE_TRANSFORM_FEEDBACK_STREAM_EXT                                       = 0x3b9b3764,
    VK_QUERY_TYPE_ACCELERATION_STRUCTURE_COMPACTED_SIZE_NV                            = 0x3b9d4e88,
    VK_QUERY_TYPE_PERFORMANCE_QUERY_INTEL                                             = 0x3b9dfe50,
    VK_QUERY_TYPE_PIPELINE_STATISTICS                                                 = 1,
    VK_QUERY_TYPE_TIMESTAMP                                                           = 2,

    // VkQueueGlobalPriorityEXT

    VK_QUEUE_GLOBAL_PRIORITY_REALTIME_EXT                                             = 1024,
    VK_QUEUE_GLOBAL_PRIORITY_LOW_EXT                                                  = 128,
    VK_QUEUE_GLOBAL_PRIORITY_MEDIUM_EXT                                               = 256,
    VK_QUEUE_GLOBAL_PRIORITY_HIGH_EXT                                                 = 512,

    // VkRasterizationOrderAMD

    VK_RASTERIZATION_ORDER_STRICT_AMD                                                 = 0,
    VK_RASTERIZATION_ORDER_RELAXED_AMD                                                = 1,

    // VkRayTracingShaderGroupTypeNV

    VK_RAY_TRACING_SHADER_GROUP_TYPE_GENERAL_NV                                       = 0,
    VK_RAY_TRACING_SHADER_GROUP_TYPE_TRIANGLES_HIT_GROUP_NV                           = 1,
    VK_RAY_TRACING_SHADER_GROUP_TYPE_PROCEDURAL_HIT_GROUP_NV                          = 2,

    // VkResult

    VK_ERROR_OUT_OF_HOST_MEMORY                                                       = -1,
    VK_ERROR_TOO_MANY_OBJECTS                                                         = -10,
    VK_ERROR_FORMAT_NOT_SUPPORTED                                                     = -11,
    VK_ERROR_FRAGMENTED_POOL                                                          = -12,
    VK_ERROR_OUT_OF_DEVICE_MEMORY                                                     = -2,
    VK_ERROR_INITIALIZATION_FAILED                                                    = -3,
    VK_ERROR_DEVICE_LOST                                                              = -4,
    VK_ERROR_MEMORY_MAP_FAILED                                                        = -5,
    VK_ERROR_LAYER_NOT_PRESENT                                                        = -6,
    VK_ERROR_EXTENSION_NOT_PRESENT                                                    = -7,
    VK_ERROR_FEATURE_NOT_PRESENT                                                      = -8,
    VK_ERROR_INCOMPATIBLE_DRIVER                                                      = -9,
    VK_SUCCESS                                                                        = 0,
    VK_ERROR_SURFACE_LOST_KHR                                                         = 0x3b9aca00,
    VK_ERROR_NATIVE_WINDOW_IN_USE_KHR                                                 = 0x3b9aca01,
    VK_SUBOPTIMAL_KHR                                                                 = 0x3b9acdeb,
    VK_ERROR_OUT_OF_DATE_KHR                                                          = 0x3b9acdec,
    VK_ERROR_INCOMPATIBLE_DISPLAY_KHR                                                 = 0x3b9ad5b9,
    VK_ERROR_VALIDATION_FAILED_EXT                                                    = 0x3b9af4f9,
    VK_ERROR_INVALID_SHADER_NV                                                        = 0x3b9af8e0,
    VK_ERROR_OUT_OF_POOL_MEMORY                                                       = 0x3b9bd788,
    VK_ERROR_OUT_OF_POOL_MEMORY_KHR                                                   = 0x3b9bd788,
    VK_ERROR_INVALID_EXTERNAL_HANDLE                                                  = 0x3b9be343,
    VK_ERROR_INVALID_EXTERNAL_HANDLE_KHR                                              = 0x3b9be343,
    VK_ERROR_INVALID_DRM_FORMAT_MODIFIER_PLANE_LAYOUT_EXT                             = 0x3b9d3330,
    VK_ERROR_FRAGMENTATION_EXT                                                        = 0x3b9d3ee8,
    VK_ERROR_NOT_PERMITTED_EXT                                                        = 0x3b9d71b1,
    VK_ERROR_INVALID_DEVICE_ADDRESS_EXT                                               = 0x3b9e8320,
    VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT                                      = 0x3b9eae18,
    VK_NOT_READY                                                                      = 1,
    VK_TIMEOUT                                                                        = 2,
    VK_EVENT_SET                                                                      = 3,
    VK_EVENT_RESET                                                                    = 4,
    VK_INCOMPLETE                                                                     = 5,

    // VkSamplerAddressMode

    VK_SAMPLER_ADDRESS_MODE_REPEAT                                                    = 0,
    VK_SAMPLER_ADDRESS_MODE_MIRRORED_REPEAT                                           = 1,
    VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE                                             = 2,
    VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_BORDER                                           = 3,
    VK_SAMPLER_ADDRESS_MODE_MIRROR_CLAMP_TO_EDGE                                      = 4,

    // VkSamplerMipmapMode

    VK_SAMPLER_MIPMAP_MODE_NEAREST                                                    = 0,
    VK_SAMPLER_MIPMAP_MODE_LINEAR                                                     = 1,

    // VkSamplerReductionModeEXT

    VK_SAMPLER_REDUCTION_MODE_WEIGHTED_AVERAGE_EXT                                    = 0,
    VK_SAMPLER_REDUCTION_MODE_MIN_EXT                                                 = 1,
    VK_SAMPLER_REDUCTION_MODE_MAX_EXT                                                 = 2,

    // VkSamplerYcbcrModelConversion

    VK_SAMPLER_YCBCR_MODEL_CONVERSION_RGB_IDENTITY                                    = 0,
    VK_SAMPLER_YCBCR_MODEL_CONVERSION_RGB_IDENTITY_KHR                                = 0,
    VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_IDENTITY                                  = 1,
    VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_IDENTITY_KHR                              = 1,
    VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_709                                       = 2,
    VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_709_KHR                                   = 2,
    VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_601                                       = 3,
    VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_601_KHR                                   = 3,
    VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_2020                                      = 4,
    VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_2020_KHR                                  = 4,

    // VkSamplerYcbcrRange

    VK_SAMPLER_YCBCR_RANGE_ITU_FULL                                                   = 0,
    VK_SAMPLER_YCBCR_RANGE_ITU_FULL_KHR                                               = 0,
    VK_SAMPLER_YCBCR_RANGE_ITU_NARROW                                                 = 1,
    VK_SAMPLER_YCBCR_RANGE_ITU_NARROW_KHR                                             = 1,

    // VkScopeNV

    VK_SCOPE_DEVICE_NV                                                                = 1,
    VK_SCOPE_WORKGROUP_NV                                                             = 2,
    VK_SCOPE_SUBGROUP_NV                                                              = 3,
    VK_SCOPE_QUEUE_FAMILY_NV                                                          = 5,

    // VkShaderFloatControlsIndependenceKHR

    VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_32_BIT_ONLY_KHR                             = 0,
    VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_ALL_KHR                                     = 1,
    VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_NONE_KHR                                    = 2,

    // VkShaderInfoTypeAMD

    VK_SHADER_INFO_TYPE_STATISTICS_AMD                                                = 0,
    VK_SHADER_INFO_TYPE_BINARY_AMD                                                    = 1,
    VK_SHADER_INFO_TYPE_DISASSEMBLY_AMD                                               = 2,

    // VkShadingRatePaletteEntryNV

    VK_SHADING_RATE_PALETTE_ENTRY_NO_INVOCATIONS_NV                                   = 0,
    VK_SHADING_RATE_PALETTE_ENTRY_16_INVOCATIONS_PER_PIXEL_NV                         = 1,
    VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X4_PIXELS_NV                      = 10,
    VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_4X4_PIXELS_NV                      = 11,
    VK_SHADING_RATE_PALETTE_ENTRY_8_INVOCATIONS_PER_PIXEL_NV                          = 2,
    VK_SHADING_RATE_PALETTE_ENTRY_4_INVOCATIONS_PER_PIXEL_NV                          = 3,
    VK_SHADING_RATE_PALETTE_ENTRY_2_INVOCATIONS_PER_PIXEL_NV                          = 4,
    VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_PIXEL_NV                           = 5,
    VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X1_PIXELS_NV                      = 6,
    VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_1X2_PIXELS_NV                      = 7,
    VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X2_PIXELS_NV                      = 8,
    VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_4X2_PIXELS_NV                      = 9,

    // VkSharingMode

    VK_SHARING_MODE_EXCLUSIVE                                                         = 0,
    VK_SHARING_MODE_CONCURRENT                                                        = 1,

    // VkStencilOp

    VK_STENCIL_OP_KEEP                                                                = 0,
    VK_STENCIL_OP_ZERO                                                                = 1,
    VK_STENCIL_OP_REPLACE                                                             = 2,
    VK_STENCIL_OP_INCREMENT_AND_CLAMP                                                 = 3,
    VK_STENCIL_OP_DECREMENT_AND_CLAMP                                                 = 4,
    VK_STENCIL_OP_INVERT                                                              = 5,
    VK_STENCIL_OP_INCREMENT_AND_WRAP                                                  = 6,
    VK_STENCIL_OP_DECREMENT_AND_WRAP                                                  = 7,

    // VkStructureType

    VK_STRUCTURE_TYPE_APPLICATION_INFO                                                = 0,
    VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR                                       = 0x3b9acde8,
    VK_STRUCTURE_TYPE_PRESENT_INFO_KHR                                                = 0x3b9acde9,
    VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR                           = 0x3b9acdef,
    VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR                                 = 0x3b9acdf0,
    VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR                            = 0x3b9acdf1,
    VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR                                     = 0x3b9acdf2,
    VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR                                   = 0x3b9acdf3,
    VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR                          = 0x3b9acdf4,
    VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR                                    = 0x3b9ad1d0,
    VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR                                 = 0x3b9ad1d1,
    VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR                                        = 0x3b9ad5b8,
    VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR                                    = 0x3b9ad9a0,
    VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR                                     = 0x3b9add88,
    VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR                                 = 0x3b9ae170,
    VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR                                 = 0x3b9ae940,
    VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR                                   = 0x3b9aed28,
    VK_STRUCTURE_TYPE_NATIVE_BUFFER_ANDROID                                           = 0x3b9af110,
    VK_STRUCTURE_TYPE_SWAPCHAIN_IMAGE_CREATE_INFO_ANDROID                             = 0x3b9af111,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENTATION_PROPERTIES_ANDROID                 = 0x3b9af112,
    VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT                           = 0x3b9af4f8,
    VK_STRUCTURE_TYPE_DEBUG_REPORT_CREATE_INFO_EXT                                    = 0x3b9af4f8,
    VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD            = 0x3b9b1050,
    VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT                               = 0x3b9b1ff0,
    VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT                                = 0x3b9b1ff1,
    VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT                                    = 0x3b9b1ff2,
    VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV                       = 0x3b9b2f90,
    VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV                      = 0x3b9b2f91,
    VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV                    = 0x3b9b2f92,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT                 = 0x3b9b3760,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT               = 0x3b9b3761,
    VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT             = 0x3b9b3762,
    VK_STRUCTURE_TYPE_IMAGE_VIEW_HANDLE_INFO_NVX                                      = 0x3b9b3f30,
    VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD                        = 0x3b9b6a28,
    VK_STRUCTURE_TYPE_STREAM_DESCRIPTOR_SURFACE_CREATE_INFO_GGP                       = 0x3b9b8968,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV                = 0x3b9b8d50,
    VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO                               = 0x3b9b9908,
    VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO_KHR                           = 0x3b9b9908,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES                              = 0x3b9b9909,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES_KHR                          = 0x3b9b9909,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES                            = 0x3b9b990a,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES_KHR                        = 0x3b9b990a,
    VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV                            = 0x3b9ba4c0,
    VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV                                  = 0x3b9ba4c1,
    VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV                              = 0x3b9ba8a8,
    VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV                              = 0x3b9ba8a9,
    VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV                       = 0x3b9bac90,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2                                      = 0x3b9bb078,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2_KHR                                  = 0x3b9bb078,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2                                    = 0x3b9bb079,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2_KHR                                = 0x3b9bb079,
    VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2                                             = 0x3b9bb07a,
    VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2_KHR                                         = 0x3b9bb07a,
    VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2                                       = 0x3b9bb07b,
    VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2_KHR                                   = 0x3b9bb07b,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2                             = 0x3b9bb07c,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2_KHR                         = 0x3b9bb07c,
    VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2                                       = 0x3b9bb07d,
    VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2_KHR                                   = 0x3b9bb07d,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2                             = 0x3b9bb07e,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2_KHR                         = 0x3b9bb07e,
    VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2                                = 0x3b9bb07f,
    VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2_KHR                            = 0x3b9bb07f,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2                      = 0x3b9bb080,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2_KHR                  = 0x3b9bb080,
    VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO                                      = 0x3b9bb460,
    VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO_KHR                                  = 0x3b9bb460,
    VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO                             = 0x3b9bb463,
    VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO_KHR                         = 0x3b9bb463,
    VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO                          = 0x3b9bb464,
    VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO_KHR                      = 0x3b9bb464,
    VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO                                        = 0x3b9bb465,
    VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO_KHR                                    = 0x3b9bb465,
    VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO                                   = 0x3b9bb466,
    VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO_KHR                               = 0x3b9bb466,
    VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO                            = 0x3b9bb46d,
    VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO_KHR                        = 0x3b9bb46d,
    VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO                             = 0x3b9bb46e,
    VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO_KHR                         = 0x3b9bb46e,
    VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT                                            = 0x3b9bb848,
    VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN                                       = 0x3b9bbc30,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES                 = 0x3b9bc018,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETER_FEATURES                  = 0x3b9bc018,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES_EXT       = 0x3b9bcbd0,
    VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT                                 = 0x3b9bcfb8,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT                        = 0x3b9bcfb9,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES                                = 0x3b9bdb70,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES_KHR                            = 0x3b9bdb70,
    VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO                                 = 0x3b9bdb71,
    VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO_KHR                             = 0x3b9bdb71,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO                      = 0x3b9bdf58,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO_KHR                  = 0x3b9bdf58,
    VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES                                = 0x3b9bdf59,
    VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES_KHR                            = 0x3b9bdf59,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO                            = 0x3b9bdf5a,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO_KHR                        = 0x3b9bdf5a,
    VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES                                      = 0x3b9bdf5b,
    VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES_KHR                                  = 0x3b9bdf5b,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES                                   = 0x3b9bdf5c,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES_KHR                               = 0x3b9bdf5c,
    VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO                              = 0x3b9be340,
    VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO_KHR                          = 0x3b9be340,
    VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO                               = 0x3b9be341,
    VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_KHR                           = 0x3b9be341,
    VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO                                     = 0x3b9be342,
    VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_KHR                                 = 0x3b9be342,
    VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR                             = 0x3b9be728,
    VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR                             = 0x3b9be729,
    VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR                              = 0x3b9be72a,
    VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR                                = 0x3b9be72b,
    VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR                                       = 0x3b9beb10,
    VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR                                        = 0x3b9beb11,
    VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR                                          = 0x3b9beb12,
    VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR                      = 0x3b9beef8,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO                         = 0x3b9bf2e0,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO_KHR                     = 0x3b9bf2e0,
    VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES                                   = 0x3b9bf2e1,
    VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES_KHR                               = 0x3b9bf2e1,
    VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO                                    = 0x3b9bf6c8,
    VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO_KHR                                = 0x3b9bf6c8,
    VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR                          = 0x3b9bfab0,
    VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR                          = 0x3b9bfab1,
    VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR                                     = 0x3b9bfab2,
    VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR                             = 0x3b9bfab3,
    VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR                                    = 0x3b9bfe98,
    VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR                                       = 0x3b9bfe99,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR                  = 0x3b9c0280,
    VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT       = 0x3b9c0668,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT              = 0x3b9c0669,
    VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT                            = 0x3b9c066a,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES_KHR                = 0x3b9c0a50,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT16_INT8_FEATURES_KHR                       = 0x3b9c0a50,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES                          = 0x3b9c0e38,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES_KHR                      = 0x3b9c0e38,
    VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR                                             = 0x3b9c1220,
    VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO                          = 0x3b9c1608,
    VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO_KHR                      = 0x3b9c1608,
    VK_STRUCTURE_TYPE_OBJECT_TABLE_CREATE_INFO_NVX                                    = 0x3b9c19f0,
    VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NVX                        = 0x3b9c19f1,
    VK_STRUCTURE_TYPE_CMD_PROCESS_COMMANDS_INFO_NVX                                   = 0x3b9c19f2,
    VK_STRUCTURE_TYPE_CMD_RESERVE_SPACE_FOR_COMMANDS_INFO_NVX                         = 0x3b9c19f3,
    VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_LIMITS_NVX                            = 0x3b9c19f4,
    VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_FEATURES_NVX                          = 0x3b9c19f5,
    VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV                = 0x3b9c1dd8,
    VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT                                      = 0x3b9c2990,
    VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES2_EXT                                       = 0x3b9c2990,
    VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT                                          = 0x3b9c2d78,
    VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT                                           = 0x3b9c2d79,
    VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT                                          = 0x3b9c2d7a,
    VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT                               = 0x3b9c2d7b,
    VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE                                       = 0x3b9c3160,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES                             = 0x3b9c3930,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX    = 0x3b9c44e8,
    VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV                  = 0x3b9c48d0,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT                = 0x3b9c4cb8,
    VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT                = 0x3b9c4cb9,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT       = 0x3b9c5488,
    VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT       = 0x3b9c5489,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT                  = 0x3b9c5870,
    VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT         = 0x3b9c5871,
    VK_STRUCTURE_TYPE_HDR_METADATA_EXT                                                = 0x3b9c6428,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES_KHR              = 0x3b9c6fe0,
    VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO_KHR                         = 0x3b9c6fe1,
    VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO_KHR                           = 0x3b9c6fe2,
    VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO_KHR                           = 0x3b9c6fe3,
    VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2_KHR                                    = 0x3b9c73c8,
    VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2_KHR                                      = 0x3b9c73c9,
    VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2_KHR                                       = 0x3b9c73ca,
    VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2_KHR                                        = 0x3b9c73cb,
    VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2_KHR                                   = 0x3b9c73cc,
    VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO_KHR                                          = 0x3b9c73cd,
    VK_STRUCTURE_TYPE_SUBPASS_END_INFO_KHR                                            = 0x3b9c73ce,
    VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR                         = 0x3b9c7b98,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO                             = 0x3b9c7f80,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO_KHR                         = 0x3b9c7f80,
    VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES                                       = 0x3b9c7f81,
    VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES_KHR                                   = 0x3b9c7f81,
    VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO                                        = 0x3b9c8368,
    VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO_KHR                                    = 0x3b9c8368,
    VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR                              = 0x3b9c8750,
    VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR                              = 0x3b9c8751,
    VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR                                 = 0x3b9c8752,
    VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR                                        = 0x3b9c8b38,
    VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR                                           = 0x3b9c8b39,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES                       = 0x3b9c9308,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES_KHR                   = 0x3b9c9308,
    VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO                 = 0x3b9c9309,
    VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO_KHR             = 0x3b9c9309,
    VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO                                    = 0x3b9c930a,
    VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO_KHR                                = 0x3b9c930a,
    VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO           = 0x3b9c930b,
    VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO_KHR       = 0x3b9c930b,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR                              = 0x3b9c9ad8,
    VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR                                      = 0x3b9c9ad9,
    VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR                                            = 0x3b9c9ada,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES                      = 0x3b9c9ec0,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTER_FEATURES                       = 0x3b9c9ec0,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTER_FEATURES_KHR                   = 0x3b9c9ec0,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES_KHR                  = 0x3b9c9ec0,
    VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR                                        = 0x3b9ca2a8,
    VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR                                  = 0x3b9ca2a9,
    VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR                                   = 0x3b9ca2aa,
    VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR                                        = 0x3b9ca2ab,
    VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR                                = 0x3b9ca2ac,
    VK_STRUCTURE_TYPE_IOS_SURFACE_CREATE_INFO_MVK                                     = 0x3b9ca690,
    VK_STRUCTURE_TYPE_MACOS_SURFACE_CREATE_INFO_MVK                                   = 0x3b9caa78,
    VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS                                   = 0x3b9cba18,
    VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS_KHR                               = 0x3b9cba18,
    VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO                                  = 0x3b9cba19,
    VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO_KHR                              = 0x3b9cba19,
    VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT                                = 0x3b9cbe00,
    VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT                                 = 0x3b9cbe01,
    VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT                                           = 0x3b9cbe02,
    VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT                         = 0x3b9cbe03,
    VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT                           = 0x3b9cbe04,
    VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID                           = 0x3b9cc1e8,
    VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_PROPERTIES_ANDROID                      = 0x3b9cc1e9,
    VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID               = 0x3b9cc1ea,
    VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID                     = 0x3b9cc1eb,
    VK_STRUCTURE_TYPE_MEMORY_GET_ANDROID_HARDWARE_BUFFER_INFO_ANDROID                 = 0x3b9cc1ec,
    VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID                                         = 0x3b9cc1ed,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES_EXT            = 0x3b9cc5d0,
    VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO_EXT                          = 0x3b9cc5d1,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES_EXT               = 0x3b9ce510,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES_EXT             = 0x3b9ce511,
    VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK_EXT                   = 0x3b9ce512,
    VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO_EXT            = 0x3b9ce513,
    VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT                                       = 0x3b9cf898,
    VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT                     = 0x3b9cf899,
    VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT                 = 0x3b9cf89a,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT                 = 0x3b9cf89b,
    VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT                                      = 0x3b9cf89c,
    VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO                                           = 0x3b9d0068,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES                       = 0x3b9d0069,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES                     = 0x3b9d006a,
    VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2                                             = 0x3b9d006b,
    VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2                               = 0x3b9d0450,
    VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2_KHR                           = 0x3b9d0450,
    VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2                                = 0x3b9d0451,
    VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2_KHR                            = 0x3b9d0451,
    VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2                         = 0x3b9d0452,
    VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2_KHR                     = 0x3b9d0452,
    VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2                                           = 0x3b9d0453,
    VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2_KHR                                       = 0x3b9d0453,
    VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2                              = 0x3b9d0454,
    VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2_KHR                          = 0x3b9d0454,
    VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO_KHR                               = 0x3b9d0838,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT           = 0x3b9d0c20,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT         = 0x3b9d0c21,
    VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT             = 0x3b9d0c22,
    VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV                 = 0x3b9d1008,
    VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV               = 0x3b9d1bc0,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV                  = 0x3b9d2390,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV                = 0x3b9d2391,
    VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO                            = 0x3b9d2b60,
    VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO_KHR                        = 0x3b9d2b60,
    VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO                                   = 0x3b9d2b61,
    VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO_KHR                               = 0x3b9d2b61,
    VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO                                    = 0x3b9d2b62,
    VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO_KHR                                = 0x3b9d2b62,
    VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO                            = 0x3b9d2b63,
    VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO_KHR                        = 0x3b9d2b63,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES               = 0x3b9d2b64,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES_KHR           = 0x3b9d2b64,
    VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES                = 0x3b9d2b65,
    VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES_KHR            = 0x3b9d2b65,
    VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO                                         = 0x3b9d2f48,
    VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO_KHR                                     = 0x3b9d2f48,
    VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO                                          = 0x3b9d2f49,
    VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO_KHR                                      = 0x3b9d2f49,
    VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT                         = 0x3b9d3330,
    VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT                              = 0x3b9d3331,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT              = 0x3b9d3332,
    VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT                  = 0x3b9d3333,
    VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT              = 0x3b9d3334,
    VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT                        = 0x3b9d3335,
    VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT                                = 0x3b9d3b00,
    VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT                  = 0x3b9d3b01,
    VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO_EXT             = 0x3b9d3ee8,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES_EXT                = 0x3b9d3ee9,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES_EXT              = 0x3b9d3eea,
    VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO_EXT      = 0x3b9d3eeb,
    VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT_EXT     = 0x3b9d3eec,
    VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV       = 0x3b9d4aa0,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV                  = 0x3b9d4aa1,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV                = 0x3b9d4aa2,
    VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV      = 0x3b9d4aa5,
    VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_NV                             = 0x3b9d4e88,
    VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NV                           = 0x3b9d4e89,
    VK_STRUCTURE_TYPE_GEOMETRY_NV                                                     = 0x3b9d4e8b,
    VK_STRUCTURE_TYPE_GEOMETRY_TRIANGLES_NV                                           = 0x3b9d4e8c,
    VK_STRUCTURE_TYPE_GEOMETRY_AABB_NV                                                = 0x3b9d4e8d,
    VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NV                      = 0x3b9d4e8e,
    VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_NV                  = 0x3b9d4e8f,
    VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV              = 0x3b9d4e90,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV                       = 0x3b9d4e91,
    VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV                         = 0x3b9d4e93,
    VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_INFO_NV                                  = 0x3b9d4e94,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV        = 0x3b9d5270,
    VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV      = 0x3b9d5271,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES                        = 0x3b9d5a40,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES_KHR                    = 0x3b9d5a40,
    VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT                                   = 0x3b9d5a41,
    VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT_KHR                               = 0x3b9d5a41,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT                = 0x3b9d6210,
    VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT             = 0x3b9d6211,
    VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_EXT                    = 0x3b9d71b0,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES_KHR                       = 0x3b9d7d68,
    VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT                             = 0x3b9d8150,
    VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT                              = 0x3b9d8151,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT             = 0x3b9d8152,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES_KHR                = 0x3b9d8920,
    VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_EXT                                   = 0x3b9d98c0,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD                      = 0x3b9d9ca8,
    VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD                    = 0x3b9dac48,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT         = 0x3b9db030,
    VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT             = 0x3b9db031,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT           = 0x3b9db032,
    VK_STRUCTURE_TYPE_PRESENT_FRAME_TOKEN_GGP                                         = 0x3b9db418,
    VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO_EXT                      = 0x3b9db800,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES_KHR                           = 0x3b9dc7a0,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES_KHR                   = 0x3b9dcb88,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES_KHR            = 0x3b9dd358,
    VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE_KHR                   = 0x3b9dd359,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV          = 0x3b9ddb28,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV                         = 0x3b9ddf10,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV                       = 0x3b9ddf11,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_NV         = 0x3b9de2f8,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV              = 0x3b9de6e0,
    VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV        = 0x3b9deac8,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV                   = 0x3b9deaca,
    VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV                                              = 0x3b9deeb0,
    VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV                           = 0x3b9deeb1,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL       = 0x3b9dfa68,
    VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO_INTEL                                    = 0x3b9dfe50,
    VK_STRUCTURE_TYPE_INITIALIZE_PERFORMANCE_API_INFO_INTEL                           = 0x3b9dfe51,
    VK_STRUCTURE_TYPE_PERFORMANCE_MARKER_INFO_INTEL                                   = 0x3b9dfe52,
    VK_STRUCTURE_TYPE_PERFORMANCE_STREAM_MARKER_INFO_INTEL                            = 0x3b9dfe53,
    VK_STRUCTURE_TYPE_PERFORMANCE_OVERRIDE_INFO_INTEL                                 = 0x3b9dfe54,
    VK_STRUCTURE_TYPE_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL                    = 0x3b9dfe55,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES_KHR                = 0x3b9e0238,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT                     = 0x3b9e0620,
    VK_STRUCTURE_TYPE_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD                     = 0x3b9e0a08,
    VK_STRUCTURE_TYPE_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD                    = 0x3b9e0a09,
    VK_STRUCTURE_TYPE_IMAGEPIPE_SURFACE_CREATE_INFO_FUCHSIA                           = 0x3b9e0df0,
    VK_STRUCTURE_TYPE_METAL_SURFACE_CREATE_INFO_EXT                                   = 0x3b9e19a8,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT               = 0x3b9e1d90,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT             = 0x3b9e1d91,
    VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT                = 0x3b9e1d92,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES_EXT                = 0x3b9e2948,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES_EXT            = 0x3b9e38e8,
    VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO_EXT    = 0x3b9e38e9,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT                    = 0x3b9e67c8,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT                    = 0x3b9e6bb0,
    VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT                               = 0x3b9e6bb1,
    VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR                              = 0x3b9e6f98,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV = 0x3b9e7380,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT              = 0x3b9e8320,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_ADDRESS_FEATURES_EXT                     = 0x3b9e8320,
    VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO_EXT                                  = 0x3b9e8321,
    VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT                           = 0x3b9e8322,
    VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO_EXT                             = 0x3b9e8af0,
    VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT                                         = 0x3b9e8ed8,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV                  = 0x3b9e96a8,
    VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_NV                                = 0x3b9e96a9,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV                = 0x3b9e96aa,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV             = 0x3b9e9a90,
    VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV                = 0x3b9e9a91,
    VK_STRUCTURE_TYPE_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV                        = 0x3b9e9a92,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT          = 0x3b9e9e78,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT                 = 0x3b9ea260,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES_KHR     = 0x3b9ea648,
    VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT                          = 0x3b9eae18,
    VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT                    = 0x3b9eae19,
    VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT                  = 0x3b9eae1a,
    VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT                                = 0x3b9eb200,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT                 = 0x3b9ebdb8,
    VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_EXT               = 0x3b9ebdb9,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT               = 0x3b9ebdba,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES_EXT                   = 0x3b9ec588,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT                   = 0x3b9ed528,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES_EXT = 0x3b9f0020,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT             = 0x3b9f13a8,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES_EXT           = 0x3b9f13a9,
    VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO                                            = 1,
    VK_STRUCTURE_TYPE_EVENT_CREATE_INFO                                               = 10,
    VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO                                          = 11,
    VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO                                              = 12,
    VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO                                         = 13,
    VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO                                               = 14,
    VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO                                          = 15,
    VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO                                       = 16,
    VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO                                      = 17,
    VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO                               = 18,
    VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO                         = 19,
    VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO                                        = 2,
    VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO                       = 20,
    VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO                         = 21,
    VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO                             = 22,
    VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO                        = 23,
    VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO                          = 24,
    VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO                        = 25,
    VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO                          = 26,
    VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO                              = 27,
    VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO                                   = 28,
    VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO                                    = 29,
    VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO                                              = 3,
    VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO                                     = 30,
    VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO                                             = 31,
    VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO                               = 32,
    VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO                                     = 33,
    VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO                                    = 34,
    VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET                                            = 35,
    VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET                                             = 36,
    VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO                                         = 37,
    VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO                                         = 38,
    VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO                                        = 39,
    VK_STRUCTURE_TYPE_SUBMIT_INFO                                                     = 4,
    VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO                                    = 40,
    VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO                                 = 41,
    VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO                                       = 42,
    VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO                                          = 43,
    VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER                                           = 44,
    VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER                                            = 45,
    VK_STRUCTURE_TYPE_MEMORY_BARRIER                                                  = 46,
    VK_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO                                     = 47,
    VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO                                       = 48,
    VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO                                            = 5,
    VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE                                             = 6,
    VK_STRUCTURE_TYPE_BIND_SPARSE_INFO                                                = 7,
    VK_STRUCTURE_TYPE_FENCE_CREATE_INFO                                               = 8,
    VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO                                           = 9,

    // VkSubpassContents

    VK_SUBPASS_CONTENTS_INLINE                                                        = 0,
    VK_SUBPASS_CONTENTS_SECONDARY_COMMAND_BUFFERS                                     = 1,

    // VkSystemAllocationScope

    VK_SYSTEM_ALLOCATION_SCOPE_COMMAND                                                = 0,
    VK_SYSTEM_ALLOCATION_SCOPE_OBJECT                                                 = 1,
    VK_SYSTEM_ALLOCATION_SCOPE_CACHE                                                  = 2,
    VK_SYSTEM_ALLOCATION_SCOPE_DEVICE                                                 = 3,
    VK_SYSTEM_ALLOCATION_SCOPE_INSTANCE                                               = 4,

    // VkTessellationDomainOrigin

    VK_TESSELLATION_DOMAIN_ORIGIN_UPPER_LEFT                                          = 0,
    VK_TESSELLATION_DOMAIN_ORIGIN_UPPER_LEFT_KHR                                      = 0,
    VK_TESSELLATION_DOMAIN_ORIGIN_LOWER_LEFT                                          = 1,
    VK_TESSELLATION_DOMAIN_ORIGIN_LOWER_LEFT_KHR                                      = 1,

    // VkTimeDomainEXT

    VK_TIME_DOMAIN_DEVICE_EXT                                                         = 0,
    VK_TIME_DOMAIN_CLOCK_MONOTONIC_EXT                                                = 1,
    VK_TIME_DOMAIN_CLOCK_MONOTONIC_RAW_EXT                                            = 2,
    VK_TIME_DOMAIN_QUERY_PERFORMANCE_COUNTER_EXT                                      = 3,

    // VkValidationCacheHeaderVersionEXT

    VK_VALIDATION_CACHE_HEADER_VERSION_ONE_EXT                                        = 1,

    // VkValidationCheckEXT

    VK_VALIDATION_CHECK_ALL_EXT                                                       = 0,
    VK_VALIDATION_CHECK_SHADERS_EXT                                                   = 1,

    // VkValidationFeatureDisableEXT

    VK_VALIDATION_FEATURE_DISABLE_ALL_EXT                                             = 0,
    VK_VALIDATION_FEATURE_DISABLE_SHADERS_EXT                                         = 1,
    VK_VALIDATION_FEATURE_DISABLE_THREAD_SAFETY_EXT                                   = 2,
    VK_VALIDATION_FEATURE_DISABLE_API_PARAMETERS_EXT                                  = 3,
    VK_VALIDATION_FEATURE_DISABLE_OBJECT_LIFETIMES_EXT                                = 4,
    VK_VALIDATION_FEATURE_DISABLE_CORE_CHECKS_EXT                                     = 5,
    VK_VALIDATION_FEATURE_DISABLE_UNIQUE_HANDLES_EXT                                  = 6,

    // VkValidationFeatureEnableEXT

    VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_EXT                                     = 0,
    VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_RESERVE_BINDING_SLOT_EXT                = 1,

    // VkVendorId

    VK_VENDOR_ID_VIV                                                                  = 0x10001,
    VK_VENDOR_ID_VSI                                                                  = 0x10002,
    VK_VENDOR_ID_KAZAN                                                                = 0x10003,

    // VkVertexInputRate

    VK_VERTEX_INPUT_RATE_VERTEX                                                       = 0,
    VK_VERTEX_INPUT_RATE_INSTANCE                                                     = 1,

    // VkViewportCoordinateSwizzleNV

    VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_X_NV                                      = 0,
    VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_X_NV                                      = 1,
    VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Y_NV                                      = 2,
    VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Y_NV                                      = 3,
    VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Z_NV                                      = 4,
    VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Z_NV                                      = 5,
    VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_W_NV                                      = 6,
    VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_W_NV                                      = 7,

};


// import enums to namespace

// UNGROUPED

VKBINDING_CONSTEXPR static const VKenum VK_AMD_BUFFER_MARKER_EXTENSION_NAME = VKenum::VK_AMD_BUFFER_MARKER_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_DISPLAY_NATIVE_HDR_EXTENSION_NAME = VKenum::VK_AMD_DISPLAY_NATIVE_HDR_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_DRAW_INDIRECT_COUNT_EXTENSION_NAME = VKenum::VK_AMD_DRAW_INDIRECT_COUNT_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_134_EXTENSION_NAME = VKenum::VK_AMD_EXTENSION_134_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_135_EXTENSION_NAME = VKenum::VK_AMD_EXTENSION_135_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_136_EXTENSION_NAME = VKenum::VK_AMD_EXTENSION_136_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_140_EXTENSION_NAME = VKenum::VK_AMD_EXTENSION_140_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_142_EXTENSION_NAME = VKenum::VK_AMD_EXTENSION_142_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_143_EXTENSION_NAME = VKenum::VK_AMD_EXTENSION_143_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_17_EXTENSION_NAME = VKenum::VK_AMD_EXTENSION_17_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_18_EXTENSION_NAME = VKenum::VK_AMD_EXTENSION_18_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTENSION_182_EXTENSION_NAME = VKenum::VK_KHR_EXTENSION_182_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTENSION_183_EXTENSION_NAME = VKenum::VK_KHR_EXTENSION_183_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTENSION_184_EXTENSION_NAME = VKenum::VK_KHR_EXTENSION_184_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTENSION_187_EXTENSION_NAME = VKenum::VK_KHR_EXTENSION_187_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTENSION_188_EXTENSION_NAME = VKenum::VK_KHR_EXTENSION_188_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTENSION_189_EXTENSION_NAME = VKenum::VK_KHR_EXTENSION_189_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_20_EXTENSION_NAME = VKenum::VK_AMD_EXTENSION_20_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_227_EXTENSION_NAME = VKenum::VK_AMD_EXTENSION_227_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_228_EXTENSION_NAME = VKenum::VK_AMD_EXTENSION_228_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_229_EXTENSION_NAME = VKenum::VK_AMD_EXTENSION_229_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_230_EXTENSION_NAME = VKenum::VK_AMD_EXTENSION_230_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_231_EXTENSION_NAME = VKenum::VK_AMD_EXTENSION_231_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_232_EXTENSION_NAME = VKenum::VK_AMD_EXTENSION_232_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_233_EXTENSION_NAME = VKenum::VK_AMD_EXTENSION_233_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_234_EXTENSION_NAME = VKenum::VK_AMD_EXTENSION_234_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_235_EXTENSION_NAME = VKenum::VK_AMD_EXTENSION_235_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_236_EXTENSION_NAME = VKenum::VK_AMD_EXTENSION_236_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_24_EXTENSION_NAME = VKenum::VK_AMD_EXTENSION_24_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_25_EXTENSION_NAME = VKenum::VK_AMD_EXTENSION_25_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_32_EXTENSION_NAME = VKenum::VK_AMD_EXTENSION_32_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_33_EXTENSION_NAME = VKenum::VK_AMD_EXTENSION_33_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_35_EXTENSION_NAME = VKenum::VK_AMD_EXTENSION_35_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_39_EXTENSION_NAME = VKenum::VK_AMD_EXTENSION_39_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_40_EXTENSION_NAME = VKenum::VK_AMD_EXTENSION_40_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_41_EXTENSION_NAME = VKenum::VK_AMD_EXTENSION_41_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_44_EXTENSION_NAME = VKenum::VK_AMD_EXTENSION_44_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_45_EXTENSION_NAME = VKenum::VK_AMD_EXTENSION_45_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_46_EXTENSION_NAME = VKenum::VK_AMD_EXTENSION_46_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_GCN_SHADER_EXTENSION_NAME = VKenum::VK_AMD_GCN_SHADER_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_GPU_SHADER_HALF_FLOAT_EXTENSION_NAME = VKenum::VK_AMD_GPU_SHADER_HALF_FLOAT_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_GPU_SHADER_INT16_EXTENSION_NAME = VKenum::VK_AMD_GPU_SHADER_INT16_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_MEMORY_OVERALLOCATION_BEHAVIOR_EXTENSION_NAME = VKenum::VK_AMD_MEMORY_OVERALLOCATION_BEHAVIOR_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_MIXED_ATTACHMENT_SAMPLES_EXTENSION_NAME = VKenum::VK_AMD_MIXED_ATTACHMENT_SAMPLES_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_NEGATIVE_VIEWPORT_HEIGHT_EXTENSION_NAME = VKenum::VK_AMD_NEGATIVE_VIEWPORT_HEIGHT_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_RASTERIZATION_ORDER_EXTENSION_NAME = VKenum::VK_AMD_RASTERIZATION_ORDER_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_SHADER_BALLOT_EXTENSION_NAME = VKenum::VK_AMD_SHADER_BALLOT_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_SHADER_CORE_PROPERTIES_EXTENSION_NAME = VKenum::VK_AMD_SHADER_CORE_PROPERTIES_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_SHADER_EXPLICIT_VERTEX_PARAMETER_EXTENSION_NAME = VKenum::VK_AMD_SHADER_EXPLICIT_VERTEX_PARAMETER_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_SHADER_FRAGMENT_MASK_EXTENSION_NAME = VKenum::VK_AMD_SHADER_FRAGMENT_MASK_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_SHADER_IMAGE_LOAD_STORE_LOD_EXTENSION_NAME = VKenum::VK_AMD_SHADER_IMAGE_LOAD_STORE_LOD_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_SHADER_INFO_EXTENSION_NAME = VKenum::VK_AMD_SHADER_INFO_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_SHADER_TRINARY_MINMAX_EXTENSION_NAME = VKenum::VK_AMD_SHADER_TRINARY_MINMAX_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_TEXTURE_GATHER_BIAS_LOD_EXTENSION_NAME = VKenum::VK_AMD_TEXTURE_GATHER_BIAS_LOD_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_ANDROID_EXTERNAL_MEMORY_ANDROID_HARDWARE_BUFFER_EXTENSION_NAME = VKenum::VK_ANDROID_EXTERNAL_MEMORY_ANDROID_HARDWARE_BUFFER_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_ANDROID_NATIVE_BUFFER_NAME = VKenum::VK_ANDROID_NATIVE_BUFFER_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_ARM_extension_281 = VKenum::VK_ARM_extension_281;
VKBINDING_CONSTEXPR static const VKenum VK_BRCM_EXTENSION_264_EXTENSION_NAME = VKenum::VK_BRCM_EXTENSION_264_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_BRCM_EXTENSION_265_EXTENSION_NAME = VKenum::VK_BRCM_EXTENSION_265_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_ACQUIRE_XLIB_DISPLAY_EXTENSION_NAME = VKenum::VK_EXT_ACQUIRE_XLIB_DISPLAY_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_ASTC_DECODE_MODE_EXTENSION_NAME = VKenum::VK_EXT_ASTC_DECODE_MODE_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_BLEND_OPERATION_ADVANCED_EXTENSION_NAME = VKenum::VK_EXT_BLEND_OPERATION_ADVANCED_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_BUFFER_DEVICE_ADDRESS_EXTENSION_NAME = VKenum::VK_EXT_BUFFER_DEVICE_ADDRESS_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_CALIBRATED_TIMESTAMPS_EXTENSION_NAME = VKenum::VK_EXT_CALIBRATED_TIMESTAMPS_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_CONDITIONAL_RENDERING_EXTENSION_NAME = VKenum::VK_EXT_CONDITIONAL_RENDERING_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_CONSERVATIVE_RASTERIZATION_EXTENSION_NAME = VKenum::VK_EXT_CONSERVATIVE_RASTERIZATION_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_DEBUG_MARKER_EXTENSION_NAME = VKenum::VK_EXT_DEBUG_MARKER_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_DEBUG_REPORT_EXTENSION_NAME = VKenum::VK_EXT_DEBUG_REPORT_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_DEBUG_UTILS_EXTENSION_NAME = VKenum::VK_EXT_DEBUG_UTILS_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_DEPTH_CLIP_ENABLE_EXTENSION_NAME = VKenum::VK_EXT_DEPTH_CLIP_ENABLE_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_DEPTH_RANGE_UNRESTRICTED_EXTENSION_NAME = VKenum::VK_EXT_DEPTH_RANGE_UNRESTRICTED_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_DESCRIPTOR_INDEXING_EXTENSION_NAME = VKenum::VK_EXT_DESCRIPTOR_INDEXING_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_DIRECT_MODE_DISPLAY_EXTENSION_NAME = VKenum::VK_EXT_DIRECT_MODE_DISPLAY_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_DISCARD_RECTANGLES_EXTENSION_NAME = VKenum::VK_EXT_DISCARD_RECTANGLES_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_DISPLAY_CONTROL_EXTENSION_NAME = VKenum::VK_EXT_DISPLAY_CONTROL_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_DISPLAY_SURFACE_COUNTER_EXTENSION_NAME = VKenum::VK_EXT_DISPLAY_SURFACE_COUNTER_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_EXTENSION_160_EXTENSION_NAME = VKenum::VK_EXT_EXTENSION_160_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_EXTENSION_220_EXTENSION_NAME = VKenum::VK_EXT_EXTENSION_220_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_EXTENSION_223_EXTENSION_NAME = VKenum::VK_EXT_EXTENSION_223_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_EXTENSION_246_EXTENSION_NAME = VKenum::VK_EXT_EXTENSION_246_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_EXTENSION_255_EXTENSION_NAME = VKenum::VK_EXT_EXTENSION_255_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_EXTENSION_258_EXTENSION_NAME = VKenum::VK_EXT_EXTENSION_258_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_EXTENSION_259_EXTENSION_NAME = VKenum::VK_EXT_EXTENSION_259_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_extension_267 = VKenum::VK_EXT_extension_267;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_extension_284 = VKenum::VK_EXT_extension_284;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_extension_285 = VKenum::VK_EXT_extension_285;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_extension_286 = VKenum::VK_EXT_extension_286;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_EXTERNAL_MEMORY_DMA_BUF_EXTENSION_NAME = VKenum::VK_EXT_EXTERNAL_MEMORY_DMA_BUF_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_EXTERNAL_MEMORY_HOST_EXTENSION_NAME = VKenum::VK_EXT_EXTERNAL_MEMORY_HOST_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_FILTER_CUBIC_EXTENSION_NAME = VKenum::VK_EXT_FILTER_CUBIC_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_FRAGMENT_DENSITY_MAP_EXTENSION_NAME = VKenum::VK_EXT_FRAGMENT_DENSITY_MAP_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_FRAGMENT_SHADER_INTERLOCK_EXTENSION_NAME = VKenum::VK_EXT_FRAGMENT_SHADER_INTERLOCK_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_FULL_SCREEN_EXCLUSIVE_EXTENSION_NAME = VKenum::VK_EXT_FULL_SCREEN_EXCLUSIVE_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_GLOBAL_PRIORITY_EXTENSION_NAME = VKenum::VK_EXT_GLOBAL_PRIORITY_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_HDR_METADATA_EXTENSION_NAME = VKenum::VK_EXT_HDR_METADATA_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_HEADLESS_SURFACE_EXTENSION_NAME = VKenum::VK_EXT_HEADLESS_SURFACE_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_HOST_QUERY_RESET_EXTENSION_NAME = VKenum::VK_EXT_HOST_QUERY_RESET_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_IMAGE_DRM_FORMAT_MODIFIER_EXTENSION_NAME = VKenum::VK_EXT_IMAGE_DRM_FORMAT_MODIFIER_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_INDEX_TYPE_UINT8_EXTENSION_NAME = VKenum::VK_EXT_INDEX_TYPE_UINT8_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_INLINE_UNIFORM_BLOCK_EXTENSION_NAME = VKenum::VK_EXT_INLINE_UNIFORM_BLOCK_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_LINE_RASTERIZATION_EXTENSION_NAME = VKenum::VK_EXT_LINE_RASTERIZATION_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_MEMORY_BUDGET_EXTENSION_NAME = VKenum::VK_EXT_MEMORY_BUDGET_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_MEMORY_PRIORITY_EXTENSION_NAME = VKenum::VK_EXT_MEMORY_PRIORITY_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_METAL_SURFACE_EXTENSION_NAME = VKenum::VK_EXT_METAL_SURFACE_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_PCI_BUS_INFO_EXTENSION_NAME = VKenum::VK_EXT_PCI_BUS_INFO_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_PIPELINE_CREATION_FEEDBACK_EXTENSION_NAME = VKenum::VK_EXT_PIPELINE_CREATION_FEEDBACK_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_POST_DEPTH_COVERAGE_EXTENSION_NAME = VKenum::VK_EXT_POST_DEPTH_COVERAGE_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_QUEUE_FAMILY_FOREIGN_EXTENSION_NAME = VKenum::VK_EXT_QUEUE_FAMILY_FOREIGN_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_SAMPLE_LOCATIONS_EXTENSION_NAME = VKenum::VK_EXT_SAMPLE_LOCATIONS_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_SAMPLER_FILTER_MINMAX_EXTENSION_NAME = VKenum::VK_EXT_SAMPLER_FILTER_MINMAX_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_SCALAR_BLOCK_LAYOUT_EXTENSION_NAME = VKenum::VK_EXT_SCALAR_BLOCK_LAYOUT_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_SEPARATE_STENCIL_USAGE_EXTENSION_NAME = VKenum::VK_EXT_SEPARATE_STENCIL_USAGE_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_SHADER_DEMOTE_TO_HELPER_INVOCATION_EXTENSION_NAME = VKenum::VK_EXT_SHADER_DEMOTE_TO_HELPER_INVOCATION_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_SHADER_STENCIL_EXPORT_EXTENSION_NAME = VKenum::VK_EXT_SHADER_STENCIL_EXPORT_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_SHADER_SUBGROUP_BALLOT_EXTENSION_NAME = VKenum::VK_EXT_SHADER_SUBGROUP_BALLOT_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_SHADER_SUBGROUP_VOTE_EXTENSION_NAME = VKenum::VK_EXT_SHADER_SUBGROUP_VOTE_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_SHADER_VIEWPORT_INDEX_LAYER_EXTENSION_NAME = VKenum::VK_EXT_SHADER_VIEWPORT_INDEX_LAYER_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_SUBGROUP_SIZE_CONTROL_EXTENSION_NAME = VKenum::VK_EXT_SUBGROUP_SIZE_CONTROL_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_SWAPCHAIN_COLOR_SPACE_EXTENSION_NAME = VKenum::VK_EXT_SWAPCHAIN_COLOR_SPACE_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_TEXEL_BUFFER_ALIGNMENT_EXTENSION_NAME = VKenum::VK_EXT_TEXEL_BUFFER_ALIGNMENT_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_TEXTURE_COMPRESSION_ASTC_HDR_EXTENSION_NAME = VKenum::VK_EXT_TEXTURE_COMPRESSION_ASTC_HDR_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_TRANSFORM_FEEDBACK_EXTENSION_NAME = VKenum::VK_EXT_TRANSFORM_FEEDBACK_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_VALIDATION_CACHE_EXTENSION_NAME = VKenum::VK_EXT_VALIDATION_CACHE_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_VALIDATION_FEATURES_EXTENSION_NAME = VKenum::VK_EXT_VALIDATION_FEATURES_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_VALIDATION_FLAGS_EXTENSION_NAME = VKenum::VK_EXT_VALIDATION_FLAGS_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_VERTEX_ATTRIBUTE_DIVISOR_EXTENSION_NAME = VKenum::VK_EXT_VERTEX_ATTRIBUTE_DIVISOR_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_YCBCR_IMAGE_ARRAYS_EXTENSION_NAME = VKenum::VK_EXT_YCBCR_IMAGE_ARRAYS_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_FUCHSIA_IMAGEPIPE_SURFACE_EXTENSION_NAME = VKenum::VK_FUCHSIA_IMAGEPIPE_SURFACE_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_GOOGLE_EXTENSION_263_EXTENSION_NAME = VKenum::VK_GOOGLE_EXTENSION_263_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_GGP_FRAME_TOKEN_EXTENSION_NAME = VKenum::VK_GGP_FRAME_TOKEN_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_GGP_STREAM_DESCRIPTOR_SURFACE_EXTENSION_NAME = VKenum::VK_GGP_STREAM_DESCRIPTOR_SURFACE_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_GOOGLE_DECORATE_STRING_EXTENSION_NAME = VKenum::VK_GOOGLE_DECORATE_STRING_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_GOOGLE_DISPLAY_TIMING_EXTENSION_NAME = VKenum::VK_GOOGLE_DISPLAY_TIMING_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_GOOGLE_EXTENSION_194_EXTENSION_NAME = VKenum::VK_GOOGLE_EXTENSION_194_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_GOOGLE_EXTENSION_195_EXTENSION_NAME = VKenum::VK_GOOGLE_EXTENSION_195_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_GOOGLE_EXTENSION_196_EXTENSION_NAME = VKenum::VK_GOOGLE_EXTENSION_196_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_GOOGLE_EXTENSION_49_EXTENSION_NAME = VKenum::VK_GOOGLE_EXTENSION_49_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_GOOGLE_HLSL_FUNCTIONALITY1_EXTENSION_NAME = VKenum::VK_GOOGLE_HLSL_FUNCTIONALITY1_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_IMG_EXTENSION_107_EXTENSION_NAME = VKenum::VK_IMG_EXTENSION_107_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_IMG_EXTENSION_108_EXTENSION_NAME = VKenum::VK_IMG_EXTENSION_108_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_IMG_EXTENSION_111_EXTENSION_NAME = VKenum::VK_IMG_EXTENSION_111_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_IMG_EXTENSION_69_EXTENSION_NAME = VKenum::VK_IMG_EXTENSION_69_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_IMG_FILTER_CUBIC_EXTENSION_NAME = VKenum::VK_IMG_FILTER_CUBIC_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_IMG_FORMAT_PVRTC_EXTENSION_NAME = VKenum::VK_IMG_FORMAT_PVRTC_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_INTEL_EXTENSION_243_EXTENSION_NAME = VKenum::VK_INTEL_EXTENSION_243_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_INTEL_PERFORMANCE_QUERY_EXTENSION_NAME = VKenum::VK_INTEL_PERFORMANCE_QUERY_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_INTEL_SHADER_INTEGER_FUNCTIONS_2_EXTENSION_NAME = VKenum::VK_INTEL_SHADER_INTEGER_FUNCTIONS_2_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_16BIT_STORAGE_EXTENSION_NAME = VKenum::VK_KHR_16BIT_STORAGE_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_8BIT_STORAGE_EXTENSION_NAME = VKenum::VK_KHR_8BIT_STORAGE_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_ANDROID_SURFACE_EXTENSION_NAME = VKenum::VK_KHR_ANDROID_SURFACE_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_BIND_MEMORY_2_EXTENSION_NAME = VKenum::VK_KHR_BIND_MEMORY_2_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_CREATE_RENDERPASS_2_EXTENSION_NAME = VKenum::VK_KHR_CREATE_RENDERPASS_2_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_DEDICATED_ALLOCATION_EXTENSION_NAME = VKenum::VK_KHR_DEDICATED_ALLOCATION_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_DEPTH_STENCIL_RESOLVE_EXTENSION_NAME = VKenum::VK_KHR_DEPTH_STENCIL_RESOLVE_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_DESCRIPTOR_UPDATE_TEMPLATE_EXTENSION_NAME = VKenum::VK_KHR_DESCRIPTOR_UPDATE_TEMPLATE_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_DEVICE_GROUP_EXTENSION_NAME = VKenum::VK_KHR_DEVICE_GROUP_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_DEVICE_GROUP_CREATION_EXTENSION_NAME = VKenum::VK_KHR_DEVICE_GROUP_CREATION_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_DISPLAY_EXTENSION_NAME = VKenum::VK_KHR_DISPLAY_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_DISPLAY_SWAPCHAIN_EXTENSION_NAME = VKenum::VK_KHR_DISPLAY_SWAPCHAIN_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_DRAW_INDIRECT_COUNT_EXTENSION_NAME = VKenum::VK_KHR_DRAW_INDIRECT_COUNT_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_DRIVER_PROPERTIES_EXTENSION_NAME = VKenum::VK_KHR_DRIVER_PROPERTIES_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTENSION_117_EXTENSION_NAME = VKenum::VK_KHR_EXTENSION_117_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTENSION_119_EXTENSION_NAME = VKenum::VK_KHR_EXTENSION_119_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTENSION_176_EXTENSION_NAME = VKenum::VK_KHR_EXTENSION_176_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTENSION_177_EXTENSION_NAME = VKenum::VK_KHR_EXTENSION_177_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTENSION_208_EXTENSION_NAME = VKenum::VK_KHR_EXTENSION_208_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTENSION_209_EXTENSION_NAME = VKenum::VK_KHR_EXTENSION_209_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTENSION_216_EXTENSION_NAME = VKenum::VK_KHR_EXTENSION_216_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTENSION_217_EXTENSION_NAME = VKenum::VK_KHR_EXTENSION_217_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTENSION_221_EXTENSION_NAME = VKenum::VK_KHR_EXTENSION_221_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTENSION_237_EXTENSION_NAME = VKenum::VK_KHR_EXTENSION_237_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTENSION_249_EXTENSION_NAME = VKenum::VK_KHR_EXTENSION_249_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_extension_268 = VKenum::VK_EXT_extension_268;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_extension_269 = VKenum::VK_KHR_extension_269;
VKBINDING_CONSTEXPR static const VKenum VK_INTEL_extension_270 = VKenum::VK_INTEL_extension_270;
VKBINDING_CONSTEXPR static const VKenum VK_INTEL_extension_271 = VKenum::VK_INTEL_extension_271;
VKBINDING_CONSTEXPR static const VKenum VK_INTEL_extension_272 = VKenum::VK_INTEL_extension_272;
VKBINDING_CONSTEXPR static const VKenum VK_INTEL_extension_273 = VKenum::VK_INTEL_extension_273;
VKBINDING_CONSTEXPR static const VKenum VK_INTEL_extension_274 = VKenum::VK_INTEL_extension_274;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_extension_275 = VKenum::VK_KHR_extension_275;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_extension_276 = VKenum::VK_KHR_extension_276;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_extension_280 = VKenum::VK_KHR_extension_280;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTERNAL_FENCE_EXTENSION_NAME = VKenum::VK_KHR_EXTERNAL_FENCE_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTERNAL_FENCE_CAPABILITIES_EXTENSION_NAME = VKenum::VK_KHR_EXTERNAL_FENCE_CAPABILITIES_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTERNAL_FENCE_FD_EXTENSION_NAME = VKenum::VK_KHR_EXTERNAL_FENCE_FD_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTERNAL_FENCE_WIN32_EXTENSION_NAME = VKenum::VK_KHR_EXTERNAL_FENCE_WIN32_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTERNAL_MEMORY_EXTENSION_NAME = VKenum::VK_KHR_EXTERNAL_MEMORY_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTERNAL_MEMORY_CAPABILITIES_EXTENSION_NAME = VKenum::VK_KHR_EXTERNAL_MEMORY_CAPABILITIES_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTERNAL_MEMORY_FD_EXTENSION_NAME = VKenum::VK_KHR_EXTERNAL_MEMORY_FD_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTERNAL_MEMORY_WIN32_EXTENSION_NAME = VKenum::VK_KHR_EXTERNAL_MEMORY_WIN32_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTERNAL_SEMAPHORE_EXTENSION_NAME = VKenum::VK_KHR_EXTERNAL_SEMAPHORE_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTERNAL_SEMAPHORE_CAPABILITIES_EXTENSION_NAME = VKenum::VK_KHR_EXTERNAL_SEMAPHORE_CAPABILITIES_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTERNAL_SEMAPHORE_FD_EXTENSION_NAME = VKenum::VK_KHR_EXTERNAL_SEMAPHORE_FD_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTERNAL_SEMAPHORE_WIN32_EXTENSION_NAME = VKenum::VK_KHR_EXTERNAL_SEMAPHORE_WIN32_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_GET_DISPLAY_PROPERTIES_2_EXTENSION_NAME = VKenum::VK_KHR_GET_DISPLAY_PROPERTIES_2_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_GET_MEMORY_REQUIREMENTS_2_EXTENSION_NAME = VKenum::VK_KHR_GET_MEMORY_REQUIREMENTS_2_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_GET_PHYSICAL_DEVICE_PROPERTIES_2_EXTENSION_NAME = VKenum::VK_KHR_GET_PHYSICAL_DEVICE_PROPERTIES_2_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_GET_SURFACE_CAPABILITIES_2_EXTENSION_NAME = VKenum::VK_KHR_GET_SURFACE_CAPABILITIES_2_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_IMAGE_FORMAT_LIST_EXTENSION_NAME = VKenum::VK_KHR_IMAGE_FORMAT_LIST_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_IMAGELESS_FRAMEBUFFER_EXTENSION_NAME = VKenum::VK_KHR_IMAGELESS_FRAMEBUFFER_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_INCREMENTAL_PRESENT_EXTENSION_NAME = VKenum::VK_KHR_INCREMENTAL_PRESENT_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_MAINTENANCE1_EXTENSION_NAME = VKenum::VK_KHR_MAINTENANCE1_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_MAINTENANCE2_EXTENSION_NAME = VKenum::VK_KHR_MAINTENANCE2_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_MAINTENANCE3_EXTENSION_NAME = VKenum::VK_KHR_MAINTENANCE3_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_MIR_SURFACE_EXTENSION_NAME = VKenum::VK_KHR_MIR_SURFACE_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_MULTIVIEW_EXTENSION_NAME = VKenum::VK_KHR_MULTIVIEW_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_PUSH_DESCRIPTOR_EXTENSION_NAME = VKenum::VK_KHR_PUSH_DESCRIPTOR_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_RELAXED_BLOCK_LAYOUT_EXTENSION_NAME = VKenum::VK_KHR_RELAXED_BLOCK_LAYOUT_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_SAMPLER_MIRROR_CLAMP_TO_EDGE_EXTENSION_NAME = VKenum::VK_KHR_SAMPLER_MIRROR_CLAMP_TO_EDGE_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_SAMPLER_YCBCR_CONVERSION_EXTENSION_NAME = VKenum::VK_KHR_SAMPLER_YCBCR_CONVERSION_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_SHADER_ATOMIC_INT64_EXTENSION_NAME = VKenum::VK_KHR_SHADER_ATOMIC_INT64_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_SHADER_DRAW_PARAMETERS_EXTENSION_NAME = VKenum::VK_KHR_SHADER_DRAW_PARAMETERS_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_SHADER_FLOAT16_INT8_EXTENSION_NAME = VKenum::VK_KHR_SHADER_FLOAT16_INT8_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_SHADER_FLOAT_CONTROLS_EXTENSION_NAME = VKenum::VK_KHR_SHADER_FLOAT_CONTROLS_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_SHARED_PRESENTABLE_IMAGE_EXTENSION_NAME = VKenum::VK_KHR_SHARED_PRESENTABLE_IMAGE_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_STORAGE_BUFFER_STORAGE_CLASS_EXTENSION_NAME = VKenum::VK_KHR_STORAGE_BUFFER_STORAGE_CLASS_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_SURFACE_EXTENSION_NAME = VKenum::VK_KHR_SURFACE_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_SURFACE_PROTECTED_CAPABILITIES_EXTENSION_NAME = VKenum::VK_KHR_SURFACE_PROTECTED_CAPABILITIES_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_SWAPCHAIN_EXTENSION_NAME = VKenum::VK_KHR_SWAPCHAIN_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_SWAPCHAIN_MUTABLE_FORMAT_EXTENSION_NAME = VKenum::VK_KHR_SWAPCHAIN_MUTABLE_FORMAT_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_UNIFORM_BUFFER_STANDARD_LAYOUT_EXTENSION_NAME = VKenum::VK_KHR_UNIFORM_BUFFER_STANDARD_LAYOUT_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_VARIABLE_POINTERS_EXTENSION_NAME = VKenum::VK_KHR_VARIABLE_POINTERS_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_VULKAN_MEMORY_MODEL_EXTENSION_NAME = VKenum::VK_KHR_VULKAN_MEMORY_MODEL_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_WAYLAND_SURFACE_EXTENSION_NAME = VKenum::VK_KHR_WAYLAND_SURFACE_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_WIN32_KEYED_MUTEX_EXTENSION_NAME = VKenum::VK_KHR_WIN32_KEYED_MUTEX_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_WIN32_SURFACE_EXTENSION_NAME = VKenum::VK_KHR_WIN32_SURFACE_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_XCB_SURFACE_EXTENSION_NAME = VKenum::VK_KHR_XCB_SURFACE_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_XLIB_SURFACE_EXTENSION_NAME = VKenum::VK_KHR_XLIB_SURFACE_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_MESA_EXTENSION_244_EXTENSION_NAME = VKenum::VK_MESA_EXTENSION_244_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_MVK_IOS_SURFACE_EXTENSION_NAME = VKenum::VK_MVK_IOS_SURFACE_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_MVK_MACOS_SURFACE_EXTENSION_NAME = VKenum::VK_MVK_MACOS_SURFACE_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_MVK_MOLTENVK_EXTENSION_NAME = VKenum::VK_MVK_MOLTENVK_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NN_VI_SURFACE_EXTENSION_NAME = VKenum::VK_NN_VI_SURFACE_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NV_CLIP_SPACE_W_SCALING_EXTENSION_NAME = VKenum::VK_NV_CLIP_SPACE_W_SCALING_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NV_COMPUTE_SHADER_DERIVATIVES_EXTENSION_NAME = VKenum::VK_NV_COMPUTE_SHADER_DERIVATIVES_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NV_COOPERATIVE_MATRIX_EXTENSION_NAME = VKenum::VK_NV_COOPERATIVE_MATRIX_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NV_CORNER_SAMPLED_IMAGE_EXTENSION_NAME = VKenum::VK_NV_CORNER_SAMPLED_IMAGE_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NV_COVERAGE_REDUCTION_MODE_EXTENSION_NAME = VKenum::VK_NV_COVERAGE_REDUCTION_MODE_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NV_DEDICATED_ALLOCATION_EXTENSION_NAME = VKenum::VK_NV_DEDICATED_ALLOCATION_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NV_DEDICATED_ALLOCATION_IMAGE_ALIASING_EXTENSION_NAME = VKenum::VK_NV_DEDICATED_ALLOCATION_IMAGE_ALIASING_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NV_DEVICE_DIAGNOSTIC_CHECKPOINTS_EXTENSION_NAME = VKenum::VK_NV_DEVICE_DIAGNOSTIC_CHECKPOINTS_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NV_EXTENSION_101_EXTENSION_NAME = VKenum::VK_NV_EXTENSION_101_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NV_EXTENSION_104_EXTENSION_NAME = VKenum::VK_NV_EXTENSION_104_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NV_EXTENSION_151_EXTENSION_NAME = VKenum::VK_NV_EXTENSION_151_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NV_EXTENSION_152_EXTENSION_NAME = VKenum::VK_NV_EXTENSION_152_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_EXTENSION_164_EXTENSION_NAME = VKenum::VK_EXT_EXTENSION_164_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_EXTENSION_168_EXTENSION_NAME = VKenum::VK_EXT_EXTENSION_168_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NV_EXTENSION_242_EXTENSION_NAME = VKenum::VK_NV_EXTENSION_242_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NV_EXTENSION_261_EXTENSION_NAME = VKenum::VK_NV_EXTENSION_261_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NV_extension_278 = VKenum::VK_NV_extension_278;
VKBINDING_CONSTEXPR static const VKenum VK_NV_extension_279 = VKenum::VK_NV_extension_279;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_EXTENSION_28_EXTENSION_NAME = VKenum::VK_EXT_EXTENSION_28_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NV_EXTENSION_52_EXTENSION_NAME = VKenum::VK_NV_EXTENSION_52_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NV_EXTENSION_53_EXTENSION_NAME = VKenum::VK_NV_EXTENSION_53_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NV_EXTERNAL_MEMORY_EXTENSION_NAME = VKenum::VK_NV_EXTERNAL_MEMORY_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NV_EXTERNAL_MEMORY_CAPABILITIES_EXTENSION_NAME = VKenum::VK_NV_EXTERNAL_MEMORY_CAPABILITIES_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NV_EXTERNAL_MEMORY_WIN32_EXTENSION_NAME = VKenum::VK_NV_EXTERNAL_MEMORY_WIN32_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NV_FILL_RECTANGLE_EXTENSION_NAME = VKenum::VK_NV_FILL_RECTANGLE_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NV_FRAGMENT_COVERAGE_TO_COLOR_EXTENSION_NAME = VKenum::VK_NV_FRAGMENT_COVERAGE_TO_COLOR_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NV_FRAGMENT_SHADER_BARYCENTRIC_EXTENSION_NAME = VKenum::VK_NV_FRAGMENT_SHADER_BARYCENTRIC_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NV_FRAMEBUFFER_MIXED_SAMPLES_EXTENSION_NAME = VKenum::VK_NV_FRAMEBUFFER_MIXED_SAMPLES_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NV_GEOMETRY_SHADER_PASSTHROUGH_EXTENSION_NAME = VKenum::VK_NV_GEOMETRY_SHADER_PASSTHROUGH_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NV_GLSL_SHADER_EXTENSION_NAME = VKenum::VK_NV_GLSL_SHADER_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NV_MESH_SHADER_EXTENSION_NAME = VKenum::VK_NV_MESH_SHADER_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NV_RAY_TRACING_EXTENSION_NAME = VKenum::VK_NV_RAY_TRACING_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NV_REPRESENTATIVE_FRAGMENT_TEST_EXTENSION_NAME = VKenum::VK_NV_REPRESENTATIVE_FRAGMENT_TEST_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NV_SAMPLE_MASK_OVERRIDE_COVERAGE_EXTENSION_NAME = VKenum::VK_NV_SAMPLE_MASK_OVERRIDE_COVERAGE_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NV_SCISSOR_EXCLUSIVE_EXTENSION_NAME = VKenum::VK_NV_SCISSOR_EXCLUSIVE_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NV_SHADER_IMAGE_FOOTPRINT_EXTENSION_NAME = VKenum::VK_NV_SHADER_IMAGE_FOOTPRINT_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NV_SHADER_SM_BUILTINS_EXTENSION_NAME = VKenum::VK_NV_SHADER_SM_BUILTINS_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NV_SHADER_SUBGROUP_PARTITIONED_EXTENSION_NAME = VKenum::VK_NV_SHADER_SUBGROUP_PARTITIONED_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NV_SHADING_RATE_IMAGE_EXTENSION_NAME = VKenum::VK_NV_SHADING_RATE_IMAGE_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NV_VIEWPORT_ARRAY2_EXTENSION_NAME = VKenum::VK_NV_VIEWPORT_ARRAY2_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NV_VIEWPORT_SWIZZLE_EXTENSION_NAME = VKenum::VK_NV_VIEWPORT_SWIZZLE_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NV_WIN32_KEYED_MUTEX_EXTENSION_NAME = VKenum::VK_NV_WIN32_KEYED_MUTEX_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NVX_DEVICE_GENERATED_COMMANDS_EXTENSION_NAME = VKenum::VK_NVX_DEVICE_GENERATED_COMMANDS_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NVX_EXTENSION_30_EXTENSION_NAME = VKenum::VK_NVX_EXTENSION_30_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NVX_EXTENSION_48_EXTENSION_NAME = VKenum::VK_NVX_EXTENSION_48_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NVX_IMAGE_VIEW_HANDLE_EXTENSION_NAME = VKenum::VK_NVX_IMAGE_VIEW_HANDLE_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_NVX_MULTIVIEW_PER_VIEW_ATTRIBUTES_EXTENSION_NAME = VKenum::VK_NVX_MULTIVIEW_PER_VIEW_ATTRIBUTES_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_QCOM_extension_172_EXTENSION_NAME = VKenum::VK_QCOM_extension_172_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_QCOM_extension_173_EXTENSION_NAME = VKenum::VK_QCOM_extension_173_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_QCOM_extension_174_EXTENSION_NAME = VKenum::VK_QCOM_extension_174_EXTENSION_NAME;
VKBINDING_CONSTEXPR static const VKenum VK_QCOM_extension_283 = VKenum::VK_QCOM_extension_283;
VKBINDING_CONSTEXPR static const VKenum VK_REMAINING_MIP_LEVELS = VKenum::VK_REMAINING_MIP_LEVELS;
VKBINDING_CONSTEXPR static const VKenum VK_REMAINING_ARRAY_LAYERS = VKenum::VK_REMAINING_ARRAY_LAYERS;
VKBINDING_CONSTEXPR static const VKenum VK_ATTACHMENT_UNUSED = VKenum::VK_ATTACHMENT_UNUSED;
VKBINDING_CONSTEXPR static const VKenum VK_QUEUE_FAMILY_IGNORED = VKenum::VK_QUEUE_FAMILY_IGNORED;
VKBINDING_CONSTEXPR static const VKenum VK_SUBPASS_EXTERNAL = VKenum::VK_SUBPASS_EXTERNAL;
VKBINDING_CONSTEXPR static const VKenum VK_SHADER_UNUSED_NV = VKenum::VK_SHADER_UNUSED_NV;
VKBINDING_CONSTEXPR static const VKenum VK_QUEUE_FAMILY_EXTERNAL = VKenum::VK_QUEUE_FAMILY_EXTERNAL;
VKBINDING_CONSTEXPR static const VKenum VK_QUEUE_FAMILY_EXTERNAL_KHR = VKenum::VK_QUEUE_FAMILY_EXTERNAL_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_QUEUE_FAMILY_FOREIGN_EXT = VKenum::VK_QUEUE_FAMILY_FOREIGN_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_WHOLE_SIZE = VKenum::VK_WHOLE_SIZE;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_17_SPEC_VERSION = VKenum::VK_AMD_EXTENSION_17_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_18_SPEC_VERSION = VKenum::VK_AMD_EXTENSION_18_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_20_SPEC_VERSION = VKenum::VK_AMD_EXTENSION_20_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_24_SPEC_VERSION = VKenum::VK_AMD_EXTENSION_24_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_25_SPEC_VERSION = VKenum::VK_AMD_EXTENSION_25_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_EXTENSION_28_SPEC_VERSION = VKenum::VK_EXT_EXTENSION_28_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NVX_EXTENSION_30_SPEC_VERSION = VKenum::VK_NVX_EXTENSION_30_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_32_SPEC_VERSION = VKenum::VK_AMD_EXTENSION_32_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_33_SPEC_VERSION = VKenum::VK_AMD_EXTENSION_33_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_35_SPEC_VERSION = VKenum::VK_AMD_EXTENSION_35_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_39_SPEC_VERSION = VKenum::VK_AMD_EXTENSION_39_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_40_SPEC_VERSION = VKenum::VK_AMD_EXTENSION_40_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_41_SPEC_VERSION = VKenum::VK_AMD_EXTENSION_41_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_44_SPEC_VERSION = VKenum::VK_AMD_EXTENSION_44_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_45_SPEC_VERSION = VKenum::VK_AMD_EXTENSION_45_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_46_SPEC_VERSION = VKenum::VK_AMD_EXTENSION_46_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NVX_EXTENSION_48_SPEC_VERSION = VKenum::VK_NVX_EXTENSION_48_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_GOOGLE_EXTENSION_49_SPEC_VERSION = VKenum::VK_GOOGLE_EXTENSION_49_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_EXTENSION_52_SPEC_VERSION = VKenum::VK_NV_EXTENSION_52_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_EXTENSION_53_SPEC_VERSION = VKenum::VK_NV_EXTENSION_53_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_IMG_EXTENSION_69_SPEC_VERSION = VKenum::VK_IMG_EXTENSION_69_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_EXTENSION_101_SPEC_VERSION = VKenum::VK_NV_EXTENSION_101_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_EXTENSION_104_SPEC_VERSION = VKenum::VK_NV_EXTENSION_104_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_IMG_EXTENSION_107_SPEC_VERSION = VKenum::VK_IMG_EXTENSION_107_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_IMG_EXTENSION_108_SPEC_VERSION = VKenum::VK_IMG_EXTENSION_108_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_IMG_EXTENSION_111_SPEC_VERSION = VKenum::VK_IMG_EXTENSION_111_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTENSION_117_SPEC_VERSION = VKenum::VK_KHR_EXTENSION_117_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTENSION_119_SPEC_VERSION = VKenum::VK_KHR_EXTENSION_119_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_MVK_MOLTENVK_SPEC_VERSION = VKenum::VK_MVK_MOLTENVK_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_134_SPEC_VERSION = VKenum::VK_AMD_EXTENSION_134_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_135_SPEC_VERSION = VKenum::VK_AMD_EXTENSION_135_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_136_SPEC_VERSION = VKenum::VK_AMD_EXTENSION_136_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_140_SPEC_VERSION = VKenum::VK_AMD_EXTENSION_140_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_142_SPEC_VERSION = VKenum::VK_AMD_EXTENSION_142_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_143_SPEC_VERSION = VKenum::VK_AMD_EXTENSION_143_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_EXTENSION_151_SPEC_VERSION = VKenum::VK_NV_EXTENSION_151_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_EXTENSION_152_SPEC_VERSION = VKenum::VK_NV_EXTENSION_152_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_EXTENSION_160_SPEC_VERSION = VKenum::VK_EXT_EXTENSION_160_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_EXTENSION_164_SPEC_VERSION = VKenum::VK_EXT_EXTENSION_164_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_EXTENSION_168_SPEC_VERSION = VKenum::VK_EXT_EXTENSION_168_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_QCOM_extension_172_SPEC_VERSION = VKenum::VK_QCOM_extension_172_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_QCOM_extension_173_SPEC_VERSION = VKenum::VK_QCOM_extension_173_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_QCOM_extension_174_SPEC_VERSION = VKenum::VK_QCOM_extension_174_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTENSION_176_SPEC_VERSION = VKenum::VK_KHR_EXTENSION_176_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTENSION_177_SPEC_VERSION = VKenum::VK_KHR_EXTENSION_177_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTENSION_182_SPEC_VERSION = VKenum::VK_KHR_EXTENSION_182_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTENSION_183_SPEC_VERSION = VKenum::VK_KHR_EXTENSION_183_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTENSION_184_SPEC_VERSION = VKenum::VK_KHR_EXTENSION_184_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTENSION_187_SPEC_VERSION = VKenum::VK_KHR_EXTENSION_187_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTENSION_188_SPEC_VERSION = VKenum::VK_KHR_EXTENSION_188_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTENSION_189_SPEC_VERSION = VKenum::VK_KHR_EXTENSION_189_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_GOOGLE_EXTENSION_194_SPEC_VERSION = VKenum::VK_GOOGLE_EXTENSION_194_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_GOOGLE_EXTENSION_195_SPEC_VERSION = VKenum::VK_GOOGLE_EXTENSION_195_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_GOOGLE_EXTENSION_196_SPEC_VERSION = VKenum::VK_GOOGLE_EXTENSION_196_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTENSION_208_SPEC_VERSION = VKenum::VK_KHR_EXTENSION_208_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTENSION_209_SPEC_VERSION = VKenum::VK_KHR_EXTENSION_209_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTENSION_216_SPEC_VERSION = VKenum::VK_KHR_EXTENSION_216_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTENSION_217_SPEC_VERSION = VKenum::VK_KHR_EXTENSION_217_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_EXTENSION_220_SPEC_VERSION = VKenum::VK_EXT_EXTENSION_220_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTENSION_221_SPEC_VERSION = VKenum::VK_KHR_EXTENSION_221_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_EXTENSION_223_SPEC_VERSION = VKenum::VK_EXT_EXTENSION_223_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_227_SPEC_VERSION = VKenum::VK_AMD_EXTENSION_227_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_228_SPEC_VERSION = VKenum::VK_AMD_EXTENSION_228_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_229_SPEC_VERSION = VKenum::VK_AMD_EXTENSION_229_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_230_SPEC_VERSION = VKenum::VK_AMD_EXTENSION_230_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_231_SPEC_VERSION = VKenum::VK_AMD_EXTENSION_231_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_232_SPEC_VERSION = VKenum::VK_AMD_EXTENSION_232_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_233_SPEC_VERSION = VKenum::VK_AMD_EXTENSION_233_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_234_SPEC_VERSION = VKenum::VK_AMD_EXTENSION_234_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_235_SPEC_VERSION = VKenum::VK_AMD_EXTENSION_235_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_EXTENSION_236_SPEC_VERSION = VKenum::VK_AMD_EXTENSION_236_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTENSION_237_SPEC_VERSION = VKenum::VK_KHR_EXTENSION_237_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_EXTENSION_242_SPEC_VERSION = VKenum::VK_NV_EXTENSION_242_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_INTEL_EXTENSION_243_SPEC_VERSION = VKenum::VK_INTEL_EXTENSION_243_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_MESA_EXTENSION_244_SPEC_VERSION = VKenum::VK_MESA_EXTENSION_244_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_EXTENSION_246_SPEC_VERSION = VKenum::VK_EXT_EXTENSION_246_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTENSION_249_SPEC_VERSION = VKenum::VK_KHR_EXTENSION_249_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_EXTENSION_255_SPEC_VERSION = VKenum::VK_EXT_EXTENSION_255_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_HEADLESS_SURFACE_SPEC_VERSION = VKenum::VK_EXT_HEADLESS_SURFACE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_EXTENSION_258_SPEC_VERSION = VKenum::VK_EXT_EXTENSION_258_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_EXTENSION_259_SPEC_VERSION = VKenum::VK_EXT_EXTENSION_259_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_EXTENSION_261_SPEC_VERSION = VKenum::VK_NV_EXTENSION_261_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_GOOGLE_EXTENSION_263_SPEC_VERSION = VKenum::VK_GOOGLE_EXTENSION_263_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_BRCM_EXTENSION_264_SPEC_VERSION = VKenum::VK_BRCM_EXTENSION_264_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_BRCM_EXTENSION_265_SPEC_VERSION = VKenum::VK_BRCM_EXTENSION_265_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_EXTENSION_267_SPEC_VERSION = VKenum::VK_EXT_EXTENSION_267_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_EXTENSION_268_SPEC_VERSION = VKenum::VK_EXT_EXTENSION_268_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTENSION_269_SPEC_VERSION = VKenum::VK_KHR_EXTENSION_269_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_INTEL_EXTENSION_270_SPEC_VERSION = VKenum::VK_INTEL_EXTENSION_270_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_INTEL_EXTENSION_271_SPEC_VERSION = VKenum::VK_INTEL_EXTENSION_271_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_INTEL_EXTENSION_272_SPEC_VERSION = VKenum::VK_INTEL_EXTENSION_272_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_INTEL_EXTENSION_273_SPEC_VERSION = VKenum::VK_INTEL_EXTENSION_273_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_INTEL_EXTENSION_274_SPEC_VERSION = VKenum::VK_INTEL_EXTENSION_274_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTENSION_275_SPEC_VERSION = VKenum::VK_KHR_EXTENSION_275_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTENSION_276_SPEC_VERSION = VKenum::VK_KHR_EXTENSION_276_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_EXTENSION_278_SPEC_VERSION = VKenum::VK_NV_EXTENSION_278_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_EXTENSION_279_SPEC_VERSION = VKenum::VK_NV_EXTENSION_279_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTENSION_280_SPEC_VERSION = VKenum::VK_KHR_EXTENSION_280_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_ARM_EXTENSION_281_SPEC_VERSION = VKenum::VK_ARM_EXTENSION_281_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_QCOM_EXTENSION_283_SPEC_VERSION = VKenum::VK_QCOM_EXTENSION_283_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_EXTENSION_284_SPEC_VERSION = VKenum::VK_EXT_EXTENSION_284_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_EXTENSION_285_SPEC_VERSION = VKenum::VK_EXT_EXTENSION_285_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_EXTENSION_286_SPEC_VERSION = VKenum::VK_EXT_EXTENSION_286_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_GLSL_SHADER_SPEC_VERSION = VKenum::VK_NV_GLSL_SHADER_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_DEPTH_RANGE_UNRESTRICTED_SPEC_VERSION = VKenum::VK_EXT_DEPTH_RANGE_UNRESTRICTED_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_SAMPLER_MIRROR_CLAMP_TO_EDGE_SPEC_VERSION = VKenum::VK_KHR_SAMPLER_MIRROR_CLAMP_TO_EDGE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_IMG_FILTER_CUBIC_SPEC_VERSION = VKenum::VK_IMG_FILTER_CUBIC_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_RASTERIZATION_ORDER_SPEC_VERSION = VKenum::VK_AMD_RASTERIZATION_ORDER_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_SHADER_TRINARY_MINMAX_SPEC_VERSION = VKenum::VK_AMD_SHADER_TRINARY_MINMAX_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_SHADER_EXPLICIT_VERTEX_PARAMETER_SPEC_VERSION = VKenum::VK_AMD_SHADER_EXPLICIT_VERTEX_PARAMETER_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_GCN_SHADER_SPEC_VERSION = VKenum::VK_AMD_GCN_SHADER_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_DEDICATED_ALLOCATION_SPEC_VERSION = VKenum::VK_NV_DEDICATED_ALLOCATION_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_TRANSFORM_FEEDBACK_SPEC_VERSION = VKenum::VK_EXT_TRANSFORM_FEEDBACK_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NVX_IMAGE_VIEW_HANDLE_SPEC_VERSION = VKenum::VK_NVX_IMAGE_VIEW_HANDLE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_DRAW_INDIRECT_COUNT_SPEC_VERSION = VKenum::VK_AMD_DRAW_INDIRECT_COUNT_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_NEGATIVE_VIEWPORT_HEIGHT_SPEC_VERSION = VKenum::VK_AMD_NEGATIVE_VIEWPORT_HEIGHT_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_SHADER_BALLOT_SPEC_VERSION = VKenum::VK_AMD_SHADER_BALLOT_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_TEXTURE_GATHER_BIAS_LOD_SPEC_VERSION = VKenum::VK_AMD_TEXTURE_GATHER_BIAS_LOD_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_SHADER_INFO_SPEC_VERSION = VKenum::VK_AMD_SHADER_INFO_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_SHADER_IMAGE_LOAD_STORE_LOD_SPEC_VERSION = VKenum::VK_AMD_SHADER_IMAGE_LOAD_STORE_LOD_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_GGP_STREAM_DESCRIPTOR_SURFACE_SPEC_VERSION = VKenum::VK_GGP_STREAM_DESCRIPTOR_SURFACE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_MULTIVIEW_SPEC_VERSION = VKenum::VK_KHR_MULTIVIEW_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_IMG_FORMAT_PVRTC_SPEC_VERSION = VKenum::VK_IMG_FORMAT_PVRTC_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_EXTERNAL_MEMORY_CAPABILITIES_SPEC_VERSION = VKenum::VK_NV_EXTERNAL_MEMORY_CAPABILITIES_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_EXTERNAL_MEMORY_SPEC_VERSION = VKenum::VK_NV_EXTERNAL_MEMORY_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_EXTERNAL_MEMORY_WIN32_SPEC_VERSION = VKenum::VK_NV_EXTERNAL_MEMORY_WIN32_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_WIN32_KEYED_MUTEX_SPEC_VERSION = VKenum::VK_NV_WIN32_KEYED_MUTEX_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_GET_PHYSICAL_DEVICE_PROPERTIES_2_SPEC_VERSION = VKenum::VK_KHR_GET_PHYSICAL_DEVICE_PROPERTIES_2_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_VALIDATION_FLAGS_SPEC_VERSION = VKenum::VK_EXT_VALIDATION_FLAGS_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NN_VI_SURFACE_SPEC_VERSION = VKenum::VK_NN_VI_SURFACE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_SHADER_DRAW_PARAMETERS_SPEC_VERSION = VKenum::VK_KHR_SHADER_DRAW_PARAMETERS_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_SHADER_SUBGROUP_BALLOT_SPEC_VERSION = VKenum::VK_EXT_SHADER_SUBGROUP_BALLOT_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_SHADER_SUBGROUP_VOTE_SPEC_VERSION = VKenum::VK_EXT_SHADER_SUBGROUP_VOTE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_TEXTURE_COMPRESSION_ASTC_HDR_SPEC_VERSION = VKenum::VK_EXT_TEXTURE_COMPRESSION_ASTC_HDR_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_ASTC_DECODE_MODE_SPEC_VERSION = VKenum::VK_EXT_ASTC_DECODE_MODE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_DEVICE_GROUP_CREATION_SPEC_VERSION = VKenum::VK_KHR_DEVICE_GROUP_CREATION_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTERNAL_MEMORY_CAPABILITIES_SPEC_VERSION = VKenum::VK_KHR_EXTERNAL_MEMORY_CAPABILITIES_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTERNAL_MEMORY_SPEC_VERSION = VKenum::VK_KHR_EXTERNAL_MEMORY_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTERNAL_MEMORY_WIN32_SPEC_VERSION = VKenum::VK_KHR_EXTERNAL_MEMORY_WIN32_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTERNAL_MEMORY_FD_SPEC_VERSION = VKenum::VK_KHR_EXTERNAL_MEMORY_FD_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_WIN32_KEYED_MUTEX_SPEC_VERSION = VKenum::VK_KHR_WIN32_KEYED_MUTEX_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTERNAL_SEMAPHORE_CAPABILITIES_SPEC_VERSION = VKenum::VK_KHR_EXTERNAL_SEMAPHORE_CAPABILITIES_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTERNAL_SEMAPHORE_SPEC_VERSION = VKenum::VK_KHR_EXTERNAL_SEMAPHORE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTERNAL_SEMAPHORE_WIN32_SPEC_VERSION = VKenum::VK_KHR_EXTERNAL_SEMAPHORE_WIN32_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTERNAL_SEMAPHORE_FD_SPEC_VERSION = VKenum::VK_KHR_EXTERNAL_SEMAPHORE_FD_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_CONDITIONAL_RENDERING_SPEC_VERSION = VKenum::VK_EXT_CONDITIONAL_RENDERING_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_SHADER_FLOAT16_INT8_SPEC_VERSION = VKenum::VK_KHR_SHADER_FLOAT16_INT8_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_16BIT_STORAGE_SPEC_VERSION = VKenum::VK_KHR_16BIT_STORAGE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_INCREMENTAL_PRESENT_SPEC_VERSION = VKenum::VK_KHR_INCREMENTAL_PRESENT_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_DESCRIPTOR_UPDATE_TEMPLATE_SPEC_VERSION = VKenum::VK_KHR_DESCRIPTOR_UPDATE_TEMPLATE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_CLIP_SPACE_W_SCALING_SPEC_VERSION = VKenum::VK_NV_CLIP_SPACE_W_SCALING_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_DIRECT_MODE_DISPLAY_SPEC_VERSION = VKenum::VK_EXT_DIRECT_MODE_DISPLAY_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_ACQUIRE_XLIB_DISPLAY_SPEC_VERSION = VKenum::VK_EXT_ACQUIRE_XLIB_DISPLAY_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_DISPLAY_SURFACE_COUNTER_SPEC_VERSION = VKenum::VK_EXT_DISPLAY_SURFACE_COUNTER_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_DISPLAY_CONTROL_SPEC_VERSION = VKenum::VK_EXT_DISPLAY_CONTROL_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_GOOGLE_DISPLAY_TIMING_SPEC_VERSION = VKenum::VK_GOOGLE_DISPLAY_TIMING_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_SAMPLE_MASK_OVERRIDE_COVERAGE_SPEC_VERSION = VKenum::VK_NV_SAMPLE_MASK_OVERRIDE_COVERAGE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_GEOMETRY_SHADER_PASSTHROUGH_SPEC_VERSION = VKenum::VK_NV_GEOMETRY_SHADER_PASSTHROUGH_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_VIEWPORT_ARRAY2_SPEC_VERSION = VKenum::VK_NV_VIEWPORT_ARRAY2_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NVX_MULTIVIEW_PER_VIEW_ATTRIBUTES_SPEC_VERSION = VKenum::VK_NVX_MULTIVIEW_PER_VIEW_ATTRIBUTES_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_VIEWPORT_SWIZZLE_SPEC_VERSION = VKenum::VK_NV_VIEWPORT_SWIZZLE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_DISCARD_RECTANGLES_SPEC_VERSION = VKenum::VK_EXT_DISCARD_RECTANGLES_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_CONSERVATIVE_RASTERIZATION_SPEC_VERSION = VKenum::VK_EXT_CONSERVATIVE_RASTERIZATION_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_DEPTH_CLIP_ENABLE_SPEC_VERSION = VKenum::VK_EXT_DEPTH_CLIP_ENABLE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_HDR_METADATA_SPEC_VERSION = VKenum::VK_EXT_HDR_METADATA_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_IMAGELESS_FRAMEBUFFER_SPEC_VERSION = VKenum::VK_KHR_IMAGELESS_FRAMEBUFFER_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_CREATE_RENDERPASS_2_SPEC_VERSION = VKenum::VK_KHR_CREATE_RENDERPASS_2_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_SHARED_PRESENTABLE_IMAGE_SPEC_VERSION = VKenum::VK_KHR_SHARED_PRESENTABLE_IMAGE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTERNAL_FENCE_CAPABILITIES_SPEC_VERSION = VKenum::VK_KHR_EXTERNAL_FENCE_CAPABILITIES_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTERNAL_FENCE_SPEC_VERSION = VKenum::VK_KHR_EXTERNAL_FENCE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTERNAL_FENCE_WIN32_SPEC_VERSION = VKenum::VK_KHR_EXTERNAL_FENCE_WIN32_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTERNAL_FENCE_FD_SPEC_VERSION = VKenum::VK_KHR_EXTERNAL_FENCE_FD_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_MAINTENANCE2_SPEC_VERSION = VKenum::VK_KHR_MAINTENANCE2_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_GET_SURFACE_CAPABILITIES_2_SPEC_VERSION = VKenum::VK_KHR_GET_SURFACE_CAPABILITIES_2_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_VARIABLE_POINTERS_SPEC_VERSION = VKenum::VK_KHR_VARIABLE_POINTERS_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_GET_DISPLAY_PROPERTIES_2_SPEC_VERSION = VKenum::VK_KHR_GET_DISPLAY_PROPERTIES_2_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_EXTERNAL_MEMORY_DMA_BUF_SPEC_VERSION = VKenum::VK_EXT_EXTERNAL_MEMORY_DMA_BUF_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_QUEUE_FAMILY_FOREIGN_SPEC_VERSION = VKenum::VK_EXT_QUEUE_FAMILY_FOREIGN_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_DEBUG_UTILS_SPEC_VERSION = VKenum::VK_EXT_DEBUG_UTILS_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_SAMPLER_FILTER_MINMAX_SPEC_VERSION = VKenum::VK_EXT_SAMPLER_FILTER_MINMAX_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_STORAGE_BUFFER_STORAGE_CLASS_SPEC_VERSION = VKenum::VK_KHR_STORAGE_BUFFER_STORAGE_CLASS_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_MIXED_ATTACHMENT_SAMPLES_SPEC_VERSION = VKenum::VK_AMD_MIXED_ATTACHMENT_SAMPLES_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_SHADER_FRAGMENT_MASK_SPEC_VERSION = VKenum::VK_AMD_SHADER_FRAGMENT_MASK_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_INLINE_UNIFORM_BLOCK_SPEC_VERSION = VKenum::VK_EXT_INLINE_UNIFORM_BLOCK_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_SHADER_STENCIL_EXPORT_SPEC_VERSION = VKenum::VK_EXT_SHADER_STENCIL_EXPORT_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_SAMPLE_LOCATIONS_SPEC_VERSION = VKenum::VK_EXT_SAMPLE_LOCATIONS_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_RELAXED_BLOCK_LAYOUT_SPEC_VERSION = VKenum::VK_KHR_RELAXED_BLOCK_LAYOUT_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_GET_MEMORY_REQUIREMENTS_2_SPEC_VERSION = VKenum::VK_KHR_GET_MEMORY_REQUIREMENTS_2_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_IMAGE_FORMAT_LIST_SPEC_VERSION = VKenum::VK_KHR_IMAGE_FORMAT_LIST_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_FRAGMENT_COVERAGE_TO_COLOR_SPEC_VERSION = VKenum::VK_NV_FRAGMENT_COVERAGE_TO_COLOR_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_FRAMEBUFFER_MIXED_SAMPLES_SPEC_VERSION = VKenum::VK_NV_FRAMEBUFFER_MIXED_SAMPLES_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_FILL_RECTANGLE_SPEC_VERSION = VKenum::VK_NV_FILL_RECTANGLE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_SHADER_SM_BUILTINS_SPEC_VERSION = VKenum::VK_NV_SHADER_SM_BUILTINS_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_POST_DEPTH_COVERAGE_SPEC_VERSION = VKenum::VK_EXT_POST_DEPTH_COVERAGE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_SAMPLER_YCBCR_CONVERSION_SPEC_VERSION = VKenum::VK_KHR_SAMPLER_YCBCR_CONVERSION_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_BIND_MEMORY_2_SPEC_VERSION = VKenum::VK_KHR_BIND_MEMORY_2_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_IMAGE_DRM_FORMAT_MODIFIER_SPEC_VERSION = VKenum::VK_EXT_IMAGE_DRM_FORMAT_MODIFIER_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_VALIDATION_CACHE_SPEC_VERSION = VKenum::VK_EXT_VALIDATION_CACHE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_SHADER_VIEWPORT_INDEX_LAYER_SPEC_VERSION = VKenum::VK_EXT_SHADER_VIEWPORT_INDEX_LAYER_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_REPRESENTATIVE_FRAGMENT_TEST_SPEC_VERSION = VKenum::VK_NV_REPRESENTATIVE_FRAGMENT_TEST_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_MAINTENANCE3_SPEC_VERSION = VKenum::VK_KHR_MAINTENANCE3_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_DRAW_INDIRECT_COUNT_SPEC_VERSION = VKenum::VK_KHR_DRAW_INDIRECT_COUNT_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_8BIT_STORAGE_SPEC_VERSION = VKenum::VK_KHR_8BIT_STORAGE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_EXTERNAL_MEMORY_HOST_SPEC_VERSION = VKenum::VK_EXT_EXTERNAL_MEMORY_HOST_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_BUFFER_MARKER_SPEC_VERSION = VKenum::VK_AMD_BUFFER_MARKER_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_SHADER_ATOMIC_INT64_SPEC_VERSION = VKenum::VK_KHR_SHADER_ATOMIC_INT64_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_CALIBRATED_TIMESTAMPS_SPEC_VERSION = VKenum::VK_EXT_CALIBRATED_TIMESTAMPS_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_SHADER_CORE_PROPERTIES_SPEC_VERSION = VKenum::VK_AMD_SHADER_CORE_PROPERTIES_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_MEMORY_OVERALLOCATION_BEHAVIOR_SPEC_VERSION = VKenum::VK_AMD_MEMORY_OVERALLOCATION_BEHAVIOR_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_GGP_FRAME_TOKEN_SPEC_VERSION = VKenum::VK_GGP_FRAME_TOKEN_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_PIPELINE_CREATION_FEEDBACK_SPEC_VERSION = VKenum::VK_EXT_PIPELINE_CREATION_FEEDBACK_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_DRIVER_PROPERTIES_SPEC_VERSION = VKenum::VK_KHR_DRIVER_PROPERTIES_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_SHADER_SUBGROUP_PARTITIONED_SPEC_VERSION = VKenum::VK_NV_SHADER_SUBGROUP_PARTITIONED_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_DEPTH_STENCIL_RESOLVE_SPEC_VERSION = VKenum::VK_KHR_DEPTH_STENCIL_RESOLVE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_SWAPCHAIN_MUTABLE_FORMAT_SPEC_VERSION = VKenum::VK_KHR_SWAPCHAIN_MUTABLE_FORMAT_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_COMPUTE_SHADER_DERIVATIVES_SPEC_VERSION = VKenum::VK_NV_COMPUTE_SHADER_DERIVATIVES_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_MESH_SHADER_SPEC_VERSION = VKenum::VK_NV_MESH_SHADER_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_FRAGMENT_SHADER_BARYCENTRIC_SPEC_VERSION = VKenum::VK_NV_FRAGMENT_SHADER_BARYCENTRIC_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_SHADER_IMAGE_FOOTPRINT_SPEC_VERSION = VKenum::VK_NV_SHADER_IMAGE_FOOTPRINT_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_SCISSOR_EXCLUSIVE_SPEC_VERSION = VKenum::VK_NV_SCISSOR_EXCLUSIVE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_INTEL_SHADER_INTEGER_FUNCTIONS_2_SPEC_VERSION = VKenum::VK_INTEL_SHADER_INTEGER_FUNCTIONS_2_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_INTEL_PERFORMANCE_QUERY_SPEC_VERSION = VKenum::VK_INTEL_PERFORMANCE_QUERY_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_DISPLAY_NATIVE_HDR_SPEC_VERSION = VKenum::VK_AMD_DISPLAY_NATIVE_HDR_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_FUCHSIA_IMAGEPIPE_SURFACE_SPEC_VERSION = VKenum::VK_FUCHSIA_IMAGEPIPE_SURFACE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_METAL_SURFACE_SPEC_VERSION = VKenum::VK_EXT_METAL_SURFACE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_FRAGMENT_DENSITY_MAP_SPEC_VERSION = VKenum::VK_EXT_FRAGMENT_DENSITY_MAP_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_SCALAR_BLOCK_LAYOUT_SPEC_VERSION = VKenum::VK_EXT_SCALAR_BLOCK_LAYOUT_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_GOOGLE_HLSL_FUNCTIONALITY1_SPEC_VERSION = VKenum::VK_GOOGLE_HLSL_FUNCTIONALITY1_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_GOOGLE_DECORATE_STRING_SPEC_VERSION = VKenum::VK_GOOGLE_DECORATE_STRING_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_SUBGROUP_SIZE_CONTROL_SPEC_VERSION = VKenum::VK_EXT_SUBGROUP_SIZE_CONTROL_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_MEMORY_BUDGET_SPEC_VERSION = VKenum::VK_EXT_MEMORY_BUDGET_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_MEMORY_PRIORITY_SPEC_VERSION = VKenum::VK_EXT_MEMORY_PRIORITY_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_SURFACE_PROTECTED_CAPABILITIES_SPEC_VERSION = VKenum::VK_KHR_SURFACE_PROTECTED_CAPABILITIES_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_DEDICATED_ALLOCATION_IMAGE_ALIASING_SPEC_VERSION = VKenum::VK_NV_DEDICATED_ALLOCATION_IMAGE_ALIASING_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_SEPARATE_STENCIL_USAGE_SPEC_VERSION = VKenum::VK_EXT_SEPARATE_STENCIL_USAGE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_VALIDATION_FEATURES_SPEC_VERSION = VKenum::VK_EXT_VALIDATION_FEATURES_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_COOPERATIVE_MATRIX_SPEC_VERSION = VKenum::VK_NV_COOPERATIVE_MATRIX_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_COVERAGE_REDUCTION_MODE_SPEC_VERSION = VKenum::VK_NV_COVERAGE_REDUCTION_MODE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_FRAGMENT_SHADER_INTERLOCK_SPEC_VERSION = VKenum::VK_EXT_FRAGMENT_SHADER_INTERLOCK_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_YCBCR_IMAGE_ARRAYS_SPEC_VERSION = VKenum::VK_EXT_YCBCR_IMAGE_ARRAYS_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_UNIFORM_BUFFER_STANDARD_LAYOUT_SPEC_VERSION = VKenum::VK_KHR_UNIFORM_BUFFER_STANDARD_LAYOUT_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_LINE_RASTERIZATION_SPEC_VERSION = VKenum::VK_EXT_LINE_RASTERIZATION_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_HOST_QUERY_RESET_SPEC_VERSION = VKenum::VK_EXT_HOST_QUERY_RESET_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_INDEX_TYPE_UINT8_SPEC_VERSION = VKenum::VK_EXT_INDEX_TYPE_UINT8_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_SHADER_DEMOTE_TO_HELPER_INVOCATION_SPEC_VERSION = VKenum::VK_EXT_SHADER_DEMOTE_TO_HELPER_INVOCATION_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_TEXEL_BUFFER_ALIGNMENT_SPEC_VERSION = VKenum::VK_EXT_TEXEL_BUFFER_ALIGNMENT_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_LOD_CLAMP_NONE = VKenum::VK_LOD_CLAMP_NONE;
VKBINDING_CONSTEXPR static const VKenum VK_ANDROID_NATIVE_BUFFER_NUMBER = VKenum::VK_ANDROID_NATIVE_BUFFER_NUMBER;
VKBINDING_CONSTEXPR static const VKenum VK_UUID_SIZE = VKenum::VK_UUID_SIZE;
VKBINDING_CONSTEXPR static const VKenum VK_MAX_MEMORY_HEAPS = VKenum::VK_MAX_MEMORY_HEAPS;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_GPU_SHADER_HALF_FLOAT_SPEC_VERSION = VKenum::VK_AMD_GPU_SHADER_HALF_FLOAT_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_CORNER_SAMPLED_IMAGE_SPEC_VERSION = VKenum::VK_NV_CORNER_SAMPLED_IMAGE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_MAINTENANCE1_SPEC_VERSION = VKenum::VK_KHR_MAINTENANCE1_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_PUSH_DESCRIPTOR_SPEC_VERSION = VKenum::VK_KHR_PUSH_DESCRIPTOR_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_MVK_IOS_SURFACE_SPEC_VERSION = VKenum::VK_MVK_IOS_SURFACE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_MVK_MACOS_SURFACE_SPEC_VERSION = VKenum::VK_MVK_MACOS_SURFACE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_GPU_SHADER_INT16_SPEC_VERSION = VKenum::VK_AMD_GPU_SHADER_INT16_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_BLEND_OPERATION_ADVANCED_SPEC_VERSION = VKenum::VK_EXT_BLEND_OPERATION_ADVANCED_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_DESCRIPTOR_INDEXING_SPEC_VERSION = VKenum::VK_EXT_DESCRIPTOR_INDEXING_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_FILTER_CUBIC_SPEC_VERSION = VKenum::VK_EXT_FILTER_CUBIC_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_GLOBAL_PRIORITY_SPEC_VERSION = VKenum::VK_EXT_GLOBAL_PRIORITY_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_DEVICE_DIAGNOSTIC_CHECKPOINTS_SPEC_VERSION = VKenum::VK_NV_DEVICE_DIAGNOSTIC_CHECKPOINTS_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_PCI_BUS_INFO_SPEC_VERSION = VKenum::VK_EXT_PCI_BUS_INFO_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_BUFFER_DEVICE_ADDRESS_SPEC_VERSION = VKenum::VK_EXT_BUFFER_DEVICE_ADDRESS_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_DISPLAY_SPEC_VERSION = VKenum::VK_KHR_DISPLAY_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_SURFACE_SPEC_VERSION = VKenum::VK_KHR_SURFACE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_MAX_PHYSICAL_DEVICE_NAME_SIZE = VKenum::VK_MAX_PHYSICAL_DEVICE_NAME_SIZE;
VKBINDING_CONSTEXPR static const VKenum VK_MAX_EXTENSION_NAME_SIZE = VKenum::VK_MAX_EXTENSION_NAME_SIZE;
VKBINDING_CONSTEXPR static const VKenum VK_MAX_DESCRIPTION_SIZE = VKenum::VK_MAX_DESCRIPTION_SIZE;
VKBINDING_CONSTEXPR static const VKenum VK_MAX_DRIVER_NAME_SIZE_KHR = VKenum::VK_MAX_DRIVER_NAME_SIZE_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_MAX_DRIVER_INFO_SIZE_KHR = VKenum::VK_MAX_DRIVER_INFO_SIZE_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_DEVICE_GROUP_SPEC_VERSION = VKenum::VK_KHR_DEVICE_GROUP_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NVX_DEVICE_GENERATED_COMMANDS_SPEC_VERSION = VKenum::VK_NVX_DEVICE_GENERATED_COMMANDS_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_DEDICATED_ALLOCATION_SPEC_VERSION = VKenum::VK_KHR_DEDICATED_ALLOCATION_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_ANDROID_EXTERNAL_MEMORY_ANDROID_HARDWARE_BUFFER_SPEC_VERSION = VKenum::VK_ANDROID_EXTERNAL_MEMORY_ANDROID_HARDWARE_BUFFER_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_SHADING_RATE_IMAGE_SPEC_VERSION = VKenum::VK_NV_SHADING_RATE_IMAGE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_RAY_TRACING_SPEC_VERSION = VKenum::VK_NV_RAY_TRACING_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_VERTEX_ATTRIBUTE_DIVISOR_SPEC_VERSION = VKenum::VK_EXT_VERTEX_ATTRIBUTE_DIVISOR_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_VULKAN_MEMORY_MODEL_SPEC_VERSION = VKenum::VK_KHR_VULKAN_MEMORY_MODEL_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_FULL_SCREEN_EXCLUSIVE_SPEC_VERSION = VKenum::VK_EXT_FULL_SCREEN_EXCLUSIVE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_MAX_MEMORY_TYPES = VKenum::VK_MAX_MEMORY_TYPES;
VKBINDING_CONSTEXPR static const VKenum VK_MAX_DEVICE_GROUP_SIZE = VKenum::VK_MAX_DEVICE_GROUP_SIZE;
VKBINDING_CONSTEXPR static const VKenum VK_MAX_DEVICE_GROUP_SIZE_KHR = VKenum::VK_MAX_DEVICE_GROUP_SIZE_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_MIR_SURFACE_SPEC_VERSION = VKenum::VK_KHR_MIR_SURFACE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_DEBUG_MARKER_SPEC_VERSION = VKenum::VK_EXT_DEBUG_MARKER_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_SWAPCHAIN_COLOR_SPACE_SPEC_VERSION = VKenum::VK_EXT_SWAPCHAIN_COLOR_SPACE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_SHADER_FLOAT_CONTROLS_SPEC_VERSION = VKenum::VK_KHR_SHADER_FLOAT_CONTROLS_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_XLIB_SURFACE_SPEC_VERSION = VKenum::VK_KHR_XLIB_SURFACE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_XCB_SURFACE_SPEC_VERSION = VKenum::VK_KHR_XCB_SURFACE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_WAYLAND_SURFACE_SPEC_VERSION = VKenum::VK_KHR_WAYLAND_SURFACE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_ANDROID_SURFACE_SPEC_VERSION = VKenum::VK_KHR_ANDROID_SURFACE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_WIN32_SURFACE_SPEC_VERSION = VKenum::VK_KHR_WIN32_SURFACE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_SWAPCHAIN_SPEC_VERSION = VKenum::VK_KHR_SWAPCHAIN_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_LUID_SIZE = VKenum::VK_LUID_SIZE;
VKBINDING_CONSTEXPR static const VKenum VK_LUID_SIZE_KHR = VKenum::VK_LUID_SIZE_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_ANDROID_NATIVE_BUFFER_SPEC_VERSION = VKenum::VK_ANDROID_NATIVE_BUFFER_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_DISPLAY_SWAPCHAIN_SPEC_VERSION = VKenum::VK_KHR_DISPLAY_SWAPCHAIN_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_DEBUG_REPORT_SPEC_VERSION = VKenum::VK_EXT_DEBUG_REPORT_SPEC_VERSION;

// VkAccelerationStructureMemoryRequirementsTypeNV

VKBINDING_CONSTEXPR static const VKenum VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_OBJECT_NV = VKenum::VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_OBJECT_NV;
VKBINDING_CONSTEXPR static const VKenum VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_BUILD_SCRATCH_NV = VKenum::VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_BUILD_SCRATCH_NV;
VKBINDING_CONSTEXPR static const VKenum VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_UPDATE_SCRATCH_NV = VKenum::VK_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_TYPE_UPDATE_SCRATCH_NV;

// VkAccelerationStructureTypeNV

VKBINDING_CONSTEXPR static const VKenum VK_ACCELERATION_STRUCTURE_TYPE_TOP_LEVEL_NV = VKenum::VK_ACCELERATION_STRUCTURE_TYPE_TOP_LEVEL_NV;
VKBINDING_CONSTEXPR static const VKenum VK_ACCELERATION_STRUCTURE_TYPE_BOTTOM_LEVEL_NV = VKenum::VK_ACCELERATION_STRUCTURE_TYPE_BOTTOM_LEVEL_NV;

// VkAttachmentLoadOp

VKBINDING_CONSTEXPR static const VKenum VK_ATTACHMENT_LOAD_OP_LOAD = VKenum::VK_ATTACHMENT_LOAD_OP_LOAD;
VKBINDING_CONSTEXPR static const VKenum VK_ATTACHMENT_LOAD_OP_CLEAR = VKenum::VK_ATTACHMENT_LOAD_OP_CLEAR;
VKBINDING_CONSTEXPR static const VKenum VK_ATTACHMENT_LOAD_OP_DONT_CARE = VKenum::VK_ATTACHMENT_LOAD_OP_DONT_CARE;

// VkAttachmentStoreOp

VKBINDING_CONSTEXPR static const VKenum VK_ATTACHMENT_STORE_OP_STORE = VKenum::VK_ATTACHMENT_STORE_OP_STORE;
VKBINDING_CONSTEXPR static const VKenum VK_ATTACHMENT_STORE_OP_DONT_CARE = VKenum::VK_ATTACHMENT_STORE_OP_DONT_CARE;

// VkBlendFactor

VKBINDING_CONSTEXPR static const VKenum VK_BLEND_FACTOR_ZERO = VKenum::VK_BLEND_FACTOR_ZERO;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_FACTOR_ONE = VKenum::VK_BLEND_FACTOR_ONE;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_FACTOR_CONSTANT_COLOR = VKenum::VK_BLEND_FACTOR_CONSTANT_COLOR;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR = VKenum::VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_FACTOR_CONSTANT_ALPHA = VKenum::VK_BLEND_FACTOR_CONSTANT_ALPHA;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_ALPHA = VKenum::VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_ALPHA;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_FACTOR_SRC_ALPHA_SATURATE = VKenum::VK_BLEND_FACTOR_SRC_ALPHA_SATURATE;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_FACTOR_SRC1_COLOR = VKenum::VK_BLEND_FACTOR_SRC1_COLOR;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_FACTOR_ONE_MINUS_SRC1_COLOR = VKenum::VK_BLEND_FACTOR_ONE_MINUS_SRC1_COLOR;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_FACTOR_SRC1_ALPHA = VKenum::VK_BLEND_FACTOR_SRC1_ALPHA;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_FACTOR_ONE_MINUS_SRC1_ALPHA = VKenum::VK_BLEND_FACTOR_ONE_MINUS_SRC1_ALPHA;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_FACTOR_SRC_COLOR = VKenum::VK_BLEND_FACTOR_SRC_COLOR;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR = VKenum::VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_FACTOR_DST_COLOR = VKenum::VK_BLEND_FACTOR_DST_COLOR;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR = VKenum::VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_FACTOR_SRC_ALPHA = VKenum::VK_BLEND_FACTOR_SRC_ALPHA;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA = VKenum::VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_FACTOR_DST_ALPHA = VKenum::VK_BLEND_FACTOR_DST_ALPHA;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA = VKenum::VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA;

// VkBlendOp

VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_ADD = VKenum::VK_BLEND_OP_ADD;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_ZERO_EXT = VKenum::VK_BLEND_OP_ZERO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_SRC_EXT = VKenum::VK_BLEND_OP_SRC_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_DST_EXT = VKenum::VK_BLEND_OP_DST_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_SRC_OVER_EXT = VKenum::VK_BLEND_OP_SRC_OVER_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_DST_OVER_EXT = VKenum::VK_BLEND_OP_DST_OVER_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_SRC_IN_EXT = VKenum::VK_BLEND_OP_SRC_IN_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_DST_IN_EXT = VKenum::VK_BLEND_OP_DST_IN_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_SRC_OUT_EXT = VKenum::VK_BLEND_OP_SRC_OUT_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_DST_OUT_EXT = VKenum::VK_BLEND_OP_DST_OUT_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_SRC_ATOP_EXT = VKenum::VK_BLEND_OP_SRC_ATOP_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_DST_ATOP_EXT = VKenum::VK_BLEND_OP_DST_ATOP_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_XOR_EXT = VKenum::VK_BLEND_OP_XOR_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_MULTIPLY_EXT = VKenum::VK_BLEND_OP_MULTIPLY_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_SCREEN_EXT = VKenum::VK_BLEND_OP_SCREEN_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_OVERLAY_EXT = VKenum::VK_BLEND_OP_OVERLAY_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_DARKEN_EXT = VKenum::VK_BLEND_OP_DARKEN_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_LIGHTEN_EXT = VKenum::VK_BLEND_OP_LIGHTEN_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_COLORDODGE_EXT = VKenum::VK_BLEND_OP_COLORDODGE_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_COLORBURN_EXT = VKenum::VK_BLEND_OP_COLORBURN_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_HARDLIGHT_EXT = VKenum::VK_BLEND_OP_HARDLIGHT_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_SOFTLIGHT_EXT = VKenum::VK_BLEND_OP_SOFTLIGHT_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_DIFFERENCE_EXT = VKenum::VK_BLEND_OP_DIFFERENCE_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_EXCLUSION_EXT = VKenum::VK_BLEND_OP_EXCLUSION_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_INVERT_EXT = VKenum::VK_BLEND_OP_INVERT_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_INVERT_RGB_EXT = VKenum::VK_BLEND_OP_INVERT_RGB_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_LINEARDODGE_EXT = VKenum::VK_BLEND_OP_LINEARDODGE_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_LINEARBURN_EXT = VKenum::VK_BLEND_OP_LINEARBURN_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_VIVIDLIGHT_EXT = VKenum::VK_BLEND_OP_VIVIDLIGHT_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_LINEARLIGHT_EXT = VKenum::VK_BLEND_OP_LINEARLIGHT_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_PINLIGHT_EXT = VKenum::VK_BLEND_OP_PINLIGHT_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_HARDMIX_EXT = VKenum::VK_BLEND_OP_HARDMIX_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_HSL_HUE_EXT = VKenum::VK_BLEND_OP_HSL_HUE_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_HSL_SATURATION_EXT = VKenum::VK_BLEND_OP_HSL_SATURATION_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_HSL_COLOR_EXT = VKenum::VK_BLEND_OP_HSL_COLOR_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_HSL_LUMINOSITY_EXT = VKenum::VK_BLEND_OP_HSL_LUMINOSITY_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_PLUS_EXT = VKenum::VK_BLEND_OP_PLUS_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_PLUS_CLAMPED_EXT = VKenum::VK_BLEND_OP_PLUS_CLAMPED_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_PLUS_CLAMPED_ALPHA_EXT = VKenum::VK_BLEND_OP_PLUS_CLAMPED_ALPHA_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_PLUS_DARKER_EXT = VKenum::VK_BLEND_OP_PLUS_DARKER_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_MINUS_EXT = VKenum::VK_BLEND_OP_MINUS_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_MINUS_CLAMPED_EXT = VKenum::VK_BLEND_OP_MINUS_CLAMPED_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_CONTRAST_EXT = VKenum::VK_BLEND_OP_CONTRAST_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_INVERT_OVG_EXT = VKenum::VK_BLEND_OP_INVERT_OVG_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_RED_EXT = VKenum::VK_BLEND_OP_RED_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_GREEN_EXT = VKenum::VK_BLEND_OP_GREEN_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_BLUE_EXT = VKenum::VK_BLEND_OP_BLUE_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_SUBTRACT = VKenum::VK_BLEND_OP_SUBTRACT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_REVERSE_SUBTRACT = VKenum::VK_BLEND_OP_REVERSE_SUBTRACT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_MIN = VKenum::VK_BLEND_OP_MIN;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OP_MAX = VKenum::VK_BLEND_OP_MAX;

// VkBlendOverlapEXT

VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OVERLAP_UNCORRELATED_EXT = VKenum::VK_BLEND_OVERLAP_UNCORRELATED_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OVERLAP_DISJOINT_EXT = VKenum::VK_BLEND_OVERLAP_DISJOINT_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_BLEND_OVERLAP_CONJOINT_EXT = VKenum::VK_BLEND_OVERLAP_CONJOINT_EXT;

// VkBorderColor

VKBINDING_CONSTEXPR static const VKenum VK_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK = VKenum::VK_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK;
VKBINDING_CONSTEXPR static const VKenum VK_BORDER_COLOR_INT_TRANSPARENT_BLACK = VKenum::VK_BORDER_COLOR_INT_TRANSPARENT_BLACK;
VKBINDING_CONSTEXPR static const VKenum VK_BORDER_COLOR_FLOAT_OPAQUE_BLACK = VKenum::VK_BORDER_COLOR_FLOAT_OPAQUE_BLACK;
VKBINDING_CONSTEXPR static const VKenum VK_BORDER_COLOR_INT_OPAQUE_BLACK = VKenum::VK_BORDER_COLOR_INT_OPAQUE_BLACK;
VKBINDING_CONSTEXPR static const VKenum VK_BORDER_COLOR_FLOAT_OPAQUE_WHITE = VKenum::VK_BORDER_COLOR_FLOAT_OPAQUE_WHITE;
VKBINDING_CONSTEXPR static const VKenum VK_BORDER_COLOR_INT_OPAQUE_WHITE = VKenum::VK_BORDER_COLOR_INT_OPAQUE_WHITE;

// VkChromaLocation

VKBINDING_CONSTEXPR static const VKenum VK_CHROMA_LOCATION_COSITED_EVEN = VKenum::VK_CHROMA_LOCATION_COSITED_EVEN;
VKBINDING_CONSTEXPR static const VKenum VK_CHROMA_LOCATION_COSITED_EVEN_KHR = VKenum::VK_CHROMA_LOCATION_COSITED_EVEN_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_CHROMA_LOCATION_MIDPOINT = VKenum::VK_CHROMA_LOCATION_MIDPOINT;
VKBINDING_CONSTEXPR static const VKenum VK_CHROMA_LOCATION_MIDPOINT_KHR = VKenum::VK_CHROMA_LOCATION_MIDPOINT_KHR;

// VkCoarseSampleOrderTypeNV

VKBINDING_CONSTEXPR static const VKenum VK_COARSE_SAMPLE_ORDER_TYPE_DEFAULT_NV = VKenum::VK_COARSE_SAMPLE_ORDER_TYPE_DEFAULT_NV;
VKBINDING_CONSTEXPR static const VKenum VK_COARSE_SAMPLE_ORDER_TYPE_CUSTOM_NV = VKenum::VK_COARSE_SAMPLE_ORDER_TYPE_CUSTOM_NV;
VKBINDING_CONSTEXPR static const VKenum VK_COARSE_SAMPLE_ORDER_TYPE_PIXEL_MAJOR_NV = VKenum::VK_COARSE_SAMPLE_ORDER_TYPE_PIXEL_MAJOR_NV;
VKBINDING_CONSTEXPR static const VKenum VK_COARSE_SAMPLE_ORDER_TYPE_SAMPLE_MAJOR_NV = VKenum::VK_COARSE_SAMPLE_ORDER_TYPE_SAMPLE_MAJOR_NV;

// VkColorSpaceKHR

VKBINDING_CONSTEXPR static const VKenum VK_COLOR_SPACE_SRGB_NONLINEAR_KHR = VKenum::VK_COLOR_SPACE_SRGB_NONLINEAR_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_COLORSPACE_SRGB_NONLINEAR_KHR = VKenum::VK_COLORSPACE_SRGB_NONLINEAR_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_COLOR_SPACE_DISPLAY_P3_NONLINEAR_EXT = VKenum::VK_COLOR_SPACE_DISPLAY_P3_NONLINEAR_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_COLOR_SPACE_EXTENDED_SRGB_LINEAR_EXT = VKenum::VK_COLOR_SPACE_EXTENDED_SRGB_LINEAR_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_COLOR_SPACE_DISPLAY_P3_LINEAR_EXT = VKenum::VK_COLOR_SPACE_DISPLAY_P3_LINEAR_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_COLOR_SPACE_DCI_P3_LINEAR_EXT = VKenum::VK_COLOR_SPACE_DCI_P3_LINEAR_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_COLOR_SPACE_DCI_P3_NONLINEAR_EXT = VKenum::VK_COLOR_SPACE_DCI_P3_NONLINEAR_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_COLOR_SPACE_BT709_LINEAR_EXT = VKenum::VK_COLOR_SPACE_BT709_LINEAR_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_COLOR_SPACE_BT709_NONLINEAR_EXT = VKenum::VK_COLOR_SPACE_BT709_NONLINEAR_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_COLOR_SPACE_BT2020_LINEAR_EXT = VKenum::VK_COLOR_SPACE_BT2020_LINEAR_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_COLOR_SPACE_HDR10_ST2084_EXT = VKenum::VK_COLOR_SPACE_HDR10_ST2084_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_COLOR_SPACE_DOLBYVISION_EXT = VKenum::VK_COLOR_SPACE_DOLBYVISION_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_COLOR_SPACE_HDR10_HLG_EXT = VKenum::VK_COLOR_SPACE_HDR10_HLG_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_COLOR_SPACE_ADOBERGB_LINEAR_EXT = VKenum::VK_COLOR_SPACE_ADOBERGB_LINEAR_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_COLOR_SPACE_ADOBERGB_NONLINEAR_EXT = VKenum::VK_COLOR_SPACE_ADOBERGB_NONLINEAR_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_COLOR_SPACE_PASS_THROUGH_EXT = VKenum::VK_COLOR_SPACE_PASS_THROUGH_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_COLOR_SPACE_EXTENDED_SRGB_NONLINEAR_EXT = VKenum::VK_COLOR_SPACE_EXTENDED_SRGB_NONLINEAR_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_COLOR_SPACE_DISPLAY_NATIVE_AMD = VKenum::VK_COLOR_SPACE_DISPLAY_NATIVE_AMD;

// VkCommandBufferLevel

VKBINDING_CONSTEXPR static const VKenum VK_COMMAND_BUFFER_LEVEL_PRIMARY = VKenum::VK_COMMAND_BUFFER_LEVEL_PRIMARY;
VKBINDING_CONSTEXPR static const VKenum VK_COMMAND_BUFFER_LEVEL_SECONDARY = VKenum::VK_COMMAND_BUFFER_LEVEL_SECONDARY;

// VkCompareOp

VKBINDING_CONSTEXPR static const VKenum VK_COMPARE_OP_NEVER = VKenum::VK_COMPARE_OP_NEVER;
VKBINDING_CONSTEXPR static const VKenum VK_COMPARE_OP_LESS = VKenum::VK_COMPARE_OP_LESS;
VKBINDING_CONSTEXPR static const VKenum VK_COMPARE_OP_EQUAL = VKenum::VK_COMPARE_OP_EQUAL;
VKBINDING_CONSTEXPR static const VKenum VK_COMPARE_OP_LESS_OR_EQUAL = VKenum::VK_COMPARE_OP_LESS_OR_EQUAL;
VKBINDING_CONSTEXPR static const VKenum VK_COMPARE_OP_GREATER = VKenum::VK_COMPARE_OP_GREATER;
VKBINDING_CONSTEXPR static const VKenum VK_COMPARE_OP_NOT_EQUAL = VKenum::VK_COMPARE_OP_NOT_EQUAL;
VKBINDING_CONSTEXPR static const VKenum VK_COMPARE_OP_GREATER_OR_EQUAL = VKenum::VK_COMPARE_OP_GREATER_OR_EQUAL;
VKBINDING_CONSTEXPR static const VKenum VK_COMPARE_OP_ALWAYS = VKenum::VK_COMPARE_OP_ALWAYS;

// VkComponentSwizzle

VKBINDING_CONSTEXPR static const VKenum VK_COMPONENT_SWIZZLE_IDENTITY = VKenum::VK_COMPONENT_SWIZZLE_IDENTITY;
VKBINDING_CONSTEXPR static const VKenum VK_COMPONENT_SWIZZLE_ZERO = VKenum::VK_COMPONENT_SWIZZLE_ZERO;
VKBINDING_CONSTEXPR static const VKenum VK_COMPONENT_SWIZZLE_ONE = VKenum::VK_COMPONENT_SWIZZLE_ONE;
VKBINDING_CONSTEXPR static const VKenum VK_COMPONENT_SWIZZLE_R = VKenum::VK_COMPONENT_SWIZZLE_R;
VKBINDING_CONSTEXPR static const VKenum VK_COMPONENT_SWIZZLE_G = VKenum::VK_COMPONENT_SWIZZLE_G;
VKBINDING_CONSTEXPR static const VKenum VK_COMPONENT_SWIZZLE_B = VKenum::VK_COMPONENT_SWIZZLE_B;
VKBINDING_CONSTEXPR static const VKenum VK_COMPONENT_SWIZZLE_A = VKenum::VK_COMPONENT_SWIZZLE_A;

// VkComponentTypeNV

VKBINDING_CONSTEXPR static const VKenum VK_COMPONENT_TYPE_FLOAT16_NV = VKenum::VK_COMPONENT_TYPE_FLOAT16_NV;
VKBINDING_CONSTEXPR static const VKenum VK_COMPONENT_TYPE_FLOAT32_NV = VKenum::VK_COMPONENT_TYPE_FLOAT32_NV;
VKBINDING_CONSTEXPR static const VKenum VK_COMPONENT_TYPE_UINT64_NV = VKenum::VK_COMPONENT_TYPE_UINT64_NV;
VKBINDING_CONSTEXPR static const VKenum VK_COMPONENT_TYPE_FLOAT64_NV = VKenum::VK_COMPONENT_TYPE_FLOAT64_NV;
VKBINDING_CONSTEXPR static const VKenum VK_COMPONENT_TYPE_SINT8_NV = VKenum::VK_COMPONENT_TYPE_SINT8_NV;
VKBINDING_CONSTEXPR static const VKenum VK_COMPONENT_TYPE_SINT16_NV = VKenum::VK_COMPONENT_TYPE_SINT16_NV;
VKBINDING_CONSTEXPR static const VKenum VK_COMPONENT_TYPE_SINT32_NV = VKenum::VK_COMPONENT_TYPE_SINT32_NV;
VKBINDING_CONSTEXPR static const VKenum VK_COMPONENT_TYPE_SINT64_NV = VKenum::VK_COMPONENT_TYPE_SINT64_NV;
VKBINDING_CONSTEXPR static const VKenum VK_COMPONENT_TYPE_UINT8_NV = VKenum::VK_COMPONENT_TYPE_UINT8_NV;
VKBINDING_CONSTEXPR static const VKenum VK_COMPONENT_TYPE_UINT16_NV = VKenum::VK_COMPONENT_TYPE_UINT16_NV;
VKBINDING_CONSTEXPR static const VKenum VK_COMPONENT_TYPE_UINT32_NV = VKenum::VK_COMPONENT_TYPE_UINT32_NV;

// VkConservativeRasterizationModeEXT

VKBINDING_CONSTEXPR static const VKenum VK_CONSERVATIVE_RASTERIZATION_MODE_DISABLED_EXT = VKenum::VK_CONSERVATIVE_RASTERIZATION_MODE_DISABLED_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_CONSERVATIVE_RASTERIZATION_MODE_OVERESTIMATE_EXT = VKenum::VK_CONSERVATIVE_RASTERIZATION_MODE_OVERESTIMATE_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_CONSERVATIVE_RASTERIZATION_MODE_UNDERESTIMATE_EXT = VKenum::VK_CONSERVATIVE_RASTERIZATION_MODE_UNDERESTIMATE_EXT;

// VkCopyAccelerationStructureModeNV

VKBINDING_CONSTEXPR static const VKenum VK_COPY_ACCELERATION_STRUCTURE_MODE_CLONE_NV = VKenum::VK_COPY_ACCELERATION_STRUCTURE_MODE_CLONE_NV;
VKBINDING_CONSTEXPR static const VKenum VK_COPY_ACCELERATION_STRUCTURE_MODE_COMPACT_NV = VKenum::VK_COPY_ACCELERATION_STRUCTURE_MODE_COMPACT_NV;

// VkCoverageModulationModeNV

VKBINDING_CONSTEXPR static const VKenum VK_COVERAGE_MODULATION_MODE_NONE_NV = VKenum::VK_COVERAGE_MODULATION_MODE_NONE_NV;
VKBINDING_CONSTEXPR static const VKenum VK_COVERAGE_MODULATION_MODE_RGB_NV = VKenum::VK_COVERAGE_MODULATION_MODE_RGB_NV;
VKBINDING_CONSTEXPR static const VKenum VK_COVERAGE_MODULATION_MODE_ALPHA_NV = VKenum::VK_COVERAGE_MODULATION_MODE_ALPHA_NV;
VKBINDING_CONSTEXPR static const VKenum VK_COVERAGE_MODULATION_MODE_RGBA_NV = VKenum::VK_COVERAGE_MODULATION_MODE_RGBA_NV;

// VkCoverageReductionModeNV

VKBINDING_CONSTEXPR static const VKenum VK_COVERAGE_REDUCTION_MODE_MERGE_NV = VKenum::VK_COVERAGE_REDUCTION_MODE_MERGE_NV;
VKBINDING_CONSTEXPR static const VKenum VK_COVERAGE_REDUCTION_MODE_TRUNCATE_NV = VKenum::VK_COVERAGE_REDUCTION_MODE_TRUNCATE_NV;

// VkDebugReportObjectTypeEXT

VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_KHR_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_KHR_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_KHR_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_KHR_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_INSTANCE_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_INSTANCE_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_EVENT_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_EVENT_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_QUERY_POOL_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_QUERY_POOL_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_VIEW_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_VIEW_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_VIEW_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_VIEW_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_SHADER_MODULE_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_SHADER_MODULE_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_CACHE_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_CACHE_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_LAYOUT_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_LAYOUT_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_RENDER_PASS_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_RENDER_PASS_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_PHYSICAL_DEVICE_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_PHYSICAL_DEVICE_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_POOL_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_POOL_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_FRAMEBUFFER_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_FRAMEBUFFER_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_POOL_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_POOL_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_SURFACE_KHR_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_SURFACE_KHR_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_SWAPCHAIN_KHR_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_SWAPCHAIN_KHR_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_DEBUG_REPORT_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_DEBUG_REPORT_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_KHR_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_KHR_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_MODE_KHR_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_MODE_KHR_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_OBJECT_TABLE_NVX_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_OBJECT_TABLE_NVX_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_NVX_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_NVX_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_VALIDATION_CACHE_EXT_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_VALIDATION_CACHE_EXT_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_VALIDATION_CACHE_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_VALIDATION_CACHE_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_QUEUE_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_QUEUE_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_SEMAPHORE_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_SEMAPHORE_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_BUFFER_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_BUFFER_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_FENCE_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_FENCE_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_MEMORY_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_MEMORY_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_EXT;

// VkDescriptorType

VKBINDING_CONSTEXPR static const VKenum VK_DESCRIPTOR_TYPE_SAMPLER = VKenum::VK_DESCRIPTOR_TYPE_SAMPLER;
VKBINDING_CONSTEXPR static const VKenum VK_DESCRIPTOR_TYPE_INLINE_UNIFORM_BLOCK_EXT = VKenum::VK_DESCRIPTOR_TYPE_INLINE_UNIFORM_BLOCK_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_NV = VKenum::VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_NV;
VKBINDING_CONSTEXPR static const VKenum VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER = VKenum::VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
VKBINDING_CONSTEXPR static const VKenum VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT = VKenum::VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT;
VKBINDING_CONSTEXPR static const VKenum VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE = VKenum::VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE;
VKBINDING_CONSTEXPR static const VKenum VK_DESCRIPTOR_TYPE_STORAGE_IMAGE = VKenum::VK_DESCRIPTOR_TYPE_STORAGE_IMAGE;
VKBINDING_CONSTEXPR static const VKenum VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER = VKenum::VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER;
VKBINDING_CONSTEXPR static const VKenum VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER = VKenum::VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER;
VKBINDING_CONSTEXPR static const VKenum VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER = VKenum::VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
VKBINDING_CONSTEXPR static const VKenum VK_DESCRIPTOR_TYPE_STORAGE_BUFFER = VKenum::VK_DESCRIPTOR_TYPE_STORAGE_BUFFER;
VKBINDING_CONSTEXPR static const VKenum VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC = VKenum::VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC;
VKBINDING_CONSTEXPR static const VKenum VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC = VKenum::VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC;

// VkDescriptorUpdateTemplateType

VKBINDING_CONSTEXPR static const VKenum VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET = VKenum::VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET;
VKBINDING_CONSTEXPR static const VKenum VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET_KHR = VKenum::VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_PUSH_DESCRIPTORS_KHR = VKenum::VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_PUSH_DESCRIPTORS_KHR;

// VkDeviceEventTypeEXT

VKBINDING_CONSTEXPR static const VKenum VK_DEVICE_EVENT_TYPE_DISPLAY_HOTPLUG_EXT = VKenum::VK_DEVICE_EVENT_TYPE_DISPLAY_HOTPLUG_EXT;

// VkDiscardRectangleModeEXT

VKBINDING_CONSTEXPR static const VKenum VK_DISCARD_RECTANGLE_MODE_INCLUSIVE_EXT = VKenum::VK_DISCARD_RECTANGLE_MODE_INCLUSIVE_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DISCARD_RECTANGLE_MODE_EXCLUSIVE_EXT = VKenum::VK_DISCARD_RECTANGLE_MODE_EXCLUSIVE_EXT;

// VkDisplayEventTypeEXT

VKBINDING_CONSTEXPR static const VKenum VK_DISPLAY_EVENT_TYPE_FIRST_PIXEL_OUT_EXT = VKenum::VK_DISPLAY_EVENT_TYPE_FIRST_PIXEL_OUT_EXT;

// VkDisplayPowerStateEXT

VKBINDING_CONSTEXPR static const VKenum VK_DISPLAY_POWER_STATE_OFF_EXT = VKenum::VK_DISPLAY_POWER_STATE_OFF_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DISPLAY_POWER_STATE_SUSPEND_EXT = VKenum::VK_DISPLAY_POWER_STATE_SUSPEND_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DISPLAY_POWER_STATE_ON_EXT = VKenum::VK_DISPLAY_POWER_STATE_ON_EXT;

// VkDriverIdKHR

VKBINDING_CONSTEXPR static const VKenum VK_DRIVER_ID_AMD_PROPRIETARY_KHR = VKenum::VK_DRIVER_ID_AMD_PROPRIETARY_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_DRIVER_ID_GOOGLE_SWIFTSHADER_KHR = VKenum::VK_DRIVER_ID_GOOGLE_SWIFTSHADER_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_DRIVER_ID_GGP_PROPRIETARY_KHR = VKenum::VK_DRIVER_ID_GGP_PROPRIETARY_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_DRIVER_ID_BROADCOM_PROPRIETARY_KHR = VKenum::VK_DRIVER_ID_BROADCOM_PROPRIETARY_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_DRIVER_ID_AMD_OPEN_SOURCE_KHR = VKenum::VK_DRIVER_ID_AMD_OPEN_SOURCE_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_DRIVER_ID_MESA_RADV_KHR = VKenum::VK_DRIVER_ID_MESA_RADV_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_DRIVER_ID_NVIDIA_PROPRIETARY_KHR = VKenum::VK_DRIVER_ID_NVIDIA_PROPRIETARY_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_DRIVER_ID_INTEL_PROPRIETARY_WINDOWS_KHR = VKenum::VK_DRIVER_ID_INTEL_PROPRIETARY_WINDOWS_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_DRIVER_ID_INTEL_OPEN_SOURCE_MESA_KHR = VKenum::VK_DRIVER_ID_INTEL_OPEN_SOURCE_MESA_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_DRIVER_ID_IMAGINATION_PROPRIETARY_KHR = VKenum::VK_DRIVER_ID_IMAGINATION_PROPRIETARY_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_DRIVER_ID_QUALCOMM_PROPRIETARY_KHR = VKenum::VK_DRIVER_ID_QUALCOMM_PROPRIETARY_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_DRIVER_ID_ARM_PROPRIETARY_KHR = VKenum::VK_DRIVER_ID_ARM_PROPRIETARY_KHR;

// VkDynamicState

VKBINDING_CONSTEXPR static const VKenum VK_DYNAMIC_STATE_VIEWPORT = VKenum::VK_DYNAMIC_STATE_VIEWPORT;
VKBINDING_CONSTEXPR static const VKenum VK_DYNAMIC_STATE_VIEWPORT_W_SCALING_NV = VKenum::VK_DYNAMIC_STATE_VIEWPORT_W_SCALING_NV;
VKBINDING_CONSTEXPR static const VKenum VK_DYNAMIC_STATE_DISCARD_RECTANGLE_EXT = VKenum::VK_DYNAMIC_STATE_DISCARD_RECTANGLE_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DYNAMIC_STATE_SAMPLE_LOCATIONS_EXT = VKenum::VK_DYNAMIC_STATE_SAMPLE_LOCATIONS_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DYNAMIC_STATE_VIEWPORT_SHADING_RATE_PALETTE_NV = VKenum::VK_DYNAMIC_STATE_VIEWPORT_SHADING_RATE_PALETTE_NV;
VKBINDING_CONSTEXPR static const VKenum VK_DYNAMIC_STATE_VIEWPORT_COARSE_SAMPLE_ORDER_NV = VKenum::VK_DYNAMIC_STATE_VIEWPORT_COARSE_SAMPLE_ORDER_NV;
VKBINDING_CONSTEXPR static const VKenum VK_DYNAMIC_STATE_EXCLUSIVE_SCISSOR_NV = VKenum::VK_DYNAMIC_STATE_EXCLUSIVE_SCISSOR_NV;
VKBINDING_CONSTEXPR static const VKenum VK_DYNAMIC_STATE_LINE_STIPPLE_EXT = VKenum::VK_DYNAMIC_STATE_LINE_STIPPLE_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DYNAMIC_STATE_SCISSOR = VKenum::VK_DYNAMIC_STATE_SCISSOR;
VKBINDING_CONSTEXPR static const VKenum VK_DYNAMIC_STATE_LINE_WIDTH = VKenum::VK_DYNAMIC_STATE_LINE_WIDTH;
VKBINDING_CONSTEXPR static const VKenum VK_DYNAMIC_STATE_DEPTH_BIAS = VKenum::VK_DYNAMIC_STATE_DEPTH_BIAS;
VKBINDING_CONSTEXPR static const VKenum VK_DYNAMIC_STATE_BLEND_CONSTANTS = VKenum::VK_DYNAMIC_STATE_BLEND_CONSTANTS;
VKBINDING_CONSTEXPR static const VKenum VK_DYNAMIC_STATE_DEPTH_BOUNDS = VKenum::VK_DYNAMIC_STATE_DEPTH_BOUNDS;
VKBINDING_CONSTEXPR static const VKenum VK_DYNAMIC_STATE_STENCIL_COMPARE_MASK = VKenum::VK_DYNAMIC_STATE_STENCIL_COMPARE_MASK;
VKBINDING_CONSTEXPR static const VKenum VK_DYNAMIC_STATE_STENCIL_WRITE_MASK = VKenum::VK_DYNAMIC_STATE_STENCIL_WRITE_MASK;
VKBINDING_CONSTEXPR static const VKenum VK_DYNAMIC_STATE_STENCIL_REFERENCE = VKenum::VK_DYNAMIC_STATE_STENCIL_REFERENCE;

// VkFilter

VKBINDING_CONSTEXPR static const VKenum VK_FILTER_NEAREST = VKenum::VK_FILTER_NEAREST;
VKBINDING_CONSTEXPR static const VKenum VK_FILTER_CUBIC_IMG = VKenum::VK_FILTER_CUBIC_IMG;
VKBINDING_CONSTEXPR static const VKenum VK_FILTER_CUBIC_EXT = VKenum::VK_FILTER_CUBIC_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_FILTER_LINEAR = VKenum::VK_FILTER_LINEAR;

// VkFormat

VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_UNDEFINED = VKenum::VK_FORMAT_UNDEFINED;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_PVRTC1_2BPP_UNORM_BLOCK_IMG = VKenum::VK_FORMAT_PVRTC1_2BPP_UNORM_BLOCK_IMG;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_PVRTC1_4BPP_UNORM_BLOCK_IMG = VKenum::VK_FORMAT_PVRTC1_4BPP_UNORM_BLOCK_IMG;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_PVRTC2_2BPP_UNORM_BLOCK_IMG = VKenum::VK_FORMAT_PVRTC2_2BPP_UNORM_BLOCK_IMG;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_PVRTC2_4BPP_UNORM_BLOCK_IMG = VKenum::VK_FORMAT_PVRTC2_4BPP_UNORM_BLOCK_IMG;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_PVRTC1_2BPP_SRGB_BLOCK_IMG = VKenum::VK_FORMAT_PVRTC1_2BPP_SRGB_BLOCK_IMG;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_PVRTC1_4BPP_SRGB_BLOCK_IMG = VKenum::VK_FORMAT_PVRTC1_4BPP_SRGB_BLOCK_IMG;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_PVRTC2_2BPP_SRGB_BLOCK_IMG = VKenum::VK_FORMAT_PVRTC2_2BPP_SRGB_BLOCK_IMG;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_PVRTC2_4BPP_SRGB_BLOCK_IMG = VKenum::VK_FORMAT_PVRTC2_4BPP_SRGB_BLOCK_IMG;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_4x4_SFLOAT_BLOCK_EXT = VKenum::VK_FORMAT_ASTC_4x4_SFLOAT_BLOCK_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_5x4_SFLOAT_BLOCK_EXT = VKenum::VK_FORMAT_ASTC_5x4_SFLOAT_BLOCK_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_5x5_SFLOAT_BLOCK_EXT = VKenum::VK_FORMAT_ASTC_5x5_SFLOAT_BLOCK_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_6x5_SFLOAT_BLOCK_EXT = VKenum::VK_FORMAT_ASTC_6x5_SFLOAT_BLOCK_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_6x6_SFLOAT_BLOCK_EXT = VKenum::VK_FORMAT_ASTC_6x6_SFLOAT_BLOCK_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_8x5_SFLOAT_BLOCK_EXT = VKenum::VK_FORMAT_ASTC_8x5_SFLOAT_BLOCK_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_8x6_SFLOAT_BLOCK_EXT = VKenum::VK_FORMAT_ASTC_8x6_SFLOAT_BLOCK_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_8x8_SFLOAT_BLOCK_EXT = VKenum::VK_FORMAT_ASTC_8x8_SFLOAT_BLOCK_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_10x5_SFLOAT_BLOCK_EXT = VKenum::VK_FORMAT_ASTC_10x5_SFLOAT_BLOCK_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_10x6_SFLOAT_BLOCK_EXT = VKenum::VK_FORMAT_ASTC_10x6_SFLOAT_BLOCK_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_10x8_SFLOAT_BLOCK_EXT = VKenum::VK_FORMAT_ASTC_10x8_SFLOAT_BLOCK_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_10x10_SFLOAT_BLOCK_EXT = VKenum::VK_FORMAT_ASTC_10x10_SFLOAT_BLOCK_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_12x10_SFLOAT_BLOCK_EXT = VKenum::VK_FORMAT_ASTC_12x10_SFLOAT_BLOCK_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_12x12_SFLOAT_BLOCK_EXT = VKenum::VK_FORMAT_ASTC_12x12_SFLOAT_BLOCK_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G8B8G8R8_422_UNORM = VKenum::VK_FORMAT_G8B8G8R8_422_UNORM;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G8B8G8R8_422_UNORM_KHR = VKenum::VK_FORMAT_G8B8G8R8_422_UNORM_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_B8G8R8G8_422_UNORM = VKenum::VK_FORMAT_B8G8R8G8_422_UNORM;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_B8G8R8G8_422_UNORM_KHR = VKenum::VK_FORMAT_B8G8R8G8_422_UNORM_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G8_B8_R8_3PLANE_420_UNORM = VKenum::VK_FORMAT_G8_B8_R8_3PLANE_420_UNORM;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G8_B8_R8_3PLANE_420_UNORM_KHR = VKenum::VK_FORMAT_G8_B8_R8_3PLANE_420_UNORM_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G8_B8R8_2PLANE_420_UNORM = VKenum::VK_FORMAT_G8_B8R8_2PLANE_420_UNORM;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G8_B8R8_2PLANE_420_UNORM_KHR = VKenum::VK_FORMAT_G8_B8R8_2PLANE_420_UNORM_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G8_B8_R8_3PLANE_422_UNORM = VKenum::VK_FORMAT_G8_B8_R8_3PLANE_422_UNORM;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G8_B8_R8_3PLANE_422_UNORM_KHR = VKenum::VK_FORMAT_G8_B8_R8_3PLANE_422_UNORM_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G8_B8R8_2PLANE_422_UNORM = VKenum::VK_FORMAT_G8_B8R8_2PLANE_422_UNORM;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G8_B8R8_2PLANE_422_UNORM_KHR = VKenum::VK_FORMAT_G8_B8R8_2PLANE_422_UNORM_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G8_B8_R8_3PLANE_444_UNORM = VKenum::VK_FORMAT_G8_B8_R8_3PLANE_444_UNORM;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G8_B8_R8_3PLANE_444_UNORM_KHR = VKenum::VK_FORMAT_G8_B8_R8_3PLANE_444_UNORM_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R10X6_UNORM_PACK16 = VKenum::VK_FORMAT_R10X6_UNORM_PACK16;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R10X6_UNORM_PACK16_KHR = VKenum::VK_FORMAT_R10X6_UNORM_PACK16_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R10X6G10X6_UNORM_2PACK16 = VKenum::VK_FORMAT_R10X6G10X6_UNORM_2PACK16;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R10X6G10X6_UNORM_2PACK16_KHR = VKenum::VK_FORMAT_R10X6G10X6_UNORM_2PACK16_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16 = VKenum::VK_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16_KHR = VKenum::VK_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16 = VKenum::VK_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16_KHR = VKenum::VK_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16 = VKenum::VK_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16_KHR = VKenum::VK_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16 = VKenum::VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16_KHR = VKenum::VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16 = VKenum::VK_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16_KHR = VKenum::VK_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16 = VKenum::VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16_KHR = VKenum::VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16 = VKenum::VK_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16_KHR = VKenum::VK_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16 = VKenum::VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16_KHR = VKenum::VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R12X4_UNORM_PACK16 = VKenum::VK_FORMAT_R12X4_UNORM_PACK16;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R12X4_UNORM_PACK16_KHR = VKenum::VK_FORMAT_R12X4_UNORM_PACK16_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R12X4G12X4_UNORM_2PACK16 = VKenum::VK_FORMAT_R12X4G12X4_UNORM_2PACK16;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R12X4G12X4_UNORM_2PACK16_KHR = VKenum::VK_FORMAT_R12X4G12X4_UNORM_2PACK16_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16 = VKenum::VK_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16_KHR = VKenum::VK_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16 = VKenum::VK_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16_KHR = VKenum::VK_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16 = VKenum::VK_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16_KHR = VKenum::VK_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16 = VKenum::VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16_KHR = VKenum::VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16 = VKenum::VK_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16_KHR = VKenum::VK_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16 = VKenum::VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16_KHR = VKenum::VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16 = VKenum::VK_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16_KHR = VKenum::VK_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16 = VKenum::VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16_KHR = VKenum::VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G16B16G16R16_422_UNORM = VKenum::VK_FORMAT_G16B16G16R16_422_UNORM;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G16B16G16R16_422_UNORM_KHR = VKenum::VK_FORMAT_G16B16G16R16_422_UNORM_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_B16G16R16G16_422_UNORM = VKenum::VK_FORMAT_B16G16R16G16_422_UNORM;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_B16G16R16G16_422_UNORM_KHR = VKenum::VK_FORMAT_B16G16R16G16_422_UNORM_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G16_B16_R16_3PLANE_420_UNORM = VKenum::VK_FORMAT_G16_B16_R16_3PLANE_420_UNORM;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G16_B16_R16_3PLANE_420_UNORM_KHR = VKenum::VK_FORMAT_G16_B16_R16_3PLANE_420_UNORM_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G16_B16R16_2PLANE_420_UNORM = VKenum::VK_FORMAT_G16_B16R16_2PLANE_420_UNORM;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G16_B16R16_2PLANE_420_UNORM_KHR = VKenum::VK_FORMAT_G16_B16R16_2PLANE_420_UNORM_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM = VKenum::VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM_KHR = VKenum::VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G16_B16R16_2PLANE_422_UNORM = VKenum::VK_FORMAT_G16_B16R16_2PLANE_422_UNORM;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G16_B16R16_2PLANE_422_UNORM_KHR = VKenum::VK_FORMAT_G16_B16R16_2PLANE_422_UNORM_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G16_B16_R16_3PLANE_444_UNORM = VKenum::VK_FORMAT_G16_B16_R16_3PLANE_444_UNORM;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_G16_B16_R16_3PLANE_444_UNORM_KHR = VKenum::VK_FORMAT_G16_B16_R16_3PLANE_444_UNORM_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R4G4_UNORM_PACK8 = VKenum::VK_FORMAT_R4G4_UNORM_PACK8;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R8_SNORM = VKenum::VK_FORMAT_R8_SNORM;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R32_SFLOAT = VKenum::VK_FORMAT_R32_SFLOAT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R32G32_UINT = VKenum::VK_FORMAT_R32G32_UINT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R32G32_SINT = VKenum::VK_FORMAT_R32G32_SINT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R32G32_SFLOAT = VKenum::VK_FORMAT_R32G32_SFLOAT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R32G32B32_UINT = VKenum::VK_FORMAT_R32G32B32_UINT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R32G32B32_SINT = VKenum::VK_FORMAT_R32G32B32_SINT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R32G32B32_SFLOAT = VKenum::VK_FORMAT_R32G32B32_SFLOAT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R32G32B32A32_UINT = VKenum::VK_FORMAT_R32G32B32A32_UINT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R32G32B32A32_SINT = VKenum::VK_FORMAT_R32G32B32A32_SINT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R32G32B32A32_SFLOAT = VKenum::VK_FORMAT_R32G32B32A32_SFLOAT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R8_USCALED = VKenum::VK_FORMAT_R8_USCALED;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R64_UINT = VKenum::VK_FORMAT_R64_UINT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R64_SINT = VKenum::VK_FORMAT_R64_SINT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R64_SFLOAT = VKenum::VK_FORMAT_R64_SFLOAT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R64G64_UINT = VKenum::VK_FORMAT_R64G64_UINT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R64G64_SINT = VKenum::VK_FORMAT_R64G64_SINT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R64G64_SFLOAT = VKenum::VK_FORMAT_R64G64_SFLOAT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R64G64B64_UINT = VKenum::VK_FORMAT_R64G64B64_UINT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R64G64B64_SINT = VKenum::VK_FORMAT_R64G64B64_SINT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R64G64B64_SFLOAT = VKenum::VK_FORMAT_R64G64B64_SFLOAT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R64G64B64A64_UINT = VKenum::VK_FORMAT_R64G64B64A64_UINT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R8_SSCALED = VKenum::VK_FORMAT_R8_SSCALED;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R64G64B64A64_SINT = VKenum::VK_FORMAT_R64G64B64A64_SINT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R64G64B64A64_SFLOAT = VKenum::VK_FORMAT_R64G64B64A64_SFLOAT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_B10G11R11_UFLOAT_PACK32 = VKenum::VK_FORMAT_B10G11R11_UFLOAT_PACK32;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_E5B9G9R9_UFLOAT_PACK32 = VKenum::VK_FORMAT_E5B9G9R9_UFLOAT_PACK32;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_D16_UNORM = VKenum::VK_FORMAT_D16_UNORM;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_X8_D24_UNORM_PACK32 = VKenum::VK_FORMAT_X8_D24_UNORM_PACK32;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_D32_SFLOAT = VKenum::VK_FORMAT_D32_SFLOAT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_S8_UINT = VKenum::VK_FORMAT_S8_UINT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_D16_UNORM_S8_UINT = VKenum::VK_FORMAT_D16_UNORM_S8_UINT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_D24_UNORM_S8_UINT = VKenum::VK_FORMAT_D24_UNORM_S8_UINT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R8_UINT = VKenum::VK_FORMAT_R8_UINT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_D32_SFLOAT_S8_UINT = VKenum::VK_FORMAT_D32_SFLOAT_S8_UINT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_BC1_RGB_UNORM_BLOCK = VKenum::VK_FORMAT_BC1_RGB_UNORM_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_BC1_RGB_SRGB_BLOCK = VKenum::VK_FORMAT_BC1_RGB_SRGB_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_BC1_RGBA_UNORM_BLOCK = VKenum::VK_FORMAT_BC1_RGBA_UNORM_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_BC1_RGBA_SRGB_BLOCK = VKenum::VK_FORMAT_BC1_RGBA_SRGB_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_BC2_UNORM_BLOCK = VKenum::VK_FORMAT_BC2_UNORM_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_BC2_SRGB_BLOCK = VKenum::VK_FORMAT_BC2_SRGB_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_BC3_UNORM_BLOCK = VKenum::VK_FORMAT_BC3_UNORM_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_BC3_SRGB_BLOCK = VKenum::VK_FORMAT_BC3_SRGB_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_BC4_UNORM_BLOCK = VKenum::VK_FORMAT_BC4_UNORM_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R8_SINT = VKenum::VK_FORMAT_R8_SINT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_BC4_SNORM_BLOCK = VKenum::VK_FORMAT_BC4_SNORM_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_BC5_UNORM_BLOCK = VKenum::VK_FORMAT_BC5_UNORM_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_BC5_SNORM_BLOCK = VKenum::VK_FORMAT_BC5_SNORM_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_BC6H_UFLOAT_BLOCK = VKenum::VK_FORMAT_BC6H_UFLOAT_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_BC6H_SFLOAT_BLOCK = VKenum::VK_FORMAT_BC6H_SFLOAT_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_BC7_UNORM_BLOCK = VKenum::VK_FORMAT_BC7_UNORM_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_BC7_SRGB_BLOCK = VKenum::VK_FORMAT_BC7_SRGB_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ETC2_R8G8B8_UNORM_BLOCK = VKenum::VK_FORMAT_ETC2_R8G8B8_UNORM_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ETC2_R8G8B8_SRGB_BLOCK = VKenum::VK_FORMAT_ETC2_R8G8B8_SRGB_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK = VKenum::VK_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R8_SRGB = VKenum::VK_FORMAT_R8_SRGB;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK = VKenum::VK_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK = VKenum::VK_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK = VKenum::VK_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_EAC_R11_UNORM_BLOCK = VKenum::VK_FORMAT_EAC_R11_UNORM_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_EAC_R11_SNORM_BLOCK = VKenum::VK_FORMAT_EAC_R11_SNORM_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_EAC_R11G11_UNORM_BLOCK = VKenum::VK_FORMAT_EAC_R11G11_UNORM_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_EAC_R11G11_SNORM_BLOCK = VKenum::VK_FORMAT_EAC_R11G11_SNORM_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_4x4_UNORM_BLOCK = VKenum::VK_FORMAT_ASTC_4x4_UNORM_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_4x4_SRGB_BLOCK = VKenum::VK_FORMAT_ASTC_4x4_SRGB_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_5x4_UNORM_BLOCK = VKenum::VK_FORMAT_ASTC_5x4_UNORM_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R8G8_UNORM = VKenum::VK_FORMAT_R8G8_UNORM;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_5x4_SRGB_BLOCK = VKenum::VK_FORMAT_ASTC_5x4_SRGB_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_5x5_UNORM_BLOCK = VKenum::VK_FORMAT_ASTC_5x5_UNORM_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_5x5_SRGB_BLOCK = VKenum::VK_FORMAT_ASTC_5x5_SRGB_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_6x5_UNORM_BLOCK = VKenum::VK_FORMAT_ASTC_6x5_UNORM_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_6x5_SRGB_BLOCK = VKenum::VK_FORMAT_ASTC_6x5_SRGB_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_6x6_UNORM_BLOCK = VKenum::VK_FORMAT_ASTC_6x6_UNORM_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_6x6_SRGB_BLOCK = VKenum::VK_FORMAT_ASTC_6x6_SRGB_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_8x5_UNORM_BLOCK = VKenum::VK_FORMAT_ASTC_8x5_UNORM_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_8x5_SRGB_BLOCK = VKenum::VK_FORMAT_ASTC_8x5_SRGB_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_8x6_UNORM_BLOCK = VKenum::VK_FORMAT_ASTC_8x6_UNORM_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R8G8_SNORM = VKenum::VK_FORMAT_R8G8_SNORM;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_8x6_SRGB_BLOCK = VKenum::VK_FORMAT_ASTC_8x6_SRGB_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_8x8_UNORM_BLOCK = VKenum::VK_FORMAT_ASTC_8x8_UNORM_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_8x8_SRGB_BLOCK = VKenum::VK_FORMAT_ASTC_8x8_SRGB_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_10x5_UNORM_BLOCK = VKenum::VK_FORMAT_ASTC_10x5_UNORM_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_10x5_SRGB_BLOCK = VKenum::VK_FORMAT_ASTC_10x5_SRGB_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_10x6_UNORM_BLOCK = VKenum::VK_FORMAT_ASTC_10x6_UNORM_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_10x6_SRGB_BLOCK = VKenum::VK_FORMAT_ASTC_10x6_SRGB_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_10x8_UNORM_BLOCK = VKenum::VK_FORMAT_ASTC_10x8_UNORM_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_10x8_SRGB_BLOCK = VKenum::VK_FORMAT_ASTC_10x8_SRGB_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_10x10_UNORM_BLOCK = VKenum::VK_FORMAT_ASTC_10x10_UNORM_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R8G8_USCALED = VKenum::VK_FORMAT_R8G8_USCALED;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_10x10_SRGB_BLOCK = VKenum::VK_FORMAT_ASTC_10x10_SRGB_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_12x10_UNORM_BLOCK = VKenum::VK_FORMAT_ASTC_12x10_UNORM_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_12x10_SRGB_BLOCK = VKenum::VK_FORMAT_ASTC_12x10_SRGB_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_12x12_UNORM_BLOCK = VKenum::VK_FORMAT_ASTC_12x12_UNORM_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_ASTC_12x12_SRGB_BLOCK = VKenum::VK_FORMAT_ASTC_12x12_SRGB_BLOCK;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R8G8_SSCALED = VKenum::VK_FORMAT_R8G8_SSCALED;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R4G4B4A4_UNORM_PACK16 = VKenum::VK_FORMAT_R4G4B4A4_UNORM_PACK16;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R8G8_UINT = VKenum::VK_FORMAT_R8G8_UINT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R8G8_SINT = VKenum::VK_FORMAT_R8G8_SINT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R8G8_SRGB = VKenum::VK_FORMAT_R8G8_SRGB;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R8G8B8_UNORM = VKenum::VK_FORMAT_R8G8B8_UNORM;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R8G8B8_SNORM = VKenum::VK_FORMAT_R8G8B8_SNORM;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R8G8B8_USCALED = VKenum::VK_FORMAT_R8G8B8_USCALED;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R8G8B8_SSCALED = VKenum::VK_FORMAT_R8G8B8_SSCALED;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R8G8B8_UINT = VKenum::VK_FORMAT_R8G8B8_UINT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R8G8B8_SINT = VKenum::VK_FORMAT_R8G8B8_SINT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R8G8B8_SRGB = VKenum::VK_FORMAT_R8G8B8_SRGB;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_B4G4R4A4_UNORM_PACK16 = VKenum::VK_FORMAT_B4G4R4A4_UNORM_PACK16;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_B8G8R8_UNORM = VKenum::VK_FORMAT_B8G8R8_UNORM;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_B8G8R8_SNORM = VKenum::VK_FORMAT_B8G8R8_SNORM;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_B8G8R8_USCALED = VKenum::VK_FORMAT_B8G8R8_USCALED;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_B8G8R8_SSCALED = VKenum::VK_FORMAT_B8G8R8_SSCALED;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_B8G8R8_UINT = VKenum::VK_FORMAT_B8G8R8_UINT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_B8G8R8_SINT = VKenum::VK_FORMAT_B8G8R8_SINT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_B8G8R8_SRGB = VKenum::VK_FORMAT_B8G8R8_SRGB;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R8G8B8A8_UNORM = VKenum::VK_FORMAT_R8G8B8A8_UNORM;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R8G8B8A8_SNORM = VKenum::VK_FORMAT_R8G8B8A8_SNORM;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R8G8B8A8_USCALED = VKenum::VK_FORMAT_R8G8B8A8_USCALED;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R5G6B5_UNORM_PACK16 = VKenum::VK_FORMAT_R5G6B5_UNORM_PACK16;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R8G8B8A8_SSCALED = VKenum::VK_FORMAT_R8G8B8A8_SSCALED;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R8G8B8A8_UINT = VKenum::VK_FORMAT_R8G8B8A8_UINT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R8G8B8A8_SINT = VKenum::VK_FORMAT_R8G8B8A8_SINT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R8G8B8A8_SRGB = VKenum::VK_FORMAT_R8G8B8A8_SRGB;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_B8G8R8A8_UNORM = VKenum::VK_FORMAT_B8G8R8A8_UNORM;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_B8G8R8A8_SNORM = VKenum::VK_FORMAT_B8G8R8A8_SNORM;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_B8G8R8A8_USCALED = VKenum::VK_FORMAT_B8G8R8A8_USCALED;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_B8G8R8A8_SSCALED = VKenum::VK_FORMAT_B8G8R8A8_SSCALED;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_B8G8R8A8_UINT = VKenum::VK_FORMAT_B8G8R8A8_UINT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_B8G8R8A8_SINT = VKenum::VK_FORMAT_B8G8R8A8_SINT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_B5G6R5_UNORM_PACK16 = VKenum::VK_FORMAT_B5G6R5_UNORM_PACK16;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_B8G8R8A8_SRGB = VKenum::VK_FORMAT_B8G8R8A8_SRGB;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_A8B8G8R8_UNORM_PACK32 = VKenum::VK_FORMAT_A8B8G8R8_UNORM_PACK32;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_A8B8G8R8_SNORM_PACK32 = VKenum::VK_FORMAT_A8B8G8R8_SNORM_PACK32;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_A8B8G8R8_USCALED_PACK32 = VKenum::VK_FORMAT_A8B8G8R8_USCALED_PACK32;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_A8B8G8R8_SSCALED_PACK32 = VKenum::VK_FORMAT_A8B8G8R8_SSCALED_PACK32;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_A8B8G8R8_UINT_PACK32 = VKenum::VK_FORMAT_A8B8G8R8_UINT_PACK32;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_A8B8G8R8_SINT_PACK32 = VKenum::VK_FORMAT_A8B8G8R8_SINT_PACK32;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_A8B8G8R8_SRGB_PACK32 = VKenum::VK_FORMAT_A8B8G8R8_SRGB_PACK32;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_A2R10G10B10_UNORM_PACK32 = VKenum::VK_FORMAT_A2R10G10B10_UNORM_PACK32;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_A2R10G10B10_SNORM_PACK32 = VKenum::VK_FORMAT_A2R10G10B10_SNORM_PACK32;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R5G5B5A1_UNORM_PACK16 = VKenum::VK_FORMAT_R5G5B5A1_UNORM_PACK16;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_A2R10G10B10_USCALED_PACK32 = VKenum::VK_FORMAT_A2R10G10B10_USCALED_PACK32;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_A2R10G10B10_SSCALED_PACK32 = VKenum::VK_FORMAT_A2R10G10B10_SSCALED_PACK32;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_A2R10G10B10_UINT_PACK32 = VKenum::VK_FORMAT_A2R10G10B10_UINT_PACK32;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_A2R10G10B10_SINT_PACK32 = VKenum::VK_FORMAT_A2R10G10B10_SINT_PACK32;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_A2B10G10R10_UNORM_PACK32 = VKenum::VK_FORMAT_A2B10G10R10_UNORM_PACK32;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_A2B10G10R10_SNORM_PACK32 = VKenum::VK_FORMAT_A2B10G10R10_SNORM_PACK32;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_A2B10G10R10_USCALED_PACK32 = VKenum::VK_FORMAT_A2B10G10R10_USCALED_PACK32;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_A2B10G10R10_SSCALED_PACK32 = VKenum::VK_FORMAT_A2B10G10R10_SSCALED_PACK32;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_A2B10G10R10_UINT_PACK32 = VKenum::VK_FORMAT_A2B10G10R10_UINT_PACK32;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_A2B10G10R10_SINT_PACK32 = VKenum::VK_FORMAT_A2B10G10R10_SINT_PACK32;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_B5G5R5A1_UNORM_PACK16 = VKenum::VK_FORMAT_B5G5R5A1_UNORM_PACK16;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R16_UNORM = VKenum::VK_FORMAT_R16_UNORM;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R16_SNORM = VKenum::VK_FORMAT_R16_SNORM;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R16_USCALED = VKenum::VK_FORMAT_R16_USCALED;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R16_SSCALED = VKenum::VK_FORMAT_R16_SSCALED;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R16_UINT = VKenum::VK_FORMAT_R16_UINT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R16_SINT = VKenum::VK_FORMAT_R16_SINT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R16_SFLOAT = VKenum::VK_FORMAT_R16_SFLOAT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R16G16_UNORM = VKenum::VK_FORMAT_R16G16_UNORM;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R16G16_SNORM = VKenum::VK_FORMAT_R16G16_SNORM;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R16G16_USCALED = VKenum::VK_FORMAT_R16G16_USCALED;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_A1R5G5B5_UNORM_PACK16 = VKenum::VK_FORMAT_A1R5G5B5_UNORM_PACK16;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R16G16_SSCALED = VKenum::VK_FORMAT_R16G16_SSCALED;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R16G16_UINT = VKenum::VK_FORMAT_R16G16_UINT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R16G16_SINT = VKenum::VK_FORMAT_R16G16_SINT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R16G16_SFLOAT = VKenum::VK_FORMAT_R16G16_SFLOAT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R16G16B16_UNORM = VKenum::VK_FORMAT_R16G16B16_UNORM;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R16G16B16_SNORM = VKenum::VK_FORMAT_R16G16B16_SNORM;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R16G16B16_USCALED = VKenum::VK_FORMAT_R16G16B16_USCALED;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R16G16B16_SSCALED = VKenum::VK_FORMAT_R16G16B16_SSCALED;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R16G16B16_UINT = VKenum::VK_FORMAT_R16G16B16_UINT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R16G16B16_SINT = VKenum::VK_FORMAT_R16G16B16_SINT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R8_UNORM = VKenum::VK_FORMAT_R8_UNORM;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R16G16B16_SFLOAT = VKenum::VK_FORMAT_R16G16B16_SFLOAT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R16G16B16A16_UNORM = VKenum::VK_FORMAT_R16G16B16A16_UNORM;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R16G16B16A16_SNORM = VKenum::VK_FORMAT_R16G16B16A16_SNORM;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R16G16B16A16_USCALED = VKenum::VK_FORMAT_R16G16B16A16_USCALED;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R16G16B16A16_SSCALED = VKenum::VK_FORMAT_R16G16B16A16_SSCALED;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R16G16B16A16_UINT = VKenum::VK_FORMAT_R16G16B16A16_UINT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R16G16B16A16_SINT = VKenum::VK_FORMAT_R16G16B16A16_SINT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R16G16B16A16_SFLOAT = VKenum::VK_FORMAT_R16G16B16A16_SFLOAT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R32_UINT = VKenum::VK_FORMAT_R32_UINT;
VKBINDING_CONSTEXPR static const VKenum VK_FORMAT_R32_SINT = VKenum::VK_FORMAT_R32_SINT;

// VkFrontFace

VKBINDING_CONSTEXPR static const VKenum VK_FRONT_FACE_COUNTER_CLOCKWISE = VKenum::VK_FRONT_FACE_COUNTER_CLOCKWISE;
VKBINDING_CONSTEXPR static const VKenum VK_FRONT_FACE_CLOCKWISE = VKenum::VK_FRONT_FACE_CLOCKWISE;

// VkFullScreenExclusiveEXT

VKBINDING_CONSTEXPR static const VKenum VK_FULL_SCREEN_EXCLUSIVE_DEFAULT_EXT = VKenum::VK_FULL_SCREEN_EXCLUSIVE_DEFAULT_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_FULL_SCREEN_EXCLUSIVE_ALLOWED_EXT = VKenum::VK_FULL_SCREEN_EXCLUSIVE_ALLOWED_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_FULL_SCREEN_EXCLUSIVE_DISALLOWED_EXT = VKenum::VK_FULL_SCREEN_EXCLUSIVE_DISALLOWED_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_FULL_SCREEN_EXCLUSIVE_APPLICATION_CONTROLLED_EXT = VKenum::VK_FULL_SCREEN_EXCLUSIVE_APPLICATION_CONTROLLED_EXT;

// VkGeometryTypeNV

VKBINDING_CONSTEXPR static const VKenum VK_GEOMETRY_TYPE_TRIANGLES_NV = VKenum::VK_GEOMETRY_TYPE_TRIANGLES_NV;
VKBINDING_CONSTEXPR static const VKenum VK_GEOMETRY_TYPE_AABBS_NV = VKenum::VK_GEOMETRY_TYPE_AABBS_NV;

// VkImageLayout

VKBINDING_CONSTEXPR static const VKenum VK_IMAGE_LAYOUT_UNDEFINED = VKenum::VK_IMAGE_LAYOUT_UNDEFINED;
VKBINDING_CONSTEXPR static const VKenum VK_IMAGE_LAYOUT_PRESENT_SRC_KHR = VKenum::VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_IMAGE_LAYOUT_SHARED_PRESENT_KHR = VKenum::VK_IMAGE_LAYOUT_SHARED_PRESENT_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL = VKenum::VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL;
VKBINDING_CONSTEXPR static const VKenum VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL_KHR = VKenum::VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL = VKenum::VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL;
VKBINDING_CONSTEXPR static const VKenum VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL_KHR = VKenum::VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_IMAGE_LAYOUT_SHADING_RATE_OPTIMAL_NV = VKenum::VK_IMAGE_LAYOUT_SHADING_RATE_OPTIMAL_NV;
VKBINDING_CONSTEXPR static const VKenum VK_IMAGE_LAYOUT_FRAGMENT_DENSITY_MAP_OPTIMAL_EXT = VKenum::VK_IMAGE_LAYOUT_FRAGMENT_DENSITY_MAP_OPTIMAL_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_IMAGE_LAYOUT_GENERAL = VKenum::VK_IMAGE_LAYOUT_GENERAL;
VKBINDING_CONSTEXPR static const VKenum VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL = VKenum::VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
VKBINDING_CONSTEXPR static const VKenum VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL = VKenum::VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;
VKBINDING_CONSTEXPR static const VKenum VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL = VKenum::VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL;
VKBINDING_CONSTEXPR static const VKenum VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL = VKenum::VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
VKBINDING_CONSTEXPR static const VKenum VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL = VKenum::VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
VKBINDING_CONSTEXPR static const VKenum VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL = VKenum::VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
VKBINDING_CONSTEXPR static const VKenum VK_IMAGE_LAYOUT_PREINITIALIZED = VKenum::VK_IMAGE_LAYOUT_PREINITIALIZED;

// VkImageTiling

VKBINDING_CONSTEXPR static const VKenum VK_IMAGE_TILING_OPTIMAL = VKenum::VK_IMAGE_TILING_OPTIMAL;
VKBINDING_CONSTEXPR static const VKenum VK_IMAGE_TILING_DRM_FORMAT_MODIFIER_EXT = VKenum::VK_IMAGE_TILING_DRM_FORMAT_MODIFIER_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_IMAGE_TILING_LINEAR = VKenum::VK_IMAGE_TILING_LINEAR;

// VkImageType

VKBINDING_CONSTEXPR static const VKenum VK_IMAGE_TYPE_1D = VKenum::VK_IMAGE_TYPE_1D;
VKBINDING_CONSTEXPR static const VKenum VK_IMAGE_TYPE_2D = VKenum::VK_IMAGE_TYPE_2D;
VKBINDING_CONSTEXPR static const VKenum VK_IMAGE_TYPE_3D = VKenum::VK_IMAGE_TYPE_3D;

// VkImageViewType

VKBINDING_CONSTEXPR static const VKenum VK_IMAGE_VIEW_TYPE_1D = VKenum::VK_IMAGE_VIEW_TYPE_1D;
VKBINDING_CONSTEXPR static const VKenum VK_IMAGE_VIEW_TYPE_2D = VKenum::VK_IMAGE_VIEW_TYPE_2D;
VKBINDING_CONSTEXPR static const VKenum VK_IMAGE_VIEW_TYPE_3D = VKenum::VK_IMAGE_VIEW_TYPE_3D;
VKBINDING_CONSTEXPR static const VKenum VK_IMAGE_VIEW_TYPE_CUBE = VKenum::VK_IMAGE_VIEW_TYPE_CUBE;
VKBINDING_CONSTEXPR static const VKenum VK_IMAGE_VIEW_TYPE_1D_ARRAY = VKenum::VK_IMAGE_VIEW_TYPE_1D_ARRAY;
VKBINDING_CONSTEXPR static const VKenum VK_IMAGE_VIEW_TYPE_2D_ARRAY = VKenum::VK_IMAGE_VIEW_TYPE_2D_ARRAY;
VKBINDING_CONSTEXPR static const VKenum VK_IMAGE_VIEW_TYPE_CUBE_ARRAY = VKenum::VK_IMAGE_VIEW_TYPE_CUBE_ARRAY;

// VkIndexType

VKBINDING_CONSTEXPR static const VKenum VK_INDEX_TYPE_UINT16 = VKenum::VK_INDEX_TYPE_UINT16;
VKBINDING_CONSTEXPR static const VKenum VK_INDEX_TYPE_NONE_NV = VKenum::VK_INDEX_TYPE_NONE_NV;
VKBINDING_CONSTEXPR static const VKenum VK_INDEX_TYPE_UINT8_EXT = VKenum::VK_INDEX_TYPE_UINT8_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_INDEX_TYPE_UINT32 = VKenum::VK_INDEX_TYPE_UINT32;

// VkIndirectCommandsTokenTypeNVX

VKBINDING_CONSTEXPR static const VKenum VK_INDIRECT_COMMANDS_TOKEN_TYPE_PIPELINE_NVX = VKenum::VK_INDIRECT_COMMANDS_TOKEN_TYPE_PIPELINE_NVX;
VKBINDING_CONSTEXPR static const VKenum VK_INDIRECT_COMMANDS_TOKEN_TYPE_DESCRIPTOR_SET_NVX = VKenum::VK_INDIRECT_COMMANDS_TOKEN_TYPE_DESCRIPTOR_SET_NVX;
VKBINDING_CONSTEXPR static const VKenum VK_INDIRECT_COMMANDS_TOKEN_TYPE_INDEX_BUFFER_NVX = VKenum::VK_INDIRECT_COMMANDS_TOKEN_TYPE_INDEX_BUFFER_NVX;
VKBINDING_CONSTEXPR static const VKenum VK_INDIRECT_COMMANDS_TOKEN_TYPE_VERTEX_BUFFER_NVX = VKenum::VK_INDIRECT_COMMANDS_TOKEN_TYPE_VERTEX_BUFFER_NVX;
VKBINDING_CONSTEXPR static const VKenum VK_INDIRECT_COMMANDS_TOKEN_TYPE_PUSH_CONSTANT_NVX = VKenum::VK_INDIRECT_COMMANDS_TOKEN_TYPE_PUSH_CONSTANT_NVX;
VKBINDING_CONSTEXPR static const VKenum VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_INDEXED_NVX = VKenum::VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_INDEXED_NVX;
VKBINDING_CONSTEXPR static const VKenum VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_NVX = VKenum::VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_NVX;
VKBINDING_CONSTEXPR static const VKenum VK_INDIRECT_COMMANDS_TOKEN_TYPE_DISPATCH_NVX = VKenum::VK_INDIRECT_COMMANDS_TOKEN_TYPE_DISPATCH_NVX;

// VkInternalAllocationType

VKBINDING_CONSTEXPR static const VKenum VK_INTERNAL_ALLOCATION_TYPE_EXECUTABLE = VKenum::VK_INTERNAL_ALLOCATION_TYPE_EXECUTABLE;

// VkLineRasterizationModeEXT

VKBINDING_CONSTEXPR static const VKenum VK_LINE_RASTERIZATION_MODE_DEFAULT_EXT = VKenum::VK_LINE_RASTERIZATION_MODE_DEFAULT_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_LINE_RASTERIZATION_MODE_RECTANGULAR_EXT = VKenum::VK_LINE_RASTERIZATION_MODE_RECTANGULAR_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_LINE_RASTERIZATION_MODE_BRESENHAM_EXT = VKenum::VK_LINE_RASTERIZATION_MODE_BRESENHAM_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_LINE_RASTERIZATION_MODE_RECTANGULAR_SMOOTH_EXT = VKenum::VK_LINE_RASTERIZATION_MODE_RECTANGULAR_SMOOTH_EXT;

// VkLogicOp

VKBINDING_CONSTEXPR static const VKenum VK_LOGIC_OP_CLEAR = VKenum::VK_LOGIC_OP_CLEAR;
VKBINDING_CONSTEXPR static const VKenum VK_LOGIC_OP_AND = VKenum::VK_LOGIC_OP_AND;
VKBINDING_CONSTEXPR static const VKenum VK_LOGIC_OP_INVERT = VKenum::VK_LOGIC_OP_INVERT;
VKBINDING_CONSTEXPR static const VKenum VK_LOGIC_OP_OR_REVERSE = VKenum::VK_LOGIC_OP_OR_REVERSE;
VKBINDING_CONSTEXPR static const VKenum VK_LOGIC_OP_COPY_INVERTED = VKenum::VK_LOGIC_OP_COPY_INVERTED;
VKBINDING_CONSTEXPR static const VKenum VK_LOGIC_OP_OR_INVERTED = VKenum::VK_LOGIC_OP_OR_INVERTED;
VKBINDING_CONSTEXPR static const VKenum VK_LOGIC_OP_NAND = VKenum::VK_LOGIC_OP_NAND;
VKBINDING_CONSTEXPR static const VKenum VK_LOGIC_OP_SET = VKenum::VK_LOGIC_OP_SET;
VKBINDING_CONSTEXPR static const VKenum VK_LOGIC_OP_AND_REVERSE = VKenum::VK_LOGIC_OP_AND_REVERSE;
VKBINDING_CONSTEXPR static const VKenum VK_LOGIC_OP_COPY = VKenum::VK_LOGIC_OP_COPY;
VKBINDING_CONSTEXPR static const VKenum VK_LOGIC_OP_AND_INVERTED = VKenum::VK_LOGIC_OP_AND_INVERTED;
VKBINDING_CONSTEXPR static const VKenum VK_LOGIC_OP_NO_OP = VKenum::VK_LOGIC_OP_NO_OP;
VKBINDING_CONSTEXPR static const VKenum VK_LOGIC_OP_XOR = VKenum::VK_LOGIC_OP_XOR;
VKBINDING_CONSTEXPR static const VKenum VK_LOGIC_OP_OR = VKenum::VK_LOGIC_OP_OR;
VKBINDING_CONSTEXPR static const VKenum VK_LOGIC_OP_NOR = VKenum::VK_LOGIC_OP_NOR;
VKBINDING_CONSTEXPR static const VKenum VK_LOGIC_OP_EQUIVALENT = VKenum::VK_LOGIC_OP_EQUIVALENT;

// VkMemoryOverallocationBehaviorAMD

VKBINDING_CONSTEXPR static const VKenum VK_MEMORY_OVERALLOCATION_BEHAVIOR_DEFAULT_AMD = VKenum::VK_MEMORY_OVERALLOCATION_BEHAVIOR_DEFAULT_AMD;
VKBINDING_CONSTEXPR static const VKenum VK_MEMORY_OVERALLOCATION_BEHAVIOR_ALLOWED_AMD = VKenum::VK_MEMORY_OVERALLOCATION_BEHAVIOR_ALLOWED_AMD;
VKBINDING_CONSTEXPR static const VKenum VK_MEMORY_OVERALLOCATION_BEHAVIOR_DISALLOWED_AMD = VKenum::VK_MEMORY_OVERALLOCATION_BEHAVIOR_DISALLOWED_AMD;

// VkObjectEntryTypeNVX

VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_ENTRY_TYPE_DESCRIPTOR_SET_NVX = VKenum::VK_OBJECT_ENTRY_TYPE_DESCRIPTOR_SET_NVX;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_ENTRY_TYPE_PIPELINE_NVX = VKenum::VK_OBJECT_ENTRY_TYPE_PIPELINE_NVX;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_ENTRY_TYPE_INDEX_BUFFER_NVX = VKenum::VK_OBJECT_ENTRY_TYPE_INDEX_BUFFER_NVX;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_ENTRY_TYPE_VERTEX_BUFFER_NVX = VKenum::VK_OBJECT_ENTRY_TYPE_VERTEX_BUFFER_NVX;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_ENTRY_TYPE_PUSH_CONSTANT_NVX = VKenum::VK_OBJECT_ENTRY_TYPE_PUSH_CONSTANT_NVX;

// VkObjectType

VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_UNKNOWN = VKenum::VK_OBJECT_TYPE_UNKNOWN;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_SURFACE_KHR = VKenum::VK_OBJECT_TYPE_SURFACE_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_SWAPCHAIN_KHR = VKenum::VK_OBJECT_TYPE_SWAPCHAIN_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_DISPLAY_KHR = VKenum::VK_OBJECT_TYPE_DISPLAY_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_DISPLAY_MODE_KHR = VKenum::VK_OBJECT_TYPE_DISPLAY_MODE_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT = VKenum::VK_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE = VKenum::VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_KHR = VKenum::VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_OBJECT_TABLE_NVX = VKenum::VK_OBJECT_TYPE_OBJECT_TABLE_NVX;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_NVX = VKenum::VK_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_NVX;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_DEBUG_UTILS_MESSENGER_EXT = VKenum::VK_OBJECT_TYPE_DEBUG_UTILS_MESSENGER_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION = VKenum::VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_KHR = VKenum::VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_VALIDATION_CACHE_EXT = VKenum::VK_OBJECT_TYPE_VALIDATION_CACHE_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV = VKenum::VK_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_PERFORMANCE_CONFIGURATION_INTEL = VKenum::VK_OBJECT_TYPE_PERFORMANCE_CONFIGURATION_INTEL;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_INSTANCE = VKenum::VK_OBJECT_TYPE_INSTANCE;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_IMAGE = VKenum::VK_OBJECT_TYPE_IMAGE;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_EVENT = VKenum::VK_OBJECT_TYPE_EVENT;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_QUERY_POOL = VKenum::VK_OBJECT_TYPE_QUERY_POOL;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_BUFFER_VIEW = VKenum::VK_OBJECT_TYPE_BUFFER_VIEW;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_IMAGE_VIEW = VKenum::VK_OBJECT_TYPE_IMAGE_VIEW;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_SHADER_MODULE = VKenum::VK_OBJECT_TYPE_SHADER_MODULE;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_PIPELINE_CACHE = VKenum::VK_OBJECT_TYPE_PIPELINE_CACHE;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_PIPELINE_LAYOUT = VKenum::VK_OBJECT_TYPE_PIPELINE_LAYOUT;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_RENDER_PASS = VKenum::VK_OBJECT_TYPE_RENDER_PASS;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_PIPELINE = VKenum::VK_OBJECT_TYPE_PIPELINE;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_PHYSICAL_DEVICE = VKenum::VK_OBJECT_TYPE_PHYSICAL_DEVICE;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT = VKenum::VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_SAMPLER = VKenum::VK_OBJECT_TYPE_SAMPLER;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_DESCRIPTOR_POOL = VKenum::VK_OBJECT_TYPE_DESCRIPTOR_POOL;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_DESCRIPTOR_SET = VKenum::VK_OBJECT_TYPE_DESCRIPTOR_SET;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_FRAMEBUFFER = VKenum::VK_OBJECT_TYPE_FRAMEBUFFER;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_COMMAND_POOL = VKenum::VK_OBJECT_TYPE_COMMAND_POOL;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_DEVICE = VKenum::VK_OBJECT_TYPE_DEVICE;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_QUEUE = VKenum::VK_OBJECT_TYPE_QUEUE;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_SEMAPHORE = VKenum::VK_OBJECT_TYPE_SEMAPHORE;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_COMMAND_BUFFER = VKenum::VK_OBJECT_TYPE_COMMAND_BUFFER;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_FENCE = VKenum::VK_OBJECT_TYPE_FENCE;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_DEVICE_MEMORY = VKenum::VK_OBJECT_TYPE_DEVICE_MEMORY;
VKBINDING_CONSTEXPR static const VKenum VK_OBJECT_TYPE_BUFFER = VKenum::VK_OBJECT_TYPE_BUFFER;

// VkPerformanceConfigurationTypeINTEL

VKBINDING_CONSTEXPR static const VKenum VK_PERFORMANCE_CONFIGURATION_TYPE_COMMAND_QUEUE_METRICS_DISCOVERY_ACTIVATED_INTEL = VKenum::VK_PERFORMANCE_CONFIGURATION_TYPE_COMMAND_QUEUE_METRICS_DISCOVERY_ACTIVATED_INTEL;

// VkPerformanceOverrideTypeINTEL

VKBINDING_CONSTEXPR static const VKenum VK_PERFORMANCE_OVERRIDE_TYPE_NULL_HARDWARE_INTEL = VKenum::VK_PERFORMANCE_OVERRIDE_TYPE_NULL_HARDWARE_INTEL;
VKBINDING_CONSTEXPR static const VKenum VK_PERFORMANCE_OVERRIDE_TYPE_FLUSH_GPU_CACHES_INTEL = VKenum::VK_PERFORMANCE_OVERRIDE_TYPE_FLUSH_GPU_CACHES_INTEL;

// VkPerformanceParameterTypeINTEL

VKBINDING_CONSTEXPR static const VKenum VK_PERFORMANCE_PARAMETER_TYPE_HW_COUNTERS_SUPPORTED_INTEL = VKenum::VK_PERFORMANCE_PARAMETER_TYPE_HW_COUNTERS_SUPPORTED_INTEL;
VKBINDING_CONSTEXPR static const VKenum VK_PERFORMANCE_PARAMETER_TYPE_STREAM_MARKER_VALID_BITS_INTEL = VKenum::VK_PERFORMANCE_PARAMETER_TYPE_STREAM_MARKER_VALID_BITS_INTEL;

// VkPerformanceValueTypeINTEL

VKBINDING_CONSTEXPR static const VKenum VK_PERFORMANCE_VALUE_TYPE_UINT32_INTEL = VKenum::VK_PERFORMANCE_VALUE_TYPE_UINT32_INTEL;
VKBINDING_CONSTEXPR static const VKenum VK_PERFORMANCE_VALUE_TYPE_UINT64_INTEL = VKenum::VK_PERFORMANCE_VALUE_TYPE_UINT64_INTEL;
VKBINDING_CONSTEXPR static const VKenum VK_PERFORMANCE_VALUE_TYPE_FLOAT_INTEL = VKenum::VK_PERFORMANCE_VALUE_TYPE_FLOAT_INTEL;
VKBINDING_CONSTEXPR static const VKenum VK_PERFORMANCE_VALUE_TYPE_BOOL_INTEL = VKenum::VK_PERFORMANCE_VALUE_TYPE_BOOL_INTEL;
VKBINDING_CONSTEXPR static const VKenum VK_PERFORMANCE_VALUE_TYPE_STRING_INTEL = VKenum::VK_PERFORMANCE_VALUE_TYPE_STRING_INTEL;

// VkPhysicalDeviceType

VKBINDING_CONSTEXPR static const VKenum VK_PHYSICAL_DEVICE_TYPE_OTHER = VKenum::VK_PHYSICAL_DEVICE_TYPE_OTHER;
VKBINDING_CONSTEXPR static const VKenum VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU = VKenum::VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU;
VKBINDING_CONSTEXPR static const VKenum VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU = VKenum::VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU;
VKBINDING_CONSTEXPR static const VKenum VK_PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU = VKenum::VK_PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU;
VKBINDING_CONSTEXPR static const VKenum VK_PHYSICAL_DEVICE_TYPE_CPU = VKenum::VK_PHYSICAL_DEVICE_TYPE_CPU;

// VkPipelineBindPoint

VKBINDING_CONSTEXPR static const VKenum VK_PIPELINE_BIND_POINT_GRAPHICS = VKenum::VK_PIPELINE_BIND_POINT_GRAPHICS;
VKBINDING_CONSTEXPR static const VKenum VK_PIPELINE_BIND_POINT_RAY_TRACING_NV = VKenum::VK_PIPELINE_BIND_POINT_RAY_TRACING_NV;
VKBINDING_CONSTEXPR static const VKenum VK_PIPELINE_BIND_POINT_COMPUTE = VKenum::VK_PIPELINE_BIND_POINT_COMPUTE;

// VkPipelineCacheHeaderVersion

VKBINDING_CONSTEXPR static const VKenum VK_PIPELINE_CACHE_HEADER_VERSION_ONE = VKenum::VK_PIPELINE_CACHE_HEADER_VERSION_ONE;

// VkPointClippingBehavior

VKBINDING_CONSTEXPR static const VKenum VK_POINT_CLIPPING_BEHAVIOR_ALL_CLIP_PLANES = VKenum::VK_POINT_CLIPPING_BEHAVIOR_ALL_CLIP_PLANES;
VKBINDING_CONSTEXPR static const VKenum VK_POINT_CLIPPING_BEHAVIOR_ALL_CLIP_PLANES_KHR = VKenum::VK_POINT_CLIPPING_BEHAVIOR_ALL_CLIP_PLANES_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_POINT_CLIPPING_BEHAVIOR_USER_CLIP_PLANES_ONLY = VKenum::VK_POINT_CLIPPING_BEHAVIOR_USER_CLIP_PLANES_ONLY;
VKBINDING_CONSTEXPR static const VKenum VK_POINT_CLIPPING_BEHAVIOR_USER_CLIP_PLANES_ONLY_KHR = VKenum::VK_POINT_CLIPPING_BEHAVIOR_USER_CLIP_PLANES_ONLY_KHR;

// VkPolygonMode

VKBINDING_CONSTEXPR static const VKenum VK_POLYGON_MODE_FILL = VKenum::VK_POLYGON_MODE_FILL;
VKBINDING_CONSTEXPR static const VKenum VK_POLYGON_MODE_FILL_RECTANGLE_NV = VKenum::VK_POLYGON_MODE_FILL_RECTANGLE_NV;
VKBINDING_CONSTEXPR static const VKenum VK_POLYGON_MODE_LINE = VKenum::VK_POLYGON_MODE_LINE;
VKBINDING_CONSTEXPR static const VKenum VK_POLYGON_MODE_POINT = VKenum::VK_POLYGON_MODE_POINT;

// VkPresentModeKHR

VKBINDING_CONSTEXPR static const VKenum VK_PRESENT_MODE_IMMEDIATE_KHR = VKenum::VK_PRESENT_MODE_IMMEDIATE_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_PRESENT_MODE_SHARED_DEMAND_REFRESH_KHR = VKenum::VK_PRESENT_MODE_SHARED_DEMAND_REFRESH_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_PRESENT_MODE_SHARED_CONTINUOUS_REFRESH_KHR = VKenum::VK_PRESENT_MODE_SHARED_CONTINUOUS_REFRESH_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_PRESENT_MODE_MAILBOX_KHR = VKenum::VK_PRESENT_MODE_MAILBOX_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_PRESENT_MODE_FIFO_KHR = VKenum::VK_PRESENT_MODE_FIFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_PRESENT_MODE_FIFO_RELAXED_KHR = VKenum::VK_PRESENT_MODE_FIFO_RELAXED_KHR;

// VkPrimitiveTopology

VKBINDING_CONSTEXPR static const VKenum VK_PRIMITIVE_TOPOLOGY_POINT_LIST = VKenum::VK_PRIMITIVE_TOPOLOGY_POINT_LIST;
VKBINDING_CONSTEXPR static const VKenum VK_PRIMITIVE_TOPOLOGY_LINE_LIST = VKenum::VK_PRIMITIVE_TOPOLOGY_LINE_LIST;
VKBINDING_CONSTEXPR static const VKenum VK_PRIMITIVE_TOPOLOGY_PATCH_LIST = VKenum::VK_PRIMITIVE_TOPOLOGY_PATCH_LIST;
VKBINDING_CONSTEXPR static const VKenum VK_PRIMITIVE_TOPOLOGY_LINE_STRIP = VKenum::VK_PRIMITIVE_TOPOLOGY_LINE_STRIP;
VKBINDING_CONSTEXPR static const VKenum VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST = VKenum::VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
VKBINDING_CONSTEXPR static const VKenum VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP = VKenum::VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP;
VKBINDING_CONSTEXPR static const VKenum VK_PRIMITIVE_TOPOLOGY_TRIANGLE_FAN = VKenum::VK_PRIMITIVE_TOPOLOGY_TRIANGLE_FAN;
VKBINDING_CONSTEXPR static const VKenum VK_PRIMITIVE_TOPOLOGY_LINE_LIST_WITH_ADJACENCY = VKenum::VK_PRIMITIVE_TOPOLOGY_LINE_LIST_WITH_ADJACENCY;
VKBINDING_CONSTEXPR static const VKenum VK_PRIMITIVE_TOPOLOGY_LINE_STRIP_WITH_ADJACENCY = VKenum::VK_PRIMITIVE_TOPOLOGY_LINE_STRIP_WITH_ADJACENCY;
VKBINDING_CONSTEXPR static const VKenum VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST_WITH_ADJACENCY = VKenum::VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST_WITH_ADJACENCY;
VKBINDING_CONSTEXPR static const VKenum VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP_WITH_ADJACENCY = VKenum::VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP_WITH_ADJACENCY;

// VkQueryPoolSamplingModeINTEL

VKBINDING_CONSTEXPR static const VKenum VK_QUERY_POOL_SAMPLING_MODE_MANUAL_INTEL = VKenum::VK_QUERY_POOL_SAMPLING_MODE_MANUAL_INTEL;

// VkQueryType

VKBINDING_CONSTEXPR static const VKenum VK_QUERY_TYPE_OCCLUSION = VKenum::VK_QUERY_TYPE_OCCLUSION;
VKBINDING_CONSTEXPR static const VKenum VK_QUERY_TYPE_RESERVED_8 = VKenum::VK_QUERY_TYPE_RESERVED_8;
VKBINDING_CONSTEXPR static const VKenum VK_QUERY_TYPE_RESERVED_4 = VKenum::VK_QUERY_TYPE_RESERVED_4;
VKBINDING_CONSTEXPR static const VKenum VK_QUERY_TYPE_TRANSFORM_FEEDBACK_STREAM_EXT = VKenum::VK_QUERY_TYPE_TRANSFORM_FEEDBACK_STREAM_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_QUERY_TYPE_ACCELERATION_STRUCTURE_COMPACTED_SIZE_NV = VKenum::VK_QUERY_TYPE_ACCELERATION_STRUCTURE_COMPACTED_SIZE_NV;
VKBINDING_CONSTEXPR static const VKenum VK_QUERY_TYPE_PERFORMANCE_QUERY_INTEL = VKenum::VK_QUERY_TYPE_PERFORMANCE_QUERY_INTEL;
VKBINDING_CONSTEXPR static const VKenum VK_QUERY_TYPE_PIPELINE_STATISTICS = VKenum::VK_QUERY_TYPE_PIPELINE_STATISTICS;
VKBINDING_CONSTEXPR static const VKenum VK_QUERY_TYPE_TIMESTAMP = VKenum::VK_QUERY_TYPE_TIMESTAMP;

// VkQueueGlobalPriorityEXT

VKBINDING_CONSTEXPR static const VKenum VK_QUEUE_GLOBAL_PRIORITY_REALTIME_EXT = VKenum::VK_QUEUE_GLOBAL_PRIORITY_REALTIME_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_QUEUE_GLOBAL_PRIORITY_LOW_EXT = VKenum::VK_QUEUE_GLOBAL_PRIORITY_LOW_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_QUEUE_GLOBAL_PRIORITY_MEDIUM_EXT = VKenum::VK_QUEUE_GLOBAL_PRIORITY_MEDIUM_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_QUEUE_GLOBAL_PRIORITY_HIGH_EXT = VKenum::VK_QUEUE_GLOBAL_PRIORITY_HIGH_EXT;

// VkRasterizationOrderAMD

VKBINDING_CONSTEXPR static const VKenum VK_RASTERIZATION_ORDER_STRICT_AMD = VKenum::VK_RASTERIZATION_ORDER_STRICT_AMD;
VKBINDING_CONSTEXPR static const VKenum VK_RASTERIZATION_ORDER_RELAXED_AMD = VKenum::VK_RASTERIZATION_ORDER_RELAXED_AMD;

// VkRayTracingShaderGroupTypeNV

VKBINDING_CONSTEXPR static const VKenum VK_RAY_TRACING_SHADER_GROUP_TYPE_GENERAL_NV = VKenum::VK_RAY_TRACING_SHADER_GROUP_TYPE_GENERAL_NV;
VKBINDING_CONSTEXPR static const VKenum VK_RAY_TRACING_SHADER_GROUP_TYPE_TRIANGLES_HIT_GROUP_NV = VKenum::VK_RAY_TRACING_SHADER_GROUP_TYPE_TRIANGLES_HIT_GROUP_NV;
VKBINDING_CONSTEXPR static const VKenum VK_RAY_TRACING_SHADER_GROUP_TYPE_PROCEDURAL_HIT_GROUP_NV = VKenum::VK_RAY_TRACING_SHADER_GROUP_TYPE_PROCEDURAL_HIT_GROUP_NV;

// VkResult

VKBINDING_CONSTEXPR static const VKenum VK_ERROR_OUT_OF_HOST_MEMORY = VKenum::VK_ERROR_OUT_OF_HOST_MEMORY;
VKBINDING_CONSTEXPR static const VKenum VK_ERROR_TOO_MANY_OBJECTS = VKenum::VK_ERROR_TOO_MANY_OBJECTS;
VKBINDING_CONSTEXPR static const VKenum VK_ERROR_FORMAT_NOT_SUPPORTED = VKenum::VK_ERROR_FORMAT_NOT_SUPPORTED;
VKBINDING_CONSTEXPR static const VKenum VK_ERROR_FRAGMENTED_POOL = VKenum::VK_ERROR_FRAGMENTED_POOL;
VKBINDING_CONSTEXPR static const VKenum VK_ERROR_OUT_OF_DEVICE_MEMORY = VKenum::VK_ERROR_OUT_OF_DEVICE_MEMORY;
VKBINDING_CONSTEXPR static const VKenum VK_ERROR_INITIALIZATION_FAILED = VKenum::VK_ERROR_INITIALIZATION_FAILED;
VKBINDING_CONSTEXPR static const VKenum VK_ERROR_DEVICE_LOST = VKenum::VK_ERROR_DEVICE_LOST;
VKBINDING_CONSTEXPR static const VKenum VK_ERROR_MEMORY_MAP_FAILED = VKenum::VK_ERROR_MEMORY_MAP_FAILED;
VKBINDING_CONSTEXPR static const VKenum VK_ERROR_LAYER_NOT_PRESENT = VKenum::VK_ERROR_LAYER_NOT_PRESENT;
VKBINDING_CONSTEXPR static const VKenum VK_ERROR_EXTENSION_NOT_PRESENT = VKenum::VK_ERROR_EXTENSION_NOT_PRESENT;
VKBINDING_CONSTEXPR static const VKenum VK_ERROR_FEATURE_NOT_PRESENT = VKenum::VK_ERROR_FEATURE_NOT_PRESENT;
VKBINDING_CONSTEXPR static const VKenum VK_ERROR_INCOMPATIBLE_DRIVER = VKenum::VK_ERROR_INCOMPATIBLE_DRIVER;
VKBINDING_CONSTEXPR static const VKenum VK_SUCCESS = VKenum::VK_SUCCESS;
VKBINDING_CONSTEXPR static const VKenum VK_ERROR_SURFACE_LOST_KHR = VKenum::VK_ERROR_SURFACE_LOST_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_ERROR_NATIVE_WINDOW_IN_USE_KHR = VKenum::VK_ERROR_NATIVE_WINDOW_IN_USE_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_SUBOPTIMAL_KHR = VKenum::VK_SUBOPTIMAL_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_ERROR_OUT_OF_DATE_KHR = VKenum::VK_ERROR_OUT_OF_DATE_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_ERROR_INCOMPATIBLE_DISPLAY_KHR = VKenum::VK_ERROR_INCOMPATIBLE_DISPLAY_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_ERROR_VALIDATION_FAILED_EXT = VKenum::VK_ERROR_VALIDATION_FAILED_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_ERROR_INVALID_SHADER_NV = VKenum::VK_ERROR_INVALID_SHADER_NV;
VKBINDING_CONSTEXPR static const VKenum VK_ERROR_OUT_OF_POOL_MEMORY = VKenum::VK_ERROR_OUT_OF_POOL_MEMORY;
VKBINDING_CONSTEXPR static const VKenum VK_ERROR_OUT_OF_POOL_MEMORY_KHR = VKenum::VK_ERROR_OUT_OF_POOL_MEMORY_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_ERROR_INVALID_EXTERNAL_HANDLE = VKenum::VK_ERROR_INVALID_EXTERNAL_HANDLE;
VKBINDING_CONSTEXPR static const VKenum VK_ERROR_INVALID_EXTERNAL_HANDLE_KHR = VKenum::VK_ERROR_INVALID_EXTERNAL_HANDLE_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_ERROR_INVALID_DRM_FORMAT_MODIFIER_PLANE_LAYOUT_EXT = VKenum::VK_ERROR_INVALID_DRM_FORMAT_MODIFIER_PLANE_LAYOUT_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_ERROR_FRAGMENTATION_EXT = VKenum::VK_ERROR_FRAGMENTATION_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_ERROR_NOT_PERMITTED_EXT = VKenum::VK_ERROR_NOT_PERMITTED_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_ERROR_INVALID_DEVICE_ADDRESS_EXT = VKenum::VK_ERROR_INVALID_DEVICE_ADDRESS_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT = VKenum::VK_ERROR_FULL_SCREEN_EXCLUSIVE_MODE_LOST_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_NOT_READY = VKenum::VK_NOT_READY;
VKBINDING_CONSTEXPR static const VKenum VK_TIMEOUT = VKenum::VK_TIMEOUT;
VKBINDING_CONSTEXPR static const VKenum VK_EVENT_SET = VKenum::VK_EVENT_SET;
VKBINDING_CONSTEXPR static const VKenum VK_EVENT_RESET = VKenum::VK_EVENT_RESET;
VKBINDING_CONSTEXPR static const VKenum VK_INCOMPLETE = VKenum::VK_INCOMPLETE;

// VkSamplerAddressMode

VKBINDING_CONSTEXPR static const VKenum VK_SAMPLER_ADDRESS_MODE_REPEAT = VKenum::VK_SAMPLER_ADDRESS_MODE_REPEAT;
VKBINDING_CONSTEXPR static const VKenum VK_SAMPLER_ADDRESS_MODE_MIRRORED_REPEAT = VKenum::VK_SAMPLER_ADDRESS_MODE_MIRRORED_REPEAT;
VKBINDING_CONSTEXPR static const VKenum VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE = VKenum::VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
VKBINDING_CONSTEXPR static const VKenum VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_BORDER = VKenum::VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_BORDER;
VKBINDING_CONSTEXPR static const VKenum VK_SAMPLER_ADDRESS_MODE_MIRROR_CLAMP_TO_EDGE = VKenum::VK_SAMPLER_ADDRESS_MODE_MIRROR_CLAMP_TO_EDGE;

// VkSamplerMipmapMode

VKBINDING_CONSTEXPR static const VKenum VK_SAMPLER_MIPMAP_MODE_NEAREST = VKenum::VK_SAMPLER_MIPMAP_MODE_NEAREST;
VKBINDING_CONSTEXPR static const VKenum VK_SAMPLER_MIPMAP_MODE_LINEAR = VKenum::VK_SAMPLER_MIPMAP_MODE_LINEAR;

// VkSamplerReductionModeEXT

VKBINDING_CONSTEXPR static const VKenum VK_SAMPLER_REDUCTION_MODE_WEIGHTED_AVERAGE_EXT = VKenum::VK_SAMPLER_REDUCTION_MODE_WEIGHTED_AVERAGE_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_SAMPLER_REDUCTION_MODE_MIN_EXT = VKenum::VK_SAMPLER_REDUCTION_MODE_MIN_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_SAMPLER_REDUCTION_MODE_MAX_EXT = VKenum::VK_SAMPLER_REDUCTION_MODE_MAX_EXT;

// VkSamplerYcbcrModelConversion

VKBINDING_CONSTEXPR static const VKenum VK_SAMPLER_YCBCR_MODEL_CONVERSION_RGB_IDENTITY = VKenum::VK_SAMPLER_YCBCR_MODEL_CONVERSION_RGB_IDENTITY;
VKBINDING_CONSTEXPR static const VKenum VK_SAMPLER_YCBCR_MODEL_CONVERSION_RGB_IDENTITY_KHR = VKenum::VK_SAMPLER_YCBCR_MODEL_CONVERSION_RGB_IDENTITY_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_IDENTITY = VKenum::VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_IDENTITY;
VKBINDING_CONSTEXPR static const VKenum VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_IDENTITY_KHR = VKenum::VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_IDENTITY_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_709 = VKenum::VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_709;
VKBINDING_CONSTEXPR static const VKenum VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_709_KHR = VKenum::VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_709_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_601 = VKenum::VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_601;
VKBINDING_CONSTEXPR static const VKenum VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_601_KHR = VKenum::VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_601_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_2020 = VKenum::VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_2020;
VKBINDING_CONSTEXPR static const VKenum VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_2020_KHR = VKenum::VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_2020_KHR;

// VkSamplerYcbcrRange

VKBINDING_CONSTEXPR static const VKenum VK_SAMPLER_YCBCR_RANGE_ITU_FULL = VKenum::VK_SAMPLER_YCBCR_RANGE_ITU_FULL;
VKBINDING_CONSTEXPR static const VKenum VK_SAMPLER_YCBCR_RANGE_ITU_FULL_KHR = VKenum::VK_SAMPLER_YCBCR_RANGE_ITU_FULL_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_SAMPLER_YCBCR_RANGE_ITU_NARROW = VKenum::VK_SAMPLER_YCBCR_RANGE_ITU_NARROW;
VKBINDING_CONSTEXPR static const VKenum VK_SAMPLER_YCBCR_RANGE_ITU_NARROW_KHR = VKenum::VK_SAMPLER_YCBCR_RANGE_ITU_NARROW_KHR;

// VkScopeNV

VKBINDING_CONSTEXPR static const VKenum VK_SCOPE_DEVICE_NV = VKenum::VK_SCOPE_DEVICE_NV;
VKBINDING_CONSTEXPR static const VKenum VK_SCOPE_WORKGROUP_NV = VKenum::VK_SCOPE_WORKGROUP_NV;
VKBINDING_CONSTEXPR static const VKenum VK_SCOPE_SUBGROUP_NV = VKenum::VK_SCOPE_SUBGROUP_NV;
VKBINDING_CONSTEXPR static const VKenum VK_SCOPE_QUEUE_FAMILY_NV = VKenum::VK_SCOPE_QUEUE_FAMILY_NV;

// VkShaderFloatControlsIndependenceKHR

VKBINDING_CONSTEXPR static const VKenum VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_32_BIT_ONLY_KHR = VKenum::VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_32_BIT_ONLY_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_ALL_KHR = VKenum::VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_ALL_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_NONE_KHR = VKenum::VK_SHADER_FLOAT_CONTROLS_INDEPENDENCE_NONE_KHR;

// VkShaderInfoTypeAMD

VKBINDING_CONSTEXPR static const VKenum VK_SHADER_INFO_TYPE_STATISTICS_AMD = VKenum::VK_SHADER_INFO_TYPE_STATISTICS_AMD;
VKBINDING_CONSTEXPR static const VKenum VK_SHADER_INFO_TYPE_BINARY_AMD = VKenum::VK_SHADER_INFO_TYPE_BINARY_AMD;
VKBINDING_CONSTEXPR static const VKenum VK_SHADER_INFO_TYPE_DISASSEMBLY_AMD = VKenum::VK_SHADER_INFO_TYPE_DISASSEMBLY_AMD;

// VkShadingRatePaletteEntryNV

VKBINDING_CONSTEXPR static const VKenum VK_SHADING_RATE_PALETTE_ENTRY_NO_INVOCATIONS_NV = VKenum::VK_SHADING_RATE_PALETTE_ENTRY_NO_INVOCATIONS_NV;
VKBINDING_CONSTEXPR static const VKenum VK_SHADING_RATE_PALETTE_ENTRY_16_INVOCATIONS_PER_PIXEL_NV = VKenum::VK_SHADING_RATE_PALETTE_ENTRY_16_INVOCATIONS_PER_PIXEL_NV;
VKBINDING_CONSTEXPR static const VKenum VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X4_PIXELS_NV = VKenum::VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X4_PIXELS_NV;
VKBINDING_CONSTEXPR static const VKenum VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_4X4_PIXELS_NV = VKenum::VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_4X4_PIXELS_NV;
VKBINDING_CONSTEXPR static const VKenum VK_SHADING_RATE_PALETTE_ENTRY_8_INVOCATIONS_PER_PIXEL_NV = VKenum::VK_SHADING_RATE_PALETTE_ENTRY_8_INVOCATIONS_PER_PIXEL_NV;
VKBINDING_CONSTEXPR static const VKenum VK_SHADING_RATE_PALETTE_ENTRY_4_INVOCATIONS_PER_PIXEL_NV = VKenum::VK_SHADING_RATE_PALETTE_ENTRY_4_INVOCATIONS_PER_PIXEL_NV;
VKBINDING_CONSTEXPR static const VKenum VK_SHADING_RATE_PALETTE_ENTRY_2_INVOCATIONS_PER_PIXEL_NV = VKenum::VK_SHADING_RATE_PALETTE_ENTRY_2_INVOCATIONS_PER_PIXEL_NV;
VKBINDING_CONSTEXPR static const VKenum VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_PIXEL_NV = VKenum::VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_PIXEL_NV;
VKBINDING_CONSTEXPR static const VKenum VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X1_PIXELS_NV = VKenum::VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X1_PIXELS_NV;
VKBINDING_CONSTEXPR static const VKenum VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_1X2_PIXELS_NV = VKenum::VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_1X2_PIXELS_NV;
VKBINDING_CONSTEXPR static const VKenum VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X2_PIXELS_NV = VKenum::VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_2X2_PIXELS_NV;
VKBINDING_CONSTEXPR static const VKenum VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_4X2_PIXELS_NV = VKenum::VK_SHADING_RATE_PALETTE_ENTRY_1_INVOCATION_PER_4X2_PIXELS_NV;

// VkSharingMode

VKBINDING_CONSTEXPR static const VKenum VK_SHARING_MODE_EXCLUSIVE = VKenum::VK_SHARING_MODE_EXCLUSIVE;
VKBINDING_CONSTEXPR static const VKenum VK_SHARING_MODE_CONCURRENT = VKenum::VK_SHARING_MODE_CONCURRENT;

// VkStencilOp

VKBINDING_CONSTEXPR static const VKenum VK_STENCIL_OP_KEEP = VKenum::VK_STENCIL_OP_KEEP;
VKBINDING_CONSTEXPR static const VKenum VK_STENCIL_OP_ZERO = VKenum::VK_STENCIL_OP_ZERO;
VKBINDING_CONSTEXPR static const VKenum VK_STENCIL_OP_REPLACE = VKenum::VK_STENCIL_OP_REPLACE;
VKBINDING_CONSTEXPR static const VKenum VK_STENCIL_OP_INCREMENT_AND_CLAMP = VKenum::VK_STENCIL_OP_INCREMENT_AND_CLAMP;
VKBINDING_CONSTEXPR static const VKenum VK_STENCIL_OP_DECREMENT_AND_CLAMP = VKenum::VK_STENCIL_OP_DECREMENT_AND_CLAMP;
VKBINDING_CONSTEXPR static const VKenum VK_STENCIL_OP_INVERT = VKenum::VK_STENCIL_OP_INVERT;
VKBINDING_CONSTEXPR static const VKenum VK_STENCIL_OP_INCREMENT_AND_WRAP = VKenum::VK_STENCIL_OP_INCREMENT_AND_WRAP;
VKBINDING_CONSTEXPR static const VKenum VK_STENCIL_OP_DECREMENT_AND_WRAP = VKenum::VK_STENCIL_OP_DECREMENT_AND_WRAP;

// VkStructureType

VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_APPLICATION_INFO = VKenum::VK_STRUCTURE_TYPE_APPLICATION_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PRESENT_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_PRESENT_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR = VKenum::VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_NATIVE_BUFFER_ANDROID = VKenum::VK_STRUCTURE_TYPE_NATIVE_BUFFER_ANDROID;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_SWAPCHAIN_IMAGE_CREATE_INFO_ANDROID = VKenum::VK_STRUCTURE_TYPE_SWAPCHAIN_IMAGE_CREATE_INFO_ANDROID;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENTATION_PROPERTIES_ANDROID = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENTATION_PROPERTIES_ANDROID;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEBUG_REPORT_CREATE_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_DEBUG_REPORT_CREATE_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD = VKenum::VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV = VKenum::VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV = VKenum::VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV = VKenum::VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_IMAGE_VIEW_HANDLE_INFO_NVX = VKenum::VK_STRUCTURE_TYPE_IMAGE_VIEW_HANDLE_INFO_NVX;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD = VKenum::VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_STREAM_DESCRIPTOR_SURFACE_CREATE_INFO_GGP = VKenum::VK_STRUCTURE_TYPE_STREAM_DESCRIPTOR_SURFACE_CREATE_INFO_GGP;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES_KHR = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES_KHR = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV = VKenum::VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV = VKenum::VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV = VKenum::VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV = VKenum::VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV = VKenum::VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2 = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2_KHR = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2 = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2_KHR = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2 = VKenum::VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2_KHR = VKenum::VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2 = VKenum::VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2_KHR = VKenum::VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2 = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2_KHR = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2 = VKenum::VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2_KHR = VKenum::VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2 = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2_KHR = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2 = VKenum::VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2_KHR = VKenum::VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2 = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2_KHR = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO = VKenum::VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO = VKenum::VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO = VKenum::VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO = VKenum::VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO = VKenum::VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO = VKenum::VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO = VKenum::VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT = VKenum::VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN = VKenum::VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETER_FEATURES = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETER_FEATURES;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT = VKenum::VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES_KHR = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES = VKenum::VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES_KHR = VKenum::VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES = VKenum::VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES_KHR = VKenum::VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES_KHR = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO = VKenum::VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR = VKenum::VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR = VKenum::VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES = VKenum::VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES_KHR = VKenum::VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES_KHR = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT16_INT8_FEATURES_KHR = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT16_INT8_FEATURES_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES_KHR = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR = VKenum::VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_OBJECT_TABLE_CREATE_INFO_NVX = VKenum::VK_STRUCTURE_TYPE_OBJECT_TABLE_CREATE_INFO_NVX;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NVX = VKenum::VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NVX;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_CMD_PROCESS_COMMANDS_INFO_NVX = VKenum::VK_STRUCTURE_TYPE_CMD_PROCESS_COMMANDS_INFO_NVX;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_CMD_RESERVE_SPACE_FOR_COMMANDS_INFO_NVX = VKenum::VK_STRUCTURE_TYPE_CMD_RESERVE_SPACE_FOR_COMMANDS_INFO_NVX;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_LIMITS_NVX = VKenum::VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_LIMITS_NVX;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_FEATURES_NVX = VKenum::VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_FEATURES_NVX;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV = VKenum::VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT = VKenum::VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES2_EXT = VKenum::VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES2_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE = VKenum::VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV = VKenum::VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_HDR_METADATA_EXT = VKenum::VK_STRUCTURE_TYPE_HDR_METADATA_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES_KHR = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2_KHR = VKenum::VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2_KHR = VKenum::VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2_KHR = VKenum::VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2_KHR = VKenum::VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2_KHR = VKenum::VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_SUBPASS_END_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_SUBPASS_END_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR = VKenum::VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES = VKenum::VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES_KHR = VKenum::VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES_KHR = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR = VKenum::VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR = VKenum::VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTER_FEATURES = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTER_FEATURES;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTER_FEATURES_KHR = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTER_FEATURES_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES_KHR = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR = VKenum::VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR = VKenum::VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR = VKenum::VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR = VKenum::VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR = VKenum::VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_IOS_SURFACE_CREATE_INFO_MVK = VKenum::VK_STRUCTURE_TYPE_IOS_SURFACE_CREATE_INFO_MVK;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_MACOS_SURFACE_CREATE_INFO_MVK = VKenum::VK_STRUCTURE_TYPE_MACOS_SURFACE_CREATE_INFO_MVK;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS = VKenum::VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS_KHR = VKenum::VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO = VKenum::VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT = VKenum::VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT = VKenum::VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID = VKenum::VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_PROPERTIES_ANDROID = VKenum::VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_PROPERTIES_ANDROID;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID = VKenum::VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID = VKenum::VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_MEMORY_GET_ANDROID_HARDWARE_BUFFER_INFO_ANDROID = VKenum::VK_STRUCTURE_TYPE_MEMORY_GET_ANDROID_HARDWARE_BUFFER_INFO_ANDROID;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID = VKenum::VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK_EXT = VKenum::VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT = VKenum::VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO = VKenum::VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2 = VKenum::VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2 = VKenum::VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2_KHR = VKenum::VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2 = VKenum::VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2_KHR = VKenum::VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2 = VKenum::VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2_KHR = VKenum::VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2 = VKenum::VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2_KHR = VKenum::VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2 = VKenum::VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2_KHR = VKenum::VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV = VKenum::VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV = VKenum::VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO = VKenum::VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO = VKenum::VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO = VKenum::VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES_KHR = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES = VKenum::VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES_KHR = VKenum::VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO = VKenum::VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO = VKenum::VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT = VKenum::VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT = VKenum::VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT = VKenum::VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT_EXT = VKenum::VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV = VKenum::VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV = VKenum::VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_NV = VKenum::VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NV = VKenum::VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_GEOMETRY_NV = VKenum::VK_STRUCTURE_TYPE_GEOMETRY_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_GEOMETRY_TRIANGLES_NV = VKenum::VK_STRUCTURE_TYPE_GEOMETRY_TRIANGLES_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_GEOMETRY_AABB_NV = VKenum::VK_STRUCTURE_TYPE_GEOMETRY_AABB_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NV = VKenum::VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_NV = VKenum::VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV = VKenum::VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV = VKenum::VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_INFO_NV = VKenum::VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_INFO_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV = VKenum::VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES_KHR = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT = VKenum::VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT_KHR = VKenum::VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT = VKenum::VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES_KHR = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT = VKenum::VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES_KHR = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD = VKenum::VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PRESENT_FRAME_TOKEN_GGP = VKenum::VK_STRUCTURE_TYPE_PRESENT_FRAME_TOKEN_GGP;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES_KHR = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES_KHR = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES_KHR = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE_KHR = VKenum::VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_NV = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV = VKenum::VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV = VKenum::VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV = VKenum::VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO_INTEL = VKenum::VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO_INTEL;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_INITIALIZE_PERFORMANCE_API_INFO_INTEL = VKenum::VK_STRUCTURE_TYPE_INITIALIZE_PERFORMANCE_API_INFO_INTEL;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PERFORMANCE_MARKER_INFO_INTEL = VKenum::VK_STRUCTURE_TYPE_PERFORMANCE_MARKER_INFO_INTEL;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PERFORMANCE_STREAM_MARKER_INFO_INTEL = VKenum::VK_STRUCTURE_TYPE_PERFORMANCE_STREAM_MARKER_INFO_INTEL;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PERFORMANCE_OVERRIDE_INFO_INTEL = VKenum::VK_STRUCTURE_TYPE_PERFORMANCE_OVERRIDE_INFO_INTEL;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL = VKenum::VK_STRUCTURE_TYPE_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES_KHR = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD = VKenum::VK_STRUCTURE_TYPE_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD = VKenum::VK_STRUCTURE_TYPE_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_IMAGEPIPE_SURFACE_CREATE_INFO_FUCHSIA = VKenum::VK_STRUCTURE_TYPE_IMAGEPIPE_SURFACE_CREATE_INFO_FUCHSIA;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_METAL_SURFACE_CREATE_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_METAL_SURFACE_CREATE_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR = VKenum::VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_ADDRESS_FEATURES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_ADDRESS_FEATURES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT = VKenum::VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_NV = VKenum::VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV = VKenum::VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV = VKenum::VK_STRUCTURE_TYPE_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES_KHR = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT = VKenum::VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_EVENT_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_EVENT_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO = VKenum::VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET = VKenum::VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET = VKenum::VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_SUBMIT_INFO = VKenum::VK_STRUCTURE_TYPE_SUBMIT_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO = VKenum::VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO = VKenum::VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO = VKenum::VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO = VKenum::VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER = VKenum::VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER = VKenum::VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_MEMORY_BARRIER = VKenum::VK_STRUCTURE_TYPE_MEMORY_BARRIER;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO = VKenum::VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE = VKenum::VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_BIND_SPARSE_INFO = VKenum::VK_STRUCTURE_TYPE_BIND_SPARSE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_FENCE_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_FENCE_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO;

// VkSubpassContents

VKBINDING_CONSTEXPR static const VKenum VK_SUBPASS_CONTENTS_INLINE = VKenum::VK_SUBPASS_CONTENTS_INLINE;
VKBINDING_CONSTEXPR static const VKenum VK_SUBPASS_CONTENTS_SECONDARY_COMMAND_BUFFERS = VKenum::VK_SUBPASS_CONTENTS_SECONDARY_COMMAND_BUFFERS;

// VkSystemAllocationScope

VKBINDING_CONSTEXPR static const VKenum VK_SYSTEM_ALLOCATION_SCOPE_COMMAND = VKenum::VK_SYSTEM_ALLOCATION_SCOPE_COMMAND;
VKBINDING_CONSTEXPR static const VKenum VK_SYSTEM_ALLOCATION_SCOPE_OBJECT = VKenum::VK_SYSTEM_ALLOCATION_SCOPE_OBJECT;
VKBINDING_CONSTEXPR static const VKenum VK_SYSTEM_ALLOCATION_SCOPE_CACHE = VKenum::VK_SYSTEM_ALLOCATION_SCOPE_CACHE;
VKBINDING_CONSTEXPR static const VKenum VK_SYSTEM_ALLOCATION_SCOPE_DEVICE = VKenum::VK_SYSTEM_ALLOCATION_SCOPE_DEVICE;
VKBINDING_CONSTEXPR static const VKenum VK_SYSTEM_ALLOCATION_SCOPE_INSTANCE = VKenum::VK_SYSTEM_ALLOCATION_SCOPE_INSTANCE;

// VkTessellationDomainOrigin

VKBINDING_CONSTEXPR static const VKenum VK_TESSELLATION_DOMAIN_ORIGIN_UPPER_LEFT = VKenum::VK_TESSELLATION_DOMAIN_ORIGIN_UPPER_LEFT;
VKBINDING_CONSTEXPR static const VKenum VK_TESSELLATION_DOMAIN_ORIGIN_UPPER_LEFT_KHR = VKenum::VK_TESSELLATION_DOMAIN_ORIGIN_UPPER_LEFT_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_TESSELLATION_DOMAIN_ORIGIN_LOWER_LEFT = VKenum::VK_TESSELLATION_DOMAIN_ORIGIN_LOWER_LEFT;
VKBINDING_CONSTEXPR static const VKenum VK_TESSELLATION_DOMAIN_ORIGIN_LOWER_LEFT_KHR = VKenum::VK_TESSELLATION_DOMAIN_ORIGIN_LOWER_LEFT_KHR;

// VkTimeDomainEXT

VKBINDING_CONSTEXPR static const VKenum VK_TIME_DOMAIN_DEVICE_EXT = VKenum::VK_TIME_DOMAIN_DEVICE_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_TIME_DOMAIN_CLOCK_MONOTONIC_EXT = VKenum::VK_TIME_DOMAIN_CLOCK_MONOTONIC_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_TIME_DOMAIN_CLOCK_MONOTONIC_RAW_EXT = VKenum::VK_TIME_DOMAIN_CLOCK_MONOTONIC_RAW_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_TIME_DOMAIN_QUERY_PERFORMANCE_COUNTER_EXT = VKenum::VK_TIME_DOMAIN_QUERY_PERFORMANCE_COUNTER_EXT;

// VkValidationCacheHeaderVersionEXT

VKBINDING_CONSTEXPR static const VKenum VK_VALIDATION_CACHE_HEADER_VERSION_ONE_EXT = VKenum::VK_VALIDATION_CACHE_HEADER_VERSION_ONE_EXT;

// VkValidationCheckEXT

VKBINDING_CONSTEXPR static const VKenum VK_VALIDATION_CHECK_ALL_EXT = VKenum::VK_VALIDATION_CHECK_ALL_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_VALIDATION_CHECK_SHADERS_EXT = VKenum::VK_VALIDATION_CHECK_SHADERS_EXT;

// VkValidationFeatureDisableEXT

VKBINDING_CONSTEXPR static const VKenum VK_VALIDATION_FEATURE_DISABLE_ALL_EXT = VKenum::VK_VALIDATION_FEATURE_DISABLE_ALL_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_VALIDATION_FEATURE_DISABLE_SHADERS_EXT = VKenum::VK_VALIDATION_FEATURE_DISABLE_SHADERS_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_VALIDATION_FEATURE_DISABLE_THREAD_SAFETY_EXT = VKenum::VK_VALIDATION_FEATURE_DISABLE_THREAD_SAFETY_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_VALIDATION_FEATURE_DISABLE_API_PARAMETERS_EXT = VKenum::VK_VALIDATION_FEATURE_DISABLE_API_PARAMETERS_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_VALIDATION_FEATURE_DISABLE_OBJECT_LIFETIMES_EXT = VKenum::VK_VALIDATION_FEATURE_DISABLE_OBJECT_LIFETIMES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_VALIDATION_FEATURE_DISABLE_CORE_CHECKS_EXT = VKenum::VK_VALIDATION_FEATURE_DISABLE_CORE_CHECKS_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_VALIDATION_FEATURE_DISABLE_UNIQUE_HANDLES_EXT = VKenum::VK_VALIDATION_FEATURE_DISABLE_UNIQUE_HANDLES_EXT;

// VkValidationFeatureEnableEXT

VKBINDING_CONSTEXPR static const VKenum VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_EXT = VKenum::VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_RESERVE_BINDING_SLOT_EXT = VKenum::VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_RESERVE_BINDING_SLOT_EXT;

// VkVendorId

VKBINDING_CONSTEXPR static const VKenum VK_VENDOR_ID_VIV = VKenum::VK_VENDOR_ID_VIV;
VKBINDING_CONSTEXPR static const VKenum VK_VENDOR_ID_VSI = VKenum::VK_VENDOR_ID_VSI;
VKBINDING_CONSTEXPR static const VKenum VK_VENDOR_ID_KAZAN = VKenum::VK_VENDOR_ID_KAZAN;

// VkVertexInputRate

VKBINDING_CONSTEXPR static const VKenum VK_VERTEX_INPUT_RATE_VERTEX = VKenum::VK_VERTEX_INPUT_RATE_VERTEX;
VKBINDING_CONSTEXPR static const VKenum VK_VERTEX_INPUT_RATE_INSTANCE = VKenum::VK_VERTEX_INPUT_RATE_INSTANCE;

// VkViewportCoordinateSwizzleNV

VKBINDING_CONSTEXPR static const VKenum VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_X_NV = VKenum::VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_X_NV;
VKBINDING_CONSTEXPR static const VKenum VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_X_NV = VKenum::VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_X_NV;
VKBINDING_CONSTEXPR static const VKenum VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Y_NV = VKenum::VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Y_NV;
VKBINDING_CONSTEXPR static const VKenum VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Y_NV = VKenum::VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Y_NV;
VKBINDING_CONSTEXPR static const VKenum VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Z_NV = VKenum::VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Z_NV;
VKBINDING_CONSTEXPR static const VKenum VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Z_NV = VKenum::VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Z_NV;
VKBINDING_CONSTEXPR static const VKenum VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_W_NV = VKenum::VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_W_NV;
VKBINDING_CONSTEXPR static const VKenum VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_W_NV = VKenum::VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_W_NV;



} // namespace vk