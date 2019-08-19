
#pragma once


#include <vkbinding/Boolean32.h>

#include <vkbinding/vkbinding_api.h>
#include <vkbinding/vkbinding_features.h>
#include <vkbinding/novk.h>


namespace vk
{


using VkBool32 = vkbinding::Boolean32;


// import booleans to namespace

VKBINDING_CONSTEXPR static const VkBool32 VK_FALSE = VkBool32(0);
VKBINDING_CONSTEXPR static const VkBool32 VK_TRUE = VkBool32(1);


} // namespace vk