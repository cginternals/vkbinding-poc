
#include "Meta_Maps.h"

#include <vkbinding/vk/boolean.h>


using namespace vk;


namespace vkbinding { namespace aux
{


const std::unordered_map<VKboolean, std::string> Meta_StringsByBoolean =
{
    { vk::VK_FALSE, "VK_FALSE" },
    { vk::VK_TRUE, "VK_TRUE" }
};


} } // namespace vkbinding::aux