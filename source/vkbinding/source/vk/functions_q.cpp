
#include "../Binding_pch.h"

#include <vkbinding/vk/functions.h>


namespace vk
{


void vkQueueBeginDebugUtilsLabelEXT(VkQueue queue, const VkDebugUtilsLabelEXT* pLabelInfo)
{
    return vkbinding::Binding::QueueBeginDebugUtilsLabelEXT(queue, pLabelInfo);
}

VkResult vkQueueBindSparse(VkQueue queue, uint32_t bindInfoCount, const VkBindSparseInfo* pBindInfo, VkFence fence)
{
    return vkbinding::Binding::QueueBindSparse(queue, bindInfoCount, pBindInfo, fence);
}

void vkQueueEndDebugUtilsLabelEXT(VkQueue queue)
{
    return vkbinding::Binding::QueueEndDebugUtilsLabelEXT(queue);
}

void vkQueueInsertDebugUtilsLabelEXT(VkQueue queue, const VkDebugUtilsLabelEXT* pLabelInfo)
{
    return vkbinding::Binding::QueueInsertDebugUtilsLabelEXT(queue, pLabelInfo);
}

VkResult vkQueuePresentKHR(VkQueue queue, const VkPresentInfoKHR* pPresentInfo)
{
    return vkbinding::Binding::QueuePresentKHR(queue, pPresentInfo);
}

VkResult vkQueueSetPerformanceConfigurationINTEL(VkQueue queue, VkPerformanceConfigurationINTEL configuration)
{
    return vkbinding::Binding::QueueSetPerformanceConfigurationINTEL(queue, configuration);
}

VkResult vkQueueSignalReleaseImageANDROID(VkQueue queue, uint32_t waitSemaphoreCount, const VkSemaphore* pWaitSemaphores, VkImage image, int* pNativeFenceFd)
{
    return vkbinding::Binding::QueueSignalReleaseImageANDROID(queue, waitSemaphoreCount, pWaitSemaphores, image, pNativeFenceFd);
}

VkResult vkQueueSubmit(VkQueue queue, uint32_t submitCount, const VkSubmitInfo* pSubmits, VkFence fence)
{
    return vkbinding::Binding::QueueSubmit(queue, submitCount, pSubmits, fence);
}

VkResult vkQueueWaitIdle(VkQueue queue)
{
    return vkbinding::Binding::QueueWaitIdle(queue);
}


} // namespace vk