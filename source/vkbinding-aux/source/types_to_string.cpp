
#include <vkbinding-aux/types_to_string.h>

#include <ostream>
#include <bitset>
#include <sstream>

#include <vkbinding/Version.h>
#include <vkbinding-aux/Meta.h>

#include "types_to_string_private.h"


namespace vk
{


std::ostream & operator<<(std::ostream & stream, const VKboolean & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VKenum & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VKextension & value)
{
    stream << vkbinding::aux::Meta::getString(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const UnusedMask & value)
{
    stream << vkbinding::aux::bitfieldString<UnusedMask>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkAccessFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkAccessFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkAttachmentDescriptionFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkAttachmentDescriptionFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkBufferCreateFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkBufferCreateFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkBufferUsageFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkBufferUsageFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkBufferViewCreateFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkBufferViewCreateFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkBuildAccelerationStructureFlagBitsNV & value)
{
    stream << vkbinding::aux::bitfieldString<VkBuildAccelerationStructureFlagBitsNV>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkColorComponentFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkColorComponentFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkCommandBufferResetFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkCommandBufferResetFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkCommandBufferUsageFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkCommandBufferUsageFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkCommandPoolCreateFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkCommandPoolCreateFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkCommandPoolResetFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkCommandPoolResetFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkCompositeAlphaFlagBitsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkCompositeAlphaFlagBitsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkConditionalRenderingFlagBitsEXT & value)
{
    stream << vkbinding::aux::bitfieldString<VkConditionalRenderingFlagBitsEXT>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkCullModeFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkCullModeFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDebugReportFlagBitsEXT & value)
{
    stream << vkbinding::aux::bitfieldString<VkDebugReportFlagBitsEXT>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDebugUtilsMessageSeverityFlagBitsEXT & value)
{
    stream << vkbinding::aux::bitfieldString<VkDebugUtilsMessageSeverityFlagBitsEXT>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDebugUtilsMessageTypeFlagBitsEXT & value)
{
    stream << vkbinding::aux::bitfieldString<VkDebugUtilsMessageTypeFlagBitsEXT>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDependencyFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkDependencyFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDescriptorBindingFlagBitsEXT & value)
{
    stream << vkbinding::aux::bitfieldString<VkDescriptorBindingFlagBitsEXT>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDescriptorPoolCreateFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkDescriptorPoolCreateFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDescriptorSetLayoutCreateFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkDescriptorSetLayoutCreateFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDeviceCreateFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkDeviceCreateFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDeviceGroupPresentModeFlagBitsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkDeviceGroupPresentModeFlagBitsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDeviceQueueCreateFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkDeviceQueueCreateFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkDisplayPlaneAlphaFlagBitsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkDisplayPlaneAlphaFlagBitsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalFenceFeatureFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalFenceFeatureFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalFenceFeatureFlagBitsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalFenceFeatureFlagBitsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalFenceHandleTypeFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalFenceHandleTypeFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalFenceHandleTypeFlagBitsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalFenceHandleTypeFlagBitsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalMemoryFeatureFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalMemoryFeatureFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalMemoryFeatureFlagBitsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalMemoryFeatureFlagBitsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalMemoryFeatureFlagBitsNV & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalMemoryFeatureFlagBitsNV>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalMemoryHandleTypeFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalMemoryHandleTypeFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalMemoryHandleTypeFlagBitsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalMemoryHandleTypeFlagBitsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalMemoryHandleTypeFlagBitsNV & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalMemoryHandleTypeFlagBitsNV>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalSemaphoreFeatureFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalSemaphoreFeatureFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalSemaphoreFeatureFlagBitsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalSemaphoreFeatureFlagBitsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalSemaphoreHandleTypeFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalSemaphoreHandleTypeFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkExternalSemaphoreHandleTypeFlagBitsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkExternalSemaphoreHandleTypeFlagBitsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkFenceCreateFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkFenceCreateFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkFenceImportFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkFenceImportFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkFenceImportFlagBitsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkFenceImportFlagBitsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkFormatFeatureFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkFormatFeatureFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkFramebufferCreateFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkFramebufferCreateFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkGeometryFlagBitsNV & value)
{
    stream << vkbinding::aux::bitfieldString<VkGeometryFlagBitsNV>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkGeometryInstanceFlagBitsNV & value)
{
    stream << vkbinding::aux::bitfieldString<VkGeometryInstanceFlagBitsNV>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkImageAspectFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkImageAspectFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkImageCreateFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkImageCreateFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkImageUsageFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkImageUsageFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkImageViewCreateFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkImageViewCreateFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkIndirectCommandsLayoutUsageFlagBitsNVX & value)
{
    stream << vkbinding::aux::bitfieldString<VkIndirectCommandsLayoutUsageFlagBitsNVX>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkInstanceCreateFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkInstanceCreateFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkMemoryAllocateFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkMemoryAllocateFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkMemoryAllocateFlagBitsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkMemoryAllocateFlagBitsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkMemoryHeapFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkMemoryHeapFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkMemoryPropertyFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkMemoryPropertyFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkObjectEntryUsageFlagBitsNVX & value)
{
    stream << vkbinding::aux::bitfieldString<VkObjectEntryUsageFlagBitsNVX>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPeerMemoryFeatureFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkPeerMemoryFeatureFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPeerMemoryFeatureFlagBitsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkPeerMemoryFeatureFlagBitsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineCacheCreateFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineCacheCreateFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineColorBlendStateCreateFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineColorBlendStateCreateFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineCreateFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineCreateFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineCreationFeedbackFlagBitsEXT & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineCreationFeedbackFlagBitsEXT>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineDepthStencilStateCreateFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineDepthStencilStateCreateFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineDynamicStateCreateFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineDynamicStateCreateFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineInputAssemblyStateCreateFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineInputAssemblyStateCreateFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineLayoutCreateFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineLayoutCreateFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineMultisampleStateCreateFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineMultisampleStateCreateFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineRasterizationStateCreateFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineRasterizationStateCreateFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineShaderStageCreateFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineShaderStageCreateFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineStageFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineStageFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineTessellationStateCreateFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineTessellationStateCreateFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineVertexInputStateCreateFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineVertexInputStateCreateFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkPipelineViewportStateCreateFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkPipelineViewportStateCreateFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkQueryControlFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkQueryControlFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkQueryPipelineStatisticFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkQueryPipelineStatisticFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkQueryPoolCreateFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkQueryPoolCreateFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkQueryResultFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkQueryResultFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkQueueFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkQueueFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkRenderPassCreateFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkRenderPassCreateFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkResolveModeFlagBitsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkResolveModeFlagBitsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSampleCountFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkSampleCountFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSamplerCreateFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkSamplerCreateFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSemaphoreImportFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkSemaphoreImportFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSemaphoreImportFlagBitsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkSemaphoreImportFlagBitsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkShaderModuleCreateFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkShaderModuleCreateFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkShaderStageFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkShaderStageFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSparseImageFormatFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkSparseImageFormatFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSparseMemoryBindFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkSparseMemoryBindFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkStencilFaceFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkStencilFaceFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSubgroupFeatureFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkSubgroupFeatureFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSubpassDescriptionFlagBits & value)
{
    stream << vkbinding::aux::bitfieldString<VkSubpassDescriptionFlagBits>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSurfaceCounterFlagBitsEXT & value)
{
    stream << vkbinding::aux::bitfieldString<VkSurfaceCounterFlagBitsEXT>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSurfaceTransformFlagBitsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkSurfaceTransformFlagBitsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSwapchainCreateFlagBitsKHR & value)
{
    stream << vkbinding::aux::bitfieldString<VkSwapchainCreateFlagBitsKHR>(value);
    return stream;
}

std::ostream & operator<<(std::ostream & stream, const VkSwapchainImageUsageFlagBitsANDROID & value)
{
    stream << vkbinding::aux::bitfieldString<VkSwapchainImageUsageFlagBitsANDROID>(value);
    return stream;
}


} // namespace vk


namespace vkbinding
{


template <>
std::ostream & operator<<(std::ostream & stream, const Value<vk::VKenum> & value)
{
    const auto & name = aux::Meta::getString(value.value());
    stream.write(name.c_str(), static_cast<std::streamsize>(name.size()));

    return stream;
}

/*template <>
std::ostream & operator<<(std::ostream & stream, const Value<vk::VKbitfield> & value)
{
    std::stringstream ss;
    ss << "0x" << std::hex << static_cast<unsigned>(value.value());
    stream << ss.str();

    return stream;
}*/

template <>
std::ostream & operator<<(std::ostream & stream, const Value<vk::VKboolean> & value)
{
    const auto & name = aux::Meta::getString(value.value());
    stream.write(name.c_str(), static_cast<std::streamsize>(name.size()));

    return stream;
}



std::ostream & operator<<(std::ostream & stream, const Version & version)
{
    stream << version.toString();

    return stream;
}

std::ostream & operator<<(std::ostream & stream, const AbstractValue * value)
{
    if (typeid(*value) == typeid(AbstractValue))
    {
        return stream << reinterpret_cast<const void*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::CAMetalLayer>))
    {
        return stream << *reinterpret_cast<const Value<vk::CAMetalLayer>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::CAMetalLayer *>))
    {
        return stream << *reinterpret_cast<const Value<vk::CAMetalLayer *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::char>))
    {
        return stream << *reinterpret_cast<const Value<vk::char>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::char *>))
    {
        return stream << *reinterpret_cast<const Value<vk::char *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::char           >))
    {
        return stream << *reinterpret_cast<const Value<vk::char           >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::char            *>))
    {
        return stream << *reinterpret_cast<const Value<vk::char            *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::char            >))
    {
        return stream << *reinterpret_cast<const Value<vk::char            >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::char             *>))
    {
        return stream << *reinterpret_cast<const Value<vk::char             *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::char                             >))
    {
        return stream << *reinterpret_cast<const Value<vk::char                             >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::char                              *>))
    {
        return stream << *reinterpret_cast<const Value<vk::char                              *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const CAMetalLayer*      >))
    {
        return stream << *reinterpret_cast<const Value<vk::const CAMetalLayer*      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const CAMetalLayer*       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const CAMetalLayer*       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const char*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const char*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const char* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const char* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const char* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const char* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const char*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const char*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const char*     >))
    {
        return stream << *reinterpret_cast<const Value<vk::const char*     >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const char*      *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const char*      *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const char*      >))
    {
        return stream << *reinterpret_cast<const Value<vk::const char*      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const char*       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const char*       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const char*            >))
    {
        return stream << *reinterpret_cast<const Value<vk::const char*            >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const char*             *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const char*             *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const char*                      >))
    {
        return stream << *reinterpret_cast<const Value<vk::const char*                      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const char*                       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const char*                       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const char*                        >))
    {
        return stream << *reinterpret_cast<const Value<vk::const char*                        >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const char*                         *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const char*                         *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const char*                                  >))
    {
        return stream << *reinterpret_cast<const Value<vk::const char*                                  >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const char*                                   *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const char*                                   *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const char*                                                  >))
    {
        return stream << *reinterpret_cast<const Value<vk::const char*                                                  >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const char*                                                   *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const char*                                                   *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const char* const*      >))
    {
        return stream << *reinterpret_cast<const Value<vk::const char* const*      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const char* const*       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const char* const*       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const float>))
    {
        return stream << *reinterpret_cast<const Value<vk::const float>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const float *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const float *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const float* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const float* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const float*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const float*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const float*    >))
    {
        return stream << *reinterpret_cast<const Value<vk::const float*    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const float*     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const float*     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const int32_t*   >))
    {
        return stream << *reinterpret_cast<const Value<vk::const int32_t*   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const int32_t*    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const int32_t*    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const SECURITY_ATTRIBUTES* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const SECURITY_ATTRIBUTES* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const SECURITY_ATTRIBUTES*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const SECURITY_ATTRIBUTES*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const SECURITY_ATTRIBUTES*       >))
    {
        return stream << *reinterpret_cast<const Value<vk::const SECURITY_ATTRIBUTES*       >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const SECURITY_ATTRIBUTES*        *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const SECURITY_ATTRIBUTES*        *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const struct AHardwareBuffer*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const struct AHardwareBuffer*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const struct AHardwareBuffer* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const struct AHardwareBuffer* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const struct VkBaseInStructure* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const struct VkBaseInStructure* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const struct VkBaseInStructure*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const struct VkBaseInStructure*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const uint32_t*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const uint32_t*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const uint32_t* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const uint32_t* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const uint32_t* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const uint32_t* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const uint32_t*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const uint32_t*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const uint32_t*  >))
    {
        return stream << *reinterpret_cast<const Value<vk::const uint32_t*  >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const uint32_t*   *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const uint32_t*   *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const uint32_t*    >))
    {
        return stream << *reinterpret_cast<const Value<vk::const uint32_t*    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const uint32_t*     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const uint32_t*     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const uint32_t*     >))
    {
        return stream << *reinterpret_cast<const Value<vk::const uint32_t*     >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const uint32_t*      *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const uint32_t*      *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const uint32_t*        >))
    {
        return stream << *reinterpret_cast<const Value<vk::const uint32_t*        >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const uint32_t*         *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const uint32_t*         *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const uint32_t*            >))
    {
        return stream << *reinterpret_cast<const Value<vk::const uint32_t*            >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const uint32_t*             *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const uint32_t*             *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const uint32_t*               >))
    {
        return stream << *reinterpret_cast<const Value<vk::const uint32_t*               >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const uint32_t*                *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const uint32_t*                *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const uint32_t*                  >))
    {
        return stream << *reinterpret_cast<const Value<vk::const uint32_t*                  >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const uint32_t*                   *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const uint32_t*                   *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const uint32_t*                   >))
    {
        return stream << *reinterpret_cast<const Value<vk::const uint32_t*                   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const uint32_t*                    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const uint32_t*                    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const uint64_t* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const uint64_t* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const uint64_t*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const uint64_t*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const uint64_t*                  >))
    {
        return stream << *reinterpret_cast<const Value<vk::const uint64_t*                  >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const uint64_t*                   *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const uint64_t*                   *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkAccelerationStructureCreateInfoNV*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkAccelerationStructureCreateInfoNV*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkAccelerationStructureCreateInfoNV* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkAccelerationStructureCreateInfoNV* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkAccelerationStructureInfoNV*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkAccelerationStructureInfoNV*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkAccelerationStructureInfoNV* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkAccelerationStructureInfoNV* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkAccelerationStructureMemoryRequirementsInfoNV*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkAccelerationStructureMemoryRequirementsInfoNV*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkAccelerationStructureMemoryRequirementsInfoNV* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkAccelerationStructureMemoryRequirementsInfoNV* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkAccelerationStructureNV*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkAccelerationStructureNV*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkAccelerationStructureNV* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkAccelerationStructureNV* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkAccelerationStructureNV* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkAccelerationStructureNV* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkAccelerationStructureNV*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkAccelerationStructureNV*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkAcquireNextImageInfoKHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkAcquireNextImageInfoKHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkAcquireNextImageInfoKHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkAcquireNextImageInfoKHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkAllocationCallbacks*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkAllocationCallbacks*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkAllocationCallbacks* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkAllocationCallbacks* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkAndroidSurfaceCreateInfoKHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkAndroidSurfaceCreateInfoKHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkAndroidSurfaceCreateInfoKHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkAndroidSurfaceCreateInfoKHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkApplicationInfo* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkApplicationInfo* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkApplicationInfo*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkApplicationInfo*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkAttachmentDescription* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkAttachmentDescription* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkAttachmentDescription*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkAttachmentDescription*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkAttachmentDescription2KHR* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkAttachmentDescription2KHR* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkAttachmentDescription2KHR*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkAttachmentDescription2KHR*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkAttachmentReference* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkAttachmentReference* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkAttachmentReference*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkAttachmentReference*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkAttachmentReference2KHR* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkAttachmentReference2KHR* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkAttachmentReference2KHR*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkAttachmentReference2KHR*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkAttachmentReference2KHR*         >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkAttachmentReference2KHR*         >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkAttachmentReference2KHR*          *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkAttachmentReference2KHR*          *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkAttachmentReference2KHR*            >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkAttachmentReference2KHR*            >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkAttachmentReference2KHR*             *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkAttachmentReference2KHR*             *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkAttachmentSampleLocationsEXT* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkAttachmentSampleLocationsEXT* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkAttachmentSampleLocationsEXT*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkAttachmentSampleLocationsEXT*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkBindAccelerationStructureMemoryInfoNV*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkBindAccelerationStructureMemoryInfoNV*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkBindAccelerationStructureMemoryInfoNV* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkBindAccelerationStructureMemoryInfoNV* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkBindBufferMemoryInfo*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkBindBufferMemoryInfo*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkBindBufferMemoryInfo* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkBindBufferMemoryInfo* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkBindImageMemoryInfo*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkBindImageMemoryInfo*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkBindImageMemoryInfo* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkBindImageMemoryInfo* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkBindSparseInfo*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkBindSparseInfo*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkBindSparseInfo* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkBindSparseInfo* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkBuffer*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkBuffer*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkBuffer* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkBuffer* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkBufferCopy*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkBufferCopy*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkBufferCopy* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkBufferCopy* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkBufferCreateInfo*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkBufferCreateInfo*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkBufferCreateInfo* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkBufferCreateInfo* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkBufferDeviceAddressInfoEXT*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkBufferDeviceAddressInfoEXT*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkBufferDeviceAddressInfoEXT* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkBufferDeviceAddressInfoEXT* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkBufferImageCopy*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkBufferImageCopy*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkBufferImageCopy* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkBufferImageCopy* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkBufferMemoryBarrier*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkBufferMemoryBarrier*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkBufferMemoryBarrier* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkBufferMemoryBarrier* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkBufferMemoryRequirementsInfo2*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkBufferMemoryRequirementsInfo2*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkBufferMemoryRequirementsInfo2* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkBufferMemoryRequirementsInfo2* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkBufferView*    >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkBufferView*    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkBufferView*     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkBufferView*     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkBufferViewCreateInfo*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkBufferViewCreateInfo*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkBufferViewCreateInfo* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkBufferViewCreateInfo* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkCalibratedTimestampInfoEXT*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkCalibratedTimestampInfoEXT*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkCalibratedTimestampInfoEXT* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkCalibratedTimestampInfoEXT* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkClearAttachment*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkClearAttachment*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkClearAttachment* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkClearAttachment* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkClearColorValue*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkClearColorValue*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkClearColorValue* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkClearColorValue* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkClearDepthStencilValue*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkClearDepthStencilValue*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkClearDepthStencilValue* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkClearDepthStencilValue* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkClearRect*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkClearRect*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkClearRect* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkClearRect* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkClearValue*    >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkClearValue*    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkClearValue*     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkClearValue*     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkCmdProcessCommandsInfoNVX*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkCmdProcessCommandsInfoNVX*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkCmdProcessCommandsInfoNVX* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkCmdProcessCommandsInfoNVX* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkCmdReserveSpaceForCommandsInfoNVX*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkCmdReserveSpaceForCommandsInfoNVX*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkCmdReserveSpaceForCommandsInfoNVX* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkCmdReserveSpaceForCommandsInfoNVX* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkCoarseSampleLocationNV* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkCoarseSampleLocationNV* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkCoarseSampleLocationNV*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkCoarseSampleLocationNV*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkCoarseSampleOrderCustomNV*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkCoarseSampleOrderCustomNV*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkCoarseSampleOrderCustomNV* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkCoarseSampleOrderCustomNV* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkCoarseSampleOrderCustomNV*        >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkCoarseSampleOrderCustomNV*        >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkCoarseSampleOrderCustomNV*         *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkCoarseSampleOrderCustomNV*         *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkCommandBuffer*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkCommandBuffer*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkCommandBuffer* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkCommandBuffer* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkCommandBuffer*     >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkCommandBuffer*     >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkCommandBuffer*      *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkCommandBuffer*      *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkCommandBufferAllocateInfo*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkCommandBufferAllocateInfo*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkCommandBufferAllocateInfo* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkCommandBufferAllocateInfo* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkCommandBufferBeginInfo*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkCommandBufferBeginInfo*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkCommandBufferBeginInfo* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkCommandBufferBeginInfo* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkCommandBufferInheritanceInfo*       >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkCommandBufferInheritanceInfo*       >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkCommandBufferInheritanceInfo*        *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkCommandBufferInheritanceInfo*        *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkCommandPoolCreateInfo*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkCommandPoolCreateInfo*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkCommandPoolCreateInfo* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkCommandPoolCreateInfo* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkComputePipelineCreateInfo*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkComputePipelineCreateInfo*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkComputePipelineCreateInfo* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkComputePipelineCreateInfo* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkConditionalRenderingBeginInfoEXT*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkConditionalRenderingBeginInfoEXT*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkConditionalRenderingBeginInfoEXT* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkConditionalRenderingBeginInfoEXT* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkCopyDescriptorSet*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkCopyDescriptorSet*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkCopyDescriptorSet* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkCopyDescriptorSet* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkDebugMarkerMarkerInfoEXT*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDebugMarkerMarkerInfoEXT*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkDebugMarkerMarkerInfoEXT* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDebugMarkerMarkerInfoEXT* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkDebugMarkerObjectNameInfoEXT*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDebugMarkerObjectNameInfoEXT*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkDebugMarkerObjectNameInfoEXT* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDebugMarkerObjectNameInfoEXT* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkDebugMarkerObjectTagInfoEXT*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDebugMarkerObjectTagInfoEXT*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkDebugMarkerObjectTagInfoEXT* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDebugMarkerObjectTagInfoEXT* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkDebugReportCallbackCreateInfoEXT*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDebugReportCallbackCreateInfoEXT*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkDebugReportCallbackCreateInfoEXT* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDebugReportCallbackCreateInfoEXT* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkDebugUtilsLabelEXT*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDebugUtilsLabelEXT*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkDebugUtilsLabelEXT* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDebugUtilsLabelEXT* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkDebugUtilsLabelEXT*                 >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDebugUtilsLabelEXT*                 >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkDebugUtilsLabelEXT*                  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDebugUtilsLabelEXT*                  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkDebugUtilsLabelEXT*                  >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDebugUtilsLabelEXT*                  >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkDebugUtilsLabelEXT*                   *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDebugUtilsLabelEXT*                   *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkDebugUtilsMessengerCallbackDataEXT*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDebugUtilsMessengerCallbackDataEXT*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkDebugUtilsMessengerCallbackDataEXT* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDebugUtilsMessengerCallbackDataEXT* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkDebugUtilsMessengerCreateInfoEXT*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDebugUtilsMessengerCreateInfoEXT*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkDebugUtilsMessengerCreateInfoEXT* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDebugUtilsMessengerCreateInfoEXT* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkDebugUtilsObjectNameInfoEXT*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDebugUtilsObjectNameInfoEXT*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkDebugUtilsObjectNameInfoEXT* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDebugUtilsObjectNameInfoEXT* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkDebugUtilsObjectNameInfoEXT*             >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDebugUtilsObjectNameInfoEXT*             >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkDebugUtilsObjectNameInfoEXT*              *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDebugUtilsObjectNameInfoEXT*              *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkDebugUtilsObjectTagInfoEXT*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDebugUtilsObjectTagInfoEXT*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkDebugUtilsObjectTagInfoEXT* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDebugUtilsObjectTagInfoEXT* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkDescriptorBindingFlagsEXT* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDescriptorBindingFlagsEXT* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkDescriptorBindingFlagsEXT*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDescriptorBindingFlagsEXT*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkDescriptorBufferInfo* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDescriptorBufferInfo* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkDescriptorBufferInfo*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDescriptorBufferInfo*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkDescriptorImageInfo* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDescriptorImageInfo* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkDescriptorImageInfo*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDescriptorImageInfo*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkDescriptorPoolCreateInfo*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDescriptorPoolCreateInfo*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkDescriptorPoolCreateInfo* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDescriptorPoolCreateInfo* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkDescriptorPoolSize* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDescriptorPoolSize* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkDescriptorPoolSize*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDescriptorPoolSize*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkDescriptorSet*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDescriptorSet*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkDescriptorSet* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDescriptorSet* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkDescriptorSetAllocateInfo*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDescriptorSetAllocateInfo*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkDescriptorSetAllocateInfo* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDescriptorSetAllocateInfo* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkDescriptorSetLayout* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDescriptorSetLayout* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkDescriptorSetLayout*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDescriptorSetLayout*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkDescriptorSetLayoutBinding* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDescriptorSetLayoutBinding* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkDescriptorSetLayoutBinding*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDescriptorSetLayoutBinding*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkDescriptorSetLayoutCreateInfo*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDescriptorSetLayoutCreateInfo*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkDescriptorSetLayoutCreateInfo* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDescriptorSetLayoutCreateInfo* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkDescriptorUpdateTemplateCreateInfo*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDescriptorUpdateTemplateCreateInfo*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkDescriptorUpdateTemplateCreateInfo* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDescriptorUpdateTemplateCreateInfo* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkDescriptorUpdateTemplateEntry* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDescriptorUpdateTemplateEntry* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkDescriptorUpdateTemplateEntry*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDescriptorUpdateTemplateEntry*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkDeviceCreateInfo*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDeviceCreateInfo*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkDeviceCreateInfo* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDeviceCreateInfo* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkDeviceEventInfoEXT*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDeviceEventInfoEXT*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkDeviceEventInfoEXT* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDeviceEventInfoEXT* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkDeviceMemory* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDeviceMemory* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkDeviceMemory*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDeviceMemory*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkDeviceMemory*            >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDeviceMemory*            >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkDeviceMemory*             *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDeviceMemory*             *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkDeviceQueueCreateInfo* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDeviceQueueCreateInfo* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkDeviceQueueCreateInfo*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDeviceQueueCreateInfo*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkDeviceQueueInfo2*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDeviceQueueInfo2*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkDeviceQueueInfo2* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDeviceQueueInfo2* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkDeviceSize*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDeviceSize*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkDeviceSize* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDeviceSize* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkDisplayEventInfoEXT*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDisplayEventInfoEXT*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkDisplayEventInfoEXT* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDisplayEventInfoEXT* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkDisplayModeCreateInfoKHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDisplayModeCreateInfoKHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkDisplayModeCreateInfoKHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDisplayModeCreateInfoKHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkDisplayPlaneInfo2KHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDisplayPlaneInfo2KHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkDisplayPlaneInfo2KHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDisplayPlaneInfo2KHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkDisplayPowerInfoEXT*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDisplayPowerInfoEXT*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkDisplayPowerInfoEXT* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDisplayPowerInfoEXT* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkDisplaySurfaceCreateInfoKHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDisplaySurfaceCreateInfoKHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkDisplaySurfaceCreateInfoKHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDisplaySurfaceCreateInfoKHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkDynamicState*  >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDynamicState*  >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkDynamicState*   *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkDynamicState*   *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkEvent*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkEvent*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkEvent* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkEvent* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkEventCreateInfo*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkEventCreateInfo*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkEventCreateInfo* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkEventCreateInfo* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkFence*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkFence*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkFence* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkFence* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkFenceCreateInfo*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkFenceCreateInfo*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkFenceCreateInfo* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkFenceCreateInfo* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkFenceGetFdInfoKHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkFenceGetFdInfoKHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkFenceGetFdInfoKHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkFenceGetFdInfoKHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkFenceGetWin32HandleInfoKHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkFenceGetWin32HandleInfoKHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkFenceGetWin32HandleInfoKHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkFenceGetWin32HandleInfoKHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkFormat*    >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkFormat*    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkFormat*     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkFormat*     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkFormat*      >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkFormat*      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkFormat*       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkFormat*       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkFramebufferAttachmentImageInfoKHR* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkFramebufferAttachmentImageInfoKHR* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkFramebufferAttachmentImageInfoKHR*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkFramebufferAttachmentImageInfoKHR*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkFramebufferCreateInfo*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkFramebufferCreateInfo*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkFramebufferCreateInfo* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkFramebufferCreateInfo* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkGeometryNV* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkGeometryNV* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkGeometryNV*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkGeometryNV*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkGraphicsPipelineCreateInfo*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkGraphicsPipelineCreateInfo*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkGraphicsPipelineCreateInfo* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkGraphicsPipelineCreateInfo* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkHdrMetadataEXT*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkHdrMetadataEXT*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkHdrMetadataEXT* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkHdrMetadataEXT* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkHeadlessSurfaceCreateInfoEXT*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkHeadlessSurfaceCreateInfoEXT*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkHeadlessSurfaceCreateInfoEXT* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkHeadlessSurfaceCreateInfoEXT* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkImageBlit*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkImageBlit*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkImageBlit* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkImageBlit* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkImageCopy*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkImageCopy*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkImageCopy* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkImageCopy* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkImageCreateInfo*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkImageCreateInfo*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkImageCreateInfo* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkImageCreateInfo* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkImageMemoryBarrier*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkImageMemoryBarrier*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkImageMemoryBarrier* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkImageMemoryBarrier* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkImageMemoryRequirementsInfo2*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkImageMemoryRequirementsInfo2*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkImageMemoryRequirementsInfo2* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkImageMemoryRequirementsInfo2* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkImagePipeSurfaceCreateInfoFUCHSIA*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkImagePipeSurfaceCreateInfoFUCHSIA*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkImagePipeSurfaceCreateInfoFUCHSIA* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkImagePipeSurfaceCreateInfoFUCHSIA* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkImageResolve*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkImageResolve*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkImageResolve* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkImageResolve* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkImageSparseMemoryRequirementsInfo2*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkImageSparseMemoryRequirementsInfo2*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkImageSparseMemoryRequirementsInfo2* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkImageSparseMemoryRequirementsInfo2* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkImageSubresource*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkImageSubresource*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkImageSubresource* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkImageSubresource* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkImageSubresourceRange*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkImageSubresourceRange*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkImageSubresourceRange* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkImageSubresourceRange* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkImageView* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkImageView* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkImageView*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkImageView*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkImageView*     >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkImageView*     >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkImageView*      *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkImageView*      *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkImageViewCreateInfo*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkImageViewCreateInfo*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkImageViewCreateInfo* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkImageViewCreateInfo* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkImageViewHandleInfoNVX*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkImageViewHandleInfoNVX*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkImageViewHandleInfoNVX* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkImageViewHandleInfoNVX* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkImportFenceFdInfoKHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkImportFenceFdInfoKHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkImportFenceFdInfoKHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkImportFenceFdInfoKHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkImportFenceWin32HandleInfoKHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkImportFenceWin32HandleInfoKHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkImportFenceWin32HandleInfoKHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkImportFenceWin32HandleInfoKHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkImportSemaphoreFdInfoKHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkImportSemaphoreFdInfoKHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkImportSemaphoreFdInfoKHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkImportSemaphoreFdInfoKHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkImportSemaphoreWin32HandleInfoKHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkImportSemaphoreWin32HandleInfoKHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkImportSemaphoreWin32HandleInfoKHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkImportSemaphoreWin32HandleInfoKHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkIndirectCommandsLayoutCreateInfoNVX*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkIndirectCommandsLayoutCreateInfoNVX*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkIndirectCommandsLayoutCreateInfoNVX* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkIndirectCommandsLayoutCreateInfoNVX* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkIndirectCommandsLayoutTokenNVX*  >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkIndirectCommandsLayoutTokenNVX*  >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkIndirectCommandsLayoutTokenNVX*   *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkIndirectCommandsLayoutTokenNVX*   *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkIndirectCommandsTokenNVX*       >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkIndirectCommandsTokenNVX*       >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkIndirectCommandsTokenNVX*        *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkIndirectCommandsTokenNVX*        *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkInitializePerformanceApiInfoINTEL*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkInitializePerformanceApiInfoINTEL*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkInitializePerformanceApiInfoINTEL* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkInitializePerformanceApiInfoINTEL* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkInputAttachmentAspectReference* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkInputAttachmentAspectReference* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkInputAttachmentAspectReference*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkInputAttachmentAspectReference*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkInstanceCreateInfo*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkInstanceCreateInfo*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkInstanceCreateInfo* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkInstanceCreateInfo* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkIOSSurfaceCreateInfoMVK*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkIOSSurfaceCreateInfoMVK*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkIOSSurfaceCreateInfoMVK* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkIOSSurfaceCreateInfoMVK* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkMacOSSurfaceCreateInfoMVK*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkMacOSSurfaceCreateInfoMVK*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkMacOSSurfaceCreateInfoMVK* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkMacOSSurfaceCreateInfoMVK* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkMappedMemoryRange*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkMappedMemoryRange*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkMappedMemoryRange* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkMappedMemoryRange* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkMemoryAllocateInfo*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkMemoryAllocateInfo*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkMemoryAllocateInfo* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkMemoryAllocateInfo* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkMemoryBarrier*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkMemoryBarrier*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkMemoryBarrier* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkMemoryBarrier* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkMemoryGetAndroidHardwareBufferInfoANDROID*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkMemoryGetAndroidHardwareBufferInfoANDROID*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkMemoryGetAndroidHardwareBufferInfoANDROID* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkMemoryGetAndroidHardwareBufferInfoANDROID* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkMemoryGetFdInfoKHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkMemoryGetFdInfoKHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkMemoryGetFdInfoKHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkMemoryGetFdInfoKHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkMemoryGetWin32HandleInfoKHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkMemoryGetWin32HandleInfoKHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkMemoryGetWin32HandleInfoKHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkMemoryGetWin32HandleInfoKHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkMetalSurfaceCreateInfoEXT*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkMetalSurfaceCreateInfoEXT*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkMetalSurfaceCreateInfoEXT* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkMetalSurfaceCreateInfoEXT* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkObjectEntryTypeNVX*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkObjectEntryTypeNVX*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkObjectEntryTypeNVX* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkObjectEntryTypeNVX* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkObjectEntryTypeNVX*       >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkObjectEntryTypeNVX*       >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkObjectEntryTypeNVX*        *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkObjectEntryTypeNVX*        *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkObjectEntryUsageFlagsNVX* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkObjectEntryUsageFlagsNVX* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkObjectEntryUsageFlagsNVX*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkObjectEntryUsageFlagsNVX*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkObjectTableCreateInfoNVX*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkObjectTableCreateInfoNVX*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkObjectTableCreateInfoNVX* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkObjectTableCreateInfoNVX* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkObjectTableEntryNVX* const*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkObjectTableEntryNVX* const*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkObjectTableEntryNVX* const* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkObjectTableEntryNVX* const* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkPerformanceConfigurationAcquireInfoINTEL*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPerformanceConfigurationAcquireInfoINTEL*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkPerformanceConfigurationAcquireInfoINTEL* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPerformanceConfigurationAcquireInfoINTEL* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkPerformanceMarkerInfoINTEL*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPerformanceMarkerInfoINTEL*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkPerformanceMarkerInfoINTEL* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPerformanceMarkerInfoINTEL* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkPerformanceOverrideInfoINTEL*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPerformanceOverrideInfoINTEL*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkPerformanceOverrideInfoINTEL* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPerformanceOverrideInfoINTEL* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkPerformanceStreamMarkerInfoINTEL*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPerformanceStreamMarkerInfoINTEL*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkPerformanceStreamMarkerInfoINTEL* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPerformanceStreamMarkerInfoINTEL* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkPhysicalDevice*  >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPhysicalDevice*  >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkPhysicalDevice*   *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPhysicalDevice*   *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkPhysicalDeviceExternalBufferInfo*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPhysicalDeviceExternalBufferInfo*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkPhysicalDeviceExternalBufferInfo* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPhysicalDeviceExternalBufferInfo* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkPhysicalDeviceExternalFenceInfo*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPhysicalDeviceExternalFenceInfo*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkPhysicalDeviceExternalFenceInfo* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPhysicalDeviceExternalFenceInfo* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkPhysicalDeviceExternalSemaphoreInfo*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPhysicalDeviceExternalSemaphoreInfo*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkPhysicalDeviceExternalSemaphoreInfo* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPhysicalDeviceExternalSemaphoreInfo* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkPhysicalDeviceFeatures* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPhysicalDeviceFeatures* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkPhysicalDeviceFeatures*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPhysicalDeviceFeatures*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkPhysicalDeviceImageFormatInfo2*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPhysicalDeviceImageFormatInfo2*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkPhysicalDeviceImageFormatInfo2* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPhysicalDeviceImageFormatInfo2* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkPhysicalDeviceSparseImageFormatInfo2*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPhysicalDeviceSparseImageFormatInfo2*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkPhysicalDeviceSparseImageFormatInfo2* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPhysicalDeviceSparseImageFormatInfo2* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkPhysicalDeviceSurfaceInfo2KHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPhysicalDeviceSurfaceInfo2KHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkPhysicalDeviceSurfaceInfo2KHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPhysicalDeviceSurfaceInfo2KHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkPipelineCache*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPipelineCache*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkPipelineCache* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPipelineCache* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkPipelineCacheCreateInfo*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPipelineCacheCreateInfo*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkPipelineCacheCreateInfo* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPipelineCacheCreateInfo* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkPipelineColorBlendAttachmentState* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPipelineColorBlendAttachmentState* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkPipelineColorBlendAttachmentState*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPipelineColorBlendAttachmentState*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkPipelineColorBlendStateCreateInfo* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPipelineColorBlendStateCreateInfo* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkPipelineColorBlendStateCreateInfo*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPipelineColorBlendStateCreateInfo*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkPipelineDepthStencilStateCreateInfo* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPipelineDepthStencilStateCreateInfo* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkPipelineDepthStencilStateCreateInfo*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPipelineDepthStencilStateCreateInfo*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkPipelineDynamicStateCreateInfo* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPipelineDynamicStateCreateInfo* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkPipelineDynamicStateCreateInfo*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPipelineDynamicStateCreateInfo*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkPipelineInputAssemblyStateCreateInfo* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPipelineInputAssemblyStateCreateInfo* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkPipelineInputAssemblyStateCreateInfo*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPipelineInputAssemblyStateCreateInfo*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkPipelineLayoutCreateInfo*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPipelineLayoutCreateInfo*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkPipelineLayoutCreateInfo* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPipelineLayoutCreateInfo* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkPipelineMultisampleStateCreateInfo* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPipelineMultisampleStateCreateInfo* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkPipelineMultisampleStateCreateInfo*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPipelineMultisampleStateCreateInfo*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkPipelineRasterizationStateCreateInfo* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPipelineRasterizationStateCreateInfo* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkPipelineRasterizationStateCreateInfo*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPipelineRasterizationStateCreateInfo*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkPipelineShaderStageCreateInfo* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPipelineShaderStageCreateInfo* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkPipelineShaderStageCreateInfo*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPipelineShaderStageCreateInfo*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkPipelineStageFlags*           >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPipelineStageFlags*           >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkPipelineStageFlags*            *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPipelineStageFlags*            *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkPipelineTessellationStateCreateInfo* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPipelineTessellationStateCreateInfo* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkPipelineTessellationStateCreateInfo*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPipelineTessellationStateCreateInfo*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkPipelineVertexInputStateCreateInfo* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPipelineVertexInputStateCreateInfo* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkPipelineVertexInputStateCreateInfo*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPipelineVertexInputStateCreateInfo*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkPipelineViewportStateCreateInfo* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPipelineViewportStateCreateInfo* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkPipelineViewportStateCreateInfo*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPipelineViewportStateCreateInfo*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkPresentInfoKHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPresentInfoKHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkPresentInfoKHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPresentInfoKHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkPresentRegionKHR*   >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPresentRegionKHR*   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkPresentRegionKHR*    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPresentRegionKHR*    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkPresentTimeGOOGLE*   >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPresentTimeGOOGLE*   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkPresentTimeGOOGLE*    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPresentTimeGOOGLE*    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkPushConstantRange* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPushConstantRange* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkPushConstantRange*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkPushConstantRange*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkQueryPoolCreateInfo*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkQueryPoolCreateInfo*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkQueryPoolCreateInfo* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkQueryPoolCreateInfo* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkRayTracingPipelineCreateInfoNV*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkRayTracingPipelineCreateInfoNV*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkRayTracingPipelineCreateInfoNV* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkRayTracingPipelineCreateInfoNV* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkRayTracingShaderGroupCreateInfoNV* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkRayTracingShaderGroupCreateInfoNV* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkRayTracingShaderGroupCreateInfoNV*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkRayTracingShaderGroupCreateInfoNV*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkRect2D*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkRect2D*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkRect2D* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkRect2D* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkRect2D* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkRect2D* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkRect2D*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkRect2D*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkRect2D*  >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkRect2D*  >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkRect2D*   *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkRect2D*   *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkRect2D*    >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkRect2D*    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkRect2D*     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkRect2D*     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkRect2D*        >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkRect2D*        >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkRect2D*         *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkRect2D*         *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkRectLayerKHR*   >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkRectLayerKHR*   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkRectLayerKHR*    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkRectLayerKHR*    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkRenderPassBeginInfo*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkRenderPassBeginInfo*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkRenderPassBeginInfo* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkRenderPassBeginInfo* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkRenderPassCreateInfo*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkRenderPassCreateInfo*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkRenderPassCreateInfo* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkRenderPassCreateInfo* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkRenderPassCreateInfo2KHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkRenderPassCreateInfo2KHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkRenderPassCreateInfo2KHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkRenderPassCreateInfo2KHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkSampleLocationEXT* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSampleLocationEXT* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkSampleLocationEXT*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSampleLocationEXT*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkSampleLocationsInfoEXT*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSampleLocationsInfoEXT*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkSampleLocationsInfoEXT* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSampleLocationsInfoEXT* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkSampleMask*    >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSampleMask*    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkSampleMask*     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSampleMask*     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkSampler*       >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSampler*       >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkSampler*        *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSampler*        *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkSamplerCreateInfo*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSamplerCreateInfo*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkSamplerCreateInfo* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSamplerCreateInfo* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkSamplerYcbcrConversionCreateInfo*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSamplerYcbcrConversionCreateInfo*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkSamplerYcbcrConversionCreateInfo* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSamplerYcbcrConversionCreateInfo* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkSemaphore*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSemaphore*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkSemaphore* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSemaphore* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkSemaphore* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSemaphore* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkSemaphore*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSemaphore*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkSemaphore*     >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSemaphore*     >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkSemaphore*      *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSemaphore*      *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkSemaphoreCreateInfo*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSemaphoreCreateInfo*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkSemaphoreCreateInfo* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSemaphoreCreateInfo* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkSemaphoreGetFdInfoKHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSemaphoreGetFdInfoKHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkSemaphoreGetFdInfoKHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSemaphoreGetFdInfoKHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkSemaphoreGetWin32HandleInfoKHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSemaphoreGetWin32HandleInfoKHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkSemaphoreGetWin32HandleInfoKHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSemaphoreGetWin32HandleInfoKHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkShaderModuleCreateInfo*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkShaderModuleCreateInfo*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkShaderModuleCreateInfo* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkShaderModuleCreateInfo* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkShadingRatePaletteEntryNV*  >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkShadingRatePaletteEntryNV*  >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkShadingRatePaletteEntryNV*   *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkShadingRatePaletteEntryNV*   *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkShadingRatePaletteNV*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkShadingRatePaletteNV*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkShadingRatePaletteNV* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkShadingRatePaletteNV* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkShadingRatePaletteNV*      >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkShadingRatePaletteNV*      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkShadingRatePaletteNV*       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkShadingRatePaletteNV*       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkSparseBufferMemoryBindInfo* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSparseBufferMemoryBindInfo* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkSparseBufferMemoryBindInfo*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSparseBufferMemoryBindInfo*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkSparseImageMemoryBind* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSparseImageMemoryBind* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkSparseImageMemoryBind*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSparseImageMemoryBind*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkSparseImageMemoryBindInfo* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSparseImageMemoryBindInfo* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkSparseImageMemoryBindInfo*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSparseImageMemoryBindInfo*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkSparseImageOpaqueMemoryBindInfo* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSparseImageOpaqueMemoryBindInfo* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkSparseImageOpaqueMemoryBindInfo*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSparseImageOpaqueMemoryBindInfo*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkSparseMemoryBind* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSparseMemoryBind* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkSparseMemoryBind*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSparseMemoryBind*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkSpecializationInfo* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSpecializationInfo* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkSpecializationInfo*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSpecializationInfo*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkSpecializationMapEntry* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSpecializationMapEntry* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkSpecializationMapEntry*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSpecializationMapEntry*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkStreamDescriptorSurfaceCreateInfoGGP*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkStreamDescriptorSurfaceCreateInfoGGP*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkStreamDescriptorSurfaceCreateInfoGGP* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkStreamDescriptorSurfaceCreateInfoGGP* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkSubmitInfo*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSubmitInfo*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkSubmitInfo* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSubmitInfo* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkSubpassBeginInfoKHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSubpassBeginInfoKHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkSubpassBeginInfoKHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSubpassBeginInfoKHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkSubpassDependency* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSubpassDependency* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkSubpassDependency*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSubpassDependency*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkSubpassDependency2KHR*     >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSubpassDependency2KHR*     >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkSubpassDependency2KHR*      *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSubpassDependency2KHR*      *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkSubpassDescription* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSubpassDescription* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkSubpassDescription*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSubpassDescription*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkSubpassDescription2KHR*       >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSubpassDescription2KHR*       >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkSubpassDescription2KHR*        *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSubpassDescription2KHR*        *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkSubpassEndInfoKHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSubpassEndInfoKHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkSubpassEndInfoKHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSubpassEndInfoKHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkSubpassSampleLocationsEXT* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSubpassSampleLocationsEXT* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkSubpassSampleLocationsEXT*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSubpassSampleLocationsEXT*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkSubresourceLayout* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSubresourceLayout* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkSubresourceLayout*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSubresourceLayout*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkSwapchainCreateInfoKHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSwapchainCreateInfoKHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkSwapchainCreateInfoKHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSwapchainCreateInfoKHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkSwapchainKHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSwapchainKHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkSwapchainKHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSwapchainKHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkSwapchainKHR* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSwapchainKHR* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkSwapchainKHR*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkSwapchainKHR*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkValidationCacheCreateInfoEXT*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkValidationCacheCreateInfoEXT*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkValidationCacheCreateInfoEXT* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkValidationCacheCreateInfoEXT* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkValidationCacheEXT*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkValidationCacheEXT*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkValidationCacheEXT* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkValidationCacheEXT* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkValidationCheckEXT* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkValidationCheckEXT* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkValidationCheckEXT*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkValidationCheckEXT*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkValidationFeatureDisableEXT* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkValidationFeatureDisableEXT* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkValidationFeatureDisableEXT*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkValidationFeatureDisableEXT*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkValidationFeatureEnableEXT* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkValidationFeatureEnableEXT* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkValidationFeatureEnableEXT*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkValidationFeatureEnableEXT*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkVertexInputAttributeDescription* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkVertexInputAttributeDescription* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkVertexInputAttributeDescription*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkVertexInputAttributeDescription*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkVertexInputBindingDescription* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkVertexInputBindingDescription* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkVertexInputBindingDescription*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkVertexInputBindingDescription*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkVertexInputBindingDivisorDescriptionEXT*      >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkVertexInputBindingDivisorDescriptionEXT*      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkVertexInputBindingDivisorDescriptionEXT*       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkVertexInputBindingDivisorDescriptionEXT*       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkViewport*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkViewport*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkViewport* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkViewport* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkViewport*      >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkViewport*      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkViewport*       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkViewport*       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkViewportSwizzleNV*      >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkViewportSwizzleNV*      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkViewportSwizzleNV*       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkViewportSwizzleNV*       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkViewportWScalingNV*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkViewportWScalingNV*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkViewportWScalingNV* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkViewportWScalingNV* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkViewportWScalingNV*      >))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkViewportWScalingNV*      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkViewportWScalingNV*       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkViewportWScalingNV*       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkViSurfaceCreateInfoNN*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkViSurfaceCreateInfoNN*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkViSurfaceCreateInfoNN* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkViSurfaceCreateInfoNN* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkWaylandSurfaceCreateInfoKHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkWaylandSurfaceCreateInfoKHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkWaylandSurfaceCreateInfoKHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkWaylandSurfaceCreateInfoKHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkWin32SurfaceCreateInfoKHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkWin32SurfaceCreateInfoKHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkWin32SurfaceCreateInfoKHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkWin32SurfaceCreateInfoKHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkWriteDescriptorSet*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkWriteDescriptorSet*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkWriteDescriptorSet* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkWriteDescriptorSet* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkXcbSurfaceCreateInfoKHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkXcbSurfaceCreateInfoKHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkXcbSurfaceCreateInfoKHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkXcbSurfaceCreateInfoKHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const VkXlibSurfaceCreateInfoKHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkXlibSurfaceCreateInfoKHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const VkXlibSurfaceCreateInfoKHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const VkXlibSurfaceCreateInfoKHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const void*>))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const void* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const void* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const void* >))
    {
        return stream << *reinterpret_cast<const Value<vk::const void* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const void*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const void*  >))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*  >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const void*   *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*   *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const void*    >))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const void*     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const void*     >))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*     >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const void*      *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*      *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const void*      >))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const void*       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const void*        >))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*        >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const void*         *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*         *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const void*            >))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*            >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const void*             *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*             *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const void*              >))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*              >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const void*               *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*               *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const void*                >))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const void*                 *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                 *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const void*                    >))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const void*                     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const void*                     >))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                     >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const void*                      *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                      *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const void*                      >))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const void*                       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const void*                        >))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                        >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const void*                         *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                         *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const void*                         >))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                         >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const void*                          *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                          *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const void*                           >))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                           >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const void*                            *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                            *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const void*                            >))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                            >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const void*                             *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                             *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const void*                              >))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                              >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const void*                               *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                               *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const void*                               >))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                               >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const void*                                *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                                *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const void*                                >))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                                >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const void*                                 *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                                 *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const void*                                    >))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                                    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const void*                                     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                                     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const void*                                        >))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                                        >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const void*                                         *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                                         *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const void*                                          >))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                                          >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const void*                                           *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                                           *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const void*                                            >))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                                            >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const void*                                             *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                                             *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const void*                                              >))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                                              >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const void*                                               *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                                               *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const void*                                                    >))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                                                    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const void*                                                     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                                                     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const void*                                                      >))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                                                      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const void*                                                       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                                                       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const void*                                                        >))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                                                        >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const void*                                                         *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                                                         *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const void*                                                          >))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                                                          >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const void*                                                           *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                                                           *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const void*                                                            >))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                                                            >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const void*                                                             *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                                                             *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const void*                                                                 >))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                                                                 >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const void*                                                                  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                                                                  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::const void*                                                                      >))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                                                                      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::const void*                                                                       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::const void*                                                                       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::Display>))
    {
        return stream << *reinterpret_cast<const Value<vk::Display>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::Display *>))
    {
        return stream << *reinterpret_cast<const Value<vk::Display *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::Display*>))
    {
        return stream << *reinterpret_cast<const Value<vk::Display*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::Display* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::Display* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::Display*                         >))
    {
        return stream << *reinterpret_cast<const Value<vk::Display*                         >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::Display*                          *>))
    {
        return stream << *reinterpret_cast<const Value<vk::Display*                          *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::DWORD>))
    {
        return stream << *reinterpret_cast<const Value<vk::DWORD>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::DWORD *>))
    {
        return stream << *reinterpret_cast<const Value<vk::DWORD *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::DWORD                            >))
    {
        return stream << *reinterpret_cast<const Value<vk::DWORD                            >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::DWORD                             *>))
    {
        return stream << *reinterpret_cast<const Value<vk::DWORD                             *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::DWORD                                      >))
    {
        return stream << *reinterpret_cast<const Value<vk::DWORD                                      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::DWORD                                       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::DWORD                                       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::float>))
    {
        return stream << *reinterpret_cast<const Value<vk::float>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::float *>))
    {
        return stream << *reinterpret_cast<const Value<vk::float *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::float >))
    {
        return stream << *reinterpret_cast<const Value<vk::float >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::float  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::float  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::float   >))
    {
        return stream << *reinterpret_cast<const Value<vk::float   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::float    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::float    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::float          >))
    {
        return stream << *reinterpret_cast<const Value<vk::float          >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::float           *>))
    {
        return stream << *reinterpret_cast<const Value<vk::float           *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::float            >))
    {
        return stream << *reinterpret_cast<const Value<vk::float            >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::float             *>))
    {
        return stream << *reinterpret_cast<const Value<vk::float             *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::float                  >))
    {
        return stream << *reinterpret_cast<const Value<vk::float                  >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::float                   *>))
    {
        return stream << *reinterpret_cast<const Value<vk::float                   *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::float                       >))
    {
        return stream << *reinterpret_cast<const Value<vk::float                       >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::float                        *>))
    {
        return stream << *reinterpret_cast<const Value<vk::float                        *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::float                            >))
    {
        return stream << *reinterpret_cast<const Value<vk::float                            >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::float                             *>))
    {
        return stream << *reinterpret_cast<const Value<vk::float                             *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::float                              >))
    {
        return stream << *reinterpret_cast<const Value<vk::float                              >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::float                               *>))
    {
        return stream << *reinterpret_cast<const Value<vk::float                               *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::float                                                                            >))
    {
        return stream << *reinterpret_cast<const Value<vk::float                                                                            >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::float                                                                             *>))
    {
        return stream << *reinterpret_cast<const Value<vk::float                                                                             *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::GgpFrameToken>))
    {
        return stream << *reinterpret_cast<const Value<vk::GgpFrameToken>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::GgpFrameToken *>))
    {
        return stream << *reinterpret_cast<const Value<vk::GgpFrameToken *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::GgpFrameToken                    >))
    {
        return stream << *reinterpret_cast<const Value<vk::GgpFrameToken                    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::GgpFrameToken                     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::GgpFrameToken                     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::GgpStreamDescriptor>))
    {
        return stream << *reinterpret_cast<const Value<vk::GgpStreamDescriptor>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::GgpStreamDescriptor *>))
    {
        return stream << *reinterpret_cast<const Value<vk::GgpStreamDescriptor *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::GgpStreamDescriptor              >))
    {
        return stream << *reinterpret_cast<const Value<vk::GgpStreamDescriptor              >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::GgpStreamDescriptor               *>))
    {
        return stream << *reinterpret_cast<const Value<vk::GgpStreamDescriptor               *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::HANDLE>))
    {
        return stream << *reinterpret_cast<const Value<vk::HANDLE>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::HANDLE *>))
    {
        return stream << *reinterpret_cast<const Value<vk::HANDLE *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::HANDLE           >))
    {
        return stream << *reinterpret_cast<const Value<vk::HANDLE           >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::HANDLE            *>))
    {
        return stream << *reinterpret_cast<const Value<vk::HANDLE            *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::HANDLE                           >))
    {
        return stream << *reinterpret_cast<const Value<vk::HANDLE                           >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::HANDLE                            *>))
    {
        return stream << *reinterpret_cast<const Value<vk::HANDLE                            *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::HANDLE                             >))
    {
        return stream << *reinterpret_cast<const Value<vk::HANDLE                             >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::HANDLE                              *>))
    {
        return stream << *reinterpret_cast<const Value<vk::HANDLE                              *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::HANDLE*>))
    {
        return stream << *reinterpret_cast<const Value<vk::HANDLE*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::HANDLE* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::HANDLE* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::HINSTANCE>))
    {
        return stream << *reinterpret_cast<const Value<vk::HINSTANCE>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::HINSTANCE *>))
    {
        return stream << *reinterpret_cast<const Value<vk::HINSTANCE *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::HINSTANCE                        >))
    {
        return stream << *reinterpret_cast<const Value<vk::HINSTANCE                        >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::HINSTANCE                         *>))
    {
        return stream << *reinterpret_cast<const Value<vk::HINSTANCE                         *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::HMONITOR>))
    {
        return stream << *reinterpret_cast<const Value<vk::HMONITOR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::HMONITOR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::HMONITOR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::HMONITOR         >))
    {
        return stream << *reinterpret_cast<const Value<vk::HMONITOR         >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::HMONITOR          *>))
    {
        return stream << *reinterpret_cast<const Value<vk::HMONITOR          *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::HWND>))
    {
        return stream << *reinterpret_cast<const Value<vk::HWND>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::HWND *>))
    {
        return stream << *reinterpret_cast<const Value<vk::HWND *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::HWND                             >))
    {
        return stream << *reinterpret_cast<const Value<vk::HWND                             >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::HWND                              *>))
    {
        return stream << *reinterpret_cast<const Value<vk::HWND                              *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::int>))
    {
        return stream << *reinterpret_cast<const Value<vk::int>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::int *>))
    {
        return stream << *reinterpret_cast<const Value<vk::int *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::int >))
    {
        return stream << *reinterpret_cast<const Value<vk::int >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::int  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::int  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::int                              >))
    {
        return stream << *reinterpret_cast<const Value<vk::int                              >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::int                               *>))
    {
        return stream << *reinterpret_cast<const Value<vk::int                               *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::int                                    >))
    {
        return stream << *reinterpret_cast<const Value<vk::int                                    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::int                                     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::int                                     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::int*>))
    {
        return stream << *reinterpret_cast<const Value<vk::int*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::int* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::int* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::int32_t>))
    {
        return stream << *reinterpret_cast<const Value<vk::int32_t>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::int32_t *>))
    {
        return stream << *reinterpret_cast<const Value<vk::int32_t *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::int32_t        >))
    {
        return stream << *reinterpret_cast<const Value<vk::int32_t        >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::int32_t         *>))
    {
        return stream << *reinterpret_cast<const Value<vk::int32_t         *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::int32_t           >))
    {
        return stream << *reinterpret_cast<const Value<vk::int32_t           >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::int32_t            *>))
    {
        return stream << *reinterpret_cast<const Value<vk::int32_t            *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::int32_t                >))
    {
        return stream << *reinterpret_cast<const Value<vk::int32_t                >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::int32_t                 *>))
    {
        return stream << *reinterpret_cast<const Value<vk::int32_t                 *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::int32_t                        >))
    {
        return stream << *reinterpret_cast<const Value<vk::int32_t                        >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::int32_t                         *>))
    {
        return stream << *reinterpret_cast<const Value<vk::int32_t                         *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::int32_t                                                            >))
    {
        return stream << *reinterpret_cast<const Value<vk::int32_t                                                            >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::int32_t                                                             *>))
    {
        return stream << *reinterpret_cast<const Value<vk::int32_t                                                             *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::LPCWSTR>))
    {
        return stream << *reinterpret_cast<const Value<vk::LPCWSTR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::LPCWSTR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::LPCWSTR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::LPCWSTR          >))
    {
        return stream << *reinterpret_cast<const Value<vk::LPCWSTR          >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::LPCWSTR           *>))
    {
        return stream << *reinterpret_cast<const Value<vk::LPCWSTR           *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::LPCWSTR                          >))
    {
        return stream << *reinterpret_cast<const Value<vk::LPCWSTR                          >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::LPCWSTR                           *>))
    {
        return stream << *reinterpret_cast<const Value<vk::LPCWSTR                           *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::LPCWSTR                            >))
    {
        return stream << *reinterpret_cast<const Value<vk::LPCWSTR                            >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::LPCWSTR                             *>))
    {
        return stream << *reinterpret_cast<const Value<vk::LPCWSTR                             *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::LPCWSTR                                    >))
    {
        return stream << *reinterpret_cast<const Value<vk::LPCWSTR                                    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::LPCWSTR                                     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::LPCWSTR                                     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::PFN_vkAllocationFunction>))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkAllocationFunction>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::PFN_vkAllocationFunction *>))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkAllocationFunction *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::PFN_vkAllocationFunction   >))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkAllocationFunction   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::PFN_vkAllocationFunction    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkAllocationFunction    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::PFN_vkDebugReportCallbackEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkDebugReportCallbackEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::PFN_vkDebugReportCallbackEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkDebugReportCallbackEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::PFN_vkDebugReportCallbackEXT     >))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkDebugReportCallbackEXT     >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::PFN_vkDebugReportCallbackEXT      *>))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkDebugReportCallbackEXT      *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::PFN_vkDebugUtilsMessengerCallbackEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkDebugUtilsMessengerCallbackEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::PFN_vkDebugUtilsMessengerCallbackEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkDebugUtilsMessengerCallbackEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::PFN_vkDebugUtilsMessengerCallbackEXT                 >))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkDebugUtilsMessengerCallbackEXT                 >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::PFN_vkDebugUtilsMessengerCallbackEXT                  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkDebugUtilsMessengerCallbackEXT                  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::PFN_vkFreeFunction>))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkFreeFunction>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::PFN_vkFreeFunction *>))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkFreeFunction *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::PFN_vkFreeFunction    >))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkFreeFunction    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::PFN_vkFreeFunction     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkFreeFunction     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::PFN_vkInternalAllocationNotification>))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkInternalAllocationNotification>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::PFN_vkInternalAllocationNotification *>))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkInternalAllocationNotification *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::PFN_vkInternalAllocationNotification >))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkInternalAllocationNotification >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::PFN_vkInternalAllocationNotification  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkInternalAllocationNotification  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::PFN_vkInternalFreeNotification>))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkInternalFreeNotification>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::PFN_vkInternalFreeNotification *>))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkInternalFreeNotification *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::PFN_vkInternalFreeNotification >))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkInternalFreeNotification >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::PFN_vkInternalFreeNotification  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkInternalFreeNotification  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::PFN_vkReallocationFunction>))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkReallocationFunction>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::PFN_vkReallocationFunction *>))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkReallocationFunction *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::PFN_vkReallocationFunction >))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkReallocationFunction >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::PFN_vkReallocationFunction  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkReallocationFunction  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::PFN_vkVoidFunction>))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkVoidFunction>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::PFN_vkVoidFunction *>))
    {
        return stream << *reinterpret_cast<const Value<vk::PFN_vkVoidFunction *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::RROutput>))
    {
        return stream << *reinterpret_cast<const Value<vk::RROutput>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::RROutput *>))
    {
        return stream << *reinterpret_cast<const Value<vk::RROutput *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::SECURITY_ATTRIBUTES>))
    {
        return stream << *reinterpret_cast<const Value<vk::SECURITY_ATTRIBUTES>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::SECURITY_ATTRIBUTES *>))
    {
        return stream << *reinterpret_cast<const Value<vk::SECURITY_ATTRIBUTES *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::size_t>))
    {
        return stream << *reinterpret_cast<const Value<vk::size_t>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::size_t *>))
    {
        return stream << *reinterpret_cast<const Value<vk::size_t *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::size_t >))
    {
        return stream << *reinterpret_cast<const Value<vk::size_t >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::size_t  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::size_t  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::size_t                 >))
    {
        return stream << *reinterpret_cast<const Value<vk::size_t                 >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::size_t                  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::size_t                  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::size_t                           >))
    {
        return stream << *reinterpret_cast<const Value<vk::size_t                           >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::size_t                            *>))
    {
        return stream << *reinterpret_cast<const Value<vk::size_t                            *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::size_t                                 >))
    {
        return stream << *reinterpret_cast<const Value<vk::size_t                                 >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::size_t                                  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::size_t                                  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::size_t*>))
    {
        return stream << *reinterpret_cast<const Value<vk::size_t*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::size_t* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::size_t* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint16_t>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint16_t>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint16_t *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint16_t *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint16_t                                         >))
    {
        return stream << *reinterpret_cast<const Value<vk::uint16_t                                         >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint16_t                                          *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint16_t                                          *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint32_t>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint32_t *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint32_t >))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint32_t  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint32_t   >))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint32_t    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint32_t       >))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t       >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint32_t        *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t        *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint32_t        >))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t        >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint32_t         *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t         *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint32_t         >))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t         >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint32_t          *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t          *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint32_t          >))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t          >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint32_t           *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t           *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint32_t               >))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t               >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint32_t                *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint32_t                 >))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                 >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint32_t                  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint32_t                   >))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint32_t                    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint32_t                     >))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                     >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint32_t                      *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                      *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint32_t                      >))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint32_t                       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint32_t                       >))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                       >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint32_t                        *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                        *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint32_t                        >))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                        >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint32_t                         *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                         *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint32_t                         >))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                         >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint32_t                          *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                          *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint32_t                          >))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                          >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint32_t                           *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                           *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint32_t                           >))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                           >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint32_t                            *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                            *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint32_t                            >))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                            >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint32_t                             *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                             *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint32_t                                 >))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                                 >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint32_t                                  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                                  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint32_t                                    >))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                                    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint32_t                                     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                                     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint32_t                                       >))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                                       >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint32_t                                        *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                                        *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint32_t                                         >))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                                         >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint32_t                                          *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                                          *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint32_t                                          >))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                                          >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint32_t                                           *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                                           *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint32_t                                               >))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                                               >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint32_t                                                *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                                                *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint32_t                                                 >))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                                                 >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint32_t                                                  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                                                  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint32_t                                                    >))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                                                    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint32_t                                                     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                                                     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint32_t                                                         >))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                                                         >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint32_t                                                          *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                                                          *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint32_t                                                           >))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                                                           >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint32_t                                                            *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                                                            *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint32_t                                                               >))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                                                               >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint32_t                                                                *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                                                                *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint32_t                                                                         >))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                                                                         >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint32_t                                                                          *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t                                                                          *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint32_t*>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint32_t* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint32_t* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint64_t>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint64_t>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint64_t *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint64_t *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint64_t >))
    {
        return stream << *reinterpret_cast<const Value<vk::uint64_t >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint64_t  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint64_t  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint64_t                         >))
    {
        return stream << *reinterpret_cast<const Value<vk::uint64_t                         >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint64_t                          *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint64_t                          *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint64_t                           >))
    {
        return stream << *reinterpret_cast<const Value<vk::uint64_t                           >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint64_t                            *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint64_t                            *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint64_t                            >))
    {
        return stream << *reinterpret_cast<const Value<vk::uint64_t                            >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint64_t                             *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint64_t                             *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint64_t                               >))
    {
        return stream << *reinterpret_cast<const Value<vk::uint64_t                               >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint64_t                                *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint64_t                                *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint64_t                                               >))
    {
        return stream << *reinterpret_cast<const Value<vk::uint64_t                                               >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint64_t                                                *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint64_t                                                *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint64_t*>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint64_t*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint64_t* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint64_t* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint8_t>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint8_t>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint8_t *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint8_t *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint8_t        >))
    {
        return stream << *reinterpret_cast<const Value<vk::uint8_t        >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint8_t         *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint8_t         *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::uint8_t                          >))
    {
        return stream << *reinterpret_cast<const Value<vk::uint8_t                          >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::uint8_t                           *>))
    {
        return stream << *reinterpret_cast<const Value<vk::uint8_t                           *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::UNGROUPED>))
    {
        return stream << *reinterpret_cast<const Value<vk::UNGROUPED>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::UNGROUPED *>))
    {
        return stream << *reinterpret_cast<const Value<vk::UNGROUPED *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::UnusedMask>))
    {
        return stream << *reinterpret_cast<const Value<vk::UnusedMask>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::UnusedMask *>))
    {
        return stream << *reinterpret_cast<const Value<vk::UnusedMask *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VisualID>))
    {
        return stream << *reinterpret_cast<const Value<vk::VisualID>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VisualID *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VisualID *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VK_API_VERSION>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_API_VERSION>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VK_API_VERSION *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_API_VERSION *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VK_API_VERSION_1_0>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_API_VERSION_1_0>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VK_API_VERSION_1_0 *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_API_VERSION_1_0 *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VK_API_VERSION_1_1>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_API_VERSION_1_1>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VK_API_VERSION_1_1 *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_API_VERSION_1_1 *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VK_DEFINE_HANDLE>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_DEFINE_HANDLE>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VK_DEFINE_HANDLE *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_DEFINE_HANDLE *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VK_DEFINE_NON_DISPATCHABLE_HANDLE>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_DEFINE_NON_DISPATCHABLE_HANDLE>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VK_DEFINE_NON_DISPATCHABLE_HANDLE *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_DEFINE_NON_DISPATCHABLE_HANDLE *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VK_HEADER_VERSION>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_HEADER_VERSION>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VK_HEADER_VERSION *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_HEADER_VERSION *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VK_MAKE_VERSION>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_MAKE_VERSION>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VK_MAKE_VERSION *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_MAKE_VERSION *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VK_NULL_HANDLE>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_NULL_HANDLE>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VK_NULL_HANDLE *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_NULL_HANDLE *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VK_VERSION_MAJOR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_VERSION_MAJOR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VK_VERSION_MAJOR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_VERSION_MAJOR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VK_VERSION_MINOR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_VERSION_MINOR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VK_VERSION_MINOR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_VERSION_MINOR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VK_VERSION_PATCH>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_VERSION_PATCH>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VK_VERSION_PATCH *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VK_VERSION_PATCH *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAccelerationStructureInfoNV          >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccelerationStructureInfoNV          >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAccelerationStructureInfoNV           *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccelerationStructureInfoNV           *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAccelerationStructureMemoryRequirementsTypeNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccelerationStructureMemoryRequirementsTypeNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAccelerationStructureMemoryRequirementsTypeNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccelerationStructureMemoryRequirementsTypeNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAccelerationStructureMemoryRequirementsTypeNV                      >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccelerationStructureMemoryRequirementsTypeNV                      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAccelerationStructureMemoryRequirementsTypeNV                       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccelerationStructureMemoryRequirementsTypeNV                       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAccelerationStructureNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccelerationStructureNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAccelerationStructureNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccelerationStructureNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAccelerationStructureNV        >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccelerationStructureNV        >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAccelerationStructureNV         *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccelerationStructureNV         *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAccelerationStructureNV                                            >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccelerationStructureNV                                            >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAccelerationStructureNV                                             *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccelerationStructureNV                                             *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAccelerationStructureNV*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccelerationStructureNV*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAccelerationStructureNV* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccelerationStructureNV* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAccelerationStructureTypeNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccelerationStructureTypeNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAccelerationStructureTypeNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccelerationStructureTypeNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAccelerationStructureTypeNV         >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccelerationStructureTypeNV         >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAccelerationStructureTypeNV          *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccelerationStructureTypeNV          *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAccessFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccessFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAccessFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccessFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAccessFlags     >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccessFlags     >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAccessFlags      *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccessFlags      *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAccessFlags          >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccessFlags          >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAccessFlags           *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAccessFlags           *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAndroidHardwareBufferPropertiesANDROID*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAndroidHardwareBufferPropertiesANDROID*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAndroidHardwareBufferPropertiesANDROID* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAndroidHardwareBufferPropertiesANDROID* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAndroidSurfaceCreateFlagsKHR >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAndroidSurfaceCreateFlagsKHR >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAndroidSurfaceCreateFlagsKHR  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAndroidSurfaceCreateFlagsKHR  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentDescriptionFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentDescriptionFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentDescriptionFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentDescriptionFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentDescriptionFlags >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentDescriptionFlags >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentDescriptionFlags  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentDescriptionFlags  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentLoadOp>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentLoadOp>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentLoadOp *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentLoadOp *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentLoadOp     >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentLoadOp     >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentLoadOp      *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentLoadOp      *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentLoadOp                           >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentLoadOp                           >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentLoadOp                            *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentLoadOp                            *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentReference            >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentReference            >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentReference             *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentReference             *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentStoreOp>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentStoreOp>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentStoreOp *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentStoreOp *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentStoreOp    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentStoreOp    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentStoreOp     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentStoreOp     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentStoreOp                          >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentStoreOp                          >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkAttachmentStoreOp                           *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkAttachmentStoreOp                           *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBlendFactor>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBlendFactor>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBlendFactor *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBlendFactor *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBlendFactor          >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBlendFactor          >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBlendFactor           *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBlendFactor           *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBlendOp>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBlendOp>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBlendOp *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBlendOp *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBlendOp              >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBlendOp              >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBlendOp               *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBlendOp               *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBlendOverlapEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBlendOverlapEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBlendOverlapEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBlendOverlapEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBlendOverlapEXT      >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBlendOverlapEXT      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBlendOverlapEXT       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBlendOverlapEXT       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBool32>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBool32>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBool32 *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBool32 *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBool32 >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBool32 >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBool32  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBool32  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBool32       >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBool32       >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBool32        *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBool32        *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBool32         >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBool32         >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBool32          *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBool32          *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBool32               >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBool32               >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBool32                *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBool32                *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBool32                       >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBool32                       >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBool32                        *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBool32                        *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBool32                        >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBool32                        >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBool32                         *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBool32                         *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBool32                         >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBool32                         >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBool32                          *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBool32                          *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBool32                           >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBool32                           >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBool32                            *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBool32                            *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBool32                            >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBool32                            >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBool32                             *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBool32                             *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBool32                             >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBool32                             >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBool32                              *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBool32                              *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBool32                                 >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBool32                                 >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBool32                                  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBool32                                  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBool32                                                         >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBool32                                                         >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBool32                                                          *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBool32                                                          *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBool32                                                               >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBool32                                                               >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBool32                                                                *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBool32                                                                *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBool32                                                                    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBool32                                                                    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBool32                                                                     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBool32                                                                     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBool32                                                                         >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBool32                                                                         >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBool32                                                                          *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBool32                                                                          *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBool32*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBool32*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBool32* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBool32* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBorderColor>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBorderColor>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBorderColor *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBorderColor *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBorderColor          >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBorderColor          >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBorderColor           *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBorderColor           *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBuffer>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBuffer>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBuffer *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBuffer *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBuffer >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBuffer >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBuffer  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBuffer  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBuffer   >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBuffer   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBuffer    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBuffer    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBuffer         >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBuffer         >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBuffer          *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBuffer          *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBuffer               >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBuffer               >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBuffer                *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBuffer                *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBuffer                     >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBuffer                     >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBuffer                      *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBuffer                      *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBuffer                         >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBuffer                         >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBuffer                          *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBuffer                          *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBuffer                                 >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBuffer                                 >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBuffer                                  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBuffer                                  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBuffer                                               >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBuffer                                               >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBuffer                                                *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBuffer                                                *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBuffer                                                             >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBuffer                                                             >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBuffer                                                              *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBuffer                                                              *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBuffer*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBuffer*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBuffer* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBuffer* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBufferCreateFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferCreateFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBufferCreateFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferCreateFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBufferCreateFlags >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferCreateFlags >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBufferCreateFlags  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferCreateFlags  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBufferCreateFlags    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferCreateFlags    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBufferCreateFlags     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferCreateFlags     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBufferUsageFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferUsageFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBufferUsageFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferUsageFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBufferUsageFlags     >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferUsageFlags     >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBufferUsageFlags      *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferUsageFlags      *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBufferUsageFlags               >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferUsageFlags               >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBufferUsageFlags                *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferUsageFlags                *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBufferView>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferView>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBufferView *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferView *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBufferView*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferView*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBufferView* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferView* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBufferViewCreateFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferViewCreateFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBufferViewCreateFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferViewCreateFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBufferViewCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferViewCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBufferViewCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBufferViewCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBuildAccelerationStructureFlagBitsNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBuildAccelerationStructureFlagBitsNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBuildAccelerationStructureFlagBitsNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBuildAccelerationStructureFlagBitsNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkBuildAccelerationStructureFlagsNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBuildAccelerationStructureFlagsNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkBuildAccelerationStructureFlagsNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkBuildAccelerationStructureFlagsNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCheckpointDataNV*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCheckpointDataNV*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCheckpointDataNV* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCheckpointDataNV* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkChromaLocation>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkChromaLocation>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkChromaLocation *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkChromaLocation *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkChromaLocation>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkChromaLocation>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkChromaLocation *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkChromaLocation *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkChromaLocation              >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkChromaLocation              >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkChromaLocation               *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkChromaLocation               *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkChromaLocation                   >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkChromaLocation                   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkChromaLocation                    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkChromaLocation                    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkChromaLocationKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkChromaLocationKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkChromaLocationKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkChromaLocationKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkClearColorValue      >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkClearColorValue      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkClearColorValue       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkClearColorValue       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkClearDepthStencilValue >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkClearDepthStencilValue >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkClearDepthStencilValue  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkClearDepthStencilValue  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkClearValue           >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkClearValue           >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkClearValue            *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkClearValue            *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCoarseSampleOrderTypeNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCoarseSampleOrderTypeNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCoarseSampleOrderTypeNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCoarseSampleOrderTypeNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCoarseSampleOrderTypeNV                                              >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCoarseSampleOrderTypeNV                                              >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCoarseSampleOrderTypeNV                                               *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCoarseSampleOrderTypeNV                                               *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkColorComponentFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkColorComponentFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkColorComponentFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkColorComponentFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkColorComponentFlags  >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkColorComponentFlags  >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkColorComponentFlags   *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkColorComponentFlags   *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkColorSpaceKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkColorSpaceKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkColorSpaceKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkColorSpaceKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkColorSpaceKHR                  >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkColorSpaceKHR                  >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkColorSpaceKHR                   *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkColorSpaceKHR                   *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandBuffer>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBuffer>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandBuffer *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBuffer *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandBuffer                          >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBuffer                          >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandBuffer                           *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBuffer                           *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandBuffer*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBuffer*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandBuffer* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBuffer* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandBufferLevel>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBufferLevel>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandBufferLevel *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBufferLevel *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandBufferLevel   >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBufferLevel   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandBufferLevel    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBufferLevel    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandBufferResetFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBufferResetFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandBufferResetFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBufferResetFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandBufferResetFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBufferResetFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandBufferResetFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBufferResetFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandBufferUsageFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBufferUsageFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandBufferUsageFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBufferUsageFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandBufferUsageFlags  >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBufferUsageFlags  >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandBufferUsageFlags   *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandBufferUsageFlags   *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandPool>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandPool>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandPool *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandPool *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandPool          >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandPool          >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandPool           *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandPool           *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandPool*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandPool*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandPool* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandPool* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandPoolCreateFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandPoolCreateFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandPoolCreateFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandPoolCreateFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandPoolCreateFlags   >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandPoolCreateFlags   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandPoolCreateFlags    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandPoolCreateFlags    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandPoolResetFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandPoolResetFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandPoolResetFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandPoolResetFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandPoolResetFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandPoolResetFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandPoolResetFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandPoolResetFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCommandPoolTrimFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandPoolTrimFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCommandPoolTrimFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCommandPoolTrimFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCompareOp>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCompareOp>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCompareOp *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCompareOp *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCompareOp            >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCompareOp            >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCompareOp             *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCompareOp             *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkComponentMapping     >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkComponentMapping     >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkComponentMapping      *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkComponentMapping      *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkComponentMapping               >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkComponentMapping               >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkComponentMapping                *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkComponentMapping                *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkComponentMapping                 >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkComponentMapping                 >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkComponentMapping                  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkComponentMapping                  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkComponentSwizzle>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkComponentSwizzle>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkComponentSwizzle *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkComponentSwizzle *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkComponentSwizzle >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkComponentSwizzle >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkComponentSwizzle  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkComponentSwizzle  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkComponentTypeNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkComponentTypeNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkComponentTypeNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkComponentTypeNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkComponentTypeNV                   >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkComponentTypeNV                   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkComponentTypeNV                    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkComponentTypeNV                    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCompositeAlphaFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCompositeAlphaFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCompositeAlphaFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCompositeAlphaFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCompositeAlphaFlagBitsKHR      >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCompositeAlphaFlagBitsKHR      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCompositeAlphaFlagBitsKHR       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCompositeAlphaFlagBitsKHR       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCompositeAlphaFlagsKHR         >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCompositeAlphaFlagsKHR         >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCompositeAlphaFlagsKHR          *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCompositeAlphaFlagsKHR          *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkConditionalRenderingFlagBitsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkConditionalRenderingFlagBitsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkConditionalRenderingFlagBitsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkConditionalRenderingFlagBitsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkConditionalRenderingFlagsEXT    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkConditionalRenderingFlagsEXT    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkConditionalRenderingFlagsEXT     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkConditionalRenderingFlagsEXT     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkConformanceVersionKHR          >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkConformanceVersionKHR          >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkConformanceVersionKHR           *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkConformanceVersionKHR           *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkConservativeRasterizationModeEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkConservativeRasterizationModeEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkConservativeRasterizationModeEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkConservativeRasterizationModeEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkConservativeRasterizationModeEXT                                               >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkConservativeRasterizationModeEXT                                               >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkConservativeRasterizationModeEXT                                                *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkConservativeRasterizationModeEXT                                                *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCooperativeMatrixPropertiesNV*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCooperativeMatrixPropertiesNV*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCooperativeMatrixPropertiesNV* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCooperativeMatrixPropertiesNV* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCopyAccelerationStructureModeNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCopyAccelerationStructureModeNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCopyAccelerationStructureModeNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCopyAccelerationStructureModeNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCoverageModulationModeNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCoverageModulationModeNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCoverageModulationModeNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCoverageModulationModeNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCoverageModulationModeNV                                                       >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCoverageModulationModeNV                                                       >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCoverageModulationModeNV                                                        *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCoverageModulationModeNV                                                        *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCoverageReductionModeNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCoverageReductionModeNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCoverageReductionModeNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCoverageReductionModeNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCoverageReductionModeNV  >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCoverageReductionModeNV  >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCoverageReductionModeNV   *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCoverageReductionModeNV   *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCoverageReductionModeNV                                          >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCoverageReductionModeNV                                          >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCoverageReductionModeNV                                           *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCoverageReductionModeNV                                           *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCullModeFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCullModeFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCullModeFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCullModeFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkCullModeFlags        >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCullModeFlags        >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkCullModeFlags         *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkCullModeFlags         *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugReportCallbackEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugReportCallbackEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugReportCallbackEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugReportCallbackEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugReportCallbackEXT*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugReportCallbackEXT*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugReportCallbackEXT* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugReportCallbackEXT* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugReportFlagBitsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugReportFlagBitsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugReportFlagBitsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugReportFlagBitsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugReportFlagsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugReportFlagsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugReportFlagsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugReportFlagsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugReportFlagsEXT            >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugReportFlagsEXT            >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugReportFlagsEXT             *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugReportFlagsEXT             *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugReportObjectTypeEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugReportObjectTypeEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugReportObjectTypeEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugReportObjectTypeEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugReportObjectTypeEXT       >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugReportObjectTypeEXT       >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugReportObjectTypeEXT        *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugReportObjectTypeEXT        *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessageSeverityFlagBitsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessageSeverityFlagBitsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessageSeverityFlagBitsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessageSeverityFlagBitsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessageSeverityFlagsEXT                  >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessageSeverityFlagsEXT                  >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessageSeverityFlagsEXT                   *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessageSeverityFlagsEXT                   *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessageTypeFlagBitsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessageTypeFlagBitsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessageTypeFlagBitsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessageTypeFlagBitsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessageTypeFlagsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessageTypeFlagsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessageTypeFlagsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessageTypeFlagsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessageTypeFlagsEXT                      >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessageTypeFlagsEXT                      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessageTypeFlagsEXT                       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessageTypeFlagsEXT                       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessengerCallbackDataFlagsEXT                          >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessengerCallbackDataFlagsEXT                          >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessengerCallbackDataFlagsEXT                           *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessengerCallbackDataFlagsEXT                           *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessengerCreateFlagsEXT  >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessengerCreateFlagsEXT  >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessengerCreateFlagsEXT   *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessengerCreateFlagsEXT   *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessengerEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessengerEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessengerEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessengerEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessengerEXT*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessengerEXT*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDebugUtilsMessengerEXT* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDebugUtilsMessengerEXT* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDependencyFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDependencyFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDependencyFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDependencyFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDependencyFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDependencyFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDependencyFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDependencyFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDependencyFlags >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDependencyFlags >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDependencyFlags  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDependencyFlags  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDependencyFlags      >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDependencyFlags      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDependencyFlags       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDependencyFlags       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorBindingFlagBitsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorBindingFlagBitsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorBindingFlagBitsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorBindingFlagBitsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorPool>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorPool>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorPool *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorPool *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorPool       >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorPool       >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorPool        *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorPool        *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorPool*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorPool*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorPool* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorPool* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorPoolCreateFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorPoolCreateFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorPoolCreateFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorPoolCreateFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorPoolCreateFlags  >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorPoolCreateFlags  >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorPoolCreateFlags   *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorPoolCreateFlags   *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorPoolResetFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorPoolResetFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorPoolResetFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorPoolResetFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSet>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSet>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSet *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSet *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSet        >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSet        >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSet         *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSet         *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSet              >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSet              >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSet               *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSet               *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSet*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSet*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSet* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSet* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSetLayout>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSetLayout>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSetLayout *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSetLayout *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSetLayout >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSetLayout >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSetLayout  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSetLayout  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSetLayout*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSetLayout*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSetLayout* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSetLayout* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSetLayoutCreateFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSetLayoutCreateFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSetLayoutCreateFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSetLayoutCreateFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSetLayoutCreateFlags    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSetLayoutCreateFlags    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSetLayoutCreateFlags     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSetLayoutCreateFlags     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSetLayoutSupport*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSetLayoutSupport*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorSetLayoutSupport* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorSetLayoutSupport* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorType>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorType>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorType *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorType *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorType       >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorType       >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorType        *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorType        *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorType                 >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorType                 >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorType                  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorType                  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorType                    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorType                    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorType                     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorType                     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplate>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplate>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplate *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplate *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplate*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplate*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplate* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplate* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplateCreateFlags    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplateCreateFlags    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplateCreateFlags     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplateCreateFlags     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplateKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplateKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplateKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplateKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplateType>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplateType>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplateType *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplateType *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplateType>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplateType>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplateType *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplateType *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplateType >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplateType >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplateType  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplateType  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplateTypeKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplateTypeKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDescriptorUpdateTemplateTypeKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDescriptorUpdateTemplateTypeKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDevice>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDevice>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDevice *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDevice *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDevice*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDevice*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDevice* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDevice* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceAddress>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceAddress>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceAddress *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceAddress *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceAddress                  >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceAddress                  >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceAddress                   *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceAddress                   *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceCreateFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceCreateFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceCreateFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceCreateFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceCreateFlags    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceCreateFlags    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceCreateFlags     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceCreateFlags     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceEventTypeEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceEventTypeEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceEventTypeEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceEventTypeEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceEventTypeEXT             >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceEventTypeEXT             >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceEventTypeEXT              *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceEventTypeEXT              *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGeneratedCommandsFeaturesNVX*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGeneratedCommandsFeaturesNVX*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGeneratedCommandsFeaturesNVX* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGeneratedCommandsFeaturesNVX* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGeneratedCommandsLimitsNVX*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGeneratedCommandsLimitsNVX*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGeneratedCommandsLimitsNVX* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGeneratedCommandsLimitsNVX* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupPresentCapabilitiesKHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupPresentCapabilitiesKHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupPresentCapabilitiesKHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupPresentCapabilitiesKHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupPresentModeFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupPresentModeFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupPresentModeFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupPresentModeFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupPresentModeFlagBitsKHR >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupPresentModeFlagBitsKHR >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupPresentModeFlagBitsKHR  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupPresentModeFlagBitsKHR  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupPresentModeFlagsKHR >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupPresentModeFlagsKHR >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupPresentModeFlagsKHR  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupPresentModeFlagsKHR  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupPresentModeFlagsKHR                         >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupPresentModeFlagsKHR                         >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupPresentModeFlagsKHR                          *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupPresentModeFlagsKHR                          *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupPresentModeFlagsKHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupPresentModeFlagsKHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceGroupPresentModeFlagsKHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceGroupPresentModeFlagsKHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceMemory>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceMemory>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceMemory *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceMemory *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceMemory         >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceMemory         >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceMemory          *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceMemory          *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceMemory                   >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceMemory                   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceMemory                    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceMemory                    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceMemory                     >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceMemory                     >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceMemory                      *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceMemory                      *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceMemory*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceMemory*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceMemory* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceMemory* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceQueueCreateFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceQueueCreateFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceQueueCreateFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceQueueCreateFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceQueueCreateFlags    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceQueueCreateFlags    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceQueueCreateFlags     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceQueueCreateFlags     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceQueueCreateFlags            >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceQueueCreateFlags            >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceQueueCreateFlags             *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceQueueCreateFlags             *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceSize>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceSize>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceSize *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceSize *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceSize >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceSize >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceSize  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceSize  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceSize           >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceSize           >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceSize            *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceSize            *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceSize               >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceSize               >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceSize                *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceSize                *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceSize                     >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceSize                     >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceSize                      *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceSize                      *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceSize                       >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceSize                       >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceSize                        *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceSize                        *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceSize                           >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceSize                           >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceSize                            *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceSize                            *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceSize                             >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceSize                             >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceSize                              *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceSize                              *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDeviceSize*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceSize*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDeviceSize* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDeviceSize* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDiscardRectangleModeEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDiscardRectangleModeEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDiscardRectangleModeEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDiscardRectangleModeEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDiscardRectangleModeEXT                                                        >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDiscardRectangleModeEXT                                                        >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDiscardRectangleModeEXT                                                         *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDiscardRectangleModeEXT                                                         *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayEventTypeEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayEventTypeEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayEventTypeEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayEventTypeEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayEventTypeEXT            >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayEventTypeEXT            >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayEventTypeEXT             *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayEventTypeEXT             *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayKHR                     >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayKHR                     >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayKHR                      *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayKHR                      *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayKHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayKHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayKHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayKHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayModeCreateFlagsKHR      >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayModeCreateFlagsKHR      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayModeCreateFlagsKHR       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayModeCreateFlagsKHR       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayModeKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayModeKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayModeKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayModeKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayModeKHR >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayModeKHR >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayModeKHR  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayModeKHR  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayModeKHR                 >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayModeKHR                 >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayModeKHR                  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayModeKHR                  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayModeKHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayModeKHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayModeKHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayModeKHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayModeParametersKHR       >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayModeParametersKHR       >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayModeParametersKHR        *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayModeParametersKHR        *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayModeProperties2KHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayModeProperties2KHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayModeProperties2KHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayModeProperties2KHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayModePropertiesKHR >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayModePropertiesKHR >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayModePropertiesKHR  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayModePropertiesKHR  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayModePropertiesKHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayModePropertiesKHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayModePropertiesKHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayModePropertiesKHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPlaneAlphaFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPlaneAlphaFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPlaneAlphaFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPlaneAlphaFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPlaneAlphaFlagBitsKHR   >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPlaneAlphaFlagBitsKHR   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPlaneAlphaFlagBitsKHR    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPlaneAlphaFlagBitsKHR    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPlaneAlphaFlagsKHR      >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPlaneAlphaFlagsKHR      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPlaneAlphaFlagsKHR       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPlaneAlphaFlagsKHR       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPlaneCapabilities2KHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPlaneCapabilities2KHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPlaneCapabilities2KHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPlaneCapabilities2KHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPlaneCapabilitiesKHR >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPlaneCapabilitiesKHR >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPlaneCapabilitiesKHR  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPlaneCapabilitiesKHR  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPlaneCapabilitiesKHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPlaneCapabilitiesKHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPlaneCapabilitiesKHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPlaneCapabilitiesKHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPlaneProperties2KHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPlaneProperties2KHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPlaneProperties2KHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPlaneProperties2KHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPlanePropertiesKHR >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPlanePropertiesKHR >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPlanePropertiesKHR  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPlanePropertiesKHR  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPlanePropertiesKHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPlanePropertiesKHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPlanePropertiesKHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPlanePropertiesKHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPowerStateEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPowerStateEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPowerStateEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPowerStateEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPowerStateEXT           >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPowerStateEXT           >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPowerStateEXT            *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPowerStateEXT            *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayProperties2KHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayProperties2KHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayProperties2KHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayProperties2KHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPropertiesKHR >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPropertiesKHR >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPropertiesKHR  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPropertiesKHR  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPropertiesKHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPropertiesKHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplayPropertiesKHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplayPropertiesKHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDisplaySurfaceCreateFlagsKHR   >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplaySurfaceCreateFlagsKHR   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDisplaySurfaceCreateFlagsKHR    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDisplaySurfaceCreateFlagsKHR    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDriverIdKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDriverIdKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDriverIdKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDriverIdKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDriverIdKHR                    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDriverIdKHR                    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDriverIdKHR                     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDriverIdKHR                     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDrmFormatModifierPropertiesEXT* >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDrmFormatModifierPropertiesEXT* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDrmFormatModifierPropertiesEXT*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDrmFormatModifierPropertiesEXT*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkDynamicState>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDynamicState>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkDynamicState *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkDynamicState *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VKenum>))
    {
        return stream << *reinterpret_cast<const Value<vk::VKenum>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VKenum *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VKenum *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkEvent>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkEvent>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkEvent *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkEvent *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkEvent*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkEvent*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkEvent* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkEvent* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkEventCreateFlags     >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkEventCreateFlags     >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkEventCreateFlags      *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkEventCreateFlags      *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VKextension>))
    {
        return stream << *reinterpret_cast<const Value<vk::VKextension>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VKextension *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VKextension *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExtensionProperties*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExtensionProperties*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExtensionProperties* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExtensionProperties* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExtent2D >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExtent2D >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExtent2D  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExtent2D  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExtent2D     >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExtent2D     >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExtent2D      *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExtent2D      *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExtent2D                       >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExtent2D                       >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExtent2D                        *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExtent2D                        *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExtent2D                          >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExtent2D                          >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExtent2D                           *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExtent2D                           *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExtent2D                             >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExtent2D                             >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExtent2D                              *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExtent2D                              *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExtent2D*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExtent2D*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExtent2D* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExtent2D* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExtent3D             >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExtent3D             >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExtent3D              *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExtent3D              *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalBufferProperties*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalBufferProperties*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalBufferProperties* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalBufferProperties* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceFeatureFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceFeatureFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceFeatureFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceFeatureFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceFeatureFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceFeatureFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceFeatureFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceFeatureFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceFeatureFlags >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceFeatureFlags >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceFeatureFlags  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceFeatureFlags  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceHandleTypeFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceHandleTypeFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceHandleTypeFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceHandleTypeFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceHandleTypeFlagBits >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceHandleTypeFlagBits >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceHandleTypeFlagBits  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceHandleTypeFlagBits  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceHandleTypeFlagBits  >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceHandleTypeFlagBits  >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceHandleTypeFlagBits   *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceHandleTypeFlagBits   *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceHandleTypeFlagBits   >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceHandleTypeFlagBits   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceHandleTypeFlagBits    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceHandleTypeFlagBits    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceHandleTypeFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceHandleTypeFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceHandleTypeFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceHandleTypeFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceHandleTypeFlags >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceHandleTypeFlags >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceHandleTypeFlags  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceHandleTypeFlags  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceProperties*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceProperties*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalFenceProperties* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalFenceProperties* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalImageFormatPropertiesNV*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalImageFormatPropertiesNV*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalImageFormatPropertiesNV* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalImageFormatPropertiesNV* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryFeatureFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryFeatureFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryFeatureFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryFeatureFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryFeatureFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryFeatureFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryFeatureFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryFeatureFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryFeatureFlagBitsNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryFeatureFlagBitsNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryFeatureFlagBitsNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryFeatureFlagBitsNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryFeatureFlags  >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryFeatureFlags  >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryFeatureFlags   *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryFeatureFlags   *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryFeatureFlagsNV   >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryFeatureFlagsNV   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryFeatureFlagsNV    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryFeatureFlagsNV    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryHandleTypeFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryHandleTypeFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryHandleTypeFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryHandleTypeFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryHandleTypeFlagBits >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryHandleTypeFlagBits >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryHandleTypeFlagBits  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryHandleTypeFlagBits  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryHandleTypeFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryHandleTypeFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryHandleTypeFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryHandleTypeFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryHandleTypeFlagBitsNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryHandleTypeFlagBitsNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryHandleTypeFlagBitsNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryHandleTypeFlagBitsNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryHandleTypeFlags >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryHandleTypeFlags >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryHandleTypeFlags  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryHandleTypeFlags  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryHandleTypeFlagsNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryHandleTypeFlagsNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryHandleTypeFlagsNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryHandleTypeFlagsNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryHandleTypeFlagsNV >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryHandleTypeFlagsNV >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryHandleTypeFlagsNV  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryHandleTypeFlagsNV  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryProperties >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryProperties >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryProperties  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryProperties  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryProperties    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryProperties    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalMemoryProperties     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalMemoryProperties     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreFeatureFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreFeatureFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreFeatureFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreFeatureFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreFeatureFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreFeatureFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreFeatureFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreFeatureFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreFeatureFlags >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreFeatureFlags >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreFeatureFlags  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreFeatureFlags  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreHandleTypeFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreHandleTypeFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreHandleTypeFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreHandleTypeFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreHandleTypeFlagBits >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreHandleTypeFlagBits >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreHandleTypeFlagBits  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreHandleTypeFlagBits  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreHandleTypeFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreHandleTypeFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreHandleTypeFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreHandleTypeFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreHandleTypeFlags >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreHandleTypeFlags >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreHandleTypeFlags  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreHandleTypeFlags  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreProperties*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreProperties*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkExternalSemaphoreProperties* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkExternalSemaphoreProperties* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFence>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFence>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFence *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFence *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFence >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFence >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFence  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFence  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFence              >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFence              >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFence               *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFence               *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFence                          >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFence                          >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFence                           *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFence                           *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFence                                >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFence                                >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFence                                 *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFence                                 *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFence*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFence*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFence* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFence* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFenceCreateFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFenceCreateFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFenceCreateFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFenceCreateFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFenceCreateFlags     >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFenceCreateFlags     >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFenceCreateFlags      *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFenceCreateFlags      *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFenceImportFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFenceImportFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFenceImportFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFenceImportFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFenceImportFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFenceImportFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFenceImportFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFenceImportFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFenceImportFlags  >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFenceImportFlags  >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFenceImportFlags   *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFenceImportFlags   *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFenceImportFlags              >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFenceImportFlags              >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFenceImportFlags               *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFenceImportFlags               *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFilter>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFilter>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFilter *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFilter *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFilter               >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFilter               >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFilter                *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFilter                *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFilter                         >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFilter                         >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFilter                          *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFilter                          *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFormat>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormat>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFormat *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormat *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFormat               >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormat               >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFormat                *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormat                *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFormat                   >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormat                   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFormat                    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormat                    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFormat                         >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormat                         >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFormat                          *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormat                          *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFormat                           >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormat                           >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFormat                            *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormat                            *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFormat                                     >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormat                                     >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFormat                                      *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormat                                      *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFormatFeatureFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormatFeatureFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFormatFeatureFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormatFeatureFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFormatFeatureFlags >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormatFeatureFlags >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFormatFeatureFlags  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormatFeatureFlags  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFormatFeatureFlags   >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormatFeatureFlags   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFormatFeatureFlags    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormatFeatureFlags    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFormatFeatureFlags               >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormatFeatureFlags               >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFormatFeatureFlags                *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormatFeatureFlags                *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFormatProperties               >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormatProperties               >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFormatProperties                *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormatProperties                *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFormatProperties*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormatProperties*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFormatProperties* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormatProperties* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFormatProperties2*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormatProperties2*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFormatProperties2* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFormatProperties2* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFramebuffer>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFramebuffer>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFramebuffer *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFramebuffer *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFramebuffer   >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFramebuffer   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFramebuffer    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFramebuffer    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFramebuffer          >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFramebuffer          >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFramebuffer           *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFramebuffer           *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFramebuffer*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFramebuffer*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFramebuffer* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFramebuffer* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFramebufferCreateFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFramebufferCreateFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFramebufferCreateFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFramebufferCreateFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFramebufferCreateFlags    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFramebufferCreateFlags    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFramebufferCreateFlags     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFramebufferCreateFlags     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFramebufferMixedSamplesCombinationNV*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFramebufferMixedSamplesCombinationNV*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFramebufferMixedSamplesCombinationNV* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFramebufferMixedSamplesCombinationNV* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFrontFace>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFrontFace>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFrontFace *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFrontFace *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFrontFace            >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFrontFace            >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFrontFace             *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFrontFace             *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFullScreenExclusiveEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFullScreenExclusiveEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFullScreenExclusiveEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFullScreenExclusiveEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkFullScreenExclusiveEXT         >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFullScreenExclusiveEXT         >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkFullScreenExclusiveEXT          *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkFullScreenExclusiveEXT          *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkGeometryAABBNV                       >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryAABBNV                       >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkGeometryAABBNV                        *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryAABBNV                        *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkGeometryDataNV                  >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryDataNV                  >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkGeometryDataNV                   *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryDataNV                   *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkGeometryFlagBitsNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryFlagBitsNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkGeometryFlagBitsNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryFlagBitsNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkGeometryFlagsNV >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryFlagsNV >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkGeometryFlagsNV  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryFlagsNV  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkGeometryInstanceFlagBitsNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryInstanceFlagBitsNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkGeometryInstanceFlagBitsNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryInstanceFlagBitsNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkGeometryTrianglesNV                  >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryTrianglesNV                  >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkGeometryTrianglesNV                   *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryTrianglesNV                   *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkGeometryTypeNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryTypeNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkGeometryTypeNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryTypeNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkGeometryTypeNV                  >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryTypeNV                  >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkGeometryTypeNV                   *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkGeometryTypeNV                   *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkHeadlessSurfaceCreateFlagsEXT   >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkHeadlessSurfaceCreateFlagsEXT   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkHeadlessSurfaceCreateFlagsEXT    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkHeadlessSurfaceCreateFlagsEXT    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImage>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImage>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImage *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImage *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImage >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImage >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImage  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImage  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImage          >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImage          >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImage           *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImage           *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImage                >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImage                >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImage                 *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImage                 *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImage                          >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImage                          >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImage                           *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImage                           *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImage                                                              >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImage                                                              >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImage                                                               *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImage                                                               *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImage*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImage*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImage* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImage* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageAspectFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageAspectFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageAspectFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageAspectFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageAspectFlagBits            >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageAspectFlagBits            >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageAspectFlagBits             *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageAspectFlagBits             *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageAspectFlags >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageAspectFlags >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageAspectFlags  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageAspectFlags  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageAspectFlags     >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageAspectFlags     >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageAspectFlags      *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageAspectFlags      *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageAspectFlags              >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageAspectFlags              >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageAspectFlags               *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageAspectFlags               *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageCreateFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageCreateFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageCreateFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageCreateFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageCreateFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageCreateFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageCreateFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageCreateFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageCreateFlags >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageCreateFlags >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageCreateFlags  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageCreateFlags  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageCreateFlags     >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageCreateFlags     >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageCreateFlags      *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageCreateFlags      *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageCreateFlags       >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageCreateFlags       >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageCreateFlags        *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageCreateFlags        *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageDrmFormatModifierPropertiesEXT*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageDrmFormatModifierPropertiesEXT*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageDrmFormatModifierPropertiesEXT* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageDrmFormatModifierPropertiesEXT* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageFormatProperties          >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageFormatProperties          >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageFormatProperties           *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageFormatProperties           *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageFormatProperties*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageFormatProperties*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageFormatProperties* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageFormatProperties* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageFormatProperties2*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageFormatProperties2*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageFormatProperties2* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageFormatProperties2* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageLayout>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageLayout>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageLayout *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageLayout *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageLayout   >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageLayout   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageLayout    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageLayout    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageLayout          >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageLayout          >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageLayout           *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageLayout           *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageLayout                     >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageLayout                     >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageLayout                      *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageLayout                      *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageLayout                                >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageLayout                                >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageLayout                                 *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageLayout                                 *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImagePipeSurfaceCreateFlagsFUCHSIA   >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImagePipeSurfaceCreateFlagsFUCHSIA   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImagePipeSurfaceCreateFlagsFUCHSIA    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImagePipeSurfaceCreateFlagsFUCHSIA    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageSubresource     >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageSubresource     >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageSubresource      *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageSubresource      *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageSubresourceLayers >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageSubresourceLayers >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageSubresourceLayers  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageSubresourceLayers  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageSubresourceRange >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageSubresourceRange >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageSubresourceRange  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageSubresourceRange  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageTiling>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageTiling>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageTiling *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageTiling *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageTiling          >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageTiling          >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageTiling           *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageTiling           *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageTiling                    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageTiling                    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageTiling                     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageTiling                     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageType>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageType>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageType *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageType *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageType            >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageType            >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageType             *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageType             *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageType                      >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageType                      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageType                       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageType                       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageUsageFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageUsageFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageUsageFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageUsageFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageUsageFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageUsageFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageUsageFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageUsageFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageUsageFlags >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageUsageFlags >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageUsageFlags  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageUsageFlags  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageUsageFlags      >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageUsageFlags      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageUsageFlags       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageUsageFlags       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageUsageFlags                >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageUsageFlags                >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageUsageFlags                 *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageUsageFlags                 *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageUsageFlags                        >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageUsageFlags                        >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageUsageFlags                         *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageUsageFlags                         *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageView>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageView>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageView *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageView *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageView     >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageView     >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageView      *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageView      *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageView                         >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageView                         >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageView                          *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageView                          *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageView*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageView*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageView* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageView* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageViewCreateFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageViewCreateFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageViewCreateFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageViewCreateFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageViewCreateFlags >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageViewCreateFlags >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageViewCreateFlags  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageViewCreateFlags  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageViewType>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageViewType>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageViewType *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageViewType *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageViewType        >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageViewType        >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageViewType         *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageViewType         *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkImageViewType                  >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageViewType                  >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkImageViewType                   *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkImageViewType                   *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkIndexType>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndexType>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkIndexType *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndexType *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkIndexType                >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndexType                >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkIndexType                 *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndexType                 *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkIndexType                  >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndexType                  >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkIndexType                   *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndexType                   *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkIndirectCommandsLayoutNVX>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndirectCommandsLayoutNVX>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkIndirectCommandsLayoutNVX *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndirectCommandsLayoutNVX *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkIndirectCommandsLayoutNVX                              >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndirectCommandsLayoutNVX                              >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkIndirectCommandsLayoutNVX                               *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndirectCommandsLayoutNVX                               *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkIndirectCommandsLayoutNVX*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndirectCommandsLayoutNVX*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkIndirectCommandsLayoutNVX* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndirectCommandsLayoutNVX* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkIndirectCommandsLayoutUsageFlagBitsNVX>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndirectCommandsLayoutUsageFlagBitsNVX>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkIndirectCommandsLayoutUsageFlagBitsNVX *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndirectCommandsLayoutUsageFlagBitsNVX *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkIndirectCommandsLayoutUsageFlagsNVX    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndirectCommandsLayoutUsageFlagsNVX    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkIndirectCommandsLayoutUsageFlagsNVX     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndirectCommandsLayoutUsageFlagsNVX     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkIndirectCommandsTokenTypeNVX>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndirectCommandsTokenTypeNVX>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkIndirectCommandsTokenTypeNVX *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndirectCommandsTokenTypeNVX *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkIndirectCommandsTokenTypeNVX      >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndirectCommandsTokenTypeNVX      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkIndirectCommandsTokenTypeNVX       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIndirectCommandsTokenTypeNVX       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkInstance>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkInstance>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkInstance *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkInstance *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkInstance*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkInstance*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkInstance* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkInstance* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkInstanceCreateFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkInstanceCreateFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkInstanceCreateFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkInstanceCreateFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkInstanceCreateFlags  >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkInstanceCreateFlags  >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkInstanceCreateFlags   *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkInstanceCreateFlags   *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkInternalAllocationType>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkInternalAllocationType>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkInternalAllocationType *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkInternalAllocationType *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkIOSSurfaceCreateFlagsMVK     >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIOSSurfaceCreateFlagsMVK     >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkIOSSurfaceCreateFlagsMVK      *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkIOSSurfaceCreateFlagsMVK      *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkLayerProperties*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkLayerProperties*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkLayerProperties* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkLayerProperties* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkLineRasterizationModeEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkLineRasterizationModeEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkLineRasterizationModeEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkLineRasterizationModeEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkLineRasterizationModeEXT                                       >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkLineRasterizationModeEXT                                       >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkLineRasterizationModeEXT                                        *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkLineRasterizationModeEXT                                        *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkLogicOp>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkLogicOp>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkLogicOp *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkLogicOp *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkLogicOp              >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkLogicOp              >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkLogicOp               *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkLogicOp               *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMacOSSurfaceCreateFlagsMVK   >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMacOSSurfaceCreateFlagsMVK   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMacOSSurfaceCreateFlagsMVK    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMacOSSurfaceCreateFlagsMVK    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryAllocateFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryAllocateFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryAllocateFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryAllocateFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryAllocateFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryAllocateFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryAllocateFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryAllocateFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryAllocateFlags >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryAllocateFlags >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryAllocateFlags  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryAllocateFlags  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryFdPropertiesKHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryFdPropertiesKHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryFdPropertiesKHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryFdPropertiesKHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryHeap           >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryHeap           >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryHeap            *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryHeap            *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryHeapFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryHeapFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryHeapFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryHeapFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryHeapFlags      >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryHeapFlags      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryHeapFlags       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryHeapFlags       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryHostPointerPropertiesEXT*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryHostPointerPropertiesEXT*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryHostPointerPropertiesEXT* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryHostPointerPropertiesEXT* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryMapFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryMapFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryMapFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryMapFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryOverallocationBehaviorAMD>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryOverallocationBehaviorAMD>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryOverallocationBehaviorAMD *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryOverallocationBehaviorAMD *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryOverallocationBehaviorAMD >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryOverallocationBehaviorAMD >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryOverallocationBehaviorAMD  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryOverallocationBehaviorAMD  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryPropertyFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryPropertyFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryPropertyFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryPropertyFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryPropertyFlags  >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryPropertyFlags  >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryPropertyFlags   *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryPropertyFlags   *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryRequirements                                                 >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryRequirements                                                 >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryRequirements                                                  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryRequirements                                                  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryRequirements*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryRequirements*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryRequirements* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryRequirements* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryRequirements2*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryRequirements2*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryRequirements2* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryRequirements2* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryRequirements2KHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryRequirements2KHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryRequirements2KHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryRequirements2KHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryType           >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryType           >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryType            *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryType            *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMemoryWin32HandlePropertiesKHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryWin32HandlePropertiesKHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMemoryWin32HandlePropertiesKHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMemoryWin32HandlePropertiesKHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMetalSurfaceCreateFlagsEXT   >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMetalSurfaceCreateFlagsEXT   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMetalSurfaceCreateFlagsEXT    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMetalSurfaceCreateFlagsEXT    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkMultisamplePropertiesEXT*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMultisamplePropertiesEXT*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkMultisamplePropertiesEXT* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkMultisamplePropertiesEXT* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkNativeBufferUsage2ANDROID >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkNativeBufferUsage2ANDROID >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkNativeBufferUsage2ANDROID  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkNativeBufferUsage2ANDROID  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkObjectEntryTypeNVX>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectEntryTypeNVX>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkObjectEntryTypeNVX *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectEntryTypeNVX *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkObjectEntryTypeNVX         >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectEntryTypeNVX         >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkObjectEntryTypeNVX          *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectEntryTypeNVX          *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkObjectEntryUsageFlagBitsNVX>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectEntryUsageFlagBitsNVX>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkObjectEntryUsageFlagBitsNVX *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectEntryUsageFlagBitsNVX *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkObjectEntryUsageFlagsNVX   >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectEntryUsageFlagsNVX   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkObjectEntryUsageFlagsNVX    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectEntryUsageFlagsNVX    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkObjectTableNVX>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectTableNVX>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkObjectTableNVX *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectTableNVX *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkObjectTableNVX                                         >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectTableNVX                                         >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkObjectTableNVX                                          *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectTableNVX                                          *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkObjectTableNVX*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectTableNVX*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkObjectTableNVX* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectTableNVX* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkObjectType>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectType>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkObjectType *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectType *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkObjectType                           >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectType                           >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkObjectType                            *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectType                            *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkObjectType                                           >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectType                                           >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkObjectType                                            *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkObjectType                                            *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkOffset2D     >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkOffset2D     >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkOffset2D      *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkOffset2D      *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkOffset2D                       >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkOffset2D                       >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkOffset2D                        *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkOffset2D                        *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkOffset3D             >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkOffset3D             >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkOffset3D              *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkOffset3D              *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPastPresentationTimingGOOGLE*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPastPresentationTimingGOOGLE*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPastPresentationTimingGOOGLE* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPastPresentationTimingGOOGLE* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPeerMemoryFeatureFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPeerMemoryFeatureFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPeerMemoryFeatureFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPeerMemoryFeatureFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPeerMemoryFeatureFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPeerMemoryFeatureFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPeerMemoryFeatureFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPeerMemoryFeatureFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPeerMemoryFeatureFlags*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPeerMemoryFeatureFlags*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPeerMemoryFeatureFlags* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPeerMemoryFeatureFlags* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceConfigurationINTEL>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceConfigurationINTEL>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceConfigurationINTEL *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceConfigurationINTEL *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceConfigurationINTEL*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceConfigurationINTEL*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceConfigurationINTEL* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceConfigurationINTEL* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceConfigurationTypeINTEL>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceConfigurationTypeINTEL>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceConfigurationTypeINTEL *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceConfigurationTypeINTEL *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceConfigurationTypeINTEL >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceConfigurationTypeINTEL >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceConfigurationTypeINTEL  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceConfigurationTypeINTEL  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceOverrideTypeINTEL>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceOverrideTypeINTEL>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceOverrideTypeINTEL *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceOverrideTypeINTEL *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceOverrideTypeINTEL      >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceOverrideTypeINTEL      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceOverrideTypeINTEL       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceOverrideTypeINTEL       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceParameterTypeINTEL>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceParameterTypeINTEL>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceParameterTypeINTEL *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceParameterTypeINTEL *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceValueDataINTEL        >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceValueDataINTEL        >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceValueDataINTEL         *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceValueDataINTEL         *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceValueINTEL*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceValueINTEL*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceValueINTEL* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceValueINTEL* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceValueTypeINTEL>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceValueTypeINTEL>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceValueTypeINTEL *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceValueTypeINTEL *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceValueTypeINTEL        >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceValueTypeINTEL        >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPerformanceValueTypeINTEL         *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPerformanceValueTypeINTEL         *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDevice>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDevice>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDevice *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDevice *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDevice                 >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDevice                 >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDevice                  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDevice                  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDevice*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDevice*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDevice* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDevice* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceFeatures         >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceFeatures         >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceFeatures          *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceFeatures          *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceFeatures*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceFeatures*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceFeatures* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceFeatures* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceFeatures2*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceFeatures2*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceFeatures2* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceFeatures2* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceGroupProperties*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceGroupProperties*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceGroupProperties* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceGroupProperties* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceLimits >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceLimits >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceLimits  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceLimits  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceMemoryProperties >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceMemoryProperties >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceMemoryProperties  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceMemoryProperties  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceMemoryProperties*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceMemoryProperties*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceMemoryProperties* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceMemoryProperties* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceMemoryProperties2*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceMemoryProperties2*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceMemoryProperties2* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceMemoryProperties2* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceProperties       >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceProperties       >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceProperties        *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceProperties        *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceProperties*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceProperties*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceProperties* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceProperties* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceProperties2*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceProperties2*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceProperties2* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceProperties2* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceSparseProperties >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceSparseProperties >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceSparseProperties  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceSparseProperties  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceType>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceType>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceType *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceType *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceType >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceType >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPhysicalDeviceType  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPhysicalDeviceType  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipeline>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipeline>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipeline *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipeline *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipeline      >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipeline      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipeline       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipeline       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipeline                   >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipeline                   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipeline                    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipeline                    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipeline*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipeline*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipeline* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipeline* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineBindPoint>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineBindPoint>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineBindPoint *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineBindPoint *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineBindPoint >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineBindPoint >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineBindPoint  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineBindPoint  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineBindPoint    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineBindPoint    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineBindPoint     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineBindPoint     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineBindPoint                      >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineBindPoint                      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineBindPoint                       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineBindPoint                       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineBindPoint                                         >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineBindPoint                                         >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineBindPoint                                          *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineBindPoint                                          *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCache>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCache>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCache *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCache *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCache*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCache*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCache* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCache* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCacheCreateFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCacheCreateFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCacheCreateFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCacheCreateFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCacheCreateFlags    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCacheCreateFlags    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCacheCreateFlags     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCacheCreateFlags     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCacheHeaderVersion>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCacheHeaderVersion>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCacheHeaderVersion *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCacheHeaderVersion *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineColorBlendStateCreateFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineColorBlendStateCreateFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineColorBlendStateCreateFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineColorBlendStateCreateFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineColorBlendStateCreateFlags    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineColorBlendStateCreateFlags    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineColorBlendStateCreateFlags     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineColorBlendStateCreateFlags     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCoverageModulationStateCreateFlagsNV                   >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCoverageModulationStateCreateFlagsNV                   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCoverageModulationStateCreateFlagsNV                    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCoverageModulationStateCreateFlagsNV                    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCoverageReductionStateCreateFlagsNV      >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCoverageReductionStateCreateFlagsNV      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCoverageReductionStateCreateFlagsNV       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCoverageReductionStateCreateFlagsNV       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCoverageToColorStateCreateFlagsNV                    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCoverageToColorStateCreateFlagsNV                    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCoverageToColorStateCreateFlagsNV                     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCoverageToColorStateCreateFlagsNV                     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCreateFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCreateFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCreateFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCreateFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCreateFlags  >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCreateFlags  >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCreateFlags   *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCreateFlags   *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCreationFeedbackEXT* >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCreationFeedbackEXT* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCreationFeedbackEXT*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCreationFeedbackEXT*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCreationFeedbackEXT*      >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCreationFeedbackEXT*      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCreationFeedbackEXT*       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCreationFeedbackEXT*       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCreationFeedbackFlagBitsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCreationFeedbackFlagBitsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCreationFeedbackFlagBitsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCreationFeedbackFlagBitsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCreationFeedbackFlagsEXT  >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCreationFeedbackFlagsEXT  >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineCreationFeedbackFlagsEXT   *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineCreationFeedbackFlagsEXT   *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineDepthStencilStateCreateFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineDepthStencilStateCreateFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineDepthStencilStateCreateFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineDepthStencilStateCreateFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineDepthStencilStateCreateFlags    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineDepthStencilStateCreateFlags    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineDepthStencilStateCreateFlags     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineDepthStencilStateCreateFlags     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineDiscardRectangleStateCreateFlagsEXT                    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineDiscardRectangleStateCreateFlagsEXT                    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineDiscardRectangleStateCreateFlagsEXT                     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineDiscardRectangleStateCreateFlagsEXT                     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineDynamicStateCreateFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineDynamicStateCreateFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineDynamicStateCreateFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineDynamicStateCreateFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineDynamicStateCreateFlags    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineDynamicStateCreateFlags    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineDynamicStateCreateFlags     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineDynamicStateCreateFlags     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineInputAssemblyStateCreateFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineInputAssemblyStateCreateFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineInputAssemblyStateCreateFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineInputAssemblyStateCreateFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineInputAssemblyStateCreateFlags    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineInputAssemblyStateCreateFlags    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineInputAssemblyStateCreateFlags     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineInputAssemblyStateCreateFlags     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineLayout>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineLayout>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineLayout *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineLayout *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineLayout       >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineLayout       >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineLayout        *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineLayout        *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineLayout             >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineLayout             >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineLayout              *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineLayout              *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineLayout*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineLayout*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineLayout* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineLayout* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineLayoutCreateFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineLayoutCreateFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineLayoutCreateFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineLayoutCreateFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineLayoutCreateFlags    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineLayoutCreateFlags    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineLayoutCreateFlags     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineLayoutCreateFlags     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineMultisampleStateCreateFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineMultisampleStateCreateFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineMultisampleStateCreateFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineMultisampleStateCreateFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineMultisampleStateCreateFlags    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineMultisampleStateCreateFlags    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineMultisampleStateCreateFlags     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineMultisampleStateCreateFlags     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRasterizationConservativeStateCreateFlagsEXT           >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRasterizationConservativeStateCreateFlagsEXT           >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRasterizationConservativeStateCreateFlagsEXT            *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRasterizationConservativeStateCreateFlagsEXT            *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRasterizationDepthClipStateCreateFlagsEXT         >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRasterizationDepthClipStateCreateFlagsEXT         >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRasterizationDepthClipStateCreateFlagsEXT          *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRasterizationDepthClipStateCreateFlagsEXT          *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRasterizationStateCreateFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRasterizationStateCreateFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRasterizationStateCreateFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRasterizationStateCreateFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRasterizationStateCreateFlags    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRasterizationStateCreateFlags    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRasterizationStateCreateFlags     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRasterizationStateCreateFlags     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRasterizationStateStreamCreateFlagsEXT                 >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRasterizationStateStreamCreateFlagsEXT                 >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineRasterizationStateStreamCreateFlagsEXT                  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineRasterizationStateStreamCreateFlagsEXT                  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineShaderStageCreateFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineShaderStageCreateFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineShaderStageCreateFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineShaderStageCreateFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineShaderStageCreateFlags    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineShaderStageCreateFlags    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineShaderStageCreateFlags     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineShaderStageCreateFlags     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineShaderStageCreateInfo >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineShaderStageCreateInfo >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineShaderStageCreateInfo  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineShaderStageCreateInfo  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineStageFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineStageFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineStageFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineStageFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineStageFlagBits   >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineStageFlagBits   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineStageFlagBits    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineStageFlagBits    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineStageFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineStageFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineStageFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineStageFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineStageFlags >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineStageFlags >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineStageFlags  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineStageFlags  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineStageFlags   >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineStageFlags   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineStageFlags    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineStageFlags    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineStageFlags              >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineStageFlags              >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineStageFlags               *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineStageFlags               *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineTessellationStateCreateFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineTessellationStateCreateFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineTessellationStateCreateFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineTessellationStateCreateFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineTessellationStateCreateFlags    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineTessellationStateCreateFlags    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineTessellationStateCreateFlags     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineTessellationStateCreateFlags     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineVertexInputStateCreateFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineVertexInputStateCreateFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineVertexInputStateCreateFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineVertexInputStateCreateFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineVertexInputStateCreateFlags    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineVertexInputStateCreateFlags    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineVertexInputStateCreateFlags     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineVertexInputStateCreateFlags     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineViewportStateCreateFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineViewportStateCreateFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineViewportStateCreateFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineViewportStateCreateFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineViewportStateCreateFlags    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineViewportStateCreateFlags    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineViewportStateCreateFlags     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineViewportStateCreateFlags     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPipelineViewportSwizzleStateCreateFlagsNV    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineViewportSwizzleStateCreateFlagsNV    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPipelineViewportSwizzleStateCreateFlagsNV     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPipelineViewportSwizzleStateCreateFlagsNV     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPointClippingBehavior>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPointClippingBehavior>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPointClippingBehavior *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPointClippingBehavior *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPointClippingBehavior>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPointClippingBehavior>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPointClippingBehavior *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPointClippingBehavior *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPointClippingBehavior      >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPointClippingBehavior      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPointClippingBehavior       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPointClippingBehavior       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPointClippingBehaviorKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPointClippingBehaviorKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPointClippingBehaviorKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPointClippingBehaviorKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPolygonMode>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPolygonMode>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPolygonMode *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPolygonMode *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPolygonMode          >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPolygonMode          >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPolygonMode           *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPolygonMode           *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPresentModeKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPresentModeKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPresentModeKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPresentModeKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPresentModeKHR                 >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPresentModeKHR                 >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPresentModeKHR                  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPresentModeKHR                  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPresentModeKHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPresentModeKHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPresentModeKHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPresentModeKHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPrimitiveTopology>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPrimitiveTopology>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPrimitiveTopology *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPrimitiveTopology *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkPrimitiveTopology    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPrimitiveTopology    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkPrimitiveTopology     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkPrimitiveTopology     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueryControlFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryControlFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueryControlFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryControlFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueryControlFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryControlFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueryControlFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryControlFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueryControlFlags    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryControlFlags    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueryControlFlags     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryControlFlags     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueryPipelineStatisticFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryPipelineStatisticFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueryPipelineStatisticFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryPipelineStatisticFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueryPipelineStatisticFlags >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryPipelineStatisticFlags >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueryPipelineStatisticFlags  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryPipelineStatisticFlags  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueryPool>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryPool>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueryPool *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryPool *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueryPool*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryPool*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueryPool* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryPool* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueryPoolCreateFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryPoolCreateFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueryPoolCreateFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryPoolCreateFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueryPoolCreateFlags >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryPoolCreateFlags >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueryPoolCreateFlags  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryPoolCreateFlags  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueryPoolSamplingModeINTEL>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryPoolSamplingModeINTEL>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueryPoolSamplingModeINTEL *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryPoolSamplingModeINTEL *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueryPoolSamplingModeINTEL        >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryPoolSamplingModeINTEL        >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueryPoolSamplingModeINTEL         *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryPoolSamplingModeINTEL         *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueryResultFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryResultFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueryResultFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryResultFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueryResultFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryResultFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueryResultFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryResultFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueryType>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryType>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueryType *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryType *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueryType            >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryType            >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueryType             *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueryType             *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueue>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueue>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueue *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueue *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueue*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueue*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueue* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueue* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueueFamilyProperties          >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueueFamilyProperties          >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueueFamilyProperties           *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueueFamilyProperties           *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueueFamilyProperties*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueueFamilyProperties*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueueFamilyProperties* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueueFamilyProperties* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueueFamilyProperties2*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueueFamilyProperties2*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueueFamilyProperties2* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueueFamilyProperties2* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueueFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueueFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueueFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueueFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueueFlags           >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueueFlags           >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueueFlags            *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueueFlags            *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueueGlobalPriorityEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueueGlobalPriorityEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueueGlobalPriorityEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueueGlobalPriorityEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkQueueGlobalPriorityEXT       >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueueGlobalPriorityEXT       >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkQueueGlobalPriorityEXT        *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkQueueGlobalPriorityEXT        *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkRasterizationOrderAMD>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRasterizationOrderAMD>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkRasterizationOrderAMD *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRasterizationOrderAMD *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkRasterizationOrderAMD          >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRasterizationOrderAMD          >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkRasterizationOrderAMD           *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRasterizationOrderAMD           *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkRayTracingShaderGroupTypeNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRayTracingShaderGroupTypeNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkRayTracingShaderGroupTypeNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRayTracingShaderGroupTypeNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkRayTracingShaderGroupTypeNV >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRayTracingShaderGroupTypeNV >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkRayTracingShaderGroupTypeNV  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRayTracingShaderGroupTypeNV  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkRect2D       >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRect2D       >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkRect2D        *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRect2D        *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkRect2D               >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRect2D               >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkRect2D                *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRect2D                *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkRect2D                         >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRect2D                         >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkRect2D                          *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRect2D                          *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkRect2D*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRect2D*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkRect2D* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRect2D* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkRefreshCycleDurationGOOGLE*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRefreshCycleDurationGOOGLE*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkRefreshCycleDurationGOOGLE* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRefreshCycleDurationGOOGLE* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkRenderPass>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPass>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkRenderPass *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPass *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkRenderPass    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPass    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkRenderPass     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPass     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkRenderPass           >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPass           >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkRenderPass            *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPass            *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkRenderPass*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPass*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkRenderPass* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPass* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkRenderPassCreateFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPassCreateFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkRenderPassCreateFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPassCreateFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkRenderPassCreateFlags >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPassCreateFlags >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkRenderPassCreateFlags  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPassCreateFlags  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkRenderPassCreateFlags    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPassCreateFlags    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkRenderPassCreateFlags     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkRenderPassCreateFlags     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkResolveModeFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkResolveModeFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkResolveModeFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkResolveModeFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkResolveModeFlagBitsKHR                                 >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkResolveModeFlagBitsKHR                                 >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkResolveModeFlagBitsKHR                                  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkResolveModeFlagBitsKHR                                  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkResolveModeFlagsKHR                >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkResolveModeFlagsKHR                >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkResolveModeFlagsKHR                 *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkResolveModeFlagsKHR                 *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkResult>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkResult>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkResult *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkResult *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkResult* >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkResult* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkResult*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkResult*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSampleCountFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampleCountFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSampleCountFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampleCountFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSampleCountFlagBits  >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampleCountFlagBits  >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSampleCountFlagBits   *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampleCountFlagBits   *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSampleCountFlagBits      >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampleCountFlagBits      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSampleCountFlagBits       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampleCountFlagBits       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSampleCountFlagBits            >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampleCountFlagBits            >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSampleCountFlagBits             *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampleCountFlagBits             *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSampleCountFlagBits                        >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampleCountFlagBits                        >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSampleCountFlagBits                         *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampleCountFlagBits                         *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSampleCountFlags     >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampleCountFlags     >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSampleCountFlags      *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampleCountFlags      *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSampleCountFlags         >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampleCountFlags         >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSampleCountFlags          *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampleCountFlags          *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSampleCountFlags               >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampleCountFlags               >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSampleCountFlags                *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampleCountFlags                *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSampleLocationsInfoEXT         >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampleLocationsInfoEXT         >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSampleLocationsInfoEXT          *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampleLocationsInfoEXT          *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSampleMask>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampleMask>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSampleMask *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampleMask *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSampler>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampler>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSampler *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampler *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSampler       >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampler       >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSampler        *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampler        *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSampler           >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampler           >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSampler            *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampler            *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSampler*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampler*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSampler* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSampler* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerAddressMode>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerAddressMode>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerAddressMode *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerAddressMode *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerAddressMode   >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerAddressMode   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerAddressMode    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerAddressMode    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerCreateFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerCreateFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerCreateFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerCreateFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerCreateFlags   >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerCreateFlags   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerCreateFlags    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerCreateFlags    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerMipmapMode>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerMipmapMode>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerMipmapMode *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerMipmapMode *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerMipmapMode    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerMipmapMode    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerMipmapMode     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerMipmapMode     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerReductionModeEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerReductionModeEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerReductionModeEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerReductionModeEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerReductionModeEXT >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerReductionModeEXT >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerReductionModeEXT  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerReductionModeEXT  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrConversion>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrConversion>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrConversion *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrConversion *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrConversion      >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrConversion      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrConversion       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrConversion       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrConversion*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrConversion*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrConversion* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrConversion* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrConversionKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrConversionKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrConversionKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrConversionKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrModelConversion>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrModelConversion>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrModelConversion *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrModelConversion *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrModelConversion>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrModelConversion>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrModelConversion *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrModelConversion *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrModelConversion >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrModelConversion >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrModelConversion  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrModelConversion  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrModelConversion      >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrModelConversion      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrModelConversion       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrModelConversion       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrModelConversionKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrModelConversionKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrModelConversionKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrModelConversionKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrRange>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrRange>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrRange *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrRange *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrRange>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrRange>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrRange *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrRange *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrRange           >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrRange           >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrRange            *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrRange            *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrRange                >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrRange                >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrRange                 *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrRange                 *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrRangeKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrRangeKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSamplerYcbcrRangeKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSamplerYcbcrRangeKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkScopeNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkScopeNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkScopeNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkScopeNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkScopeNV                           >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkScopeNV                           >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkScopeNV                            *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkScopeNV                            *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSemaphore>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphore>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSemaphore *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphore *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSemaphore >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphore >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSemaphore  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphore  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSemaphore    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphore    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSemaphore     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphore     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSemaphore                      >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphore                      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSemaphore                       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphore                       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSemaphore*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphore*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSemaphore* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphore* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSemaphoreCreateFlags >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphoreCreateFlags >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSemaphoreCreateFlags  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphoreCreateFlags  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSemaphoreImportFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphoreImportFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSemaphoreImportFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphoreImportFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSemaphoreImportFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphoreImportFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSemaphoreImportFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphoreImportFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSemaphoreImportFlags >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphoreImportFlags >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSemaphoreImportFlags  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSemaphoreImportFlags  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShaderFloatControlsIndependenceKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderFloatControlsIndependenceKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShaderFloatControlsIndependenceKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderFloatControlsIndependenceKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShaderFloatControlsIndependenceKHR >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderFloatControlsIndependenceKHR >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShaderFloatControlsIndependenceKHR  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderFloatControlsIndependenceKHR  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShaderInfoTypeAMD>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderInfoTypeAMD>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShaderInfoTypeAMD *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderInfoTypeAMD *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShaderModule>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderModule>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShaderModule *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderModule *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShaderModule         >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderModule         >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShaderModule          *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderModule          *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShaderModule*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderModule*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShaderModule* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderModule* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShaderModuleCreateFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderModuleCreateFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShaderModuleCreateFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderModuleCreateFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShaderModuleCreateFlags >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderModuleCreateFlags >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShaderModuleCreateFlags  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderModuleCreateFlags  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShaderResourceUsageAMD >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderResourceUsageAMD >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShaderResourceUsageAMD  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderResourceUsageAMD  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShaderStageFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderStageFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShaderStageFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderStageFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShaderStageFlagBits  >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderStageFlagBits  >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShaderStageFlagBits   *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderStageFlagBits   *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShaderStageFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderStageFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShaderStageFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderStageFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShaderStageFlags >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderStageFlags >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShaderStageFlags  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderStageFlags  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShaderStageFlags     >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderStageFlags     >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShaderStageFlags      *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderStageFlags      *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShaderStageFlags           >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderStageFlags           >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShaderStageFlags            *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderStageFlags            *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShaderStageFlags            >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderStageFlags            >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShaderStageFlags             *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderStageFlags             *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShaderStageFlags             >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderStageFlags             >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShaderStageFlags              *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderStageFlags              *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShaderStageFlags                  >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderStageFlags                  >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShaderStageFlags                   *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShaderStageFlags                   *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShadingRatePaletteEntryNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShadingRatePaletteEntryNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShadingRatePaletteEntryNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShadingRatePaletteEntryNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkShadingRatePaletteEntryNV         >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShadingRatePaletteEntryNV         >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkShadingRatePaletteEntryNV          *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkShadingRatePaletteEntryNV          *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSharingMode>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSharingMode>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSharingMode *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSharingMode *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSharingMode >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSharingMode >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSharingMode  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSharingMode  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSharingMode          >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSharingMode          >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSharingMode           *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSharingMode           *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSharingMode                    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSharingMode                    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSharingMode                     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSharingMode                     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageFormatFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageFormatFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageFormatFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageFormatFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageFormatFlags >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageFormatFlags >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageFormatFlags  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageFormatFlags  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageFormatProperties >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageFormatProperties >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageFormatProperties  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageFormatProperties  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageFormatProperties    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageFormatProperties    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageFormatProperties     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageFormatProperties     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageFormatProperties*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageFormatProperties*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageFormatProperties* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageFormatProperties* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageFormatProperties2*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageFormatProperties2*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageFormatProperties2* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageFormatProperties2* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageMemoryRequirements                                      >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageMemoryRequirements                                      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageMemoryRequirements                                       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageMemoryRequirements                                       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageMemoryRequirements*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageMemoryRequirements*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageMemoryRequirements* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageMemoryRequirements* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageMemoryRequirements2*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageMemoryRequirements2*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSparseImageMemoryRequirements2* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseImageMemoryRequirements2* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSparseMemoryBindFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseMemoryBindFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSparseMemoryBindFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseMemoryBindFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSparseMemoryBindFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseMemoryBindFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSparseMemoryBindFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSparseMemoryBindFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkStencilFaceFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkStencilFaceFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkStencilFaceFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkStencilFaceFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkStencilFaceFlags>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkStencilFaceFlags>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkStencilFaceFlags *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkStencilFaceFlags *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkStencilOp>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkStencilOp>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkStencilOp *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkStencilOp *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkStencilOp            >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkStencilOp            >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkStencilOp             *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkStencilOp             *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkStencilOpState       >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkStencilOpState       >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkStencilOpState        *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkStencilOpState        *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkStreamDescriptorSurfaceCreateFlagsGGP >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkStreamDescriptorSurfaceCreateFlagsGGP >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkStreamDescriptorSurfaceCreateFlagsGGP  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkStreamDescriptorSurfaceCreateFlagsGGP  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkStructureType>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkStructureType>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkStructureType *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkStructureType *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkStructureType >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkStructureType >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkStructureType  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkStructureType  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkStructureType  >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkStructureType  >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkStructureType   *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkStructureType   *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkStructureType        >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkStructureType        >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkStructureType         *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkStructureType         *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkStructureType                  >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkStructureType                  >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkStructureType                   *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkStructureType                   *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSubgroupFeatureFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubgroupFeatureFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSubgroupFeatureFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubgroupFeatureFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSubgroupFeatureFlags        >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubgroupFeatureFlags        >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSubgroupFeatureFlags         *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubgroupFeatureFlags         *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSubpassContents>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubpassContents>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSubpassContents *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubpassContents *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSubpassContents      >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubpassContents      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSubpassContents       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubpassContents       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSubpassDescriptionFlagBits>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubpassDescriptionFlagBits>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSubpassDescriptionFlagBits *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubpassDescriptionFlagBits *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSubpassDescriptionFlags >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubpassDescriptionFlags >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSubpassDescriptionFlags  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubpassDescriptionFlags  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSubpassDescriptionFlags                   >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubpassDescriptionFlags                   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSubpassDescriptionFlags                    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubpassDescriptionFlags                    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSubresourceLayout*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubresourceLayout*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSubresourceLayout* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSubresourceLayout* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceCapabilities2EXT*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceCapabilities2EXT*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceCapabilities2EXT* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceCapabilities2EXT* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceCapabilities2KHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceCapabilities2KHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceCapabilities2KHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceCapabilities2KHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceCapabilitiesKHR >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceCapabilitiesKHR >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceCapabilitiesKHR  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceCapabilitiesKHR  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceCapabilitiesKHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceCapabilitiesKHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceCapabilitiesKHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceCapabilitiesKHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceCounterFlagBitsEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceCounterFlagBitsEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceCounterFlagBitsEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceCounterFlagBitsEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceCounterFlagsEXT >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceCounterFlagsEXT >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceCounterFlagsEXT  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceCounterFlagsEXT  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceCounterFlagsEXT         >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceCounterFlagsEXT         >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceCounterFlagsEXT          *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceCounterFlagsEXT          *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceFormat2KHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceFormat2KHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceFormat2KHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceFormat2KHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceFormatKHR >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceFormatKHR >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceFormatKHR  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceFormatKHR  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceFormatKHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceFormatKHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceFormatKHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceFormatKHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceKHR >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceKHR >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceKHR  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceKHR  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceKHR                     >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceKHR                     >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceKHR                      *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceKHR                      *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceKHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceKHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceKHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceKHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceTransformFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceTransformFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceTransformFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceTransformFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceTransformFlagBitsKHR    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceTransformFlagBitsKHR    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceTransformFlagBitsKHR     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceTransformFlagBitsKHR     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceTransformFlagsKHR       >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceTransformFlagsKHR       >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSurfaceTransformFlagsKHR        *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSurfaceTransformFlagsKHR        *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSwapchainCreateFlagBitsKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSwapchainCreateFlagBitsKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSwapchainCreateFlagBitsKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSwapchainCreateFlagBitsKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSwapchainCreateFlagsKHR        >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSwapchainCreateFlagsKHR        >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSwapchainCreateFlagsKHR         *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSwapchainCreateFlagsKHR         *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSwapchainImageUsageFlagBitsANDROID>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSwapchainImageUsageFlagBitsANDROID>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSwapchainImageUsageFlagBitsANDROID *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSwapchainImageUsageFlagBitsANDROID *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSwapchainImageUsageFlagsANDROID>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSwapchainImageUsageFlagsANDROID>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSwapchainImageUsageFlagsANDROID *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSwapchainImageUsageFlagsANDROID *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSwapchainImageUsageFlagsANDROID >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSwapchainImageUsageFlagsANDROID >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSwapchainImageUsageFlagsANDROID  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSwapchainImageUsageFlagsANDROID  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSwapchainKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSwapchainKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSwapchainKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSwapchainKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSwapchainKHR >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSwapchainKHR >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSwapchainKHR  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSwapchainKHR  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSwapchainKHR   >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSwapchainKHR   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSwapchainKHR    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSwapchainKHR    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSwapchainKHR*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSwapchainKHR*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSwapchainKHR* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSwapchainKHR* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkSystemAllocationScope>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSystemAllocationScope>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkSystemAllocationScope *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkSystemAllocationScope *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkTessellationDomainOrigin>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkTessellationDomainOrigin>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkTessellationDomainOrigin *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkTessellationDomainOrigin *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkTessellationDomainOrigin>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkTessellationDomainOrigin>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkTessellationDomainOrigin *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkTessellationDomainOrigin *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkTessellationDomainOrigin    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkTessellationDomainOrigin    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkTessellationDomainOrigin     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkTessellationDomainOrigin     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkTessellationDomainOriginKHR>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkTessellationDomainOriginKHR>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkTessellationDomainOriginKHR *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkTessellationDomainOriginKHR *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkTimeDomainEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkTimeDomainEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkTimeDomainEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkTimeDomainEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkTimeDomainEXT        >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkTimeDomainEXT        >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkTimeDomainEXT         *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkTimeDomainEXT         *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkTimeDomainEXT*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkTimeDomainEXT*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkTimeDomainEXT* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkTimeDomainEXT* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkValidationCacheCreateFlagsEXT    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkValidationCacheCreateFlagsEXT    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkValidationCacheCreateFlagsEXT     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkValidationCacheCreateFlagsEXT     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkValidationCacheEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkValidationCacheEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkValidationCacheEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkValidationCacheEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkValidationCacheEXT    >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkValidationCacheEXT    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkValidationCacheEXT     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkValidationCacheEXT     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkValidationCacheEXT*>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkValidationCacheEXT*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkValidationCacheEXT* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkValidationCacheEXT* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkValidationCacheHeaderVersionEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkValidationCacheHeaderVersionEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkValidationCacheHeaderVersionEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkValidationCacheHeaderVersionEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkValidationCheckEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkValidationCheckEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkValidationCheckEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkValidationCheckEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkValidationFeatureDisableEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkValidationFeatureDisableEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkValidationFeatureDisableEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkValidationFeatureDisableEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkValidationFeatureEnableEXT>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkValidationFeatureEnableEXT>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkValidationFeatureEnableEXT *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkValidationFeatureEnableEXT *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkVendorId>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkVendorId>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkVendorId *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkVendorId *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkVertexInputRate>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkVertexInputRate>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkVertexInputRate *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkVertexInputRate *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkVertexInputRate      >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkVertexInputRate      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkVertexInputRate       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkVertexInputRate       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkViewportCoordinateSwizzleNV>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkViewportCoordinateSwizzleNV>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkViewportCoordinateSwizzleNV *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkViewportCoordinateSwizzleNV *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkViewportCoordinateSwizzleNV          >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkViewportCoordinateSwizzleNV          >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkViewportCoordinateSwizzleNV           *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkViewportCoordinateSwizzleNV           *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkViSurfaceCreateFlagsNN   >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkViSurfaceCreateFlagsNN   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkViSurfaceCreateFlagsNN    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkViSurfaceCreateFlagsNN    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkWaylandSurfaceCreateFlagsKHR   >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkWaylandSurfaceCreateFlagsKHR   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkWaylandSurfaceCreateFlagsKHR    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkWaylandSurfaceCreateFlagsKHR    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkWin32SurfaceCreateFlagsKHR   >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkWin32SurfaceCreateFlagsKHR   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkWin32SurfaceCreateFlagsKHR    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkWin32SurfaceCreateFlagsKHR    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkXcbSurfaceCreateFlagsKHR   >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkXcbSurfaceCreateFlagsKHR   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkXcbSurfaceCreateFlagsKHR    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkXcbSurfaceCreateFlagsKHR    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkXlibSurfaceCreateFlagsKHR   >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkXlibSurfaceCreateFlagsKHR   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkXlibSurfaceCreateFlagsKHR    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkXlibSurfaceCreateFlagsKHR    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::VkXYColorEXT   >))
    {
        return stream << *reinterpret_cast<const Value<vk::VkXYColorEXT   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::VkXYColorEXT    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::VkXYColorEXT    *>*>(value);
    }

    /*
    if (typeid(*value) == typeid(Value<vk::void>))
    {
        return stream << *reinterpret_cast<const Value<vk::void>*>(value);
    }
    */
    
    if (typeid(*value) == typeid(Value<vk::void *>))
    {
        return stream << *reinterpret_cast<const Value<vk::void *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::void*>))
    {
        return stream << *reinterpret_cast<const Value<vk::void*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::void* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::void* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::void* >))
    {
        return stream << *reinterpret_cast<const Value<vk::void* >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::void*  *>))
    {
        return stream << *reinterpret_cast<const Value<vk::void*  *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::void*   >))
    {
        return stream << *reinterpret_cast<const Value<vk::void*   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::void*    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::void*    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::void*    >))
    {
        return stream << *reinterpret_cast<const Value<vk::void*    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::void*     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::void*     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::void*      >))
    {
        return stream << *reinterpret_cast<const Value<vk::void*      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::void*       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::void*       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::void*        >))
    {
        return stream << *reinterpret_cast<const Value<vk::void*        >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::void*         *>))
    {
        return stream << *reinterpret_cast<const Value<vk::void*         *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::void*          >))
    {
        return stream << *reinterpret_cast<const Value<vk::void*          >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::void*           *>))
    {
        return stream << *reinterpret_cast<const Value<vk::void*           *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::void*           >))
    {
        return stream << *reinterpret_cast<const Value<vk::void*           >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::void*            *>))
    {
        return stream << *reinterpret_cast<const Value<vk::void*            *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::void*            >))
    {
        return stream << *reinterpret_cast<const Value<vk::void*            >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::void*             *>))
    {
        return stream << *reinterpret_cast<const Value<vk::void*             *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::void*             >))
    {
        return stream << *reinterpret_cast<const Value<vk::void*             >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::void*              *>))
    {
        return stream << *reinterpret_cast<const Value<vk::void*              *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::void*                  >))
    {
        return stream << *reinterpret_cast<const Value<vk::void*                  >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::void*                   *>))
    {
        return stream << *reinterpret_cast<const Value<vk::void*                   *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::void*                   >))
    {
        return stream << *reinterpret_cast<const Value<vk::void*                   >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::void*                    *>))
    {
        return stream << *reinterpret_cast<const Value<vk::void*                    *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::void*                      >))
    {
        return stream << *reinterpret_cast<const Value<vk::void*                      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::void*                       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::void*                       *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::void*                          >))
    {
        return stream << *reinterpret_cast<const Value<vk::void*                          >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::void*                           *>))
    {
        return stream << *reinterpret_cast<const Value<vk::void*                           *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::void*                            >))
    {
        return stream << *reinterpret_cast<const Value<vk::void*                            >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::void*                             *>))
    {
        return stream << *reinterpret_cast<const Value<vk::void*                             *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::void*                              >))
    {
        return stream << *reinterpret_cast<const Value<vk::void*                              >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::void*                               *>))
    {
        return stream << *reinterpret_cast<const Value<vk::void*                               *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::void*                               >))
    {
        return stream << *reinterpret_cast<const Value<vk::void*                               >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::void*                                *>))
    {
        return stream << *reinterpret_cast<const Value<vk::void*                                *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::void*                                >))
    {
        return stream << *reinterpret_cast<const Value<vk::void*                                >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::void*                                 *>))
    {
        return stream << *reinterpret_cast<const Value<vk::void*                                 *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::void*                                    >))
    {
        return stream << *reinterpret_cast<const Value<vk::void*                                    >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::void*                                     *>))
    {
        return stream << *reinterpret_cast<const Value<vk::void*                                     *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::void*                                       >))
    {
        return stream << *reinterpret_cast<const Value<vk::void*                                       >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::void*                                        *>))
    {
        return stream << *reinterpret_cast<const Value<vk::void*                                        *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::void**>))
    {
        return stream << *reinterpret_cast<const Value<vk::void**>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::void** *>))
    {
        return stream << *reinterpret_cast<const Value<vk::void** *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::Window>))
    {
        return stream << *reinterpret_cast<const Value<vk::Window>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::Window *>))
    {
        return stream << *reinterpret_cast<const Value<vk::Window *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::Window                           >))
    {
        return stream << *reinterpret_cast<const Value<vk::Window                           >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::Window                            *>))
    {
        return stream << *reinterpret_cast<const Value<vk::Window                            *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::wl_display>))
    {
        return stream << *reinterpret_cast<const Value<vk::wl_display>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::wl_display *>))
    {
        return stream << *reinterpret_cast<const Value<vk::wl_display *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::wl_surface>))
    {
        return stream << *reinterpret_cast<const Value<vk::wl_surface>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::wl_surface *>))
    {
        return stream << *reinterpret_cast<const Value<vk::wl_surface *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::xcb_connection_t>))
    {
        return stream << *reinterpret_cast<const Value<vk::xcb_connection_t>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::xcb_connection_t *>))
    {
        return stream << *reinterpret_cast<const Value<vk::xcb_connection_t *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::xcb_connection_t*>))
    {
        return stream << *reinterpret_cast<const Value<vk::xcb_connection_t*>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::xcb_connection_t* *>))
    {
        return stream << *reinterpret_cast<const Value<vk::xcb_connection_t* *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::xcb_connection_t*                >))
    {
        return stream << *reinterpret_cast<const Value<vk::xcb_connection_t*                >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::xcb_connection_t*                 *>))
    {
        return stream << *reinterpret_cast<const Value<vk::xcb_connection_t*                 *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::xcb_visualid_t>))
    {
        return stream << *reinterpret_cast<const Value<vk::xcb_visualid_t>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::xcb_visualid_t *>))
    {
        return stream << *reinterpret_cast<const Value<vk::xcb_visualid_t *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::xcb_window_t>))
    {
        return stream << *reinterpret_cast<const Value<vk::xcb_window_t>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::xcb_window_t *>))
    {
        return stream << *reinterpret_cast<const Value<vk::xcb_window_t *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::xcb_window_t                     >))
    {
        return stream << *reinterpret_cast<const Value<vk::xcb_window_t                     >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::xcb_window_t                      *>))
    {
        return stream << *reinterpret_cast<const Value<vk::xcb_window_t                      *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::zx_handle_t>))
    {
        return stream << *reinterpret_cast<const Value<vk::zx_handle_t>*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::zx_handle_t *>))
    {
        return stream << *reinterpret_cast<const Value<vk::zx_handle_t *>*>(value);
    }

    
    if (typeid(*value) == typeid(Value<vk::zx_handle_t                      >))
    {
        return stream << *reinterpret_cast<const Value<vk::zx_handle_t                      >*>(value);
    }
    
    
    if (typeid(*value) == typeid(Value<vk::zx_handle_t                       *>))
    {
        return stream << *reinterpret_cast<const Value<vk::zx_handle_t                       *>*>(value);
    }

    // expect an AbstractValue with a pointer in first member
    return stream << *reinterpret_cast<const Value<void *>*>(value);
}


} // namespace vkbinding