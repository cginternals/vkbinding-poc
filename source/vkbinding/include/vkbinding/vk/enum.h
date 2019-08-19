
#pragma once


#include <vkbinding/novk.h>

#include <vkbinding/vkbinding_features.h>


namespace vk
{


enum class VKenum : unsigned int
{
    // UNGROUPED

    VK_EXT_HEADLESS_SURFACE_SPEC_VERSION                                              = 0,
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
    VK_KHR_MULTIVIEW_SPEC_VERSION                                                     = 1,
    VK_IMG_FORMAT_PVRTC_SPEC_VERSION                                                  = 1,
    VK_NV_EXTERNAL_MEMORY_CAPABILITIES_SPEC_VERSION                                   = 1,
    VK_NV_EXTERNAL_MEMORY_SPEC_VERSION                                                = 1,
    VK_KHR_GET_PHYSICAL_DEVICE_PROPERTIES_2_SPEC_VERSION                              = 1,
    VK_EXT_VALIDATION_FLAGS_SPEC_VERSION                                              = 1,
    VK_KHR_SHADER_DRAW_PARAMETERS_SPEC_VERSION                                        = 1,
    VK_EXT_SHADER_SUBGROUP_BALLOT_SPEC_VERSION                                        = 1,
    VK_EXT_SHADER_SUBGROUP_VOTE_SPEC_VERSION                                          = 1,
    VK_EXT_TEXTURE_COMPRESSION_ASTC_HDR_SPEC_VERSION                                  = 1,
    VK_EXT_ASTC_DECODE_MODE_SPEC_VERSION                                              = 1,
    VK_KHR_DEVICE_GROUP_CREATION_SPEC_VERSION                                         = 1,
    VK_KHR_EXTERNAL_MEMORY_CAPABILITIES_SPEC_VERSION                                  = 1,
    VK_KHR_EXTERNAL_MEMORY_SPEC_VERSION                                               = 1,
    VK_KHR_EXTERNAL_MEMORY_FD_SPEC_VERSION                                            = 1,
    VK_KHR_EXTERNAL_SEMAPHORE_CAPABILITIES_SPEC_VERSION                               = 1,
    VK_KHR_EXTERNAL_SEMAPHORE_SPEC_VERSION                                            = 1,
    VK_KHR_EXTERNAL_SEMAPHORE_FD_SPEC_VERSION                                         = 1,
    VK_EXT_CONDITIONAL_RENDERING_SPEC_VERSION                                         = 1,
    VK_KHR_SHADER_FLOAT16_INT8_SPEC_VERSION                                           = 1,
    VK_KHR_16BIT_STORAGE_SPEC_VERSION                                                 = 1,
    VK_KHR_INCREMENTAL_PRESENT_SPEC_VERSION                                           = 1,
    VK_KHR_DESCRIPTOR_UPDATE_TEMPLATE_SPEC_VERSION                                    = 1,
    VK_NV_CLIP_SPACE_W_SCALING_SPEC_VERSION                                           = 1,
    VK_EXT_DIRECT_MODE_DISPLAY_SPEC_VERSION                                           = 1,
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
    VK_AMD_PIPELINE_COMPILER_CONTROL_SPEC_VERSION                                     = 1,
    VK_EXT_CALIBRATED_TIMESTAMPS_SPEC_VERSION                                         = 1,
    VK_AMD_SHADER_CORE_PROPERTIES_SPEC_VERSION                                        = 1,
    VK_AMD_MEMORY_OVERALLOCATION_BEHAVIOR_SPEC_VERSION                                = 1,
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
    VK_EXT_FRAGMENT_DENSITY_MAP_SPEC_VERSION                                          = 1,
    VK_EXT_SCALAR_BLOCK_LAYOUT_SPEC_VERSION                                           = 1,
    VK_GOOGLE_HLSL_FUNCTIONALITY1_SPEC_VERSION                                        = 1,
    VK_GOOGLE_DECORATE_STRING_SPEC_VERSION                                            = 1,
    VK_AMD_SHADER_CORE_PROPERTIES_2_SPEC_VERSION                                      = 1,
    VK_EXT_MEMORY_BUDGET_SPEC_VERSION                                                 = 1,
    VK_EXT_MEMORY_PRIORITY_SPEC_VERSION                                               = 1,
    VK_KHR_SURFACE_PROTECTED_CAPABILITIES_SPEC_VERSION                                = 1,
    VK_NV_DEDICATED_ALLOCATION_IMAGE_ALIASING_SPEC_VERSION                            = 1,
    VK_EXT_SEPARATE_STENCIL_USAGE_SPEC_VERSION                                        = 1,
    VK_NV_COOPERATIVE_MATRIX_SPEC_VERSION                                             = 1,
    VK_NV_COVERAGE_REDUCTION_MODE_SPEC_VERSION                                        = 1,
    VK_EXT_FRAGMENT_SHADER_INTERLOCK_SPEC_VERSION                                     = 1,
    VK_EXT_YCBCR_IMAGE_ARRAYS_SPEC_VERSION                                            = 1,
    VK_KHR_UNIFORM_BUFFER_STANDARD_LAYOUT_SPEC_VERSION                                = 1,
    VK_EXT_LINE_RASTERIZATION_SPEC_VERSION                                            = 1,
    VK_EXT_HOST_QUERY_RESET_SPEC_VERSION                                              = 1,
    VK_EXT_INDEX_TYPE_UINT8_SPEC_VERSION                                              = 1,
    VK_KHR_PIPELINE_EXECUTABLE_PROPERTIES_SPEC_VERSION                                = 1,
    VK_EXT_SHADER_DEMOTE_TO_HELPER_INVOCATION_SPEC_VERSION                            = 1,
    VK_EXT_TEXEL_BUFFER_ALIGNMENT_SPEC_VERSION                                        = 1,
    VK_AMD_GPU_SHADER_HALF_FLOAT_SPEC_VERSION                                         = 2,
    VK_NV_CORNER_SAMPLED_IMAGE_SPEC_VERSION                                           = 2,
    VK_KHR_MAINTENANCE1_SPEC_VERSION                                                  = 2,
    VK_KHR_PUSH_DESCRIPTOR_SPEC_VERSION                                               = 2,
    VK_AMD_GPU_SHADER_INT16_SPEC_VERSION                                              = 2,
    VK_EXT_BLEND_OPERATION_ADVANCED_SPEC_VERSION                                      = 2,
    VK_EXT_DESCRIPTOR_INDEXING_SPEC_VERSION                                           = 2,
    VK_EXT_FILTER_CUBIC_SPEC_VERSION                                                  = 2,
    VK_EXT_GLOBAL_PRIORITY_SPEC_VERSION                                               = 2,
    VK_NV_DEVICE_DIAGNOSTIC_CHECKPOINTS_SPEC_VERSION                                  = 2,
    VK_EXT_PCI_BUS_INFO_SPEC_VERSION                                                  = 2,
    VK_EXT_SUBGROUP_SIZE_CONTROL_SPEC_VERSION                                         = 2,
    VK_EXT_BUFFER_DEVICE_ADDRESS_SPEC_VERSION                                         = 2,
    VK_EXT_VALIDATION_FEATURES_SPEC_VERSION                                           = 2,
    VK_KHR_DISPLAY_SPEC_VERSION                                                       = 21,
    VK_KHR_SURFACE_SPEC_VERSION                                                       = 25,
    VK_KHR_DEVICE_GROUP_SPEC_VERSION                                                  = 3,
    VK_NVX_DEVICE_GENERATED_COMMANDS_SPEC_VERSION                                     = 3,
    VK_KHR_DEDICATED_ALLOCATION_SPEC_VERSION                                          = 3,
    VK_NV_SHADING_RATE_IMAGE_SPEC_VERSION                                             = 3,
    VK_NV_RAY_TRACING_SPEC_VERSION                                                    = 3,
    VK_EXT_VERTEX_ATTRIBUTE_DIVISOR_SPEC_VERSION                                      = 3,
    VK_KHR_VULKAN_MEMORY_MODEL_SPEC_VERSION                                           = 3,
    VK_EXT_DEBUG_MARKER_SPEC_VERSION                                                  = 4,
    VK_EXT_SWAPCHAIN_COLOR_SPACE_SPEC_VERSION                                         = 4,
    VK_KHR_SHADER_FLOAT_CONTROLS_SPEC_VERSION                                         = 4,
    VK_KHR_SWAPCHAIN_SPEC_VERSION                                                     = 70,
    VK_KHR_DISPLAY_SWAPCHAIN_SPEC_VERSION                                             = 9,
    VK_EXT_DEBUG_REPORT_SPEC_VERSION                                                  = 9,

