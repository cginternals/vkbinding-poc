
#include "Binding_pch.h"


using namespace vk;


namespace vkbinding
{


Function<void, VkQueue, const VkDebugUtilsLabelEXT*> Binding::QueueBeginDebugUtilsLabelEXT("vkQueueBeginDebugUtilsLabelEXT");
Function<VkResult, VkQueue, uint32_t, const VkBindSparseInfo*, VkFence> Binding::QueueBindSparse("vkQueueBindSparse");
Function<void, VkQueue> Binding::QueueEndDebugUtilsLabelEXT("vkQueueEndDebugUtilsLabelEXT");
Function<void, VkQueue, const VkDebugUtilsLabelEXT*> Binding::QueueInsertDebugUtilsLabelEXT("vkQueueInsertDebugUtilsLabelEXT");
Function<VkResult, VkQueue, const VkPresentInfoKHR*> Binding::QueuePresentKHR("vkQueuePresentKHR");
Function<VkResult, VkQueue, VkPerformanceConfigurationINTEL> Binding::QueueSetPerformanceConfigurationINTEL("vkQueueSetPerformanceConfigurationINTEL");
Function<VkResult, VkQueue, uint32_t, const VkSubmitInfo*, VkFence> Binding::QueueSubmit("vkQueueSubmit");
Function<VkResult, VkQueue> Binding::QueueWaitIdle("vkQueueWaitIdle");


} // namespace vkbinding