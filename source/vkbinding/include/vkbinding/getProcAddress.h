
#pragma once


#include <vkbinding/vkbinding_api.h>

#include <vkbinding/ProcAddress.h>


namespace vkbinding
{


VKBINDING_API ProcAddress getProcAddress(const char * name);
VKBINDING_API ProcAddress getInstanceProcAddress(vk::VkInstance instance, const char * name);
VKBINDING_API ProcAddress getDeviceProcAddress(vk::VkDevice device, const char * name);


} // namespace vkbinding
