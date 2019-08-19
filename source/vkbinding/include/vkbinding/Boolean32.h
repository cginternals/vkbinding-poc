
#pragma once


#include <functional>

#include <vkbinding/vkbinding_api.h>
#include <vkbinding/vkbinding_features.h>


namespace vkbinding
{


class VKBINDING_API Boolean32
{
public:
    using underlying_type = unsigned int;

public:
    VKBINDING_CONSTEXPR inline Boolean32();
    VKBINDING_CONSTEXPR inline Boolean32(bool on);
    VKBINDING_CONSTEXPR inline Boolean32(char on);
    VKBINDING_CONSTEXPR inline Boolean32(unsigned char on);
    VKBINDING_CONSTEXPR inline Boolean32(int on);
    VKBINDING_CONSTEXPR inline Boolean32(unsigned int on);

    VKBINDING_CONSTEXPR inline explicit operator bool() const;
    VKBINDING_CONSTEXPR inline explicit operator char() const;
    VKBINDING_CONSTEXPR inline explicit operator unsigned char() const;
    VKBINDING_CONSTEXPR inline explicit operator int() const;
    VKBINDING_CONSTEXPR inline explicit operator unsigned int() const;

    inline Boolean32 & operator=(const Boolean32 & other);
    VKBINDING_CONSTEXPR inline bool operator<(const Boolean32 & other) const;
    VKBINDING_CONSTEXPR inline bool operator>(const Boolean32 & other) const;
    VKBINDING_CONSTEXPR inline bool operator<=(const Boolean32 & other) const;
    VKBINDING_CONSTEXPR inline bool operator>=(const Boolean32 & other) const;

    VKBINDING_CONSTEXPR inline bool operator==(const Boolean32 & other) const;
    VKBINDING_CONSTEXPR inline bool operator!=(const Boolean32 & other) const;

public:
    underlying_type m_value;
};


} // namespace gl


#include <vkbinding/Boolean32.inl>