    // VkAccelerationStructureMemoryRequirementsTypeNV


    // VkAccelerationStructureTypeNV


    // VkAttachmentLoadOp


    // VkAttachmentStoreOp


    // VkBlendFactor


    // VkBlendOp

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

    // VkBlendOverlapEXT


    // VkBorderColor


    // VkChromaLocation

    VK_CHROMA_LOCATION_COSITED_EVEN_KHR                                               = 0,
    VK_CHROMA_LOCATION_MIDPOINT_KHR                                                   = 1,

    // VkChromaLocationKHR


    // VkCoarseSampleOrderTypeNV


    // VkColorSpaceKHR

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


    // VkCompareOp


    // VkComponentSwizzle


    // VkComponentTypeNV


    // VkConservativeRasterizationModeEXT


    // VkCopyAccelerationStructureModeNV


    // VkCoverageModulationModeNV


    // VkCoverageReductionModeNV


    // VkDebugReportObjectTypeEXT

    VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_EXT                          = 0x3b9af4f8,
    VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_EXT                        = 0x3b9af4f8,
    VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_KHR_EXT                    = 0x3b9af4f8,
    VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_KHR_EXT                      = 0x3b9af4f8,
    VK_DEBUG_REPORT_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV_EXT                         = 0x3b9d4e88,

    // VkDescriptorType

    VK_DESCRIPTOR_TYPE_INLINE_UNIFORM_BLOCK_EXT                                       = 0x3b9ce510,
    VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_NV                                      = 0x3b9d4e88,

    // VkDescriptorUpdateTemplateType

    VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET_KHR                             = 0,
    VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_PUSH_DESCRIPTORS_KHR                           = 1,

    // VkDescriptorUpdateTemplateTypeKHR


    // VkDeviceEventTypeEXT


    // VkDiscardRectangleModeEXT


    // VkDisplayEventTypeEXT


    // VkDisplayPowerStateEXT


    // VkDriverIdKHR


    // VkDynamicState

