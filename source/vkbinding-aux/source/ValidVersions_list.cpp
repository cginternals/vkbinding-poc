
#include <vkbinding-aux/ValidVersions.h>


const std::set<vkbinding::Version> vkbinding::aux::ValidVersions::s_validVersions =
{
    { 1, 0 },
    { 1, 1 }
};

const vkbinding::Version vkbinding::aux::ValidVersions::s_latest { 1, 1 };