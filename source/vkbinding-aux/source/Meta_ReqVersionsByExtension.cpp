
#include "Meta_Maps.h"

#include <vkbinding/vk/extension.h>
#include <vkbinding/Version.h>


using namespace vk;


namespace vkbinding { namespace aux
{


const std::unordered_map<VKextension, Version> Meta_ReqVersionsByExtension =
{
    { VKextension::, { 1, 1 } }
};


} } // namespace vkbinding::aux