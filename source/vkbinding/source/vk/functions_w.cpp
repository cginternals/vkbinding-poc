
#include "../Binding_pch.h"

#include <vkbinding/vk/functions.h>


namespace vk
{


VkResult vkWaitForFences(VkDevice device, uint32_t fenceCount, const VkFence* pFences, VkBool32 waitAll, uint64_t timeout)
{
    return vkbinding::Binding::WaitForFences(device, fenceCount, pFences, waitAll, timeout);
}


} // namespace vk