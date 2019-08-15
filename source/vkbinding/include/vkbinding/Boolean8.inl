
#pragma once


namespace vkbinding
{


VKBINDING_CONSTEXPR Boolean8::Boolean8()
: Boolean8(false)
{
}

VKBINDING_CONSTEXPR Boolean8::Boolean8(bool value)
: m_value(static_cast<underlying_type>(value))
{
}

VKBINDING_CONSTEXPR Boolean8::Boolean8(char value)
: m_value(value)
{
}

VKBINDING_CONSTEXPR Boolean8::Boolean8(unsigned char value)
: m_value(static_cast<underlying_type>(value))
{
}

VKBINDING_CONSTEXPR Boolean8::Boolean8(int value)
: m_value(static_cast<underlying_type>(value))
{
}

VKBINDING_CONSTEXPR Boolean8::Boolean8(unsigned int value)
: m_value(static_cast<underlying_type>(value))
{
}

VKBINDING_CONSTEXPR Boolean8::operator bool() const
{
    return m_value != 0;
}

VKBINDING_CONSTEXPR Boolean8::operator char() const
{
    return m_value;
}

VKBINDING_CONSTEXPR Boolean8::operator unsigned char() const
{
    return m_value;
}

VKBINDING_CONSTEXPR Boolean8::operator int() const
{
    return m_value;
}

VKBINDING_CONSTEXPR Boolean8::operator unsigned int() const
{
    return m_value;
}

Boolean8 & Boolean8::operator=(const Boolean8 & other)
{
    m_value = other.m_value;

    return *this;
}

VKBINDING_CONSTEXPR bool Boolean8::operator<(const Boolean8 & other) const
{
    return m_value < other.m_value;
}

VKBINDING_CONSTEXPR bool Boolean8::operator>(const Boolean8 & other) const
{
    return m_value > other.m_value;
}

VKBINDING_CONSTEXPR bool Boolean8::operator<=(const Boolean8 & other) const
{
    return m_value <= other.m_value;
}

VKBINDING_CONSTEXPR bool Boolean8::operator>=(const Boolean8 & other) const
{
    return m_value >= other.m_value;
}

VKBINDING_CONSTEXPR bool Boolean8::operator==(const Boolean8 & other) const
{
    return m_value == other.m_value;
}

VKBINDING_CONSTEXPR bool Boolean8::operator!=(const Boolean8 & other) const
{
    return m_value != other.m_value;
}


} // namespace vkbinding


namespace std
{


template<>
struct hash<vkbinding::Boolean8>
{
    std::size_t operator()(const vkbinding::Boolean8 & boolean) const
    {
        return hash<vkbinding::Boolean8::underlying_type>()(static_cast<vkbinding::Boolean8::underlying_type>(boolean));
    }
};


} // namespace std