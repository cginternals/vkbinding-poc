
#include "../Binding_pch.h"

#include <vkbinding/vk/functions.h>


namespace vk
{


void vkTrimCommandPool(VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlags flags)
{
    return vkbinding::Binding::TrimCommandPool(device, commandPool, flags);
}

void vkTrimCommandPoolKHR(VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlags flags)
{
    return vkbinding::Binding::TrimCommandPoolKHR(device, commandPool, flags);
}


} // namespace vk