
#include <vkbinding-aux/Meta.h>

#include <vkbinding/vk/bitfield.h>
#include <vkbinding/vk/boolean.h>
#include <vkbinding/vk/enum.h>
#include <vkbinding/vk/extension.h>

#include <vkbinding/AbstractFunction.h>
#include <vkbinding/Binding.h>
#include <vkbinding/Version.h>

#include <vkbinding-aux/ValidVersions.h>

#include "vkrevision.h"
#include "Meta_Maps.h"

using namespace vk;


namespace 
{


static const auto none = std::string{};
static const auto noneVersion = vkbinding::Version{};
static const auto noneStringSet = std::set<std::string>{};
static const auto noneExtensions = std::set<vk::VKextension>{};


} // namespace


namespace vkbinding { namespace aux
{


int Meta::vkRevision()
{
    return VK_REVISION;
}

size_t Meta::alphabeticalGroupIndex(const std::string & identifier, const std::uint8_t prefixLength)
{
    auto index = static_cast<size_t>(identifier[prefixLength]); // ignore prefix ('GL_' or 'gl')

    // bold uppercase conversion -> non letters are discarded in next step
    if (index > 96)
    {
        index -= 32;
    }

    // every non upper case letter is assigned to index 0
    if (index < 65 || index > 90)
    {
        index = 64;
    }
    index -= 64;

    return index;
}

std::vector<VKbitfield> Meta::bitfields()
{
    auto bitfields = std::vector<VKbitfield>{};

    for(const auto & map : Meta_BitfieldsByStringMaps)
    {
        for (const auto & p : map)
        {
            bitfields.push_back(p.second);
        }
    }

    return bitfields;    
}

std::vector<VKenum> Meta::enums()
{
    auto enums = std::vector<VKenum>{};

    for (const auto & p : Meta_StringsByVKenum)
    {
        enums.push_back(p.first);
    }

    return enums;
}


VKextension Meta::getExtension(const std::string & vkextension)
{
    const auto index = alphabeticalGroupIndex(vkextension, 4);
    const auto & map = Meta_ExtensionsByStringMaps[index];
    const auto i = map.find(vkextension);

    if (i != map.cend())
    {
        return i->second;
    }

    return VKextension::UNKNOWN;
}

std::set<VKextension> Meta::extensions()
{
    auto extensions = std::set<VKextension>{};

    for (const auto & m : Meta_ExtensionsByStringMaps)
    {
        for (const auto & p : m)
        {
            extensions.insert(p.second);
        }
    }

    return extensions;
}


const std::string & Meta::getString(const VkBool32 & vkboolean)
{
    const auto i = Meta_StringsByBoolean.find(vkboolean);

    if (i != Meta_StringsByBoolean.cend())
    {
        return i->second;
    }

    return none;
}

const std::string & Meta::getString(const VKenum vkenum)
{
    const auto i = Meta_StringsByVKenum.find(vkenum);

    if (i != Meta_StringsByVKenum.cend())
    {
        return i->second;
    }

    return none;
}

const std::string & Meta::getString(const VKextension vkextension)
{
    const auto i = Meta_StringsByExtension.find(vkextension);

    if (i != Meta_StringsByExtension.cend())
    {
        return i->second;
    }

    return none;
}

VKbitfield Meta::getBitfield(const std::string & vkbitfield)
{
    const auto index = alphabeticalGroupIndex(vkbitfield, 4);
    const auto & map = Meta_BitfieldsByStringMaps[index];
    const auto i = map.find(vkbitfield);

    if (i != map.cend())
    {
        return i->second;
    }

    return static_cast<VKbitfield>(-1);
}

VKenum Meta::getEnum(const std::string & vkenum)
{
    const auto index = alphabeticalGroupIndex(vkenum, 4);
    const auto & map = Meta_EnumsByStringMaps[index];
    const auto i = map.find(vkenum);

    if (i != map.cend())
    {
        return i->second;
    }

    return static_cast<VKenum>(static_cast<unsigned int>(-1));
}

const std::set<VKextension> Meta::extensions(const Version & version)
{
    auto required = std::set<VKextension>{};

    if (version.isNull())
    {
        required = Meta::extensions();
        for (const auto & p : Meta_ReqVersionsByExtension)
        {
            required.erase(p.first);
        }
    }
    else
    {
        for (const auto & p : Meta_ReqVersionsByExtension)
        {
            if (p.second == version)
            {
                required.insert(p.first);
            }
        }
    }
    return required;
}

const std::set<VKextension> Meta::extensions(const std::string & vkfunction)
{
    const auto index = alphabeticalGroupIndex(vkfunction, 3);
    const auto & map = Meta_ExtensionsByFunctionStringMaps[index];
    const auto i = map.find(vkfunction);

    if (i != map.cend())
    {
        return i->second;
    }

    return noneExtensions;
}

const std::set<AbstractFunction *> Meta::functions(const Version & version)
{
    const auto i = Meta_FunctionStringsByVersion.find(version);

    if (i == Meta_FunctionStringsByVersion.cend())
    {
        return std::set<AbstractFunction *>{};
    }

    const auto & functionNames = i->second;
    const auto & allFunctions = Binding::functions();

    auto requiredFunctions = std::set<AbstractFunction *>{};

    for (const auto function : allFunctions)
    {
        if (functionNames.find(function->name()) != functionNames.cend())
            requiredFunctions.insert(function);
    }

    const auto exts = extensions(version);
    for (const auto & ext : exts)
    {
        const auto f = functions(ext);
        requiredFunctions.insert(f.cbegin(), f.cend());
    }

    return requiredFunctions;
}

const std::set<AbstractFunction *> Meta::functions(const VKextension extension)
{
    const auto i = Meta_FunctionStringsByExtension.find(extension);

    if (i == Meta_FunctionStringsByExtension.cend())
    {
        return std::set<AbstractFunction *>{};
    }

    const auto & functionNames = i->second;
    const auto & allFunctions = Binding::functions();

    auto requiredFunctions = std::set<AbstractFunction *>{};
    for (const auto function : allFunctions)
    {
        if (functionNames.find(function->name()) != functionNames.cend())
            requiredFunctions.insert(function);      
    }

    return requiredFunctions;
}

const Version & Meta::version(const VKextension extension)
{
    const auto i = Meta_ReqVersionsByExtension.find(extension);

    if (i != Meta_ReqVersionsByExtension.cend())
    {
        return i->second;
    }

    return noneVersion;
}

const std::set<Version> & Meta::versions()
{
    return ValidVersions::versions();
}


} } // namespace vkbinding::aux
