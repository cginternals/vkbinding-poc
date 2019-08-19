
#pragma once


#include <vkbinding/vkbinding_features.h>

#include <vkbinding/novk.h>
#include <vkbinding/vk/types.h>


namespace vk
{


VKBINDING_CONSTEXPR static const unsigned int VK_ATTACHMENT_UNUSED = (~0U);
VKBINDING_CONSTEXPR static const float VK_LOD_CLAMP_NONE = 1000.0f;
VKBINDING_CONSTEXPR static const unsigned int VK_LUID_SIZE = 8;
VKBINDING_CONSTEXPR static const unsigned int VK_LUID_SIZE_KHR = 8;
VKBINDING_CONSTEXPR static const unsigned int VK_MAX_DEVICE_GROUP_SIZE = 32;
VKBINDING_CONSTEXPR static const unsigned int VK_MAX_DEVICE_GROUP_SIZE_KHR = 32;
VKBINDING_CONSTEXPR static const unsigned int VK_MAX_DRIVER_INFO_SIZE_KHR = 256;
VKBINDING_CONSTEXPR static const unsigned int VK_MAX_DRIVER_NAME_SIZE_KHR = 256;
VKBINDING_CONSTEXPR static const unsigned int VK_QUEUE_FAMILY_EXTERNAL = (~0U-1);
VKBINDING_CONSTEXPR static const unsigned int VK_QUEUE_FAMILY_EXTERNAL_KHR = (~0U-1);
VKBINDING_CONSTEXPR static const unsigned int VK_QUEUE_FAMILY_FOREIGN_EXT = (~0U-2);
VKBINDING_CONSTEXPR static const unsigned int VK_QUEUE_FAMILY_IGNORED = (~0U);
VKBINDING_CONSTEXPR static const unsigned int VK_REMAINING_ARRAY_LAYERS = (~0U);
VKBINDING_CONSTEXPR static const unsigned int VK_REMAINING_MIP_LEVELS = (~0U);
VKBINDING_CONSTEXPR static const unsigned int VK_SHADER_UNUSED_NV = (~0U);
VKBINDING_CONSTEXPR static const unsigned int VK_SUBPASS_EXTERNAL = (~0U);
VKBINDING_CONSTEXPR static const unsigned long long VK_WHOLE_SIZE = (~0ULL);


} // namespace vk