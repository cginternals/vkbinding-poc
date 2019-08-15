
#pragma once


#include <string>
#include <iosfwd>

#include <vkbinding-aux/vkbinding-aux_api.h>
#include <vkbinding-aux/vkbinding-aux_features.h>

#include <vkbinding/vk/types.h>
#include <vkbinding/Value.h>


namespace vk
{


VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VKboolean & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VKenum & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VKextension & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const UnusedMask & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkAccessFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkAttachmentDescriptionFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkBufferCreateFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkBufferUsageFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkBufferViewCreateFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkBuildAccelerationStructureFlagBitsNV & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkColorComponentFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkCommandBufferResetFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkCommandBufferUsageFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkCommandPoolCreateFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkCommandPoolResetFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkCompositeAlphaFlagBitsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkConditionalRenderingFlagBitsEXT & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkCullModeFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkDebugReportFlagBitsEXT & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkDebugUtilsMessageSeverityFlagBitsEXT & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkDebugUtilsMessageTypeFlagBitsEXT & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkDependencyFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkDescriptorBindingFlagBitsEXT & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkDescriptorPoolCreateFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkDescriptorSetLayoutCreateFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkDeviceCreateFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkDeviceGroupPresentModeFlagBitsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkDeviceQueueCreateFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkDisplayPlaneAlphaFlagBitsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkExternalFenceFeatureFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkExternalFenceFeatureFlagBitsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkExternalFenceHandleTypeFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkExternalFenceHandleTypeFlagBitsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkExternalMemoryFeatureFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkExternalMemoryFeatureFlagBitsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkExternalMemoryFeatureFlagBitsNV & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkExternalMemoryHandleTypeFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkExternalMemoryHandleTypeFlagBitsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkExternalMemoryHandleTypeFlagBitsNV & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkExternalSemaphoreFeatureFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkExternalSemaphoreFeatureFlagBitsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkExternalSemaphoreHandleTypeFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkExternalSemaphoreHandleTypeFlagBitsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkFenceCreateFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkFenceImportFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkFenceImportFlagBitsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkFormatFeatureFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkFramebufferCreateFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkGeometryFlagBitsNV & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkGeometryInstanceFlagBitsNV & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkImageAspectFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkImageCreateFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkImageUsageFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkImageViewCreateFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkIndirectCommandsLayoutUsageFlagBitsNVX & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkInstanceCreateFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkMemoryAllocateFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkMemoryAllocateFlagBitsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkMemoryHeapFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkMemoryPropertyFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkObjectEntryUsageFlagBitsNVX & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPeerMemoryFeatureFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPeerMemoryFeatureFlagBitsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineCacheCreateFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineColorBlendStateCreateFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineCreateFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineCreationFeedbackFlagBitsEXT & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineDepthStencilStateCreateFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineDynamicStateCreateFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineInputAssemblyStateCreateFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineLayoutCreateFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineMultisampleStateCreateFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineRasterizationStateCreateFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineShaderStageCreateFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineStageFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineTessellationStateCreateFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineVertexInputStateCreateFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkPipelineViewportStateCreateFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkQueryControlFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkQueryPipelineStatisticFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkQueryPoolCreateFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkQueryResultFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkQueueFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkRenderPassCreateFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkResolveModeFlagBitsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkSampleCountFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkSamplerCreateFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkSemaphoreImportFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkSemaphoreImportFlagBitsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkShaderModuleCreateFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkShaderStageFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkSparseImageFormatFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkSparseMemoryBindFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkStencilFaceFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkSubgroupFeatureFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkSubpassDescriptionFlagBits & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkSurfaceCounterFlagBitsEXT & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkSurfaceTransformFlagBitsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkSwapchainCreateFlagBitsKHR & value);
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const VkSwapchainImageUsageFlagBitsANDROID & value);


} // namespace vk


namespace vkbinding
{


class Version;


/**
*  @brief
*    Generic ostream operator for the Value template
*/
template <typename T>
VKBINDING_AUX_TEMPLATE_API std::ostream & operator<<(std::ostream & stream, const Value<T> & value);

/**
*  @brief
*    Generic ostream operator for the Value template with pointer types
*/
template <typename T>
VKBINDING_AUX_TEMPLATE_API std::ostream & operator<<(std::ostream & stream, const Value<T *> & value);

/**
*  @brief
*    A specialized ostream operator for the gl::GLenum Value template
*/
template <>
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<vk::VKenum> & value);

/* <- ToDo: Add back second * when implementing this function again
*  @brief
*    A specialized ostream operator for the gl::GLbitfield Value template
*/
/*template <>
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<vk::VKbitfield> & value);*/

/**
*  @brief
*    A specialized ostream operator for the gl::GLenum Value template
*/
template <>
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Value<vk::VKboolean> & value);

/**
*  @brief
*    The operator to allow Versions to be printed onto a std::ostream
*/
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const Version & version);

/**
*  @brief
*    The operator to allow AbstractValues to be printed onto a std::ostream
*/
VKBINDING_AUX_API std::ostream & operator<<(std::ostream & stream, const AbstractValue * value);


} // namespace vkbinding


#include <vkbinding-aux/types_to_string.inl>