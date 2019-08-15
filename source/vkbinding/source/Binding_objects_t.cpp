
#include "Binding_pch.h"


using namespace vk;


namespace vkbinding
{


Function<void, VkDevice, VkCommandPool, VkCommandPoolTrimFlags> Binding::TrimCommandPool("vkTrimCommandPool");
Function<void, VkDevice, VkCommandPool, VkCommandPoolTrimFlags> Binding::TrimCommandPoolKHR("vkTrimCommandPoolKHR");


} // namespace vkbinding