    VK_DYNAMIC_STATE_VIEWPORT_W_SCALING_NV                                            = 0x3b9c1dd8,
    VK_DYNAMIC_STATE_DISCARD_RECTANGLE_EXT                                            = 0x3b9c4cb8,
    VK_DYNAMIC_STATE_SAMPLE_LOCATIONS_EXT                                             = 0x3b9cf898,
    VK_DYNAMIC_STATE_VIEWPORT_SHADING_RATE_PALETTE_NV                                 = 0x3b9d4aa4,
    VK_DYNAMIC_STATE_VIEWPORT_COARSE_SAMPLE_ORDER_NV                                  = 0x3b9d4aa6,
    VK_DYNAMIC_STATE_EXCLUSIVE_SCISSOR_NV                                             = 0x3b9deac9,
    VK_DYNAMIC_STATE_LINE_STIPPLE_EXT                                                 = 0x3b9ebdb8,

    // VKenum


    // VkFilter

    VK_FILTER_CUBIC_IMG                                                               = 0x3b9b0498,
    VK_FILTER_CUBIC_EXT                                                               = 0x3b9b0498,

    // VkFormat

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

    // VkFrontFace


    // VkGeometryTypeNV


    // VkImageLayout

    VK_IMAGE_LAYOUT_PRESENT_SRC_KHR                                                   = 0x3b9acdea,
    VK_IMAGE_LAYOUT_SHARED_PRESENT_KHR                                                = 0x3b9c7b98,
    VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL                        = 0x3b9c9308,
    VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL_KHR                    = 0x3b9c9308,
    VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL                        = 0x3b9c9309,
    VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL_KHR                    = 0x3b9c9309,
    VK_IMAGE_LAYOUT_SHADING_RATE_OPTIMAL_NV                                           = 0x3b9d4aa3,
    VK_IMAGE_LAYOUT_FRAGMENT_DENSITY_MAP_OPTIMAL_EXT                                  = 0x3b9e1d90,

    // VkImageTiling

    VK_IMAGE_TILING_DRM_FORMAT_MODIFIER_EXT                                           = 0x3b9d3330,

    // VkImageType


    // VkImageViewType


    // VkIndexType

    VK_INDEX_TYPE_NONE_NV                                                             = 0x3b9d4e88,
    VK_INDEX_TYPE_UINT8_EXT                                                           = 0x3b9ed528,

    // VkIndirectCommandsTokenTypeNVX


    // VkInternalAllocationType


    // VkLineRasterizationModeEXT


    // VkLogicOp


    // VkMemoryOverallocationBehaviorAMD


    // VkObjectEntryTypeNVX


    // VkObjectType

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

    // VkPerformanceConfigurationTypeINTEL


    // VkPerformanceOverrideTypeINTEL


    // VkPerformanceParameterTypeINTEL


    // VkPerformanceValueTypeINTEL


    // VkPhysicalDeviceType


    // VkPipelineBindPoint

    VK_PIPELINE_BIND_POINT_RAY_TRACING_NV                                             = 0x3b9d4e88,

    // VkPipelineCacheHeaderVersion


    // VkPipelineExecutableStatisticFormatKHR


    // VkPointClippingBehavior

    VK_POINT_CLIPPING_BEHAVIOR_ALL_CLIP_PLANES_KHR                                    = 0,
    VK_POINT_CLIPPING_BEHAVIOR_USER_CLIP_PLANES_ONLY_KHR                              = 1,

    // VkPointClippingBehaviorKHR


    // VkPolygonMode

    VK_POLYGON_MODE_FILL_RECTANGLE_NV                                                 = 0x3b9d1fa8,

    // VkPresentModeKHR

    VK_PRESENT_MODE_SHARED_DEMAND_REFRESH_KHR                                         = 0x3b9c7b98,
    VK_PRESENT_MODE_SHARED_CONTINUOUS_REFRESH_KHR                                     = 0x3b9c7b99,

    // VkPrimitiveTopology


    // VkQueryPoolSamplingModeINTEL


    // VkQueryType

    VK_QUERY_TYPE_TRANSFORM_FEEDBACK_STREAM_EXT                                       = 0x3b9b3764,
    VK_QUERY_TYPE_ACCELERATION_STRUCTURE_COMPACTED_SIZE_NV                            = 0x3b9d4e88,
    VK_QUERY_TYPE_PERFORMANCE_QUERY_INTEL                                             = 0x3b9dfe50,

    // VkQueueGlobalPriorityEXT


    // VkRasterizationOrderAMD


    // VkRayTracingShaderGroupTypeNV


    // VkResult

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

    // VkSamplerAddressMode

    VK_SAMPLER_ADDRESS_MODE_MIRROR_CLAMP_TO_EDGE                                      = 4,

    // VkSamplerMipmapMode


    // VkSamplerReductionModeEXT


    // VkSamplerYcbcrModelConversion

    VK_SAMPLER_YCBCR_MODEL_CONVERSION_RGB_IDENTITY_KHR                                = 0,
    VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_IDENTITY_KHR                              = 1,
    VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_709_KHR                                   = 2,
    VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_601_KHR                                   = 3,
    VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_2020_KHR                                  = 4,

    // VkSamplerYcbcrModelConversionKHR


    // VkSamplerYcbcrRange

    VK_SAMPLER_YCBCR_RANGE_ITU_FULL_KHR                                               = 0,
    VK_SAMPLER_YCBCR_RANGE_ITU_NARROW_KHR                                             = 1,

    // VkSamplerYcbcrRangeKHR


    // VkScopeNV


    // VkShaderFloatControlsIndependenceKHR


    // VkShaderInfoTypeAMD


    // VkShadingRatePaletteEntryNV


    // VkSharingMode


    // VkStencilOp


