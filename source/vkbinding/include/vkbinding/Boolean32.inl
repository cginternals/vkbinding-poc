
#pragma once


namespace vkbinding
{


VKBINDING_CONSTEXPR Boolean32::Boolean32()
: Boolean32(false)
{
}

VKBINDING_CONSTEXPR Boolean32::Boolean32(bool value)
: m_value(static_cast<underlying_type>(value))
{
}

VKBINDING_CONSTEXPR Boolean32::Boolean32(char value)
: m_value(value)
{
}

VKBINDING_CONSTEXPR Boolean32::Boolean32(unsigned char value)
: m_value(static_cast<underlying_type>(value))
{
}

VKBINDING_CONSTEXPR Boolean32::Boolean32(int value)
: m_value(static_cast<underlying_type>(value))
{
}

VKBINDING_CONSTEXPR Boolean32::Boolean32(unsigned int value)
: m_value(static_cast<underlying_type>(value))
{
}

VKBINDING_CONSTEXPR Boolean32::operator bool() const
{
    return m_value != 0;
}

VKBINDING_CONSTEXPR Boolean32::operator char() const
{
    return m_value;
}

VKBINDING_CONSTEXPR Boolean32::operator unsigned char() const
{
    return m_value;
}

VKBINDING_CONSTEXPR Boolean32::operator int() const
{
    return m_value;
}

VKBINDING_CONSTEXPR Boolean32::operator unsigned int() const
{
    return m_value;
}

Boolean32 & Boolean32::operator=(const Boolean32 & other)
{
    m_value = other.m_value;

    return *this;
}

VKBINDING_CONSTEXPR bool Boolean32::operator<(const Boolean32 & other) const
{
    return m_value < other.m_value;
}

VKBINDING_CONSTEXPR bool Boolean32::operator>(const Boolean32 & other) const
{
    return m_value > other.m_value;
}

VKBINDING_CONSTEXPR bool Boolean32::operator<=(const Boolean32 & other) const
{
    return m_value <= other.m_value;
}

VKBINDING_CONSTEXPR bool Boolean32::operator>=(const Boolean32 & other) const
{
    return m_value >= other.m_value;
}

VKBINDING_CONSTEXPR bool Boolean32::operator==(const Boolean32 & other) const
{
    return m_value == other.m_value;
}

VKBINDING_CONSTEXPR bool Boolean32::operator!=(const Boolean32 & other) const
{
    return m_value != other.m_value;
}


} // namespace vkbinding


namespace std
{


template<>
struct hash<vkbinding::Boolean32>
{
    std::size_t operator()(const vkbinding::Boolean32 & boolean) const
    {
        return hash<vkbinding::Boolean32::underlying_type>()(static_cast<vkbinding::Boolean32::underlying_type>(boolean));
    }
};


} // namespace std