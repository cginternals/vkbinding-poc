
#pragma once


#include <ostream>
#include <bitset>
#include <sstream>

#include <vkbinding-aux/Meta.h>


namespace vkbinding { namespace aux
{


template <typename T>
std::string bitfieldString(T value)
{
    std::bitset<sizeof(vk::VKbitfield) * 8> bits(static_cast<int>(static_cast<vk::VKbitfield>(value)));

    std::stringstream ss;
    bool first = true;

    for (size_t i = 0; i < sizeof(vk::VKbitfield) * 8; ++i)
    {
    if (!bits.test(i))
        continue;

    if (first)
        {
            first = false;
        }
        else
        {
            ss << " | ";
        }

    const vk::VKbitfield bit = static_cast<vk::VKbitfield>(1 << i);

    const auto identifier = vkbinding::aux::Meta::getString(static_cast<T>(bit));
    if (identifier.empty())
    {
        ss << "1 << " << i;
    }
    else
    {
        ss << identifier;
    }
    }
    return ss.str();
}

std::string wrapString(const char * value);


} } // namespace vkbinding::aux
