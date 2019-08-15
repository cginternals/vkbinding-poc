
#include "Binding_pch.h"


using namespace vk;


namespace vkbinding
{


Function<VkResult, VkDevice, uint32_t, const VkFence*, VkBool32, uint64_t> Binding::WaitForFences("vkWaitForFences");


} // namespace vkbinding