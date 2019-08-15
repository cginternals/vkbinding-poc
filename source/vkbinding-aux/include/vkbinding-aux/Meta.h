
#pragma once


#include <string>
#include <utility>
#include <vector>
#include <set>
#include <cstdint>

#include <vkbinding-aux/vkbinding-aux_api.h>
#include <vkbinding-aux/vkbinding-aux_features.h>

#include <vkbinding/vk/types.h>
#include <vkbinding/AbstractFunction.h>


namespace vkbinding
{


class Version;


namespace aux
{


/**
*  @brief
*    Provisioning of meta information about OpenGL extensions, functions and conversion of strings and symbols of the OpenGL API
*/
class VKBINDING_AUX_API Meta
{
public:
    /**
    *  @brief
    *    Deleted Constructor as all functions are static
    */
    Meta() = delete;

    /**
    *  @brief
    *    Returns the revision of the parsed vk.xml file
    *
    *  @return
    *    The revision of the parsed vk.xml file
    */
    static int vkRevision();

    /**
    *  @brief
    *    Converts a string into a bitfield symbol
    *
    *  @param[in] bitfield
    *     The string representation of the bitfield
    *
    *  @return
    *    The symbol identified through the bitfield string, 0 if failed
    */
    static vk::VKbitfield getBitfield(const std::string & bitfield);
    
    /**
    *  @brief
    *    Returns the list of all bitfields known by the vk.xml
    *
    *  @return
    *    The list of all bitfields known by the vk.xml
    */
    static std::vector<vk::VKbitfield> bitfields();

    /**
    *  @brief
    *    Converts a VKenum to a string
    *
    *  @param[in] vkenum
    *    The enum to convert
    *
    *  @return
    *    A string representation of the GLenum symbol name
    *
    *  @remark
    *    Beware, that some enums in the OpenGL API have different symbol names but identical enum values and that this function cannot differentiate between them
    */
    static const std::string & getString(vk::VKenum vkenum);
    
    /**
    *  @brief
    *    Converts a string to an enum symbol
    *
    *  @param[in] vkenum
    *    The string representation of the enum
    *
    *  @return
    *    The symbol identified through the enum string, 0 if failed
    */
    static vk::VKenum getEnum(const std::string & vkenum);
    
    /**
    *  @brief
    *    Returns the list of all enums known by the vk.xml
    *
    *  @return
    *    The list of all enums known by the vk.xml
    */
    static std::vector<vk::VKenum> enums();

    /**
    *  @brief
    *    Converts a VKboolean to a string
    *
    *  @param[in] vkboolean
    *    The boolean to convert
    *
    *  @return
    *    A string representation of the VKboolean symbol name
    *
    *  @remark
    *    Can either be `VK_TRUE` or `VK_FALSE`
    */
    static const std::string & getString(const vk::VKboolean & vkboolean);
    
    /**
    *  @brief
    *    Converts a string to a VKboolean symbol
    *
    *  @param[in] boolean
    *    The string representation of the VKboolean
    *
    *  @return
    *    The symbol identified through the boolean string, `VK_FALSE` if failed
    */
    static vk::VKboolean getBoolean(const std::string & boolean);

    /**
    *  @brief
    *    Converts a VKextension to its string representation
    *
    *  @param[in] vkextension
    *    The extension to convert
    *
    *  @return
    *    The string representation of the extension
    */
    static const std::string & getString(vk::VKextension vkextension);
    
    /**
    *  @brief
    *    Converts a string to an VKextension
    *
    *  @param[in] extension
    *    The string representation of the extension
    *
    *  @return
    *    The symbol identified through the extension string, 'UNKNOWN' if failed
    */
    static vk::VKextension getExtension(const std::string & extension);

    /**
    *  @brief
    *    Returns the set of all extensions known by the vk.xml
    *
    *  @return
    *    The set of all extensions known by the vk.xml
    */
    static std::set<vk::VKextension> extensions();
    
    /**
    *  @brief
    *    Returns the set of extensions that are required for by the given version
    *
    *  @param[in] version
    *    The version/feature to return the required extensions for.
    *    If an null version is given, all extensions that have no
    *    version/feature associated are returned instead
    *
    *  @return
    *    The set of extensions that should be supported for the given version.
    *    All non-versioned extensions can be queried by providing the null version
    */
    static const std::set<vk::VKextension> extensions(const Version & version);

    /**
    *  @brief
    *    Returns the list of extensions that are requiring a function
    *
    *  @param[in] function
    *    The name of the function, including the 'vk' prefix
    *
    *  @return
    *    The set of extensions that are requiring a function
    */
    static const std::set<vk::VKextension> extensions(const std::string & vkfunction);

    /**
    *  @brief
    *    Returns the list of features that are requiring a function
    *
    *  @param[in] function
    *    The name of the function, including the 'vk' prefix
    *
    *  @return
    *    The set of features that are requiring a function
    */
    static const std::set<Version> versions(const std::string & vkfunction);
    
    /**
    *  @brief
    *    Returns the set of functions that are required for the version
    *
    *  @param[in] version
    *    The version to return the required functions for
    *
    *  @return
    *    The set of functions that are required for the version
    *
    *  @remark
    *    This is exclusive (preceeding versions are ignored)
    */
    static const std::set<AbstractFunction *> functions(const Version & version);

