
#pragma once


#include <functional>

#include <vkbinding/vkbinding_api.h>

#include <vkbinding/vk/types.h>


namespace vkbinding
{


/**
*  @brief
*    The generic pointer to a function
*/
using ProcAddress = void(*)();

/**
*  @brief
*    The signature for the getProcAddress function
*/
using GetProcAddress = std::function<ProcAddress(const char*)>;

/**
*  @brief
*    The signature for the getInstanceProcAddress function
*/
using GetInstanceProcAddress = std::function<ProcAddress(vk::VkInstance instance, const char*)>;

/**
*  @brief
*    The signature for the getDeviceProcAddress function
*/
using GetDeviceProcAddress = std::function<ProcAddress(vk::VkDevice instance, const char*)>;


} // namespace vkbinding