    // VkStructureType

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
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV                = 0x3b9b8d50,
    VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO                               = 0x3b9b9908,
    VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO_KHR                           = 0x3b9b9908,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES                              = 0x3b9b9909,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES_KHR                          = 0x3b9b9909,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES                            = 0x3b9b990a,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES_KHR                        = 0x3b9b990a,
    VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV                            = 0x3b9ba4c0,
    VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV                                  = 0x3b9ba4c1,
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
    VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR                                       = 0x3b9beb10,
    VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR                                        = 0x3b9beb11,
    VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR                                          = 0x3b9beb12,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO                         = 0x3b9bf2e0,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO_KHR                     = 0x3b9bf2e0,
    VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES                                   = 0x3b9bf2e1,
    VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES_KHR                               = 0x3b9bf2e1,
    VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO                                    = 0x3b9bf6c8,
    VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO_KHR                                = 0x3b9bf6c8,
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
    VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS                                   = 0x3b9cba18,
    VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS_KHR                               = 0x3b9cba18,
    VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO                                  = 0x3b9cba19,
    VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO_KHR                              = 0x3b9cba19,
    VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT                                = 0x3b9cbe00,
    VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT                                 = 0x3b9cbe01,
    VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT                                           = 0x3b9cbe02,
    VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT                         = 0x3b9cbe03,
    VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT                           = 0x3b9cbe04,
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
    VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD                       = 0x3b9d94d8,
    VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_EXT                                   = 0x3b9d98c0,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD                      = 0x3b9d9ca8,
    VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD                    = 0x3b9dac48,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT         = 0x3b9db030,
    VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT             = 0x3b9db031,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT           = 0x3b9db032,
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
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT               = 0x3b9e1d90,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT             = 0x3b9e1d91,
    VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT                = 0x3b9e1d92,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES_EXT                = 0x3b9e2948,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES_EXT            = 0x3b9e38e8,
    VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO_EXT    = 0x3b9e38e9,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES_EXT              = 0x3b9e38ea,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD                    = 0x3b9e40b8,
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
    VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT                                = 0x3b9eb200,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT                 = 0x3b9ebdb8,
    VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_EXT               = 0x3b9ebdb9,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT               = 0x3b9ebdba,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES_EXT                   = 0x3b9ec588,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT                   = 0x3b9ed528,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR     = 0x3b9ee4c8,
    VK_STRUCTURE_TYPE_PIPELINE_INFO_KHR                                               = 0x3b9ee4c9,
    VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_PROPERTIES_KHR                              = 0x3b9ee4ca,
    VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INFO_KHR                                    = 0x3b9ee4cb,
    VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_STATISTIC_KHR                               = 0x3b9ee4cc,
    VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR                 = 0x3b9ee4cd,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES_EXT = 0x3b9f0020,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT             = 0x3b9f13a8,
    VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES_EXT           = 0x3b9f13a9,

    // VkSubpassContents


    // VkSystemAllocationScope


    // VkTessellationDomainOrigin

    VK_TESSELLATION_DOMAIN_ORIGIN_UPPER_LEFT_KHR                                      = 0,
    VK_TESSELLATION_DOMAIN_ORIGIN_LOWER_LEFT_KHR                                      = 1,

    // VkTessellationDomainOriginKHR


    // VkTimeDomainEXT


    // VkValidationCacheHeaderVersionEXT


    // VkVendorId


    // VkVertexInputRate


