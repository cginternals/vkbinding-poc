#pragma once


#include <vkbinding/Boolean8.h>

#include <vkbinding/vkbinding_api.h>
#include <vkbinding/vkbinding_features.h>
#include <vkbinding/novk.h>


namespace vk
{


using VKBoolean = vkbinding::Boolean8;


} // namespace vk


namespace vk
{

// import booleans to namespace

VKBINDING_CONSTEXPR static const VKBoolean EGL_FALSE = VKBoolean(0);
VKBINDING_CONSTEXPR static const VKBoolean EGL_TRUE = VKBoolean(1);


} // namespace vk
