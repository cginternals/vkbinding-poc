
#pragma once


#include <functional>

#include <vkbinding/vkbinding_api.h>


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


} // namespace vkbinding