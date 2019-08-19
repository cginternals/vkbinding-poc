
#include "Meta_Maps.h"

#include <vkbinding/vk/boolean.h>


using namespace vk;


namespace vkbinding { namespace aux
{


const std::unordered_map<std::string, VkBool32> Meta_BooleansByString =
{
    { "VK_FALSE", vk::VK_FALSE },
    { "VK_TRUE", vk::VK_TRUE }
};


} } // namespace vkbinding::aux