    // VkViewportCoordinateSwizzleNV


};


// import enums to namespace

// UNGROUPED

VKBINDING_CONSTEXPR static const VKenum VK_EXT_HEADLESS_SURFACE_SPEC_VERSION = VKenum::VK_EXT_HEADLESS_SURFACE_SPEC_VERSION;
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
VKBINDING_CONSTEXPR static const VKenum VK_KHR_MULTIVIEW_SPEC_VERSION = VKenum::VK_KHR_MULTIVIEW_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_IMG_FORMAT_PVRTC_SPEC_VERSION = VKenum::VK_IMG_FORMAT_PVRTC_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_EXTERNAL_MEMORY_CAPABILITIES_SPEC_VERSION = VKenum::VK_NV_EXTERNAL_MEMORY_CAPABILITIES_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_EXTERNAL_MEMORY_SPEC_VERSION = VKenum::VK_NV_EXTERNAL_MEMORY_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_GET_PHYSICAL_DEVICE_PROPERTIES_2_SPEC_VERSION = VKenum::VK_KHR_GET_PHYSICAL_DEVICE_PROPERTIES_2_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_VALIDATION_FLAGS_SPEC_VERSION = VKenum::VK_EXT_VALIDATION_FLAGS_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_SHADER_DRAW_PARAMETERS_SPEC_VERSION = VKenum::VK_KHR_SHADER_DRAW_PARAMETERS_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_SHADER_SUBGROUP_BALLOT_SPEC_VERSION = VKenum::VK_EXT_SHADER_SUBGROUP_BALLOT_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_SHADER_SUBGROUP_VOTE_SPEC_VERSION = VKenum::VK_EXT_SHADER_SUBGROUP_VOTE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_TEXTURE_COMPRESSION_ASTC_HDR_SPEC_VERSION = VKenum::VK_EXT_TEXTURE_COMPRESSION_ASTC_HDR_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_ASTC_DECODE_MODE_SPEC_VERSION = VKenum::VK_EXT_ASTC_DECODE_MODE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_DEVICE_GROUP_CREATION_SPEC_VERSION = VKenum::VK_KHR_DEVICE_GROUP_CREATION_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTERNAL_MEMORY_CAPABILITIES_SPEC_VERSION = VKenum::VK_KHR_EXTERNAL_MEMORY_CAPABILITIES_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTERNAL_MEMORY_SPEC_VERSION = VKenum::VK_KHR_EXTERNAL_MEMORY_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTERNAL_MEMORY_FD_SPEC_VERSION = VKenum::VK_KHR_EXTERNAL_MEMORY_FD_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTERNAL_SEMAPHORE_CAPABILITIES_SPEC_VERSION = VKenum::VK_KHR_EXTERNAL_SEMAPHORE_CAPABILITIES_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTERNAL_SEMAPHORE_SPEC_VERSION = VKenum::VK_KHR_EXTERNAL_SEMAPHORE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_EXTERNAL_SEMAPHORE_FD_SPEC_VERSION = VKenum::VK_KHR_EXTERNAL_SEMAPHORE_FD_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_CONDITIONAL_RENDERING_SPEC_VERSION = VKenum::VK_EXT_CONDITIONAL_RENDERING_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_SHADER_FLOAT16_INT8_SPEC_VERSION = VKenum::VK_KHR_SHADER_FLOAT16_INT8_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_16BIT_STORAGE_SPEC_VERSION = VKenum::VK_KHR_16BIT_STORAGE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_INCREMENTAL_PRESENT_SPEC_VERSION = VKenum::VK_KHR_INCREMENTAL_PRESENT_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_DESCRIPTOR_UPDATE_TEMPLATE_SPEC_VERSION = VKenum::VK_KHR_DESCRIPTOR_UPDATE_TEMPLATE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_CLIP_SPACE_W_SCALING_SPEC_VERSION = VKenum::VK_NV_CLIP_SPACE_W_SCALING_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_DIRECT_MODE_DISPLAY_SPEC_VERSION = VKenum::VK_EXT_DIRECT_MODE_DISPLAY_SPEC_VERSION;
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
VKBINDING_CONSTEXPR static const VKenum VK_AMD_PIPELINE_COMPILER_CONTROL_SPEC_VERSION = VKenum::VK_AMD_PIPELINE_COMPILER_CONTROL_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_CALIBRATED_TIMESTAMPS_SPEC_VERSION = VKenum::VK_EXT_CALIBRATED_TIMESTAMPS_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_SHADER_CORE_PROPERTIES_SPEC_VERSION = VKenum::VK_AMD_SHADER_CORE_PROPERTIES_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_MEMORY_OVERALLOCATION_BEHAVIOR_SPEC_VERSION = VKenum::VK_AMD_MEMORY_OVERALLOCATION_BEHAVIOR_SPEC_VERSION;
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
VKBINDING_CONSTEXPR static const VKenum VK_EXT_FRAGMENT_DENSITY_MAP_SPEC_VERSION = VKenum::VK_EXT_FRAGMENT_DENSITY_MAP_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_SCALAR_BLOCK_LAYOUT_SPEC_VERSION = VKenum::VK_EXT_SCALAR_BLOCK_LAYOUT_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_GOOGLE_HLSL_FUNCTIONALITY1_SPEC_VERSION = VKenum::VK_GOOGLE_HLSL_FUNCTIONALITY1_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_GOOGLE_DECORATE_STRING_SPEC_VERSION = VKenum::VK_GOOGLE_DECORATE_STRING_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_SHADER_CORE_PROPERTIES_2_SPEC_VERSION = VKenum::VK_AMD_SHADER_CORE_PROPERTIES_2_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_MEMORY_BUDGET_SPEC_VERSION = VKenum::VK_EXT_MEMORY_BUDGET_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_MEMORY_PRIORITY_SPEC_VERSION = VKenum::VK_EXT_MEMORY_PRIORITY_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_SURFACE_PROTECTED_CAPABILITIES_SPEC_VERSION = VKenum::VK_KHR_SURFACE_PROTECTED_CAPABILITIES_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_DEDICATED_ALLOCATION_IMAGE_ALIASING_SPEC_VERSION = VKenum::VK_NV_DEDICATED_ALLOCATION_IMAGE_ALIASING_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_SEPARATE_STENCIL_USAGE_SPEC_VERSION = VKenum::VK_EXT_SEPARATE_STENCIL_USAGE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_COOPERATIVE_MATRIX_SPEC_VERSION = VKenum::VK_NV_COOPERATIVE_MATRIX_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_COVERAGE_REDUCTION_MODE_SPEC_VERSION = VKenum::VK_NV_COVERAGE_REDUCTION_MODE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_FRAGMENT_SHADER_INTERLOCK_SPEC_VERSION = VKenum::VK_EXT_FRAGMENT_SHADER_INTERLOCK_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_YCBCR_IMAGE_ARRAYS_SPEC_VERSION = VKenum::VK_EXT_YCBCR_IMAGE_ARRAYS_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_UNIFORM_BUFFER_STANDARD_LAYOUT_SPEC_VERSION = VKenum::VK_KHR_UNIFORM_BUFFER_STANDARD_LAYOUT_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_LINE_RASTERIZATION_SPEC_VERSION = VKenum::VK_EXT_LINE_RASTERIZATION_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_HOST_QUERY_RESET_SPEC_VERSION = VKenum::VK_EXT_HOST_QUERY_RESET_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_INDEX_TYPE_UINT8_SPEC_VERSION = VKenum::VK_EXT_INDEX_TYPE_UINT8_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_PIPELINE_EXECUTABLE_PROPERTIES_SPEC_VERSION = VKenum::VK_KHR_PIPELINE_EXECUTABLE_PROPERTIES_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_SHADER_DEMOTE_TO_HELPER_INVOCATION_SPEC_VERSION = VKenum::VK_EXT_SHADER_DEMOTE_TO_HELPER_INVOCATION_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_TEXEL_BUFFER_ALIGNMENT_SPEC_VERSION = VKenum::VK_EXT_TEXEL_BUFFER_ALIGNMENT_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_GPU_SHADER_HALF_FLOAT_SPEC_VERSION = VKenum::VK_AMD_GPU_SHADER_HALF_FLOAT_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_CORNER_SAMPLED_IMAGE_SPEC_VERSION = VKenum::VK_NV_CORNER_SAMPLED_IMAGE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_MAINTENANCE1_SPEC_VERSION = VKenum::VK_KHR_MAINTENANCE1_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_PUSH_DESCRIPTOR_SPEC_VERSION = VKenum::VK_KHR_PUSH_DESCRIPTOR_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_AMD_GPU_SHADER_INT16_SPEC_VERSION = VKenum::VK_AMD_GPU_SHADER_INT16_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_BLEND_OPERATION_ADVANCED_SPEC_VERSION = VKenum::VK_EXT_BLEND_OPERATION_ADVANCED_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_DESCRIPTOR_INDEXING_SPEC_VERSION = VKenum::VK_EXT_DESCRIPTOR_INDEXING_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_FILTER_CUBIC_SPEC_VERSION = VKenum::VK_EXT_FILTER_CUBIC_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_GLOBAL_PRIORITY_SPEC_VERSION = VKenum::VK_EXT_GLOBAL_PRIORITY_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_DEVICE_DIAGNOSTIC_CHECKPOINTS_SPEC_VERSION = VKenum::VK_NV_DEVICE_DIAGNOSTIC_CHECKPOINTS_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_PCI_BUS_INFO_SPEC_VERSION = VKenum::VK_EXT_PCI_BUS_INFO_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_SUBGROUP_SIZE_CONTROL_SPEC_VERSION = VKenum::VK_EXT_SUBGROUP_SIZE_CONTROL_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_BUFFER_DEVICE_ADDRESS_SPEC_VERSION = VKenum::VK_EXT_BUFFER_DEVICE_ADDRESS_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_VALIDATION_FEATURES_SPEC_VERSION = VKenum::VK_EXT_VALIDATION_FEATURES_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_DISPLAY_SPEC_VERSION = VKenum::VK_KHR_DISPLAY_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_SURFACE_SPEC_VERSION = VKenum::VK_KHR_SURFACE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_DEVICE_GROUP_SPEC_VERSION = VKenum::VK_KHR_DEVICE_GROUP_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NVX_DEVICE_GENERATED_COMMANDS_SPEC_VERSION = VKenum::VK_NVX_DEVICE_GENERATED_COMMANDS_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_DEDICATED_ALLOCATION_SPEC_VERSION = VKenum::VK_KHR_DEDICATED_ALLOCATION_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_SHADING_RATE_IMAGE_SPEC_VERSION = VKenum::VK_NV_SHADING_RATE_IMAGE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_NV_RAY_TRACING_SPEC_VERSION = VKenum::VK_NV_RAY_TRACING_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_VERTEX_ATTRIBUTE_DIVISOR_SPEC_VERSION = VKenum::VK_EXT_VERTEX_ATTRIBUTE_DIVISOR_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_VULKAN_MEMORY_MODEL_SPEC_VERSION = VKenum::VK_KHR_VULKAN_MEMORY_MODEL_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_DEBUG_MARKER_SPEC_VERSION = VKenum::VK_EXT_DEBUG_MARKER_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_SWAPCHAIN_COLOR_SPACE_SPEC_VERSION = VKenum::VK_EXT_SWAPCHAIN_COLOR_SPACE_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_SHADER_FLOAT_CONTROLS_SPEC_VERSION = VKenum::VK_KHR_SHADER_FLOAT_CONTROLS_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_SWAPCHAIN_SPEC_VERSION = VKenum::VK_KHR_SWAPCHAIN_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_KHR_DISPLAY_SWAPCHAIN_SPEC_VERSION = VKenum::VK_KHR_DISPLAY_SWAPCHAIN_SPEC_VERSION;
VKBINDING_CONSTEXPR static const VKenum VK_EXT_DEBUG_REPORT_SPEC_VERSION = VKenum::VK_EXT_DEBUG_REPORT_SPEC_VERSION;

// VkAccelerationStructureMemoryRequirementsTypeNV


// VkAccelerationStructureTypeNV


// VkAttachmentLoadOp


// VkAttachmentStoreOp


// VkBlendFactor


// VkBlendOp

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

// VkBlendOverlapEXT


// VkBorderColor


// VkChromaLocation

VKBINDING_CONSTEXPR static const VKenum VK_CHROMA_LOCATION_COSITED_EVEN_KHR = VKenum::VK_CHROMA_LOCATION_COSITED_EVEN_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_CHROMA_LOCATION_MIDPOINT_KHR = VKenum::VK_CHROMA_LOCATION_MIDPOINT_KHR;

// VkChromaLocationKHR


// VkCoarseSampleOrderTypeNV


// VkColorSpaceKHR

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


// VkCompareOp


// VkComponentSwizzle


// VkComponentTypeNV


// VkConservativeRasterizationModeEXT


// VkCopyAccelerationStructureModeNV


// VkCoverageModulationModeNV


// VkCoverageReductionModeNV


// VkDebugReportObjectTypeEXT

VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_KHR_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_KHR_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_KHR_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_KHR_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DEBUG_REPORT_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV_EXT = VKenum::VK_DEBUG_REPORT_OBJECT_TYPE_ACCELERATION_STRUCTURE_NV_EXT;

// VkDescriptorType

VKBINDING_CONSTEXPR static const VKenum VK_DESCRIPTOR_TYPE_INLINE_UNIFORM_BLOCK_EXT = VKenum::VK_DESCRIPTOR_TYPE_INLINE_UNIFORM_BLOCK_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_NV = VKenum::VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_NV;

// VkDescriptorUpdateTemplateType

VKBINDING_CONSTEXPR static const VKenum VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET_KHR = VKenum::VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_PUSH_DESCRIPTORS_KHR = VKenum::VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_PUSH_DESCRIPTORS_KHR;

// VkDescriptorUpdateTemplateTypeKHR


// VkDeviceEventTypeEXT


// VkDiscardRectangleModeEXT


// VkDisplayEventTypeEXT


// VkDisplayPowerStateEXT


// VkDriverIdKHR


// VkDynamicState

VKBINDING_CONSTEXPR static const VKenum VK_DYNAMIC_STATE_VIEWPORT_W_SCALING_NV = VKenum::VK_DYNAMIC_STATE_VIEWPORT_W_SCALING_NV;
VKBINDING_CONSTEXPR static const VKenum VK_DYNAMIC_STATE_DISCARD_RECTANGLE_EXT = VKenum::VK_DYNAMIC_STATE_DISCARD_RECTANGLE_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DYNAMIC_STATE_SAMPLE_LOCATIONS_EXT = VKenum::VK_DYNAMIC_STATE_SAMPLE_LOCATIONS_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_DYNAMIC_STATE_VIEWPORT_SHADING_RATE_PALETTE_NV = VKenum::VK_DYNAMIC_STATE_VIEWPORT_SHADING_RATE_PALETTE_NV;
VKBINDING_CONSTEXPR static const VKenum VK_DYNAMIC_STATE_VIEWPORT_COARSE_SAMPLE_ORDER_NV = VKenum::VK_DYNAMIC_STATE_VIEWPORT_COARSE_SAMPLE_ORDER_NV;
VKBINDING_CONSTEXPR static const VKenum VK_DYNAMIC_STATE_EXCLUSIVE_SCISSOR_NV = VKenum::VK_DYNAMIC_STATE_EXCLUSIVE_SCISSOR_NV;
VKBINDING_CONSTEXPR static const VKenum VK_DYNAMIC_STATE_LINE_STIPPLE_EXT = VKenum::VK_DYNAMIC_STATE_LINE_STIPPLE_EXT;

// VKenum


// VkFilter

VKBINDING_CONSTEXPR static const VKenum VK_FILTER_CUBIC_IMG = VKenum::VK_FILTER_CUBIC_IMG;
VKBINDING_CONSTEXPR static const VKenum VK_FILTER_CUBIC_EXT = VKenum::VK_FILTER_CUBIC_EXT;

// VkFormat

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

// VkFrontFace


// VkGeometryTypeNV


// VkImageLayout

VKBINDING_CONSTEXPR static const VKenum VK_IMAGE_LAYOUT_PRESENT_SRC_KHR = VKenum::VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_IMAGE_LAYOUT_SHARED_PRESENT_KHR = VKenum::VK_IMAGE_LAYOUT_SHARED_PRESENT_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL = VKenum::VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL;
VKBINDING_CONSTEXPR static const VKenum VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL_KHR = VKenum::VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL = VKenum::VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL;
VKBINDING_CONSTEXPR static const VKenum VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL_KHR = VKenum::VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_IMAGE_LAYOUT_SHADING_RATE_OPTIMAL_NV = VKenum::VK_IMAGE_LAYOUT_SHADING_RATE_OPTIMAL_NV;
VKBINDING_CONSTEXPR static const VKenum VK_IMAGE_LAYOUT_FRAGMENT_DENSITY_MAP_OPTIMAL_EXT = VKenum::VK_IMAGE_LAYOUT_FRAGMENT_DENSITY_MAP_OPTIMAL_EXT;

// VkImageTiling

VKBINDING_CONSTEXPR static const VKenum VK_IMAGE_TILING_DRM_FORMAT_MODIFIER_EXT = VKenum::VK_IMAGE_TILING_DRM_FORMAT_MODIFIER_EXT;

// VkImageType


// VkImageViewType


// VkIndexType

VKBINDING_CONSTEXPR static const VKenum VK_INDEX_TYPE_NONE_NV = VKenum::VK_INDEX_TYPE_NONE_NV;
VKBINDING_CONSTEXPR static const VKenum VK_INDEX_TYPE_UINT8_EXT = VKenum::VK_INDEX_TYPE_UINT8_EXT;

// VkIndirectCommandsTokenTypeNVX


// VkInternalAllocationType


// VkLineRasterizationModeEXT


// VkLogicOp


// VkMemoryOverallocationBehaviorAMD


// VkObjectEntryTypeNVX


// VkObjectType

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

// VkPerformanceConfigurationTypeINTEL


// VkPerformanceOverrideTypeINTEL


// VkPerformanceParameterTypeINTEL


// VkPerformanceValueTypeINTEL


// VkPhysicalDeviceType


// VkPipelineBindPoint

VKBINDING_CONSTEXPR static const VKenum VK_PIPELINE_BIND_POINT_RAY_TRACING_NV = VKenum::VK_PIPELINE_BIND_POINT_RAY_TRACING_NV;

// VkPipelineCacheHeaderVersion


// VkPipelineExecutableStatisticFormatKHR


// VkPointClippingBehavior

VKBINDING_CONSTEXPR static const VKenum VK_POINT_CLIPPING_BEHAVIOR_ALL_CLIP_PLANES_KHR = VKenum::VK_POINT_CLIPPING_BEHAVIOR_ALL_CLIP_PLANES_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_POINT_CLIPPING_BEHAVIOR_USER_CLIP_PLANES_ONLY_KHR = VKenum::VK_POINT_CLIPPING_BEHAVIOR_USER_CLIP_PLANES_ONLY_KHR;

// VkPointClippingBehaviorKHR


// VkPolygonMode

VKBINDING_CONSTEXPR static const VKenum VK_POLYGON_MODE_FILL_RECTANGLE_NV = VKenum::VK_POLYGON_MODE_FILL_RECTANGLE_NV;

// VkPresentModeKHR

VKBINDING_CONSTEXPR static const VKenum VK_PRESENT_MODE_SHARED_DEMAND_REFRESH_KHR = VKenum::VK_PRESENT_MODE_SHARED_DEMAND_REFRESH_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_PRESENT_MODE_SHARED_CONTINUOUS_REFRESH_KHR = VKenum::VK_PRESENT_MODE_SHARED_CONTINUOUS_REFRESH_KHR;

// VkPrimitiveTopology


// VkQueryPoolSamplingModeINTEL


// VkQueryType

VKBINDING_CONSTEXPR static const VKenum VK_QUERY_TYPE_TRANSFORM_FEEDBACK_STREAM_EXT = VKenum::VK_QUERY_TYPE_TRANSFORM_FEEDBACK_STREAM_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_QUERY_TYPE_ACCELERATION_STRUCTURE_COMPACTED_SIZE_NV = VKenum::VK_QUERY_TYPE_ACCELERATION_STRUCTURE_COMPACTED_SIZE_NV;
VKBINDING_CONSTEXPR static const VKenum VK_QUERY_TYPE_PERFORMANCE_QUERY_INTEL = VKenum::VK_QUERY_TYPE_PERFORMANCE_QUERY_INTEL;

// VkQueueGlobalPriorityEXT


// VkRasterizationOrderAMD


// VkRayTracingShaderGroupTypeNV


// VkResult

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

// VkSamplerAddressMode

VKBINDING_CONSTEXPR static const VKenum VK_SAMPLER_ADDRESS_MODE_MIRROR_CLAMP_TO_EDGE = VKenum::VK_SAMPLER_ADDRESS_MODE_MIRROR_CLAMP_TO_EDGE;

// VkSamplerMipmapMode


// VkSamplerReductionModeEXT


// VkSamplerYcbcrModelConversion

VKBINDING_CONSTEXPR static const VKenum VK_SAMPLER_YCBCR_MODEL_CONVERSION_RGB_IDENTITY_KHR = VKenum::VK_SAMPLER_YCBCR_MODEL_CONVERSION_RGB_IDENTITY_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_IDENTITY_KHR = VKenum::VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_IDENTITY_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_709_KHR = VKenum::VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_709_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_601_KHR = VKenum::VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_601_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_2020_KHR = VKenum::VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_2020_KHR;

// VkSamplerYcbcrModelConversionKHR


// VkSamplerYcbcrRange

VKBINDING_CONSTEXPR static const VKenum VK_SAMPLER_YCBCR_RANGE_ITU_FULL_KHR = VKenum::VK_SAMPLER_YCBCR_RANGE_ITU_FULL_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_SAMPLER_YCBCR_RANGE_ITU_NARROW_KHR = VKenum::VK_SAMPLER_YCBCR_RANGE_ITU_NARROW_KHR;

// VkSamplerYcbcrRangeKHR


// VkScopeNV


// VkShaderFloatControlsIndependenceKHR


// VkShaderInfoTypeAMD


// VkShadingRatePaletteEntryNV


// VkSharingMode


// VkStencilOp


// VkStructureType

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
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES_KHR = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES_KHR = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV = VKenum::VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV = VKenum::VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV;
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
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR = VKenum::VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES = VKenum::VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES_KHR = VKenum::VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO = VKenum::VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO_KHR;
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
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS = VKenum::VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS_KHR = VKenum::VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO = VKenum::VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT = VKenum::VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT = VKenum::VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT;
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
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD = VKenum::VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD = VKenum::VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT;
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
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD;
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
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_EXT = VKenum::VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_PIPELINE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_PROPERTIES_KHR = VKenum::VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_PROPERTIES_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INFO_KHR = VKenum::VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INFO_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_STATISTIC_KHR = VKenum::VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_STATISTIC_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR = VKenum::VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT;
VKBINDING_CONSTEXPR static const VKenum VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES_EXT = VKenum::VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES_EXT;

// VkSubpassContents


// VkSystemAllocationScope


// VkTessellationDomainOrigin

VKBINDING_CONSTEXPR static const VKenum VK_TESSELLATION_DOMAIN_ORIGIN_UPPER_LEFT_KHR = VKenum::VK_TESSELLATION_DOMAIN_ORIGIN_UPPER_LEFT_KHR;
VKBINDING_CONSTEXPR static const VKenum VK_TESSELLATION_DOMAIN_ORIGIN_LOWER_LEFT_KHR = VKenum::VK_TESSELLATION_DOMAIN_ORIGIN_LOWER_LEFT_KHR;

// VkTessellationDomainOriginKHR


// VkTimeDomainEXT


// VkValidationCacheHeaderVersionEXT


// VkVendorId


// VkVertexInputRate


// VkViewportCoordinateSwizzleNV




} // namespace vk