    /**
    *  @brief
    *    Returns the set of functions that are required for the extension
    *
    *  @param[in] extension
    *    The extension to return the required functions for
    *
    *  @return
    *    The set of functions that are required for the extension
    */
    static const std::set<AbstractFunction *> functions(vk::VKextension extension);

    /**
    *  @brief
    *    Returns the first Version (Feature) that required the extension
    *
    *  @param[in] vkextension
    *    The extension
    *
    *  @return
    *    The first Version (Feature) that required the extension
    */
    static const Version & version(vk::VKextension vkextension);
    
    /**
    *  @brief
    *    Returns the list of all Versions (Features) known by the vk.xml
    *
    *  @return
    *    The list of all Versions (Features) known by the vk.xml
    */
    static const std::set<Version> & versions();

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::UnusedMask vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkAccessFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkAttachmentDescriptionFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkBufferCreateFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkBufferUsageFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkBufferViewCreateFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkBuildAccelerationStructureFlagBitsNV vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkColorComponentFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkCommandBufferResetFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkCommandBufferUsageFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkCommandPoolCreateFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkCommandPoolResetFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkCompositeAlphaFlagBitsKHR vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkConditionalRenderingFlagBitsEXT vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkCullModeFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkDebugReportFlagBitsEXT vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkDebugUtilsMessageSeverityFlagBitsEXT vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkDebugUtilsMessageTypeFlagBitsEXT vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkDependencyFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkDescriptorBindingFlagBitsEXT vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkDescriptorPoolCreateFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkDescriptorSetLayoutCreateFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkDeviceCreateFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkDeviceGroupPresentModeFlagBitsKHR vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkDeviceQueueCreateFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkDisplayPlaneAlphaFlagBitsKHR vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkExternalFenceFeatureFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkExternalFenceFeatureFlagBitsKHR vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkExternalFenceHandleTypeFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkExternalFenceHandleTypeFlagBitsKHR vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkExternalMemoryFeatureFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkExternalMemoryFeatureFlagBitsKHR vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkExternalMemoryFeatureFlagBitsNV vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkExternalMemoryHandleTypeFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkExternalMemoryHandleTypeFlagBitsKHR vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkExternalMemoryHandleTypeFlagBitsNV vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkExternalSemaphoreFeatureFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkExternalSemaphoreFeatureFlagBitsKHR vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkExternalSemaphoreHandleTypeFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkExternalSemaphoreHandleTypeFlagBitsKHR vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkFenceCreateFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkFenceImportFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkFenceImportFlagBitsKHR vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkFormatFeatureFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkFramebufferCreateFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkGeometryFlagBitsNV vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkGeometryInstanceFlagBitsNV vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkImageAspectFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkImageCreateFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkImageUsageFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkImageViewCreateFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkIndirectCommandsLayoutUsageFlagBitsNVX vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkInstanceCreateFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkMemoryAllocateFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkMemoryAllocateFlagBitsKHR vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkMemoryHeapFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkMemoryPropertyFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkObjectEntryUsageFlagBitsNVX vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkPeerMemoryFeatureFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkPeerMemoryFeatureFlagBitsKHR vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkPipelineCacheCreateFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkPipelineColorBlendStateCreateFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkPipelineCreateFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkPipelineCreationFeedbackFlagBitsEXT vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkPipelineDepthStencilStateCreateFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkPipelineDynamicStateCreateFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkPipelineInputAssemblyStateCreateFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkPipelineLayoutCreateFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkPipelineMultisampleStateCreateFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkPipelineRasterizationStateCreateFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkPipelineShaderStageCreateFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkPipelineStageFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkPipelineTessellationStateCreateFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkPipelineVertexInputStateCreateFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkPipelineViewportStateCreateFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkQueryControlFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkQueryPipelineStatisticFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkQueryPoolCreateFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkQueryResultFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkQueueFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkRenderPassCreateFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkResolveModeFlagBitsKHR vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkSampleCountFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkSamplerCreateFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkSemaphoreImportFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkSemaphoreImportFlagBitsKHR vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkShaderModuleCreateFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkShaderStageFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkSparseImageFormatFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkSparseMemoryBindFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkStencilFaceFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkSubgroupFeatureFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkSubpassDescriptionFlagBits vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkSurfaceCounterFlagBitsEXT vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkSurfaceTransformFlagBitsKHR vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkSwapchainCreateFlagBitsKHR vkbitfield);

    /**
    *  @brief
    *    Convert bitfield to symbol name string representation
    *
    *  @param[in] glbitfield
    *    The bitfield value
    *
    *  @return
    *    The string representation of the value
    */
    static const std::string & getString(vk::VkSwapchainImageUsageFlagBitsANDROID vkbitfield);


private:
    /**
    *  @brief
    *    Returns the bucket index of an identifier used for the actual lookup into the compile-time maps
    *
    *  @param[in] identifier
    *    The identifier for the bucket lookup
    *
    *  @param[in] prefixLength
    *    The length of the prefix (e.g., 'vk' or 'VK_') to omit to get the actual first character of the identifier
    *
    *  @return
    *    The bucket index of an identifier
    */
    static size_t alphabeticalGroupIndex(const std::string & identifier, std::uint8_t prefixLength);
};


} } // namespace vkbinding::aux