
#pragma once


#include <vkbinding/vk/types.h>


namespace std
{


template<>
struct hash<vk::VKextension>
{
    std::size_t operator()(const vk::VKextension & t) const
    {
        return hash<std::underlying_type<vk::VKextension>::type>()(static_cast<std::underlying_type<vk::VKextension>::type>(t));
    }
};


} // namespace std


namespace std
{


template<>
struct hash<vk::VKenum>
{
    std::size_t operator()(const vk::VKenum & t) const
    {
        return hash<std::underlying_type<vk::VKenum>::type>()(static_cast<std::underlying_type<vk::VKenum>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VKenum operator+(const VKenum & a, const std::underlying_type<VKenum>::type b)
{
    return static_cast<VKenum>(static_cast<std::underlying_type<VKenum>::type>(a) + b);
}

VKBINDING_CONSTEXPR inline VKenum operator-(const VKenum & a, const std::underlying_type<VKenum>::type b)
{
    return static_cast<VKenum>(static_cast<std::underlying_type<VKenum>::type>(a) - b);
}

VKBINDING_CONSTEXPR inline bool operator==(const VKenum & a, std::underlying_type<VKenum>::type b)
{
    return static_cast<std::underlying_type<VKenum>::type>(a) == b;
}

VKBINDING_CONSTEXPR inline bool operator!=(const VKenum & a, std::underlying_type<VKenum>::type b)
{
    return static_cast<std::underlying_type<VKenum>::type>(a) != b;
}

VKBINDING_CONSTEXPR inline bool operator< (const VKenum & a, std::underlying_type<VKenum>::type b)
{
    return static_cast<std::underlying_type<VKenum>::type>(a) < b;
}

VKBINDING_CONSTEXPR inline bool operator<=(const VKenum & a, std::underlying_type<VKenum>::type b)
{
    return static_cast<std::underlying_type<VKenum>::type>(a) <= b;
}

VKBINDING_CONSTEXPR inline bool operator> (const VKenum & a, std::underlying_type<VKenum>::type b)
{
    return static_cast<std::underlying_type<VKenum>::type>(a) > b;
}

VKBINDING_CONSTEXPR inline bool operator>=(const VKenum & a, std::underlying_type<VKenum>::type b)
{
    return static_cast<std::underlying_type<VKenum>::type>(a) >= b;
}

VKBINDING_CONSTEXPR inline bool operator==(std::underlying_type<VKenum>::type a, const VKenum & b)
{
    return a == static_cast<std::underlying_type<VKenum>::type>(b);
}

VKBINDING_CONSTEXPR inline bool operator!=(std::underlying_type<VKenum>::type a, const VKenum & b)
{
    return a != static_cast<std::underlying_type<VKenum>::type>(b);
}

VKBINDING_CONSTEXPR inline bool operator< (std::underlying_type<VKenum>::type a, const VKenum & b)
{
    return a < static_cast<std::underlying_type<VKenum>::type>(b);
}

VKBINDING_CONSTEXPR inline bool operator<=(std::underlying_type<VKenum>::type a, const VKenum & b)
{
    return a <= static_cast<std::underlying_type<VKenum>::type>(b);
}

VKBINDING_CONSTEXPR inline bool operator> (std::underlying_type<VKenum>::type a, const VKenum & b)
{
    return a > static_cast<std::underlying_type<VKenum>::type>(b);
}

VKBINDING_CONSTEXPR inline bool operator>=(std::underlying_type<VKenum>::type a, const VKenum & b)
{
    return a >= static_cast<std::underlying_type<VKenum>::type>(b);
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::UnusedMask>
{
    std::size_t operator()(const vk::UnusedMask & t) const
    {
        return hash<std::underlying_type<vk::UnusedMask>::type>()(static_cast<std::underlying_type<vk::UnusedMask>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline UnusedMask operator|(const UnusedMask & a, const UnusedMask & b)
{
    return static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) | static_cast<std::underlying_type<UnusedMask>::type>(b));
}

inline UnusedMask & operator|=(UnusedMask & a, const UnusedMask & b)
{
    a = static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) | static_cast<std::underlying_type<UnusedMask>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline UnusedMask operator&(const UnusedMask & a, const UnusedMask & b)
{
    return static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) & static_cast<std::underlying_type<UnusedMask>::type>(b));
}

inline UnusedMask & operator&=(UnusedMask & a, const UnusedMask & b)
{
    a = static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) & static_cast<std::underlying_type<UnusedMask>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline UnusedMask operator^(const UnusedMask & a, const UnusedMask & b)
{
    return static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) ^ static_cast<std::underlying_type<UnusedMask>::type>(b));
}

inline UnusedMask & operator^=(UnusedMask & a, const UnusedMask & b)
{
    a = static_cast<UnusedMask>(static_cast<std::underlying_type<UnusedMask>::type>(a) ^ static_cast<std::underlying_type<UnusedMask>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkAccessFlagBits>
{
    std::size_t operator()(const vk::VkAccessFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkAccessFlagBits>::type>()(static_cast<std::underlying_type<vk::VkAccessFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkAccessFlagBits operator|(const VkAccessFlagBits & a, const VkAccessFlagBits & b)
{
    return static_cast<VkAccessFlagBits>(static_cast<std::underlying_type<VkAccessFlagBits>::type>(a) | static_cast<std::underlying_type<VkAccessFlagBits>::type>(b));
}

inline VkAccessFlagBits & operator|=(VkAccessFlagBits & a, const VkAccessFlagBits & b)
{
    a = static_cast<VkAccessFlagBits>(static_cast<std::underlying_type<VkAccessFlagBits>::type>(a) | static_cast<std::underlying_type<VkAccessFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkAccessFlagBits operator&(const VkAccessFlagBits & a, const VkAccessFlagBits & b)
{
    return static_cast<VkAccessFlagBits>(static_cast<std::underlying_type<VkAccessFlagBits>::type>(a) & static_cast<std::underlying_type<VkAccessFlagBits>::type>(b));
}

inline VkAccessFlagBits & operator&=(VkAccessFlagBits & a, const VkAccessFlagBits & b)
{
    a = static_cast<VkAccessFlagBits>(static_cast<std::underlying_type<VkAccessFlagBits>::type>(a) & static_cast<std::underlying_type<VkAccessFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkAccessFlagBits operator^(const VkAccessFlagBits & a, const VkAccessFlagBits & b)
{
    return static_cast<VkAccessFlagBits>(static_cast<std::underlying_type<VkAccessFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkAccessFlagBits>::type>(b));
}

inline VkAccessFlagBits & operator^=(VkAccessFlagBits & a, const VkAccessFlagBits & b)
{
    a = static_cast<VkAccessFlagBits>(static_cast<std::underlying_type<VkAccessFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkAccessFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkAttachmentDescriptionFlagBits>
{
    std::size_t operator()(const vk::VkAttachmentDescriptionFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkAttachmentDescriptionFlagBits>::type>()(static_cast<std::underlying_type<vk::VkAttachmentDescriptionFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkAttachmentDescriptionFlagBits operator|(const VkAttachmentDescriptionFlagBits & a, const VkAttachmentDescriptionFlagBits & b)
{
    return static_cast<VkAttachmentDescriptionFlagBits>(static_cast<std::underlying_type<VkAttachmentDescriptionFlagBits>::type>(a) | static_cast<std::underlying_type<VkAttachmentDescriptionFlagBits>::type>(b));
}

inline VkAttachmentDescriptionFlagBits & operator|=(VkAttachmentDescriptionFlagBits & a, const VkAttachmentDescriptionFlagBits & b)
{
    a = static_cast<VkAttachmentDescriptionFlagBits>(static_cast<std::underlying_type<VkAttachmentDescriptionFlagBits>::type>(a) | static_cast<std::underlying_type<VkAttachmentDescriptionFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkAttachmentDescriptionFlagBits operator&(const VkAttachmentDescriptionFlagBits & a, const VkAttachmentDescriptionFlagBits & b)
{
    return static_cast<VkAttachmentDescriptionFlagBits>(static_cast<std::underlying_type<VkAttachmentDescriptionFlagBits>::type>(a) & static_cast<std::underlying_type<VkAttachmentDescriptionFlagBits>::type>(b));
}

inline VkAttachmentDescriptionFlagBits & operator&=(VkAttachmentDescriptionFlagBits & a, const VkAttachmentDescriptionFlagBits & b)
{
    a = static_cast<VkAttachmentDescriptionFlagBits>(static_cast<std::underlying_type<VkAttachmentDescriptionFlagBits>::type>(a) & static_cast<std::underlying_type<VkAttachmentDescriptionFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkAttachmentDescriptionFlagBits operator^(const VkAttachmentDescriptionFlagBits & a, const VkAttachmentDescriptionFlagBits & b)
{
    return static_cast<VkAttachmentDescriptionFlagBits>(static_cast<std::underlying_type<VkAttachmentDescriptionFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkAttachmentDescriptionFlagBits>::type>(b));
}

inline VkAttachmentDescriptionFlagBits & operator^=(VkAttachmentDescriptionFlagBits & a, const VkAttachmentDescriptionFlagBits & b)
{
    a = static_cast<VkAttachmentDescriptionFlagBits>(static_cast<std::underlying_type<VkAttachmentDescriptionFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkAttachmentDescriptionFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkBufferCreateFlagBits>
{
    std::size_t operator()(const vk::VkBufferCreateFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkBufferCreateFlagBits>::type>()(static_cast<std::underlying_type<vk::VkBufferCreateFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkBufferCreateFlagBits operator|(const VkBufferCreateFlagBits & a, const VkBufferCreateFlagBits & b)
{
    return static_cast<VkBufferCreateFlagBits>(static_cast<std::underlying_type<VkBufferCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkBufferCreateFlagBits>::type>(b));
}

inline VkBufferCreateFlagBits & operator|=(VkBufferCreateFlagBits & a, const VkBufferCreateFlagBits & b)
{
    a = static_cast<VkBufferCreateFlagBits>(static_cast<std::underlying_type<VkBufferCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkBufferCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkBufferCreateFlagBits operator&(const VkBufferCreateFlagBits & a, const VkBufferCreateFlagBits & b)
{
    return static_cast<VkBufferCreateFlagBits>(static_cast<std::underlying_type<VkBufferCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkBufferCreateFlagBits>::type>(b));
}

inline VkBufferCreateFlagBits & operator&=(VkBufferCreateFlagBits & a, const VkBufferCreateFlagBits & b)
{
    a = static_cast<VkBufferCreateFlagBits>(static_cast<std::underlying_type<VkBufferCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkBufferCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkBufferCreateFlagBits operator^(const VkBufferCreateFlagBits & a, const VkBufferCreateFlagBits & b)
{
    return static_cast<VkBufferCreateFlagBits>(static_cast<std::underlying_type<VkBufferCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkBufferCreateFlagBits>::type>(b));
}

inline VkBufferCreateFlagBits & operator^=(VkBufferCreateFlagBits & a, const VkBufferCreateFlagBits & b)
{
    a = static_cast<VkBufferCreateFlagBits>(static_cast<std::underlying_type<VkBufferCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkBufferCreateFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkBufferUsageFlagBits>
{
    std::size_t operator()(const vk::VkBufferUsageFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkBufferUsageFlagBits>::type>()(static_cast<std::underlying_type<vk::VkBufferUsageFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkBufferUsageFlagBits operator|(const VkBufferUsageFlagBits & a, const VkBufferUsageFlagBits & b)
{
    return static_cast<VkBufferUsageFlagBits>(static_cast<std::underlying_type<VkBufferUsageFlagBits>::type>(a) | static_cast<std::underlying_type<VkBufferUsageFlagBits>::type>(b));
}

inline VkBufferUsageFlagBits & operator|=(VkBufferUsageFlagBits & a, const VkBufferUsageFlagBits & b)
{
    a = static_cast<VkBufferUsageFlagBits>(static_cast<std::underlying_type<VkBufferUsageFlagBits>::type>(a) | static_cast<std::underlying_type<VkBufferUsageFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkBufferUsageFlagBits operator&(const VkBufferUsageFlagBits & a, const VkBufferUsageFlagBits & b)
{
    return static_cast<VkBufferUsageFlagBits>(static_cast<std::underlying_type<VkBufferUsageFlagBits>::type>(a) & static_cast<std::underlying_type<VkBufferUsageFlagBits>::type>(b));
}

inline VkBufferUsageFlagBits & operator&=(VkBufferUsageFlagBits & a, const VkBufferUsageFlagBits & b)
{
    a = static_cast<VkBufferUsageFlagBits>(static_cast<std::underlying_type<VkBufferUsageFlagBits>::type>(a) & static_cast<std::underlying_type<VkBufferUsageFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkBufferUsageFlagBits operator^(const VkBufferUsageFlagBits & a, const VkBufferUsageFlagBits & b)
{
    return static_cast<VkBufferUsageFlagBits>(static_cast<std::underlying_type<VkBufferUsageFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkBufferUsageFlagBits>::type>(b));
}

inline VkBufferUsageFlagBits & operator^=(VkBufferUsageFlagBits & a, const VkBufferUsageFlagBits & b)
{
    a = static_cast<VkBufferUsageFlagBits>(static_cast<std::underlying_type<VkBufferUsageFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkBufferUsageFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkBufferViewCreateFlagBits>
{
    std::size_t operator()(const vk::VkBufferViewCreateFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkBufferViewCreateFlagBits>::type>()(static_cast<std::underlying_type<vk::VkBufferViewCreateFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkBufferViewCreateFlagBits operator|(const VkBufferViewCreateFlagBits & a, const VkBufferViewCreateFlagBits & b)
{
    return static_cast<VkBufferViewCreateFlagBits>(static_cast<std::underlying_type<VkBufferViewCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkBufferViewCreateFlagBits>::type>(b));
}

inline VkBufferViewCreateFlagBits & operator|=(VkBufferViewCreateFlagBits & a, const VkBufferViewCreateFlagBits & b)
{
    a = static_cast<VkBufferViewCreateFlagBits>(static_cast<std::underlying_type<VkBufferViewCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkBufferViewCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkBufferViewCreateFlagBits operator&(const VkBufferViewCreateFlagBits & a, const VkBufferViewCreateFlagBits & b)
{
    return static_cast<VkBufferViewCreateFlagBits>(static_cast<std::underlying_type<VkBufferViewCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkBufferViewCreateFlagBits>::type>(b));
}

inline VkBufferViewCreateFlagBits & operator&=(VkBufferViewCreateFlagBits & a, const VkBufferViewCreateFlagBits & b)
{
    a = static_cast<VkBufferViewCreateFlagBits>(static_cast<std::underlying_type<VkBufferViewCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkBufferViewCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkBufferViewCreateFlagBits operator^(const VkBufferViewCreateFlagBits & a, const VkBufferViewCreateFlagBits & b)
{
    return static_cast<VkBufferViewCreateFlagBits>(static_cast<std::underlying_type<VkBufferViewCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkBufferViewCreateFlagBits>::type>(b));
}

inline VkBufferViewCreateFlagBits & operator^=(VkBufferViewCreateFlagBits & a, const VkBufferViewCreateFlagBits & b)
{
    a = static_cast<VkBufferViewCreateFlagBits>(static_cast<std::underlying_type<VkBufferViewCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkBufferViewCreateFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkBuildAccelerationStructureFlagBitsNV>
{
    std::size_t operator()(const vk::VkBuildAccelerationStructureFlagBitsNV & t) const
    {
        return hash<std::underlying_type<vk::VkBuildAccelerationStructureFlagBitsNV>::type>()(static_cast<std::underlying_type<vk::VkBuildAccelerationStructureFlagBitsNV>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkBuildAccelerationStructureFlagBitsNV operator|(const VkBuildAccelerationStructureFlagBitsNV & a, const VkBuildAccelerationStructureFlagBitsNV & b)
{
    return static_cast<VkBuildAccelerationStructureFlagBitsNV>(static_cast<std::underlying_type<VkBuildAccelerationStructureFlagBitsNV>::type>(a) | static_cast<std::underlying_type<VkBuildAccelerationStructureFlagBitsNV>::type>(b));
}

inline VkBuildAccelerationStructureFlagBitsNV & operator|=(VkBuildAccelerationStructureFlagBitsNV & a, const VkBuildAccelerationStructureFlagBitsNV & b)
{
    a = static_cast<VkBuildAccelerationStructureFlagBitsNV>(static_cast<std::underlying_type<VkBuildAccelerationStructureFlagBitsNV>::type>(a) | static_cast<std::underlying_type<VkBuildAccelerationStructureFlagBitsNV>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkBuildAccelerationStructureFlagBitsNV operator&(const VkBuildAccelerationStructureFlagBitsNV & a, const VkBuildAccelerationStructureFlagBitsNV & b)
{
    return static_cast<VkBuildAccelerationStructureFlagBitsNV>(static_cast<std::underlying_type<VkBuildAccelerationStructureFlagBitsNV>::type>(a) & static_cast<std::underlying_type<VkBuildAccelerationStructureFlagBitsNV>::type>(b));
}

inline VkBuildAccelerationStructureFlagBitsNV & operator&=(VkBuildAccelerationStructureFlagBitsNV & a, const VkBuildAccelerationStructureFlagBitsNV & b)
{
    a = static_cast<VkBuildAccelerationStructureFlagBitsNV>(static_cast<std::underlying_type<VkBuildAccelerationStructureFlagBitsNV>::type>(a) & static_cast<std::underlying_type<VkBuildAccelerationStructureFlagBitsNV>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkBuildAccelerationStructureFlagBitsNV operator^(const VkBuildAccelerationStructureFlagBitsNV & a, const VkBuildAccelerationStructureFlagBitsNV & b)
{
    return static_cast<VkBuildAccelerationStructureFlagBitsNV>(static_cast<std::underlying_type<VkBuildAccelerationStructureFlagBitsNV>::type>(a) ^ static_cast<std::underlying_type<VkBuildAccelerationStructureFlagBitsNV>::type>(b));
}

inline VkBuildAccelerationStructureFlagBitsNV & operator^=(VkBuildAccelerationStructureFlagBitsNV & a, const VkBuildAccelerationStructureFlagBitsNV & b)
{
    a = static_cast<VkBuildAccelerationStructureFlagBitsNV>(static_cast<std::underlying_type<VkBuildAccelerationStructureFlagBitsNV>::type>(a) ^ static_cast<std::underlying_type<VkBuildAccelerationStructureFlagBitsNV>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkColorComponentFlagBits>
{
    std::size_t operator()(const vk::VkColorComponentFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkColorComponentFlagBits>::type>()(static_cast<std::underlying_type<vk::VkColorComponentFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkColorComponentFlagBits operator|(const VkColorComponentFlagBits & a, const VkColorComponentFlagBits & b)
{
    return static_cast<VkColorComponentFlagBits>(static_cast<std::underlying_type<VkColorComponentFlagBits>::type>(a) | static_cast<std::underlying_type<VkColorComponentFlagBits>::type>(b));
}

inline VkColorComponentFlagBits & operator|=(VkColorComponentFlagBits & a, const VkColorComponentFlagBits & b)
{
    a = static_cast<VkColorComponentFlagBits>(static_cast<std::underlying_type<VkColorComponentFlagBits>::type>(a) | static_cast<std::underlying_type<VkColorComponentFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkColorComponentFlagBits operator&(const VkColorComponentFlagBits & a, const VkColorComponentFlagBits & b)
{
    return static_cast<VkColorComponentFlagBits>(static_cast<std::underlying_type<VkColorComponentFlagBits>::type>(a) & static_cast<std::underlying_type<VkColorComponentFlagBits>::type>(b));
}

inline VkColorComponentFlagBits & operator&=(VkColorComponentFlagBits & a, const VkColorComponentFlagBits & b)
{
    a = static_cast<VkColorComponentFlagBits>(static_cast<std::underlying_type<VkColorComponentFlagBits>::type>(a) & static_cast<std::underlying_type<VkColorComponentFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkColorComponentFlagBits operator^(const VkColorComponentFlagBits & a, const VkColorComponentFlagBits & b)
{
    return static_cast<VkColorComponentFlagBits>(static_cast<std::underlying_type<VkColorComponentFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkColorComponentFlagBits>::type>(b));
}

inline VkColorComponentFlagBits & operator^=(VkColorComponentFlagBits & a, const VkColorComponentFlagBits & b)
{
    a = static_cast<VkColorComponentFlagBits>(static_cast<std::underlying_type<VkColorComponentFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkColorComponentFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkCommandBufferResetFlagBits>
{
    std::size_t operator()(const vk::VkCommandBufferResetFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkCommandBufferResetFlagBits>::type>()(static_cast<std::underlying_type<vk::VkCommandBufferResetFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkCommandBufferResetFlagBits operator|(const VkCommandBufferResetFlagBits & a, const VkCommandBufferResetFlagBits & b)
{
    return static_cast<VkCommandBufferResetFlagBits>(static_cast<std::underlying_type<VkCommandBufferResetFlagBits>::type>(a) | static_cast<std::underlying_type<VkCommandBufferResetFlagBits>::type>(b));
}

inline VkCommandBufferResetFlagBits & operator|=(VkCommandBufferResetFlagBits & a, const VkCommandBufferResetFlagBits & b)
{
    a = static_cast<VkCommandBufferResetFlagBits>(static_cast<std::underlying_type<VkCommandBufferResetFlagBits>::type>(a) | static_cast<std::underlying_type<VkCommandBufferResetFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkCommandBufferResetFlagBits operator&(const VkCommandBufferResetFlagBits & a, const VkCommandBufferResetFlagBits & b)
{
    return static_cast<VkCommandBufferResetFlagBits>(static_cast<std::underlying_type<VkCommandBufferResetFlagBits>::type>(a) & static_cast<std::underlying_type<VkCommandBufferResetFlagBits>::type>(b));
}

inline VkCommandBufferResetFlagBits & operator&=(VkCommandBufferResetFlagBits & a, const VkCommandBufferResetFlagBits & b)
{
    a = static_cast<VkCommandBufferResetFlagBits>(static_cast<std::underlying_type<VkCommandBufferResetFlagBits>::type>(a) & static_cast<std::underlying_type<VkCommandBufferResetFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkCommandBufferResetFlagBits operator^(const VkCommandBufferResetFlagBits & a, const VkCommandBufferResetFlagBits & b)
{
    return static_cast<VkCommandBufferResetFlagBits>(static_cast<std::underlying_type<VkCommandBufferResetFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkCommandBufferResetFlagBits>::type>(b));
}

inline VkCommandBufferResetFlagBits & operator^=(VkCommandBufferResetFlagBits & a, const VkCommandBufferResetFlagBits & b)
{
    a = static_cast<VkCommandBufferResetFlagBits>(static_cast<std::underlying_type<VkCommandBufferResetFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkCommandBufferResetFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkCommandBufferUsageFlagBits>
{
    std::size_t operator()(const vk::VkCommandBufferUsageFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkCommandBufferUsageFlagBits>::type>()(static_cast<std::underlying_type<vk::VkCommandBufferUsageFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkCommandBufferUsageFlagBits operator|(const VkCommandBufferUsageFlagBits & a, const VkCommandBufferUsageFlagBits & b)
{
    return static_cast<VkCommandBufferUsageFlagBits>(static_cast<std::underlying_type<VkCommandBufferUsageFlagBits>::type>(a) | static_cast<std::underlying_type<VkCommandBufferUsageFlagBits>::type>(b));
}

inline VkCommandBufferUsageFlagBits & operator|=(VkCommandBufferUsageFlagBits & a, const VkCommandBufferUsageFlagBits & b)
{
    a = static_cast<VkCommandBufferUsageFlagBits>(static_cast<std::underlying_type<VkCommandBufferUsageFlagBits>::type>(a) | static_cast<std::underlying_type<VkCommandBufferUsageFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkCommandBufferUsageFlagBits operator&(const VkCommandBufferUsageFlagBits & a, const VkCommandBufferUsageFlagBits & b)
{
    return static_cast<VkCommandBufferUsageFlagBits>(static_cast<std::underlying_type<VkCommandBufferUsageFlagBits>::type>(a) & static_cast<std::underlying_type<VkCommandBufferUsageFlagBits>::type>(b));
}

inline VkCommandBufferUsageFlagBits & operator&=(VkCommandBufferUsageFlagBits & a, const VkCommandBufferUsageFlagBits & b)
{
    a = static_cast<VkCommandBufferUsageFlagBits>(static_cast<std::underlying_type<VkCommandBufferUsageFlagBits>::type>(a) & static_cast<std::underlying_type<VkCommandBufferUsageFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkCommandBufferUsageFlagBits operator^(const VkCommandBufferUsageFlagBits & a, const VkCommandBufferUsageFlagBits & b)
{
    return static_cast<VkCommandBufferUsageFlagBits>(static_cast<std::underlying_type<VkCommandBufferUsageFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkCommandBufferUsageFlagBits>::type>(b));
}

inline VkCommandBufferUsageFlagBits & operator^=(VkCommandBufferUsageFlagBits & a, const VkCommandBufferUsageFlagBits & b)
{
    a = static_cast<VkCommandBufferUsageFlagBits>(static_cast<std::underlying_type<VkCommandBufferUsageFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkCommandBufferUsageFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkCommandPoolCreateFlagBits>
{
    std::size_t operator()(const vk::VkCommandPoolCreateFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkCommandPoolCreateFlagBits>::type>()(static_cast<std::underlying_type<vk::VkCommandPoolCreateFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkCommandPoolCreateFlagBits operator|(const VkCommandPoolCreateFlagBits & a, const VkCommandPoolCreateFlagBits & b)
{
    return static_cast<VkCommandPoolCreateFlagBits>(static_cast<std::underlying_type<VkCommandPoolCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkCommandPoolCreateFlagBits>::type>(b));
}

inline VkCommandPoolCreateFlagBits & operator|=(VkCommandPoolCreateFlagBits & a, const VkCommandPoolCreateFlagBits & b)
{
    a = static_cast<VkCommandPoolCreateFlagBits>(static_cast<std::underlying_type<VkCommandPoolCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkCommandPoolCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkCommandPoolCreateFlagBits operator&(const VkCommandPoolCreateFlagBits & a, const VkCommandPoolCreateFlagBits & b)
{
    return static_cast<VkCommandPoolCreateFlagBits>(static_cast<std::underlying_type<VkCommandPoolCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkCommandPoolCreateFlagBits>::type>(b));
}

inline VkCommandPoolCreateFlagBits & operator&=(VkCommandPoolCreateFlagBits & a, const VkCommandPoolCreateFlagBits & b)
{
    a = static_cast<VkCommandPoolCreateFlagBits>(static_cast<std::underlying_type<VkCommandPoolCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkCommandPoolCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkCommandPoolCreateFlagBits operator^(const VkCommandPoolCreateFlagBits & a, const VkCommandPoolCreateFlagBits & b)
{
    return static_cast<VkCommandPoolCreateFlagBits>(static_cast<std::underlying_type<VkCommandPoolCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkCommandPoolCreateFlagBits>::type>(b));
}

inline VkCommandPoolCreateFlagBits & operator^=(VkCommandPoolCreateFlagBits & a, const VkCommandPoolCreateFlagBits & b)
{
    a = static_cast<VkCommandPoolCreateFlagBits>(static_cast<std::underlying_type<VkCommandPoolCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkCommandPoolCreateFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkCommandPoolResetFlagBits>
{
    std::size_t operator()(const vk::VkCommandPoolResetFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkCommandPoolResetFlagBits>::type>()(static_cast<std::underlying_type<vk::VkCommandPoolResetFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkCommandPoolResetFlagBits operator|(const VkCommandPoolResetFlagBits & a, const VkCommandPoolResetFlagBits & b)
{
    return static_cast<VkCommandPoolResetFlagBits>(static_cast<std::underlying_type<VkCommandPoolResetFlagBits>::type>(a) | static_cast<std::underlying_type<VkCommandPoolResetFlagBits>::type>(b));
}

inline VkCommandPoolResetFlagBits & operator|=(VkCommandPoolResetFlagBits & a, const VkCommandPoolResetFlagBits & b)
{
    a = static_cast<VkCommandPoolResetFlagBits>(static_cast<std::underlying_type<VkCommandPoolResetFlagBits>::type>(a) | static_cast<std::underlying_type<VkCommandPoolResetFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkCommandPoolResetFlagBits operator&(const VkCommandPoolResetFlagBits & a, const VkCommandPoolResetFlagBits & b)
{
    return static_cast<VkCommandPoolResetFlagBits>(static_cast<std::underlying_type<VkCommandPoolResetFlagBits>::type>(a) & static_cast<std::underlying_type<VkCommandPoolResetFlagBits>::type>(b));
}

inline VkCommandPoolResetFlagBits & operator&=(VkCommandPoolResetFlagBits & a, const VkCommandPoolResetFlagBits & b)
{
    a = static_cast<VkCommandPoolResetFlagBits>(static_cast<std::underlying_type<VkCommandPoolResetFlagBits>::type>(a) & static_cast<std::underlying_type<VkCommandPoolResetFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkCommandPoolResetFlagBits operator^(const VkCommandPoolResetFlagBits & a, const VkCommandPoolResetFlagBits & b)
{
    return static_cast<VkCommandPoolResetFlagBits>(static_cast<std::underlying_type<VkCommandPoolResetFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkCommandPoolResetFlagBits>::type>(b));
}

inline VkCommandPoolResetFlagBits & operator^=(VkCommandPoolResetFlagBits & a, const VkCommandPoolResetFlagBits & b)
{
    a = static_cast<VkCommandPoolResetFlagBits>(static_cast<std::underlying_type<VkCommandPoolResetFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkCommandPoolResetFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkCompositeAlphaFlagBitsKHR>
{
    std::size_t operator()(const vk::VkCompositeAlphaFlagBitsKHR & t) const
    {
        return hash<std::underlying_type<vk::VkCompositeAlphaFlagBitsKHR>::type>()(static_cast<std::underlying_type<vk::VkCompositeAlphaFlagBitsKHR>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkCompositeAlphaFlagBitsKHR operator|(const VkCompositeAlphaFlagBitsKHR & a, const VkCompositeAlphaFlagBitsKHR & b)
{
    return static_cast<VkCompositeAlphaFlagBitsKHR>(static_cast<std::underlying_type<VkCompositeAlphaFlagBitsKHR>::type>(a) | static_cast<std::underlying_type<VkCompositeAlphaFlagBitsKHR>::type>(b));
}

inline VkCompositeAlphaFlagBitsKHR & operator|=(VkCompositeAlphaFlagBitsKHR & a, const VkCompositeAlphaFlagBitsKHR & b)
{
    a = static_cast<VkCompositeAlphaFlagBitsKHR>(static_cast<std::underlying_type<VkCompositeAlphaFlagBitsKHR>::type>(a) | static_cast<std::underlying_type<VkCompositeAlphaFlagBitsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkCompositeAlphaFlagBitsKHR operator&(const VkCompositeAlphaFlagBitsKHR & a, const VkCompositeAlphaFlagBitsKHR & b)
{
    return static_cast<VkCompositeAlphaFlagBitsKHR>(static_cast<std::underlying_type<VkCompositeAlphaFlagBitsKHR>::type>(a) & static_cast<std::underlying_type<VkCompositeAlphaFlagBitsKHR>::type>(b));
}

inline VkCompositeAlphaFlagBitsKHR & operator&=(VkCompositeAlphaFlagBitsKHR & a, const VkCompositeAlphaFlagBitsKHR & b)
{
    a = static_cast<VkCompositeAlphaFlagBitsKHR>(static_cast<std::underlying_type<VkCompositeAlphaFlagBitsKHR>::type>(a) & static_cast<std::underlying_type<VkCompositeAlphaFlagBitsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkCompositeAlphaFlagBitsKHR operator^(const VkCompositeAlphaFlagBitsKHR & a, const VkCompositeAlphaFlagBitsKHR & b)
{
    return static_cast<VkCompositeAlphaFlagBitsKHR>(static_cast<std::underlying_type<VkCompositeAlphaFlagBitsKHR>::type>(a) ^ static_cast<std::underlying_type<VkCompositeAlphaFlagBitsKHR>::type>(b));
}

inline VkCompositeAlphaFlagBitsKHR & operator^=(VkCompositeAlphaFlagBitsKHR & a, const VkCompositeAlphaFlagBitsKHR & b)
{
    a = static_cast<VkCompositeAlphaFlagBitsKHR>(static_cast<std::underlying_type<VkCompositeAlphaFlagBitsKHR>::type>(a) ^ static_cast<std::underlying_type<VkCompositeAlphaFlagBitsKHR>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkConditionalRenderingFlagBitsEXT>
{
    std::size_t operator()(const vk::VkConditionalRenderingFlagBitsEXT & t) const
    {
        return hash<std::underlying_type<vk::VkConditionalRenderingFlagBitsEXT>::type>()(static_cast<std::underlying_type<vk::VkConditionalRenderingFlagBitsEXT>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkConditionalRenderingFlagBitsEXT operator|(const VkConditionalRenderingFlagBitsEXT & a, const VkConditionalRenderingFlagBitsEXT & b)
{
    return static_cast<VkConditionalRenderingFlagBitsEXT>(static_cast<std::underlying_type<VkConditionalRenderingFlagBitsEXT>::type>(a) | static_cast<std::underlying_type<VkConditionalRenderingFlagBitsEXT>::type>(b));
}

inline VkConditionalRenderingFlagBitsEXT & operator|=(VkConditionalRenderingFlagBitsEXT & a, const VkConditionalRenderingFlagBitsEXT & b)
{
    a = static_cast<VkConditionalRenderingFlagBitsEXT>(static_cast<std::underlying_type<VkConditionalRenderingFlagBitsEXT>::type>(a) | static_cast<std::underlying_type<VkConditionalRenderingFlagBitsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkConditionalRenderingFlagBitsEXT operator&(const VkConditionalRenderingFlagBitsEXT & a, const VkConditionalRenderingFlagBitsEXT & b)
{
    return static_cast<VkConditionalRenderingFlagBitsEXT>(static_cast<std::underlying_type<VkConditionalRenderingFlagBitsEXT>::type>(a) & static_cast<std::underlying_type<VkConditionalRenderingFlagBitsEXT>::type>(b));
}

inline VkConditionalRenderingFlagBitsEXT & operator&=(VkConditionalRenderingFlagBitsEXT & a, const VkConditionalRenderingFlagBitsEXT & b)
{
    a = static_cast<VkConditionalRenderingFlagBitsEXT>(static_cast<std::underlying_type<VkConditionalRenderingFlagBitsEXT>::type>(a) & static_cast<std::underlying_type<VkConditionalRenderingFlagBitsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkConditionalRenderingFlagBitsEXT operator^(const VkConditionalRenderingFlagBitsEXT & a, const VkConditionalRenderingFlagBitsEXT & b)
{
    return static_cast<VkConditionalRenderingFlagBitsEXT>(static_cast<std::underlying_type<VkConditionalRenderingFlagBitsEXT>::type>(a) ^ static_cast<std::underlying_type<VkConditionalRenderingFlagBitsEXT>::type>(b));
}

inline VkConditionalRenderingFlagBitsEXT & operator^=(VkConditionalRenderingFlagBitsEXT & a, const VkConditionalRenderingFlagBitsEXT & b)
{
    a = static_cast<VkConditionalRenderingFlagBitsEXT>(static_cast<std::underlying_type<VkConditionalRenderingFlagBitsEXT>::type>(a) ^ static_cast<std::underlying_type<VkConditionalRenderingFlagBitsEXT>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkCullModeFlagBits>
{
    std::size_t operator()(const vk::VkCullModeFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkCullModeFlagBits>::type>()(static_cast<std::underlying_type<vk::VkCullModeFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkCullModeFlagBits operator|(const VkCullModeFlagBits & a, const VkCullModeFlagBits & b)
{
    return static_cast<VkCullModeFlagBits>(static_cast<std::underlying_type<VkCullModeFlagBits>::type>(a) | static_cast<std::underlying_type<VkCullModeFlagBits>::type>(b));
}

inline VkCullModeFlagBits & operator|=(VkCullModeFlagBits & a, const VkCullModeFlagBits & b)
{
    a = static_cast<VkCullModeFlagBits>(static_cast<std::underlying_type<VkCullModeFlagBits>::type>(a) | static_cast<std::underlying_type<VkCullModeFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkCullModeFlagBits operator&(const VkCullModeFlagBits & a, const VkCullModeFlagBits & b)
{
    return static_cast<VkCullModeFlagBits>(static_cast<std::underlying_type<VkCullModeFlagBits>::type>(a) & static_cast<std::underlying_type<VkCullModeFlagBits>::type>(b));
}

inline VkCullModeFlagBits & operator&=(VkCullModeFlagBits & a, const VkCullModeFlagBits & b)
{
    a = static_cast<VkCullModeFlagBits>(static_cast<std::underlying_type<VkCullModeFlagBits>::type>(a) & static_cast<std::underlying_type<VkCullModeFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkCullModeFlagBits operator^(const VkCullModeFlagBits & a, const VkCullModeFlagBits & b)
{
    return static_cast<VkCullModeFlagBits>(static_cast<std::underlying_type<VkCullModeFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkCullModeFlagBits>::type>(b));
}

inline VkCullModeFlagBits & operator^=(VkCullModeFlagBits & a, const VkCullModeFlagBits & b)
{
    a = static_cast<VkCullModeFlagBits>(static_cast<std::underlying_type<VkCullModeFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkCullModeFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkDebugReportFlagBitsEXT>
{
    std::size_t operator()(const vk::VkDebugReportFlagBitsEXT & t) const
    {
        return hash<std::underlying_type<vk::VkDebugReportFlagBitsEXT>::type>()(static_cast<std::underlying_type<vk::VkDebugReportFlagBitsEXT>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkDebugReportFlagBitsEXT operator|(const VkDebugReportFlagBitsEXT & a, const VkDebugReportFlagBitsEXT & b)
{
    return static_cast<VkDebugReportFlagBitsEXT>(static_cast<std::underlying_type<VkDebugReportFlagBitsEXT>::type>(a) | static_cast<std::underlying_type<VkDebugReportFlagBitsEXT>::type>(b));
}

inline VkDebugReportFlagBitsEXT & operator|=(VkDebugReportFlagBitsEXT & a, const VkDebugReportFlagBitsEXT & b)
{
    a = static_cast<VkDebugReportFlagBitsEXT>(static_cast<std::underlying_type<VkDebugReportFlagBitsEXT>::type>(a) | static_cast<std::underlying_type<VkDebugReportFlagBitsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDebugReportFlagBitsEXT operator&(const VkDebugReportFlagBitsEXT & a, const VkDebugReportFlagBitsEXT & b)
{
    return static_cast<VkDebugReportFlagBitsEXT>(static_cast<std::underlying_type<VkDebugReportFlagBitsEXT>::type>(a) & static_cast<std::underlying_type<VkDebugReportFlagBitsEXT>::type>(b));
}

inline VkDebugReportFlagBitsEXT & operator&=(VkDebugReportFlagBitsEXT & a, const VkDebugReportFlagBitsEXT & b)
{
    a = static_cast<VkDebugReportFlagBitsEXT>(static_cast<std::underlying_type<VkDebugReportFlagBitsEXT>::type>(a) & static_cast<std::underlying_type<VkDebugReportFlagBitsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDebugReportFlagBitsEXT operator^(const VkDebugReportFlagBitsEXT & a, const VkDebugReportFlagBitsEXT & b)
{
    return static_cast<VkDebugReportFlagBitsEXT>(static_cast<std::underlying_type<VkDebugReportFlagBitsEXT>::type>(a) ^ static_cast<std::underlying_type<VkDebugReportFlagBitsEXT>::type>(b));
}

inline VkDebugReportFlagBitsEXT & operator^=(VkDebugReportFlagBitsEXT & a, const VkDebugReportFlagBitsEXT & b)
{
    a = static_cast<VkDebugReportFlagBitsEXT>(static_cast<std::underlying_type<VkDebugReportFlagBitsEXT>::type>(a) ^ static_cast<std::underlying_type<VkDebugReportFlagBitsEXT>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkDebugUtilsMessageSeverityFlagBitsEXT>
{
    std::size_t operator()(const vk::VkDebugUtilsMessageSeverityFlagBitsEXT & t) const
    {
        return hash<std::underlying_type<vk::VkDebugUtilsMessageSeverityFlagBitsEXT>::type>()(static_cast<std::underlying_type<vk::VkDebugUtilsMessageSeverityFlagBitsEXT>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkDebugUtilsMessageSeverityFlagBitsEXT operator|(const VkDebugUtilsMessageSeverityFlagBitsEXT & a, const VkDebugUtilsMessageSeverityFlagBitsEXT & b)
{
    return static_cast<VkDebugUtilsMessageSeverityFlagBitsEXT>(static_cast<std::underlying_type<VkDebugUtilsMessageSeverityFlagBitsEXT>::type>(a) | static_cast<std::underlying_type<VkDebugUtilsMessageSeverityFlagBitsEXT>::type>(b));
}

inline VkDebugUtilsMessageSeverityFlagBitsEXT & operator|=(VkDebugUtilsMessageSeverityFlagBitsEXT & a, const VkDebugUtilsMessageSeverityFlagBitsEXT & b)
{
    a = static_cast<VkDebugUtilsMessageSeverityFlagBitsEXT>(static_cast<std::underlying_type<VkDebugUtilsMessageSeverityFlagBitsEXT>::type>(a) | static_cast<std::underlying_type<VkDebugUtilsMessageSeverityFlagBitsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDebugUtilsMessageSeverityFlagBitsEXT operator&(const VkDebugUtilsMessageSeverityFlagBitsEXT & a, const VkDebugUtilsMessageSeverityFlagBitsEXT & b)
{
    return static_cast<VkDebugUtilsMessageSeverityFlagBitsEXT>(static_cast<std::underlying_type<VkDebugUtilsMessageSeverityFlagBitsEXT>::type>(a) & static_cast<std::underlying_type<VkDebugUtilsMessageSeverityFlagBitsEXT>::type>(b));
}

inline VkDebugUtilsMessageSeverityFlagBitsEXT & operator&=(VkDebugUtilsMessageSeverityFlagBitsEXT & a, const VkDebugUtilsMessageSeverityFlagBitsEXT & b)
{
    a = static_cast<VkDebugUtilsMessageSeverityFlagBitsEXT>(static_cast<std::underlying_type<VkDebugUtilsMessageSeverityFlagBitsEXT>::type>(a) & static_cast<std::underlying_type<VkDebugUtilsMessageSeverityFlagBitsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDebugUtilsMessageSeverityFlagBitsEXT operator^(const VkDebugUtilsMessageSeverityFlagBitsEXT & a, const VkDebugUtilsMessageSeverityFlagBitsEXT & b)
{
    return static_cast<VkDebugUtilsMessageSeverityFlagBitsEXT>(static_cast<std::underlying_type<VkDebugUtilsMessageSeverityFlagBitsEXT>::type>(a) ^ static_cast<std::underlying_type<VkDebugUtilsMessageSeverityFlagBitsEXT>::type>(b));
}

inline VkDebugUtilsMessageSeverityFlagBitsEXT & operator^=(VkDebugUtilsMessageSeverityFlagBitsEXT & a, const VkDebugUtilsMessageSeverityFlagBitsEXT & b)
{
    a = static_cast<VkDebugUtilsMessageSeverityFlagBitsEXT>(static_cast<std::underlying_type<VkDebugUtilsMessageSeverityFlagBitsEXT>::type>(a) ^ static_cast<std::underlying_type<VkDebugUtilsMessageSeverityFlagBitsEXT>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkDebugUtilsMessageTypeFlagBitsEXT>
{
    std::size_t operator()(const vk::VkDebugUtilsMessageTypeFlagBitsEXT & t) const
    {
        return hash<std::underlying_type<vk::VkDebugUtilsMessageTypeFlagBitsEXT>::type>()(static_cast<std::underlying_type<vk::VkDebugUtilsMessageTypeFlagBitsEXT>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkDebugUtilsMessageTypeFlagBitsEXT operator|(const VkDebugUtilsMessageTypeFlagBitsEXT & a, const VkDebugUtilsMessageTypeFlagBitsEXT & b)
{
    return static_cast<VkDebugUtilsMessageTypeFlagBitsEXT>(static_cast<std::underlying_type<VkDebugUtilsMessageTypeFlagBitsEXT>::type>(a) | static_cast<std::underlying_type<VkDebugUtilsMessageTypeFlagBitsEXT>::type>(b));
}

inline VkDebugUtilsMessageTypeFlagBitsEXT & operator|=(VkDebugUtilsMessageTypeFlagBitsEXT & a, const VkDebugUtilsMessageTypeFlagBitsEXT & b)
{
    a = static_cast<VkDebugUtilsMessageTypeFlagBitsEXT>(static_cast<std::underlying_type<VkDebugUtilsMessageTypeFlagBitsEXT>::type>(a) | static_cast<std::underlying_type<VkDebugUtilsMessageTypeFlagBitsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDebugUtilsMessageTypeFlagBitsEXT operator&(const VkDebugUtilsMessageTypeFlagBitsEXT & a, const VkDebugUtilsMessageTypeFlagBitsEXT & b)
{
    return static_cast<VkDebugUtilsMessageTypeFlagBitsEXT>(static_cast<std::underlying_type<VkDebugUtilsMessageTypeFlagBitsEXT>::type>(a) & static_cast<std::underlying_type<VkDebugUtilsMessageTypeFlagBitsEXT>::type>(b));
}

inline VkDebugUtilsMessageTypeFlagBitsEXT & operator&=(VkDebugUtilsMessageTypeFlagBitsEXT & a, const VkDebugUtilsMessageTypeFlagBitsEXT & b)
{
    a = static_cast<VkDebugUtilsMessageTypeFlagBitsEXT>(static_cast<std::underlying_type<VkDebugUtilsMessageTypeFlagBitsEXT>::type>(a) & static_cast<std::underlying_type<VkDebugUtilsMessageTypeFlagBitsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDebugUtilsMessageTypeFlagBitsEXT operator^(const VkDebugUtilsMessageTypeFlagBitsEXT & a, const VkDebugUtilsMessageTypeFlagBitsEXT & b)
{
    return static_cast<VkDebugUtilsMessageTypeFlagBitsEXT>(static_cast<std::underlying_type<VkDebugUtilsMessageTypeFlagBitsEXT>::type>(a) ^ static_cast<std::underlying_type<VkDebugUtilsMessageTypeFlagBitsEXT>::type>(b));
}

inline VkDebugUtilsMessageTypeFlagBitsEXT & operator^=(VkDebugUtilsMessageTypeFlagBitsEXT & a, const VkDebugUtilsMessageTypeFlagBitsEXT & b)
{
    a = static_cast<VkDebugUtilsMessageTypeFlagBitsEXT>(static_cast<std::underlying_type<VkDebugUtilsMessageTypeFlagBitsEXT>::type>(a) ^ static_cast<std::underlying_type<VkDebugUtilsMessageTypeFlagBitsEXT>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkDependencyFlagBits>
{
    std::size_t operator()(const vk::VkDependencyFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkDependencyFlagBits>::type>()(static_cast<std::underlying_type<vk::VkDependencyFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkDependencyFlagBits operator|(const VkDependencyFlagBits & a, const VkDependencyFlagBits & b)
{
    return static_cast<VkDependencyFlagBits>(static_cast<std::underlying_type<VkDependencyFlagBits>::type>(a) | static_cast<std::underlying_type<VkDependencyFlagBits>::type>(b));
}

inline VkDependencyFlagBits & operator|=(VkDependencyFlagBits & a, const VkDependencyFlagBits & b)
{
    a = static_cast<VkDependencyFlagBits>(static_cast<std::underlying_type<VkDependencyFlagBits>::type>(a) | static_cast<std::underlying_type<VkDependencyFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDependencyFlagBits operator&(const VkDependencyFlagBits & a, const VkDependencyFlagBits & b)
{
    return static_cast<VkDependencyFlagBits>(static_cast<std::underlying_type<VkDependencyFlagBits>::type>(a) & static_cast<std::underlying_type<VkDependencyFlagBits>::type>(b));
}

inline VkDependencyFlagBits & operator&=(VkDependencyFlagBits & a, const VkDependencyFlagBits & b)
{
    a = static_cast<VkDependencyFlagBits>(static_cast<std::underlying_type<VkDependencyFlagBits>::type>(a) & static_cast<std::underlying_type<VkDependencyFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDependencyFlagBits operator^(const VkDependencyFlagBits & a, const VkDependencyFlagBits & b)
{
    return static_cast<VkDependencyFlagBits>(static_cast<std::underlying_type<VkDependencyFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkDependencyFlagBits>::type>(b));
}

inline VkDependencyFlagBits & operator^=(VkDependencyFlagBits & a, const VkDependencyFlagBits & b)
{
    a = static_cast<VkDependencyFlagBits>(static_cast<std::underlying_type<VkDependencyFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkDependencyFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkDescriptorBindingFlagBitsEXT>
{
    std::size_t operator()(const vk::VkDescriptorBindingFlagBitsEXT & t) const
    {
        return hash<std::underlying_type<vk::VkDescriptorBindingFlagBitsEXT>::type>()(static_cast<std::underlying_type<vk::VkDescriptorBindingFlagBitsEXT>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkDescriptorBindingFlagBitsEXT operator|(const VkDescriptorBindingFlagBitsEXT & a, const VkDescriptorBindingFlagBitsEXT & b)
{
    return static_cast<VkDescriptorBindingFlagBitsEXT>(static_cast<std::underlying_type<VkDescriptorBindingFlagBitsEXT>::type>(a) | static_cast<std::underlying_type<VkDescriptorBindingFlagBitsEXT>::type>(b));
}

inline VkDescriptorBindingFlagBitsEXT & operator|=(VkDescriptorBindingFlagBitsEXT & a, const VkDescriptorBindingFlagBitsEXT & b)
{
    a = static_cast<VkDescriptorBindingFlagBitsEXT>(static_cast<std::underlying_type<VkDescriptorBindingFlagBitsEXT>::type>(a) | static_cast<std::underlying_type<VkDescriptorBindingFlagBitsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDescriptorBindingFlagBitsEXT operator&(const VkDescriptorBindingFlagBitsEXT & a, const VkDescriptorBindingFlagBitsEXT & b)
{
    return static_cast<VkDescriptorBindingFlagBitsEXT>(static_cast<std::underlying_type<VkDescriptorBindingFlagBitsEXT>::type>(a) & static_cast<std::underlying_type<VkDescriptorBindingFlagBitsEXT>::type>(b));
}

inline VkDescriptorBindingFlagBitsEXT & operator&=(VkDescriptorBindingFlagBitsEXT & a, const VkDescriptorBindingFlagBitsEXT & b)
{
    a = static_cast<VkDescriptorBindingFlagBitsEXT>(static_cast<std::underlying_type<VkDescriptorBindingFlagBitsEXT>::type>(a) & static_cast<std::underlying_type<VkDescriptorBindingFlagBitsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDescriptorBindingFlagBitsEXT operator^(const VkDescriptorBindingFlagBitsEXT & a, const VkDescriptorBindingFlagBitsEXT & b)
{
    return static_cast<VkDescriptorBindingFlagBitsEXT>(static_cast<std::underlying_type<VkDescriptorBindingFlagBitsEXT>::type>(a) ^ static_cast<std::underlying_type<VkDescriptorBindingFlagBitsEXT>::type>(b));
}

inline VkDescriptorBindingFlagBitsEXT & operator^=(VkDescriptorBindingFlagBitsEXT & a, const VkDescriptorBindingFlagBitsEXT & b)
{
    a = static_cast<VkDescriptorBindingFlagBitsEXT>(static_cast<std::underlying_type<VkDescriptorBindingFlagBitsEXT>::type>(a) ^ static_cast<std::underlying_type<VkDescriptorBindingFlagBitsEXT>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkDescriptorPoolCreateFlagBits>
{
    std::size_t operator()(const vk::VkDescriptorPoolCreateFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkDescriptorPoolCreateFlagBits>::type>()(static_cast<std::underlying_type<vk::VkDescriptorPoolCreateFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkDescriptorPoolCreateFlagBits operator|(const VkDescriptorPoolCreateFlagBits & a, const VkDescriptorPoolCreateFlagBits & b)
{
    return static_cast<VkDescriptorPoolCreateFlagBits>(static_cast<std::underlying_type<VkDescriptorPoolCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkDescriptorPoolCreateFlagBits>::type>(b));
}

inline VkDescriptorPoolCreateFlagBits & operator|=(VkDescriptorPoolCreateFlagBits & a, const VkDescriptorPoolCreateFlagBits & b)
{
    a = static_cast<VkDescriptorPoolCreateFlagBits>(static_cast<std::underlying_type<VkDescriptorPoolCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkDescriptorPoolCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDescriptorPoolCreateFlagBits operator&(const VkDescriptorPoolCreateFlagBits & a, const VkDescriptorPoolCreateFlagBits & b)
{
    return static_cast<VkDescriptorPoolCreateFlagBits>(static_cast<std::underlying_type<VkDescriptorPoolCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkDescriptorPoolCreateFlagBits>::type>(b));
}

inline VkDescriptorPoolCreateFlagBits & operator&=(VkDescriptorPoolCreateFlagBits & a, const VkDescriptorPoolCreateFlagBits & b)
{
    a = static_cast<VkDescriptorPoolCreateFlagBits>(static_cast<std::underlying_type<VkDescriptorPoolCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkDescriptorPoolCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDescriptorPoolCreateFlagBits operator^(const VkDescriptorPoolCreateFlagBits & a, const VkDescriptorPoolCreateFlagBits & b)
{
    return static_cast<VkDescriptorPoolCreateFlagBits>(static_cast<std::underlying_type<VkDescriptorPoolCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkDescriptorPoolCreateFlagBits>::type>(b));
}

inline VkDescriptorPoolCreateFlagBits & operator^=(VkDescriptorPoolCreateFlagBits & a, const VkDescriptorPoolCreateFlagBits & b)
{
    a = static_cast<VkDescriptorPoolCreateFlagBits>(static_cast<std::underlying_type<VkDescriptorPoolCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkDescriptorPoolCreateFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkDescriptorSetLayoutCreateFlagBits>
{
    std::size_t operator()(const vk::VkDescriptorSetLayoutCreateFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkDescriptorSetLayoutCreateFlagBits>::type>()(static_cast<std::underlying_type<vk::VkDescriptorSetLayoutCreateFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkDescriptorSetLayoutCreateFlagBits operator|(const VkDescriptorSetLayoutCreateFlagBits & a, const VkDescriptorSetLayoutCreateFlagBits & b)
{
    return static_cast<VkDescriptorSetLayoutCreateFlagBits>(static_cast<std::underlying_type<VkDescriptorSetLayoutCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkDescriptorSetLayoutCreateFlagBits>::type>(b));
}

inline VkDescriptorSetLayoutCreateFlagBits & operator|=(VkDescriptorSetLayoutCreateFlagBits & a, const VkDescriptorSetLayoutCreateFlagBits & b)
{
    a = static_cast<VkDescriptorSetLayoutCreateFlagBits>(static_cast<std::underlying_type<VkDescriptorSetLayoutCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkDescriptorSetLayoutCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDescriptorSetLayoutCreateFlagBits operator&(const VkDescriptorSetLayoutCreateFlagBits & a, const VkDescriptorSetLayoutCreateFlagBits & b)
{
    return static_cast<VkDescriptorSetLayoutCreateFlagBits>(static_cast<std::underlying_type<VkDescriptorSetLayoutCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkDescriptorSetLayoutCreateFlagBits>::type>(b));
}

inline VkDescriptorSetLayoutCreateFlagBits & operator&=(VkDescriptorSetLayoutCreateFlagBits & a, const VkDescriptorSetLayoutCreateFlagBits & b)
{
    a = static_cast<VkDescriptorSetLayoutCreateFlagBits>(static_cast<std::underlying_type<VkDescriptorSetLayoutCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkDescriptorSetLayoutCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDescriptorSetLayoutCreateFlagBits operator^(const VkDescriptorSetLayoutCreateFlagBits & a, const VkDescriptorSetLayoutCreateFlagBits & b)
{
    return static_cast<VkDescriptorSetLayoutCreateFlagBits>(static_cast<std::underlying_type<VkDescriptorSetLayoutCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkDescriptorSetLayoutCreateFlagBits>::type>(b));
}

inline VkDescriptorSetLayoutCreateFlagBits & operator^=(VkDescriptorSetLayoutCreateFlagBits & a, const VkDescriptorSetLayoutCreateFlagBits & b)
{
    a = static_cast<VkDescriptorSetLayoutCreateFlagBits>(static_cast<std::underlying_type<VkDescriptorSetLayoutCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkDescriptorSetLayoutCreateFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkDeviceCreateFlagBits>
{
    std::size_t operator()(const vk::VkDeviceCreateFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkDeviceCreateFlagBits>::type>()(static_cast<std::underlying_type<vk::VkDeviceCreateFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkDeviceCreateFlagBits operator|(const VkDeviceCreateFlagBits & a, const VkDeviceCreateFlagBits & b)
{
    return static_cast<VkDeviceCreateFlagBits>(static_cast<std::underlying_type<VkDeviceCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkDeviceCreateFlagBits>::type>(b));
}

inline VkDeviceCreateFlagBits & operator|=(VkDeviceCreateFlagBits & a, const VkDeviceCreateFlagBits & b)
{
    a = static_cast<VkDeviceCreateFlagBits>(static_cast<std::underlying_type<VkDeviceCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkDeviceCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDeviceCreateFlagBits operator&(const VkDeviceCreateFlagBits & a, const VkDeviceCreateFlagBits & b)
{
    return static_cast<VkDeviceCreateFlagBits>(static_cast<std::underlying_type<VkDeviceCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkDeviceCreateFlagBits>::type>(b));
}

inline VkDeviceCreateFlagBits & operator&=(VkDeviceCreateFlagBits & a, const VkDeviceCreateFlagBits & b)
{
    a = static_cast<VkDeviceCreateFlagBits>(static_cast<std::underlying_type<VkDeviceCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkDeviceCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDeviceCreateFlagBits operator^(const VkDeviceCreateFlagBits & a, const VkDeviceCreateFlagBits & b)
{
    return static_cast<VkDeviceCreateFlagBits>(static_cast<std::underlying_type<VkDeviceCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkDeviceCreateFlagBits>::type>(b));
}

inline VkDeviceCreateFlagBits & operator^=(VkDeviceCreateFlagBits & a, const VkDeviceCreateFlagBits & b)
{
    a = static_cast<VkDeviceCreateFlagBits>(static_cast<std::underlying_type<VkDeviceCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkDeviceCreateFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkDeviceGroupPresentModeFlagBitsKHR>
{
    std::size_t operator()(const vk::VkDeviceGroupPresentModeFlagBitsKHR & t) const
    {
        return hash<std::underlying_type<vk::VkDeviceGroupPresentModeFlagBitsKHR>::type>()(static_cast<std::underlying_type<vk::VkDeviceGroupPresentModeFlagBitsKHR>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkDeviceGroupPresentModeFlagBitsKHR operator|(const VkDeviceGroupPresentModeFlagBitsKHR & a, const VkDeviceGroupPresentModeFlagBitsKHR & b)
{
    return static_cast<VkDeviceGroupPresentModeFlagBitsKHR>(static_cast<std::underlying_type<VkDeviceGroupPresentModeFlagBitsKHR>::type>(a) | static_cast<std::underlying_type<VkDeviceGroupPresentModeFlagBitsKHR>::type>(b));
}

inline VkDeviceGroupPresentModeFlagBitsKHR & operator|=(VkDeviceGroupPresentModeFlagBitsKHR & a, const VkDeviceGroupPresentModeFlagBitsKHR & b)
{
    a = static_cast<VkDeviceGroupPresentModeFlagBitsKHR>(static_cast<std::underlying_type<VkDeviceGroupPresentModeFlagBitsKHR>::type>(a) | static_cast<std::underlying_type<VkDeviceGroupPresentModeFlagBitsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDeviceGroupPresentModeFlagBitsKHR operator&(const VkDeviceGroupPresentModeFlagBitsKHR & a, const VkDeviceGroupPresentModeFlagBitsKHR & b)
{
    return static_cast<VkDeviceGroupPresentModeFlagBitsKHR>(static_cast<std::underlying_type<VkDeviceGroupPresentModeFlagBitsKHR>::type>(a) & static_cast<std::underlying_type<VkDeviceGroupPresentModeFlagBitsKHR>::type>(b));
}

inline VkDeviceGroupPresentModeFlagBitsKHR & operator&=(VkDeviceGroupPresentModeFlagBitsKHR & a, const VkDeviceGroupPresentModeFlagBitsKHR & b)
{
    a = static_cast<VkDeviceGroupPresentModeFlagBitsKHR>(static_cast<std::underlying_type<VkDeviceGroupPresentModeFlagBitsKHR>::type>(a) & static_cast<std::underlying_type<VkDeviceGroupPresentModeFlagBitsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDeviceGroupPresentModeFlagBitsKHR operator^(const VkDeviceGroupPresentModeFlagBitsKHR & a, const VkDeviceGroupPresentModeFlagBitsKHR & b)
{
    return static_cast<VkDeviceGroupPresentModeFlagBitsKHR>(static_cast<std::underlying_type<VkDeviceGroupPresentModeFlagBitsKHR>::type>(a) ^ static_cast<std::underlying_type<VkDeviceGroupPresentModeFlagBitsKHR>::type>(b));
}

inline VkDeviceGroupPresentModeFlagBitsKHR & operator^=(VkDeviceGroupPresentModeFlagBitsKHR & a, const VkDeviceGroupPresentModeFlagBitsKHR & b)
{
    a = static_cast<VkDeviceGroupPresentModeFlagBitsKHR>(static_cast<std::underlying_type<VkDeviceGroupPresentModeFlagBitsKHR>::type>(a) ^ static_cast<std::underlying_type<VkDeviceGroupPresentModeFlagBitsKHR>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkDeviceQueueCreateFlagBits>
{
    std::size_t operator()(const vk::VkDeviceQueueCreateFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkDeviceQueueCreateFlagBits>::type>()(static_cast<std::underlying_type<vk::VkDeviceQueueCreateFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkDeviceQueueCreateFlagBits operator|(const VkDeviceQueueCreateFlagBits & a, const VkDeviceQueueCreateFlagBits & b)
{
    return static_cast<VkDeviceQueueCreateFlagBits>(static_cast<std::underlying_type<VkDeviceQueueCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkDeviceQueueCreateFlagBits>::type>(b));
}

inline VkDeviceQueueCreateFlagBits & operator|=(VkDeviceQueueCreateFlagBits & a, const VkDeviceQueueCreateFlagBits & b)
{
    a = static_cast<VkDeviceQueueCreateFlagBits>(static_cast<std::underlying_type<VkDeviceQueueCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkDeviceQueueCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDeviceQueueCreateFlagBits operator&(const VkDeviceQueueCreateFlagBits & a, const VkDeviceQueueCreateFlagBits & b)
{
    return static_cast<VkDeviceQueueCreateFlagBits>(static_cast<std::underlying_type<VkDeviceQueueCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkDeviceQueueCreateFlagBits>::type>(b));
}

inline VkDeviceQueueCreateFlagBits & operator&=(VkDeviceQueueCreateFlagBits & a, const VkDeviceQueueCreateFlagBits & b)
{
    a = static_cast<VkDeviceQueueCreateFlagBits>(static_cast<std::underlying_type<VkDeviceQueueCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkDeviceQueueCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDeviceQueueCreateFlagBits operator^(const VkDeviceQueueCreateFlagBits & a, const VkDeviceQueueCreateFlagBits & b)
{
    return static_cast<VkDeviceQueueCreateFlagBits>(static_cast<std::underlying_type<VkDeviceQueueCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkDeviceQueueCreateFlagBits>::type>(b));
}

inline VkDeviceQueueCreateFlagBits & operator^=(VkDeviceQueueCreateFlagBits & a, const VkDeviceQueueCreateFlagBits & b)
{
    a = static_cast<VkDeviceQueueCreateFlagBits>(static_cast<std::underlying_type<VkDeviceQueueCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkDeviceQueueCreateFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkDisplayPlaneAlphaFlagBitsKHR>
{
    std::size_t operator()(const vk::VkDisplayPlaneAlphaFlagBitsKHR & t) const
    {
        return hash<std::underlying_type<vk::VkDisplayPlaneAlphaFlagBitsKHR>::type>()(static_cast<std::underlying_type<vk::VkDisplayPlaneAlphaFlagBitsKHR>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkDisplayPlaneAlphaFlagBitsKHR operator|(const VkDisplayPlaneAlphaFlagBitsKHR & a, const VkDisplayPlaneAlphaFlagBitsKHR & b)
{
    return static_cast<VkDisplayPlaneAlphaFlagBitsKHR>(static_cast<std::underlying_type<VkDisplayPlaneAlphaFlagBitsKHR>::type>(a) | static_cast<std::underlying_type<VkDisplayPlaneAlphaFlagBitsKHR>::type>(b));
}

inline VkDisplayPlaneAlphaFlagBitsKHR & operator|=(VkDisplayPlaneAlphaFlagBitsKHR & a, const VkDisplayPlaneAlphaFlagBitsKHR & b)
{
    a = static_cast<VkDisplayPlaneAlphaFlagBitsKHR>(static_cast<std::underlying_type<VkDisplayPlaneAlphaFlagBitsKHR>::type>(a) | static_cast<std::underlying_type<VkDisplayPlaneAlphaFlagBitsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDisplayPlaneAlphaFlagBitsKHR operator&(const VkDisplayPlaneAlphaFlagBitsKHR & a, const VkDisplayPlaneAlphaFlagBitsKHR & b)
{
    return static_cast<VkDisplayPlaneAlphaFlagBitsKHR>(static_cast<std::underlying_type<VkDisplayPlaneAlphaFlagBitsKHR>::type>(a) & static_cast<std::underlying_type<VkDisplayPlaneAlphaFlagBitsKHR>::type>(b));
}

inline VkDisplayPlaneAlphaFlagBitsKHR & operator&=(VkDisplayPlaneAlphaFlagBitsKHR & a, const VkDisplayPlaneAlphaFlagBitsKHR & b)
{
    a = static_cast<VkDisplayPlaneAlphaFlagBitsKHR>(static_cast<std::underlying_type<VkDisplayPlaneAlphaFlagBitsKHR>::type>(a) & static_cast<std::underlying_type<VkDisplayPlaneAlphaFlagBitsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDisplayPlaneAlphaFlagBitsKHR operator^(const VkDisplayPlaneAlphaFlagBitsKHR & a, const VkDisplayPlaneAlphaFlagBitsKHR & b)
{
    return static_cast<VkDisplayPlaneAlphaFlagBitsKHR>(static_cast<std::underlying_type<VkDisplayPlaneAlphaFlagBitsKHR>::type>(a) ^ static_cast<std::underlying_type<VkDisplayPlaneAlphaFlagBitsKHR>::type>(b));
}

inline VkDisplayPlaneAlphaFlagBitsKHR & operator^=(VkDisplayPlaneAlphaFlagBitsKHR & a, const VkDisplayPlaneAlphaFlagBitsKHR & b)
{
    a = static_cast<VkDisplayPlaneAlphaFlagBitsKHR>(static_cast<std::underlying_type<VkDisplayPlaneAlphaFlagBitsKHR>::type>(a) ^ static_cast<std::underlying_type<VkDisplayPlaneAlphaFlagBitsKHR>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkExternalFenceFeatureFlagBits>
{
    std::size_t operator()(const vk::VkExternalFenceFeatureFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkExternalFenceFeatureFlagBits>::type>()(static_cast<std::underlying_type<vk::VkExternalFenceFeatureFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkExternalFenceFeatureFlagBits operator|(const VkExternalFenceFeatureFlagBits & a, const VkExternalFenceFeatureFlagBits & b)
{
    return static_cast<VkExternalFenceFeatureFlagBits>(static_cast<std::underlying_type<VkExternalFenceFeatureFlagBits>::type>(a) | static_cast<std::underlying_type<VkExternalFenceFeatureFlagBits>::type>(b));
}

inline VkExternalFenceFeatureFlagBits & operator|=(VkExternalFenceFeatureFlagBits & a, const VkExternalFenceFeatureFlagBits & b)
{
    a = static_cast<VkExternalFenceFeatureFlagBits>(static_cast<std::underlying_type<VkExternalFenceFeatureFlagBits>::type>(a) | static_cast<std::underlying_type<VkExternalFenceFeatureFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalFenceFeatureFlagBits operator&(const VkExternalFenceFeatureFlagBits & a, const VkExternalFenceFeatureFlagBits & b)
{
    return static_cast<VkExternalFenceFeatureFlagBits>(static_cast<std::underlying_type<VkExternalFenceFeatureFlagBits>::type>(a) & static_cast<std::underlying_type<VkExternalFenceFeatureFlagBits>::type>(b));
}

inline VkExternalFenceFeatureFlagBits & operator&=(VkExternalFenceFeatureFlagBits & a, const VkExternalFenceFeatureFlagBits & b)
{
    a = static_cast<VkExternalFenceFeatureFlagBits>(static_cast<std::underlying_type<VkExternalFenceFeatureFlagBits>::type>(a) & static_cast<std::underlying_type<VkExternalFenceFeatureFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalFenceFeatureFlagBits operator^(const VkExternalFenceFeatureFlagBits & a, const VkExternalFenceFeatureFlagBits & b)
{
    return static_cast<VkExternalFenceFeatureFlagBits>(static_cast<std::underlying_type<VkExternalFenceFeatureFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkExternalFenceFeatureFlagBits>::type>(b));
}

inline VkExternalFenceFeatureFlagBits & operator^=(VkExternalFenceFeatureFlagBits & a, const VkExternalFenceFeatureFlagBits & b)
{
    a = static_cast<VkExternalFenceFeatureFlagBits>(static_cast<std::underlying_type<VkExternalFenceFeatureFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkExternalFenceFeatureFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkExternalFenceFeatureFlagBitsKHR>
{
    std::size_t operator()(const vk::VkExternalFenceFeatureFlagBitsKHR & t) const
    {
        return hash<std::underlying_type<vk::VkExternalFenceFeatureFlagBitsKHR>::type>()(static_cast<std::underlying_type<vk::VkExternalFenceFeatureFlagBitsKHR>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkExternalFenceFeatureFlagBitsKHR operator|(const VkExternalFenceFeatureFlagBitsKHR & a, const VkExternalFenceFeatureFlagBitsKHR & b)
{
    return static_cast<VkExternalFenceFeatureFlagBitsKHR>(static_cast<std::underlying_type<VkExternalFenceFeatureFlagBitsKHR>::type>(a) | static_cast<std::underlying_type<VkExternalFenceFeatureFlagBitsKHR>::type>(b));
}

inline VkExternalFenceFeatureFlagBitsKHR & operator|=(VkExternalFenceFeatureFlagBitsKHR & a, const VkExternalFenceFeatureFlagBitsKHR & b)
{
    a = static_cast<VkExternalFenceFeatureFlagBitsKHR>(static_cast<std::underlying_type<VkExternalFenceFeatureFlagBitsKHR>::type>(a) | static_cast<std::underlying_type<VkExternalFenceFeatureFlagBitsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalFenceFeatureFlagBitsKHR operator&(const VkExternalFenceFeatureFlagBitsKHR & a, const VkExternalFenceFeatureFlagBitsKHR & b)
{
    return static_cast<VkExternalFenceFeatureFlagBitsKHR>(static_cast<std::underlying_type<VkExternalFenceFeatureFlagBitsKHR>::type>(a) & static_cast<std::underlying_type<VkExternalFenceFeatureFlagBitsKHR>::type>(b));
}

inline VkExternalFenceFeatureFlagBitsKHR & operator&=(VkExternalFenceFeatureFlagBitsKHR & a, const VkExternalFenceFeatureFlagBitsKHR & b)
{
    a = static_cast<VkExternalFenceFeatureFlagBitsKHR>(static_cast<std::underlying_type<VkExternalFenceFeatureFlagBitsKHR>::type>(a) & static_cast<std::underlying_type<VkExternalFenceFeatureFlagBitsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalFenceFeatureFlagBitsKHR operator^(const VkExternalFenceFeatureFlagBitsKHR & a, const VkExternalFenceFeatureFlagBitsKHR & b)
{
    return static_cast<VkExternalFenceFeatureFlagBitsKHR>(static_cast<std::underlying_type<VkExternalFenceFeatureFlagBitsKHR>::type>(a) ^ static_cast<std::underlying_type<VkExternalFenceFeatureFlagBitsKHR>::type>(b));
}

inline VkExternalFenceFeatureFlagBitsKHR & operator^=(VkExternalFenceFeatureFlagBitsKHR & a, const VkExternalFenceFeatureFlagBitsKHR & b)
{
    a = static_cast<VkExternalFenceFeatureFlagBitsKHR>(static_cast<std::underlying_type<VkExternalFenceFeatureFlagBitsKHR>::type>(a) ^ static_cast<std::underlying_type<VkExternalFenceFeatureFlagBitsKHR>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkExternalFenceHandleTypeFlagBits>
{
    std::size_t operator()(const vk::VkExternalFenceHandleTypeFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkExternalFenceHandleTypeFlagBits>::type>()(static_cast<std::underlying_type<vk::VkExternalFenceHandleTypeFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkExternalFenceHandleTypeFlagBits operator|(const VkExternalFenceHandleTypeFlagBits & a, const VkExternalFenceHandleTypeFlagBits & b)
{
    return static_cast<VkExternalFenceHandleTypeFlagBits>(static_cast<std::underlying_type<VkExternalFenceHandleTypeFlagBits>::type>(a) | static_cast<std::underlying_type<VkExternalFenceHandleTypeFlagBits>::type>(b));
}

inline VkExternalFenceHandleTypeFlagBits & operator|=(VkExternalFenceHandleTypeFlagBits & a, const VkExternalFenceHandleTypeFlagBits & b)
{
    a = static_cast<VkExternalFenceHandleTypeFlagBits>(static_cast<std::underlying_type<VkExternalFenceHandleTypeFlagBits>::type>(a) | static_cast<std::underlying_type<VkExternalFenceHandleTypeFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalFenceHandleTypeFlagBits operator&(const VkExternalFenceHandleTypeFlagBits & a, const VkExternalFenceHandleTypeFlagBits & b)
{
    return static_cast<VkExternalFenceHandleTypeFlagBits>(static_cast<std::underlying_type<VkExternalFenceHandleTypeFlagBits>::type>(a) & static_cast<std::underlying_type<VkExternalFenceHandleTypeFlagBits>::type>(b));
}

inline VkExternalFenceHandleTypeFlagBits & operator&=(VkExternalFenceHandleTypeFlagBits & a, const VkExternalFenceHandleTypeFlagBits & b)
{
    a = static_cast<VkExternalFenceHandleTypeFlagBits>(static_cast<std::underlying_type<VkExternalFenceHandleTypeFlagBits>::type>(a) & static_cast<std::underlying_type<VkExternalFenceHandleTypeFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalFenceHandleTypeFlagBits operator^(const VkExternalFenceHandleTypeFlagBits & a, const VkExternalFenceHandleTypeFlagBits & b)
{
    return static_cast<VkExternalFenceHandleTypeFlagBits>(static_cast<std::underlying_type<VkExternalFenceHandleTypeFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkExternalFenceHandleTypeFlagBits>::type>(b));
}

inline VkExternalFenceHandleTypeFlagBits & operator^=(VkExternalFenceHandleTypeFlagBits & a, const VkExternalFenceHandleTypeFlagBits & b)
{
    a = static_cast<VkExternalFenceHandleTypeFlagBits>(static_cast<std::underlying_type<VkExternalFenceHandleTypeFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkExternalFenceHandleTypeFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkExternalFenceHandleTypeFlagBitsKHR>
{
    std::size_t operator()(const vk::VkExternalFenceHandleTypeFlagBitsKHR & t) const
    {
        return hash<std::underlying_type<vk::VkExternalFenceHandleTypeFlagBitsKHR>::type>()(static_cast<std::underlying_type<vk::VkExternalFenceHandleTypeFlagBitsKHR>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkExternalFenceHandleTypeFlagBitsKHR operator|(const VkExternalFenceHandleTypeFlagBitsKHR & a, const VkExternalFenceHandleTypeFlagBitsKHR & b)
{
    return static_cast<VkExternalFenceHandleTypeFlagBitsKHR>(static_cast<std::underlying_type<VkExternalFenceHandleTypeFlagBitsKHR>::type>(a) | static_cast<std::underlying_type<VkExternalFenceHandleTypeFlagBitsKHR>::type>(b));
}

inline VkExternalFenceHandleTypeFlagBitsKHR & operator|=(VkExternalFenceHandleTypeFlagBitsKHR & a, const VkExternalFenceHandleTypeFlagBitsKHR & b)
{
    a = static_cast<VkExternalFenceHandleTypeFlagBitsKHR>(static_cast<std::underlying_type<VkExternalFenceHandleTypeFlagBitsKHR>::type>(a) | static_cast<std::underlying_type<VkExternalFenceHandleTypeFlagBitsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalFenceHandleTypeFlagBitsKHR operator&(const VkExternalFenceHandleTypeFlagBitsKHR & a, const VkExternalFenceHandleTypeFlagBitsKHR & b)
{
    return static_cast<VkExternalFenceHandleTypeFlagBitsKHR>(static_cast<std::underlying_type<VkExternalFenceHandleTypeFlagBitsKHR>::type>(a) & static_cast<std::underlying_type<VkExternalFenceHandleTypeFlagBitsKHR>::type>(b));
}

inline VkExternalFenceHandleTypeFlagBitsKHR & operator&=(VkExternalFenceHandleTypeFlagBitsKHR & a, const VkExternalFenceHandleTypeFlagBitsKHR & b)
{
    a = static_cast<VkExternalFenceHandleTypeFlagBitsKHR>(static_cast<std::underlying_type<VkExternalFenceHandleTypeFlagBitsKHR>::type>(a) & static_cast<std::underlying_type<VkExternalFenceHandleTypeFlagBitsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalFenceHandleTypeFlagBitsKHR operator^(const VkExternalFenceHandleTypeFlagBitsKHR & a, const VkExternalFenceHandleTypeFlagBitsKHR & b)
{
    return static_cast<VkExternalFenceHandleTypeFlagBitsKHR>(static_cast<std::underlying_type<VkExternalFenceHandleTypeFlagBitsKHR>::type>(a) ^ static_cast<std::underlying_type<VkExternalFenceHandleTypeFlagBitsKHR>::type>(b));
}

inline VkExternalFenceHandleTypeFlagBitsKHR & operator^=(VkExternalFenceHandleTypeFlagBitsKHR & a, const VkExternalFenceHandleTypeFlagBitsKHR & b)
{
    a = static_cast<VkExternalFenceHandleTypeFlagBitsKHR>(static_cast<std::underlying_type<VkExternalFenceHandleTypeFlagBitsKHR>::type>(a) ^ static_cast<std::underlying_type<VkExternalFenceHandleTypeFlagBitsKHR>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkExternalMemoryFeatureFlagBits>
{
    std::size_t operator()(const vk::VkExternalMemoryFeatureFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkExternalMemoryFeatureFlagBits>::type>()(static_cast<std::underlying_type<vk::VkExternalMemoryFeatureFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkExternalMemoryFeatureFlagBits operator|(const VkExternalMemoryFeatureFlagBits & a, const VkExternalMemoryFeatureFlagBits & b)
{
    return static_cast<VkExternalMemoryFeatureFlagBits>(static_cast<std::underlying_type<VkExternalMemoryFeatureFlagBits>::type>(a) | static_cast<std::underlying_type<VkExternalMemoryFeatureFlagBits>::type>(b));
}

inline VkExternalMemoryFeatureFlagBits & operator|=(VkExternalMemoryFeatureFlagBits & a, const VkExternalMemoryFeatureFlagBits & b)
{
    a = static_cast<VkExternalMemoryFeatureFlagBits>(static_cast<std::underlying_type<VkExternalMemoryFeatureFlagBits>::type>(a) | static_cast<std::underlying_type<VkExternalMemoryFeatureFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalMemoryFeatureFlagBits operator&(const VkExternalMemoryFeatureFlagBits & a, const VkExternalMemoryFeatureFlagBits & b)
{
    return static_cast<VkExternalMemoryFeatureFlagBits>(static_cast<std::underlying_type<VkExternalMemoryFeatureFlagBits>::type>(a) & static_cast<std::underlying_type<VkExternalMemoryFeatureFlagBits>::type>(b));
}

inline VkExternalMemoryFeatureFlagBits & operator&=(VkExternalMemoryFeatureFlagBits & a, const VkExternalMemoryFeatureFlagBits & b)
{
    a = static_cast<VkExternalMemoryFeatureFlagBits>(static_cast<std::underlying_type<VkExternalMemoryFeatureFlagBits>::type>(a) & static_cast<std::underlying_type<VkExternalMemoryFeatureFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalMemoryFeatureFlagBits operator^(const VkExternalMemoryFeatureFlagBits & a, const VkExternalMemoryFeatureFlagBits & b)
{
    return static_cast<VkExternalMemoryFeatureFlagBits>(static_cast<std::underlying_type<VkExternalMemoryFeatureFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkExternalMemoryFeatureFlagBits>::type>(b));
}

inline VkExternalMemoryFeatureFlagBits & operator^=(VkExternalMemoryFeatureFlagBits & a, const VkExternalMemoryFeatureFlagBits & b)
{
    a = static_cast<VkExternalMemoryFeatureFlagBits>(static_cast<std::underlying_type<VkExternalMemoryFeatureFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkExternalMemoryFeatureFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkExternalMemoryFeatureFlagBitsKHR>
{
    std::size_t operator()(const vk::VkExternalMemoryFeatureFlagBitsKHR & t) const
    {
        return hash<std::underlying_type<vk::VkExternalMemoryFeatureFlagBitsKHR>::type>()(static_cast<std::underlying_type<vk::VkExternalMemoryFeatureFlagBitsKHR>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkExternalMemoryFeatureFlagBitsKHR operator|(const VkExternalMemoryFeatureFlagBitsKHR & a, const VkExternalMemoryFeatureFlagBitsKHR & b)
{
    return static_cast<VkExternalMemoryFeatureFlagBitsKHR>(static_cast<std::underlying_type<VkExternalMemoryFeatureFlagBitsKHR>::type>(a) | static_cast<std::underlying_type<VkExternalMemoryFeatureFlagBitsKHR>::type>(b));
}

inline VkExternalMemoryFeatureFlagBitsKHR & operator|=(VkExternalMemoryFeatureFlagBitsKHR & a, const VkExternalMemoryFeatureFlagBitsKHR & b)
{
    a = static_cast<VkExternalMemoryFeatureFlagBitsKHR>(static_cast<std::underlying_type<VkExternalMemoryFeatureFlagBitsKHR>::type>(a) | static_cast<std::underlying_type<VkExternalMemoryFeatureFlagBitsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalMemoryFeatureFlagBitsKHR operator&(const VkExternalMemoryFeatureFlagBitsKHR & a, const VkExternalMemoryFeatureFlagBitsKHR & b)
{
    return static_cast<VkExternalMemoryFeatureFlagBitsKHR>(static_cast<std::underlying_type<VkExternalMemoryFeatureFlagBitsKHR>::type>(a) & static_cast<std::underlying_type<VkExternalMemoryFeatureFlagBitsKHR>::type>(b));
}

inline VkExternalMemoryFeatureFlagBitsKHR & operator&=(VkExternalMemoryFeatureFlagBitsKHR & a, const VkExternalMemoryFeatureFlagBitsKHR & b)
{
    a = static_cast<VkExternalMemoryFeatureFlagBitsKHR>(static_cast<std::underlying_type<VkExternalMemoryFeatureFlagBitsKHR>::type>(a) & static_cast<std::underlying_type<VkExternalMemoryFeatureFlagBitsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalMemoryFeatureFlagBitsKHR operator^(const VkExternalMemoryFeatureFlagBitsKHR & a, const VkExternalMemoryFeatureFlagBitsKHR & b)
{
    return static_cast<VkExternalMemoryFeatureFlagBitsKHR>(static_cast<std::underlying_type<VkExternalMemoryFeatureFlagBitsKHR>::type>(a) ^ static_cast<std::underlying_type<VkExternalMemoryFeatureFlagBitsKHR>::type>(b));
}

inline VkExternalMemoryFeatureFlagBitsKHR & operator^=(VkExternalMemoryFeatureFlagBitsKHR & a, const VkExternalMemoryFeatureFlagBitsKHR & b)
{
    a = static_cast<VkExternalMemoryFeatureFlagBitsKHR>(static_cast<std::underlying_type<VkExternalMemoryFeatureFlagBitsKHR>::type>(a) ^ static_cast<std::underlying_type<VkExternalMemoryFeatureFlagBitsKHR>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkExternalMemoryFeatureFlagBitsNV>
{
    std::size_t operator()(const vk::VkExternalMemoryFeatureFlagBitsNV & t) const
    {
        return hash<std::underlying_type<vk::VkExternalMemoryFeatureFlagBitsNV>::type>()(static_cast<std::underlying_type<vk::VkExternalMemoryFeatureFlagBitsNV>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkExternalMemoryFeatureFlagBitsNV operator|(const VkExternalMemoryFeatureFlagBitsNV & a, const VkExternalMemoryFeatureFlagBitsNV & b)
{
    return static_cast<VkExternalMemoryFeatureFlagBitsNV>(static_cast<std::underlying_type<VkExternalMemoryFeatureFlagBitsNV>::type>(a) | static_cast<std::underlying_type<VkExternalMemoryFeatureFlagBitsNV>::type>(b));
}

inline VkExternalMemoryFeatureFlagBitsNV & operator|=(VkExternalMemoryFeatureFlagBitsNV & a, const VkExternalMemoryFeatureFlagBitsNV & b)
{
    a = static_cast<VkExternalMemoryFeatureFlagBitsNV>(static_cast<std::underlying_type<VkExternalMemoryFeatureFlagBitsNV>::type>(a) | static_cast<std::underlying_type<VkExternalMemoryFeatureFlagBitsNV>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalMemoryFeatureFlagBitsNV operator&(const VkExternalMemoryFeatureFlagBitsNV & a, const VkExternalMemoryFeatureFlagBitsNV & b)
{
    return static_cast<VkExternalMemoryFeatureFlagBitsNV>(static_cast<std::underlying_type<VkExternalMemoryFeatureFlagBitsNV>::type>(a) & static_cast<std::underlying_type<VkExternalMemoryFeatureFlagBitsNV>::type>(b));
}

inline VkExternalMemoryFeatureFlagBitsNV & operator&=(VkExternalMemoryFeatureFlagBitsNV & a, const VkExternalMemoryFeatureFlagBitsNV & b)
{
    a = static_cast<VkExternalMemoryFeatureFlagBitsNV>(static_cast<std::underlying_type<VkExternalMemoryFeatureFlagBitsNV>::type>(a) & static_cast<std::underlying_type<VkExternalMemoryFeatureFlagBitsNV>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalMemoryFeatureFlagBitsNV operator^(const VkExternalMemoryFeatureFlagBitsNV & a, const VkExternalMemoryFeatureFlagBitsNV & b)
{
    return static_cast<VkExternalMemoryFeatureFlagBitsNV>(static_cast<std::underlying_type<VkExternalMemoryFeatureFlagBitsNV>::type>(a) ^ static_cast<std::underlying_type<VkExternalMemoryFeatureFlagBitsNV>::type>(b));
}

inline VkExternalMemoryFeatureFlagBitsNV & operator^=(VkExternalMemoryFeatureFlagBitsNV & a, const VkExternalMemoryFeatureFlagBitsNV & b)
{
    a = static_cast<VkExternalMemoryFeatureFlagBitsNV>(static_cast<std::underlying_type<VkExternalMemoryFeatureFlagBitsNV>::type>(a) ^ static_cast<std::underlying_type<VkExternalMemoryFeatureFlagBitsNV>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkExternalMemoryHandleTypeFlagBits>
{
    std::size_t operator()(const vk::VkExternalMemoryHandleTypeFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkExternalMemoryHandleTypeFlagBits>::type>()(static_cast<std::underlying_type<vk::VkExternalMemoryHandleTypeFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkExternalMemoryHandleTypeFlagBits operator|(const VkExternalMemoryHandleTypeFlagBits & a, const VkExternalMemoryHandleTypeFlagBits & b)
{
    return static_cast<VkExternalMemoryHandleTypeFlagBits>(static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagBits>::type>(a) | static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagBits>::type>(b));
}

inline VkExternalMemoryHandleTypeFlagBits & operator|=(VkExternalMemoryHandleTypeFlagBits & a, const VkExternalMemoryHandleTypeFlagBits & b)
{
    a = static_cast<VkExternalMemoryHandleTypeFlagBits>(static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagBits>::type>(a) | static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalMemoryHandleTypeFlagBits operator&(const VkExternalMemoryHandleTypeFlagBits & a, const VkExternalMemoryHandleTypeFlagBits & b)
{
    return static_cast<VkExternalMemoryHandleTypeFlagBits>(static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagBits>::type>(a) & static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagBits>::type>(b));
}

inline VkExternalMemoryHandleTypeFlagBits & operator&=(VkExternalMemoryHandleTypeFlagBits & a, const VkExternalMemoryHandleTypeFlagBits & b)
{
    a = static_cast<VkExternalMemoryHandleTypeFlagBits>(static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagBits>::type>(a) & static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalMemoryHandleTypeFlagBits operator^(const VkExternalMemoryHandleTypeFlagBits & a, const VkExternalMemoryHandleTypeFlagBits & b)
{
    return static_cast<VkExternalMemoryHandleTypeFlagBits>(static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagBits>::type>(b));
}

inline VkExternalMemoryHandleTypeFlagBits & operator^=(VkExternalMemoryHandleTypeFlagBits & a, const VkExternalMemoryHandleTypeFlagBits & b)
{
    a = static_cast<VkExternalMemoryHandleTypeFlagBits>(static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkExternalMemoryHandleTypeFlagBitsKHR>
{
    std::size_t operator()(const vk::VkExternalMemoryHandleTypeFlagBitsKHR & t) const
    {
        return hash<std::underlying_type<vk::VkExternalMemoryHandleTypeFlagBitsKHR>::type>()(static_cast<std::underlying_type<vk::VkExternalMemoryHandleTypeFlagBitsKHR>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkExternalMemoryHandleTypeFlagBitsKHR operator|(const VkExternalMemoryHandleTypeFlagBitsKHR & a, const VkExternalMemoryHandleTypeFlagBitsKHR & b)
{
    return static_cast<VkExternalMemoryHandleTypeFlagBitsKHR>(static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagBitsKHR>::type>(a) | static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagBitsKHR>::type>(b));
}

inline VkExternalMemoryHandleTypeFlagBitsKHR & operator|=(VkExternalMemoryHandleTypeFlagBitsKHR & a, const VkExternalMemoryHandleTypeFlagBitsKHR & b)
{
    a = static_cast<VkExternalMemoryHandleTypeFlagBitsKHR>(static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagBitsKHR>::type>(a) | static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagBitsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalMemoryHandleTypeFlagBitsKHR operator&(const VkExternalMemoryHandleTypeFlagBitsKHR & a, const VkExternalMemoryHandleTypeFlagBitsKHR & b)
{
    return static_cast<VkExternalMemoryHandleTypeFlagBitsKHR>(static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagBitsKHR>::type>(a) & static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagBitsKHR>::type>(b));
}

inline VkExternalMemoryHandleTypeFlagBitsKHR & operator&=(VkExternalMemoryHandleTypeFlagBitsKHR & a, const VkExternalMemoryHandleTypeFlagBitsKHR & b)
{
    a = static_cast<VkExternalMemoryHandleTypeFlagBitsKHR>(static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagBitsKHR>::type>(a) & static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagBitsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalMemoryHandleTypeFlagBitsKHR operator^(const VkExternalMemoryHandleTypeFlagBitsKHR & a, const VkExternalMemoryHandleTypeFlagBitsKHR & b)
{
    return static_cast<VkExternalMemoryHandleTypeFlagBitsKHR>(static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagBitsKHR>::type>(a) ^ static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagBitsKHR>::type>(b));
}

inline VkExternalMemoryHandleTypeFlagBitsKHR & operator^=(VkExternalMemoryHandleTypeFlagBitsKHR & a, const VkExternalMemoryHandleTypeFlagBitsKHR & b)
{
    a = static_cast<VkExternalMemoryHandleTypeFlagBitsKHR>(static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagBitsKHR>::type>(a) ^ static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagBitsKHR>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkExternalMemoryHandleTypeFlagBitsNV>
{
    std::size_t operator()(const vk::VkExternalMemoryHandleTypeFlagBitsNV & t) const
    {
        return hash<std::underlying_type<vk::VkExternalMemoryHandleTypeFlagBitsNV>::type>()(static_cast<std::underlying_type<vk::VkExternalMemoryHandleTypeFlagBitsNV>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkExternalMemoryHandleTypeFlagBitsNV operator|(const VkExternalMemoryHandleTypeFlagBitsNV & a, const VkExternalMemoryHandleTypeFlagBitsNV & b)
{
    return static_cast<VkExternalMemoryHandleTypeFlagBitsNV>(static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagBitsNV>::type>(a) | static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagBitsNV>::type>(b));
}

inline VkExternalMemoryHandleTypeFlagBitsNV & operator|=(VkExternalMemoryHandleTypeFlagBitsNV & a, const VkExternalMemoryHandleTypeFlagBitsNV & b)
{
    a = static_cast<VkExternalMemoryHandleTypeFlagBitsNV>(static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagBitsNV>::type>(a) | static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagBitsNV>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalMemoryHandleTypeFlagBitsNV operator&(const VkExternalMemoryHandleTypeFlagBitsNV & a, const VkExternalMemoryHandleTypeFlagBitsNV & b)
{
    return static_cast<VkExternalMemoryHandleTypeFlagBitsNV>(static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagBitsNV>::type>(a) & static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagBitsNV>::type>(b));
}

inline VkExternalMemoryHandleTypeFlagBitsNV & operator&=(VkExternalMemoryHandleTypeFlagBitsNV & a, const VkExternalMemoryHandleTypeFlagBitsNV & b)
{
    a = static_cast<VkExternalMemoryHandleTypeFlagBitsNV>(static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagBitsNV>::type>(a) & static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagBitsNV>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalMemoryHandleTypeFlagBitsNV operator^(const VkExternalMemoryHandleTypeFlagBitsNV & a, const VkExternalMemoryHandleTypeFlagBitsNV & b)
{
    return static_cast<VkExternalMemoryHandleTypeFlagBitsNV>(static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagBitsNV>::type>(a) ^ static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagBitsNV>::type>(b));
}

inline VkExternalMemoryHandleTypeFlagBitsNV & operator^=(VkExternalMemoryHandleTypeFlagBitsNV & a, const VkExternalMemoryHandleTypeFlagBitsNV & b)
{
    a = static_cast<VkExternalMemoryHandleTypeFlagBitsNV>(static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagBitsNV>::type>(a) ^ static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagBitsNV>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkExternalSemaphoreFeatureFlagBits>
{
    std::size_t operator()(const vk::VkExternalSemaphoreFeatureFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkExternalSemaphoreFeatureFlagBits>::type>()(static_cast<std::underlying_type<vk::VkExternalSemaphoreFeatureFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkExternalSemaphoreFeatureFlagBits operator|(const VkExternalSemaphoreFeatureFlagBits & a, const VkExternalSemaphoreFeatureFlagBits & b)
{
    return static_cast<VkExternalSemaphoreFeatureFlagBits>(static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlagBits>::type>(a) | static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlagBits>::type>(b));
}

inline VkExternalSemaphoreFeatureFlagBits & operator|=(VkExternalSemaphoreFeatureFlagBits & a, const VkExternalSemaphoreFeatureFlagBits & b)
{
    a = static_cast<VkExternalSemaphoreFeatureFlagBits>(static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlagBits>::type>(a) | static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalSemaphoreFeatureFlagBits operator&(const VkExternalSemaphoreFeatureFlagBits & a, const VkExternalSemaphoreFeatureFlagBits & b)
{
    return static_cast<VkExternalSemaphoreFeatureFlagBits>(static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlagBits>::type>(a) & static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlagBits>::type>(b));
}

inline VkExternalSemaphoreFeatureFlagBits & operator&=(VkExternalSemaphoreFeatureFlagBits & a, const VkExternalSemaphoreFeatureFlagBits & b)
{
    a = static_cast<VkExternalSemaphoreFeatureFlagBits>(static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlagBits>::type>(a) & static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalSemaphoreFeatureFlagBits operator^(const VkExternalSemaphoreFeatureFlagBits & a, const VkExternalSemaphoreFeatureFlagBits & b)
{
    return static_cast<VkExternalSemaphoreFeatureFlagBits>(static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlagBits>::type>(b));
}

inline VkExternalSemaphoreFeatureFlagBits & operator^=(VkExternalSemaphoreFeatureFlagBits & a, const VkExternalSemaphoreFeatureFlagBits & b)
{
    a = static_cast<VkExternalSemaphoreFeatureFlagBits>(static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkExternalSemaphoreFeatureFlagBitsKHR>
{
    std::size_t operator()(const vk::VkExternalSemaphoreFeatureFlagBitsKHR & t) const
    {
        return hash<std::underlying_type<vk::VkExternalSemaphoreFeatureFlagBitsKHR>::type>()(static_cast<std::underlying_type<vk::VkExternalSemaphoreFeatureFlagBitsKHR>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkExternalSemaphoreFeatureFlagBitsKHR operator|(const VkExternalSemaphoreFeatureFlagBitsKHR & a, const VkExternalSemaphoreFeatureFlagBitsKHR & b)
{
    return static_cast<VkExternalSemaphoreFeatureFlagBitsKHR>(static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlagBitsKHR>::type>(a) | static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlagBitsKHR>::type>(b));
}

inline VkExternalSemaphoreFeatureFlagBitsKHR & operator|=(VkExternalSemaphoreFeatureFlagBitsKHR & a, const VkExternalSemaphoreFeatureFlagBitsKHR & b)
{
    a = static_cast<VkExternalSemaphoreFeatureFlagBitsKHR>(static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlagBitsKHR>::type>(a) | static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlagBitsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalSemaphoreFeatureFlagBitsKHR operator&(const VkExternalSemaphoreFeatureFlagBitsKHR & a, const VkExternalSemaphoreFeatureFlagBitsKHR & b)
{
    return static_cast<VkExternalSemaphoreFeatureFlagBitsKHR>(static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlagBitsKHR>::type>(a) & static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlagBitsKHR>::type>(b));
}

inline VkExternalSemaphoreFeatureFlagBitsKHR & operator&=(VkExternalSemaphoreFeatureFlagBitsKHR & a, const VkExternalSemaphoreFeatureFlagBitsKHR & b)
{
    a = static_cast<VkExternalSemaphoreFeatureFlagBitsKHR>(static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlagBitsKHR>::type>(a) & static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlagBitsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalSemaphoreFeatureFlagBitsKHR operator^(const VkExternalSemaphoreFeatureFlagBitsKHR & a, const VkExternalSemaphoreFeatureFlagBitsKHR & b)
{
    return static_cast<VkExternalSemaphoreFeatureFlagBitsKHR>(static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlagBitsKHR>::type>(a) ^ static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlagBitsKHR>::type>(b));
}

inline VkExternalSemaphoreFeatureFlagBitsKHR & operator^=(VkExternalSemaphoreFeatureFlagBitsKHR & a, const VkExternalSemaphoreFeatureFlagBitsKHR & b)
{
    a = static_cast<VkExternalSemaphoreFeatureFlagBitsKHR>(static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlagBitsKHR>::type>(a) ^ static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlagBitsKHR>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkExternalSemaphoreHandleTypeFlagBits>
{
    std::size_t operator()(const vk::VkExternalSemaphoreHandleTypeFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkExternalSemaphoreHandleTypeFlagBits>::type>()(static_cast<std::underlying_type<vk::VkExternalSemaphoreHandleTypeFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkExternalSemaphoreHandleTypeFlagBits operator|(const VkExternalSemaphoreHandleTypeFlagBits & a, const VkExternalSemaphoreHandleTypeFlagBits & b)
{
    return static_cast<VkExternalSemaphoreHandleTypeFlagBits>(static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlagBits>::type>(a) | static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlagBits>::type>(b));
}

inline VkExternalSemaphoreHandleTypeFlagBits & operator|=(VkExternalSemaphoreHandleTypeFlagBits & a, const VkExternalSemaphoreHandleTypeFlagBits & b)
{
    a = static_cast<VkExternalSemaphoreHandleTypeFlagBits>(static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlagBits>::type>(a) | static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalSemaphoreHandleTypeFlagBits operator&(const VkExternalSemaphoreHandleTypeFlagBits & a, const VkExternalSemaphoreHandleTypeFlagBits & b)
{
    return static_cast<VkExternalSemaphoreHandleTypeFlagBits>(static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlagBits>::type>(a) & static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlagBits>::type>(b));
}

inline VkExternalSemaphoreHandleTypeFlagBits & operator&=(VkExternalSemaphoreHandleTypeFlagBits & a, const VkExternalSemaphoreHandleTypeFlagBits & b)
{
    a = static_cast<VkExternalSemaphoreHandleTypeFlagBits>(static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlagBits>::type>(a) & static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalSemaphoreHandleTypeFlagBits operator^(const VkExternalSemaphoreHandleTypeFlagBits & a, const VkExternalSemaphoreHandleTypeFlagBits & b)
{
    return static_cast<VkExternalSemaphoreHandleTypeFlagBits>(static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlagBits>::type>(b));
}

inline VkExternalSemaphoreHandleTypeFlagBits & operator^=(VkExternalSemaphoreHandleTypeFlagBits & a, const VkExternalSemaphoreHandleTypeFlagBits & b)
{
    a = static_cast<VkExternalSemaphoreHandleTypeFlagBits>(static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkExternalSemaphoreHandleTypeFlagBitsKHR>
{
    std::size_t operator()(const vk::VkExternalSemaphoreHandleTypeFlagBitsKHR & t) const
    {
        return hash<std::underlying_type<vk::VkExternalSemaphoreHandleTypeFlagBitsKHR>::type>()(static_cast<std::underlying_type<vk::VkExternalSemaphoreHandleTypeFlagBitsKHR>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkExternalSemaphoreHandleTypeFlagBitsKHR operator|(const VkExternalSemaphoreHandleTypeFlagBitsKHR & a, const VkExternalSemaphoreHandleTypeFlagBitsKHR & b)
{
    return static_cast<VkExternalSemaphoreHandleTypeFlagBitsKHR>(static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlagBitsKHR>::type>(a) | static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlagBitsKHR>::type>(b));
}

inline VkExternalSemaphoreHandleTypeFlagBitsKHR & operator|=(VkExternalSemaphoreHandleTypeFlagBitsKHR & a, const VkExternalSemaphoreHandleTypeFlagBitsKHR & b)
{
    a = static_cast<VkExternalSemaphoreHandleTypeFlagBitsKHR>(static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlagBitsKHR>::type>(a) | static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlagBitsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalSemaphoreHandleTypeFlagBitsKHR operator&(const VkExternalSemaphoreHandleTypeFlagBitsKHR & a, const VkExternalSemaphoreHandleTypeFlagBitsKHR & b)
{
    return static_cast<VkExternalSemaphoreHandleTypeFlagBitsKHR>(static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlagBitsKHR>::type>(a) & static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlagBitsKHR>::type>(b));
}

inline VkExternalSemaphoreHandleTypeFlagBitsKHR & operator&=(VkExternalSemaphoreHandleTypeFlagBitsKHR & a, const VkExternalSemaphoreHandleTypeFlagBitsKHR & b)
{
    a = static_cast<VkExternalSemaphoreHandleTypeFlagBitsKHR>(static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlagBitsKHR>::type>(a) & static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlagBitsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalSemaphoreHandleTypeFlagBitsKHR operator^(const VkExternalSemaphoreHandleTypeFlagBitsKHR & a, const VkExternalSemaphoreHandleTypeFlagBitsKHR & b)
{
    return static_cast<VkExternalSemaphoreHandleTypeFlagBitsKHR>(static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlagBitsKHR>::type>(a) ^ static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlagBitsKHR>::type>(b));
}

inline VkExternalSemaphoreHandleTypeFlagBitsKHR & operator^=(VkExternalSemaphoreHandleTypeFlagBitsKHR & a, const VkExternalSemaphoreHandleTypeFlagBitsKHR & b)
{
    a = static_cast<VkExternalSemaphoreHandleTypeFlagBitsKHR>(static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlagBitsKHR>::type>(a) ^ static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlagBitsKHR>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkFenceCreateFlagBits>
{
    std::size_t operator()(const vk::VkFenceCreateFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkFenceCreateFlagBits>::type>()(static_cast<std::underlying_type<vk::VkFenceCreateFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkFenceCreateFlagBits operator|(const VkFenceCreateFlagBits & a, const VkFenceCreateFlagBits & b)
{
    return static_cast<VkFenceCreateFlagBits>(static_cast<std::underlying_type<VkFenceCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkFenceCreateFlagBits>::type>(b));
}

inline VkFenceCreateFlagBits & operator|=(VkFenceCreateFlagBits & a, const VkFenceCreateFlagBits & b)
{
    a = static_cast<VkFenceCreateFlagBits>(static_cast<std::underlying_type<VkFenceCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkFenceCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkFenceCreateFlagBits operator&(const VkFenceCreateFlagBits & a, const VkFenceCreateFlagBits & b)
{
    return static_cast<VkFenceCreateFlagBits>(static_cast<std::underlying_type<VkFenceCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkFenceCreateFlagBits>::type>(b));
}

inline VkFenceCreateFlagBits & operator&=(VkFenceCreateFlagBits & a, const VkFenceCreateFlagBits & b)
{
    a = static_cast<VkFenceCreateFlagBits>(static_cast<std::underlying_type<VkFenceCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkFenceCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkFenceCreateFlagBits operator^(const VkFenceCreateFlagBits & a, const VkFenceCreateFlagBits & b)
{
    return static_cast<VkFenceCreateFlagBits>(static_cast<std::underlying_type<VkFenceCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkFenceCreateFlagBits>::type>(b));
}

inline VkFenceCreateFlagBits & operator^=(VkFenceCreateFlagBits & a, const VkFenceCreateFlagBits & b)
{
    a = static_cast<VkFenceCreateFlagBits>(static_cast<std::underlying_type<VkFenceCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkFenceCreateFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkFenceImportFlagBits>
{
    std::size_t operator()(const vk::VkFenceImportFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkFenceImportFlagBits>::type>()(static_cast<std::underlying_type<vk::VkFenceImportFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkFenceImportFlagBits operator|(const VkFenceImportFlagBits & a, const VkFenceImportFlagBits & b)
{
    return static_cast<VkFenceImportFlagBits>(static_cast<std::underlying_type<VkFenceImportFlagBits>::type>(a) | static_cast<std::underlying_type<VkFenceImportFlagBits>::type>(b));
}

inline VkFenceImportFlagBits & operator|=(VkFenceImportFlagBits & a, const VkFenceImportFlagBits & b)
{
    a = static_cast<VkFenceImportFlagBits>(static_cast<std::underlying_type<VkFenceImportFlagBits>::type>(a) | static_cast<std::underlying_type<VkFenceImportFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkFenceImportFlagBits operator&(const VkFenceImportFlagBits & a, const VkFenceImportFlagBits & b)
{
    return static_cast<VkFenceImportFlagBits>(static_cast<std::underlying_type<VkFenceImportFlagBits>::type>(a) & static_cast<std::underlying_type<VkFenceImportFlagBits>::type>(b));
}

inline VkFenceImportFlagBits & operator&=(VkFenceImportFlagBits & a, const VkFenceImportFlagBits & b)
{
    a = static_cast<VkFenceImportFlagBits>(static_cast<std::underlying_type<VkFenceImportFlagBits>::type>(a) & static_cast<std::underlying_type<VkFenceImportFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkFenceImportFlagBits operator^(const VkFenceImportFlagBits & a, const VkFenceImportFlagBits & b)
{
    return static_cast<VkFenceImportFlagBits>(static_cast<std::underlying_type<VkFenceImportFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkFenceImportFlagBits>::type>(b));
}

inline VkFenceImportFlagBits & operator^=(VkFenceImportFlagBits & a, const VkFenceImportFlagBits & b)
{
    a = static_cast<VkFenceImportFlagBits>(static_cast<std::underlying_type<VkFenceImportFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkFenceImportFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkFenceImportFlagBitsKHR>
{
    std::size_t operator()(const vk::VkFenceImportFlagBitsKHR & t) const
    {
        return hash<std::underlying_type<vk::VkFenceImportFlagBitsKHR>::type>()(static_cast<std::underlying_type<vk::VkFenceImportFlagBitsKHR>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkFenceImportFlagBitsKHR operator|(const VkFenceImportFlagBitsKHR & a, const VkFenceImportFlagBitsKHR & b)
{
    return static_cast<VkFenceImportFlagBitsKHR>(static_cast<std::underlying_type<VkFenceImportFlagBitsKHR>::type>(a) | static_cast<std::underlying_type<VkFenceImportFlagBitsKHR>::type>(b));
}

inline VkFenceImportFlagBitsKHR & operator|=(VkFenceImportFlagBitsKHR & a, const VkFenceImportFlagBitsKHR & b)
{
    a = static_cast<VkFenceImportFlagBitsKHR>(static_cast<std::underlying_type<VkFenceImportFlagBitsKHR>::type>(a) | static_cast<std::underlying_type<VkFenceImportFlagBitsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkFenceImportFlagBitsKHR operator&(const VkFenceImportFlagBitsKHR & a, const VkFenceImportFlagBitsKHR & b)
{
    return static_cast<VkFenceImportFlagBitsKHR>(static_cast<std::underlying_type<VkFenceImportFlagBitsKHR>::type>(a) & static_cast<std::underlying_type<VkFenceImportFlagBitsKHR>::type>(b));
}

inline VkFenceImportFlagBitsKHR & operator&=(VkFenceImportFlagBitsKHR & a, const VkFenceImportFlagBitsKHR & b)
{
    a = static_cast<VkFenceImportFlagBitsKHR>(static_cast<std::underlying_type<VkFenceImportFlagBitsKHR>::type>(a) & static_cast<std::underlying_type<VkFenceImportFlagBitsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkFenceImportFlagBitsKHR operator^(const VkFenceImportFlagBitsKHR & a, const VkFenceImportFlagBitsKHR & b)
{
    return static_cast<VkFenceImportFlagBitsKHR>(static_cast<std::underlying_type<VkFenceImportFlagBitsKHR>::type>(a) ^ static_cast<std::underlying_type<VkFenceImportFlagBitsKHR>::type>(b));
}

inline VkFenceImportFlagBitsKHR & operator^=(VkFenceImportFlagBitsKHR & a, const VkFenceImportFlagBitsKHR & b)
{
    a = static_cast<VkFenceImportFlagBitsKHR>(static_cast<std::underlying_type<VkFenceImportFlagBitsKHR>::type>(a) ^ static_cast<std::underlying_type<VkFenceImportFlagBitsKHR>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkFormatFeatureFlagBits>
{
    std::size_t operator()(const vk::VkFormatFeatureFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkFormatFeatureFlagBits>::type>()(static_cast<std::underlying_type<vk::VkFormatFeatureFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkFormatFeatureFlagBits operator|(const VkFormatFeatureFlagBits & a, const VkFormatFeatureFlagBits & b)
{
    return static_cast<VkFormatFeatureFlagBits>(static_cast<std::underlying_type<VkFormatFeatureFlagBits>::type>(a) | static_cast<std::underlying_type<VkFormatFeatureFlagBits>::type>(b));
}

inline VkFormatFeatureFlagBits & operator|=(VkFormatFeatureFlagBits & a, const VkFormatFeatureFlagBits & b)
{
    a = static_cast<VkFormatFeatureFlagBits>(static_cast<std::underlying_type<VkFormatFeatureFlagBits>::type>(a) | static_cast<std::underlying_type<VkFormatFeatureFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkFormatFeatureFlagBits operator&(const VkFormatFeatureFlagBits & a, const VkFormatFeatureFlagBits & b)
{
    return static_cast<VkFormatFeatureFlagBits>(static_cast<std::underlying_type<VkFormatFeatureFlagBits>::type>(a) & static_cast<std::underlying_type<VkFormatFeatureFlagBits>::type>(b));
}

inline VkFormatFeatureFlagBits & operator&=(VkFormatFeatureFlagBits & a, const VkFormatFeatureFlagBits & b)
{
    a = static_cast<VkFormatFeatureFlagBits>(static_cast<std::underlying_type<VkFormatFeatureFlagBits>::type>(a) & static_cast<std::underlying_type<VkFormatFeatureFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkFormatFeatureFlagBits operator^(const VkFormatFeatureFlagBits & a, const VkFormatFeatureFlagBits & b)
{
    return static_cast<VkFormatFeatureFlagBits>(static_cast<std::underlying_type<VkFormatFeatureFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkFormatFeatureFlagBits>::type>(b));
}

inline VkFormatFeatureFlagBits & operator^=(VkFormatFeatureFlagBits & a, const VkFormatFeatureFlagBits & b)
{
    a = static_cast<VkFormatFeatureFlagBits>(static_cast<std::underlying_type<VkFormatFeatureFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkFormatFeatureFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkFramebufferCreateFlagBits>
{
    std::size_t operator()(const vk::VkFramebufferCreateFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkFramebufferCreateFlagBits>::type>()(static_cast<std::underlying_type<vk::VkFramebufferCreateFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkFramebufferCreateFlagBits operator|(const VkFramebufferCreateFlagBits & a, const VkFramebufferCreateFlagBits & b)
{
    return static_cast<VkFramebufferCreateFlagBits>(static_cast<std::underlying_type<VkFramebufferCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkFramebufferCreateFlagBits>::type>(b));
}

inline VkFramebufferCreateFlagBits & operator|=(VkFramebufferCreateFlagBits & a, const VkFramebufferCreateFlagBits & b)
{
    a = static_cast<VkFramebufferCreateFlagBits>(static_cast<std::underlying_type<VkFramebufferCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkFramebufferCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkFramebufferCreateFlagBits operator&(const VkFramebufferCreateFlagBits & a, const VkFramebufferCreateFlagBits & b)
{
    return static_cast<VkFramebufferCreateFlagBits>(static_cast<std::underlying_type<VkFramebufferCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkFramebufferCreateFlagBits>::type>(b));
}

inline VkFramebufferCreateFlagBits & operator&=(VkFramebufferCreateFlagBits & a, const VkFramebufferCreateFlagBits & b)
{
    a = static_cast<VkFramebufferCreateFlagBits>(static_cast<std::underlying_type<VkFramebufferCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkFramebufferCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkFramebufferCreateFlagBits operator^(const VkFramebufferCreateFlagBits & a, const VkFramebufferCreateFlagBits & b)
{
    return static_cast<VkFramebufferCreateFlagBits>(static_cast<std::underlying_type<VkFramebufferCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkFramebufferCreateFlagBits>::type>(b));
}

inline VkFramebufferCreateFlagBits & operator^=(VkFramebufferCreateFlagBits & a, const VkFramebufferCreateFlagBits & b)
{
    a = static_cast<VkFramebufferCreateFlagBits>(static_cast<std::underlying_type<VkFramebufferCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkFramebufferCreateFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkGeometryFlagBitsNV>
{
    std::size_t operator()(const vk::VkGeometryFlagBitsNV & t) const
    {
        return hash<std::underlying_type<vk::VkGeometryFlagBitsNV>::type>()(static_cast<std::underlying_type<vk::VkGeometryFlagBitsNV>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkGeometryFlagBitsNV operator|(const VkGeometryFlagBitsNV & a, const VkGeometryFlagBitsNV & b)
{
    return static_cast<VkGeometryFlagBitsNV>(static_cast<std::underlying_type<VkGeometryFlagBitsNV>::type>(a) | static_cast<std::underlying_type<VkGeometryFlagBitsNV>::type>(b));
}

inline VkGeometryFlagBitsNV & operator|=(VkGeometryFlagBitsNV & a, const VkGeometryFlagBitsNV & b)
{
    a = static_cast<VkGeometryFlagBitsNV>(static_cast<std::underlying_type<VkGeometryFlagBitsNV>::type>(a) | static_cast<std::underlying_type<VkGeometryFlagBitsNV>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkGeometryFlagBitsNV operator&(const VkGeometryFlagBitsNV & a, const VkGeometryFlagBitsNV & b)
{
    return static_cast<VkGeometryFlagBitsNV>(static_cast<std::underlying_type<VkGeometryFlagBitsNV>::type>(a) & static_cast<std::underlying_type<VkGeometryFlagBitsNV>::type>(b));
}

inline VkGeometryFlagBitsNV & operator&=(VkGeometryFlagBitsNV & a, const VkGeometryFlagBitsNV & b)
{
    a = static_cast<VkGeometryFlagBitsNV>(static_cast<std::underlying_type<VkGeometryFlagBitsNV>::type>(a) & static_cast<std::underlying_type<VkGeometryFlagBitsNV>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkGeometryFlagBitsNV operator^(const VkGeometryFlagBitsNV & a, const VkGeometryFlagBitsNV & b)
{
    return static_cast<VkGeometryFlagBitsNV>(static_cast<std::underlying_type<VkGeometryFlagBitsNV>::type>(a) ^ static_cast<std::underlying_type<VkGeometryFlagBitsNV>::type>(b));
}

inline VkGeometryFlagBitsNV & operator^=(VkGeometryFlagBitsNV & a, const VkGeometryFlagBitsNV & b)
{
    a = static_cast<VkGeometryFlagBitsNV>(static_cast<std::underlying_type<VkGeometryFlagBitsNV>::type>(a) ^ static_cast<std::underlying_type<VkGeometryFlagBitsNV>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkGeometryInstanceFlagBitsNV>
{
    std::size_t operator()(const vk::VkGeometryInstanceFlagBitsNV & t) const
    {
        return hash<std::underlying_type<vk::VkGeometryInstanceFlagBitsNV>::type>()(static_cast<std::underlying_type<vk::VkGeometryInstanceFlagBitsNV>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkGeometryInstanceFlagBitsNV operator|(const VkGeometryInstanceFlagBitsNV & a, const VkGeometryInstanceFlagBitsNV & b)
{
    return static_cast<VkGeometryInstanceFlagBitsNV>(static_cast<std::underlying_type<VkGeometryInstanceFlagBitsNV>::type>(a) | static_cast<std::underlying_type<VkGeometryInstanceFlagBitsNV>::type>(b));
}

inline VkGeometryInstanceFlagBitsNV & operator|=(VkGeometryInstanceFlagBitsNV & a, const VkGeometryInstanceFlagBitsNV & b)
{
    a = static_cast<VkGeometryInstanceFlagBitsNV>(static_cast<std::underlying_type<VkGeometryInstanceFlagBitsNV>::type>(a) | static_cast<std::underlying_type<VkGeometryInstanceFlagBitsNV>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkGeometryInstanceFlagBitsNV operator&(const VkGeometryInstanceFlagBitsNV & a, const VkGeometryInstanceFlagBitsNV & b)
{
    return static_cast<VkGeometryInstanceFlagBitsNV>(static_cast<std::underlying_type<VkGeometryInstanceFlagBitsNV>::type>(a) & static_cast<std::underlying_type<VkGeometryInstanceFlagBitsNV>::type>(b));
}

inline VkGeometryInstanceFlagBitsNV & operator&=(VkGeometryInstanceFlagBitsNV & a, const VkGeometryInstanceFlagBitsNV & b)
{
    a = static_cast<VkGeometryInstanceFlagBitsNV>(static_cast<std::underlying_type<VkGeometryInstanceFlagBitsNV>::type>(a) & static_cast<std::underlying_type<VkGeometryInstanceFlagBitsNV>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkGeometryInstanceFlagBitsNV operator^(const VkGeometryInstanceFlagBitsNV & a, const VkGeometryInstanceFlagBitsNV & b)
{
    return static_cast<VkGeometryInstanceFlagBitsNV>(static_cast<std::underlying_type<VkGeometryInstanceFlagBitsNV>::type>(a) ^ static_cast<std::underlying_type<VkGeometryInstanceFlagBitsNV>::type>(b));
}

inline VkGeometryInstanceFlagBitsNV & operator^=(VkGeometryInstanceFlagBitsNV & a, const VkGeometryInstanceFlagBitsNV & b)
{
    a = static_cast<VkGeometryInstanceFlagBitsNV>(static_cast<std::underlying_type<VkGeometryInstanceFlagBitsNV>::type>(a) ^ static_cast<std::underlying_type<VkGeometryInstanceFlagBitsNV>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkImageAspectFlagBits>
{
    std::size_t operator()(const vk::VkImageAspectFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkImageAspectFlagBits>::type>()(static_cast<std::underlying_type<vk::VkImageAspectFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkImageAspectFlagBits operator|(const VkImageAspectFlagBits & a, const VkImageAspectFlagBits & b)
{
    return static_cast<VkImageAspectFlagBits>(static_cast<std::underlying_type<VkImageAspectFlagBits>::type>(a) | static_cast<std::underlying_type<VkImageAspectFlagBits>::type>(b));
}

inline VkImageAspectFlagBits & operator|=(VkImageAspectFlagBits & a, const VkImageAspectFlagBits & b)
{
    a = static_cast<VkImageAspectFlagBits>(static_cast<std::underlying_type<VkImageAspectFlagBits>::type>(a) | static_cast<std::underlying_type<VkImageAspectFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkImageAspectFlagBits operator&(const VkImageAspectFlagBits & a, const VkImageAspectFlagBits & b)
{
    return static_cast<VkImageAspectFlagBits>(static_cast<std::underlying_type<VkImageAspectFlagBits>::type>(a) & static_cast<std::underlying_type<VkImageAspectFlagBits>::type>(b));
}

inline VkImageAspectFlagBits & operator&=(VkImageAspectFlagBits & a, const VkImageAspectFlagBits & b)
{
    a = static_cast<VkImageAspectFlagBits>(static_cast<std::underlying_type<VkImageAspectFlagBits>::type>(a) & static_cast<std::underlying_type<VkImageAspectFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkImageAspectFlagBits operator^(const VkImageAspectFlagBits & a, const VkImageAspectFlagBits & b)
{
    return static_cast<VkImageAspectFlagBits>(static_cast<std::underlying_type<VkImageAspectFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkImageAspectFlagBits>::type>(b));
}

inline VkImageAspectFlagBits & operator^=(VkImageAspectFlagBits & a, const VkImageAspectFlagBits & b)
{
    a = static_cast<VkImageAspectFlagBits>(static_cast<std::underlying_type<VkImageAspectFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkImageAspectFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkImageCreateFlagBits>
{
    std::size_t operator()(const vk::VkImageCreateFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkImageCreateFlagBits>::type>()(static_cast<std::underlying_type<vk::VkImageCreateFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkImageCreateFlagBits operator|(const VkImageCreateFlagBits & a, const VkImageCreateFlagBits & b)
{
    return static_cast<VkImageCreateFlagBits>(static_cast<std::underlying_type<VkImageCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkImageCreateFlagBits>::type>(b));
}

inline VkImageCreateFlagBits & operator|=(VkImageCreateFlagBits & a, const VkImageCreateFlagBits & b)
{
    a = static_cast<VkImageCreateFlagBits>(static_cast<std::underlying_type<VkImageCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkImageCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkImageCreateFlagBits operator&(const VkImageCreateFlagBits & a, const VkImageCreateFlagBits & b)
{
    return static_cast<VkImageCreateFlagBits>(static_cast<std::underlying_type<VkImageCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkImageCreateFlagBits>::type>(b));
}

inline VkImageCreateFlagBits & operator&=(VkImageCreateFlagBits & a, const VkImageCreateFlagBits & b)
{
    a = static_cast<VkImageCreateFlagBits>(static_cast<std::underlying_type<VkImageCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkImageCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkImageCreateFlagBits operator^(const VkImageCreateFlagBits & a, const VkImageCreateFlagBits & b)
{
    return static_cast<VkImageCreateFlagBits>(static_cast<std::underlying_type<VkImageCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkImageCreateFlagBits>::type>(b));
}

inline VkImageCreateFlagBits & operator^=(VkImageCreateFlagBits & a, const VkImageCreateFlagBits & b)
{
    a = static_cast<VkImageCreateFlagBits>(static_cast<std::underlying_type<VkImageCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkImageCreateFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkImageUsageFlagBits>
{
    std::size_t operator()(const vk::VkImageUsageFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkImageUsageFlagBits>::type>()(static_cast<std::underlying_type<vk::VkImageUsageFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkImageUsageFlagBits operator|(const VkImageUsageFlagBits & a, const VkImageUsageFlagBits & b)
{
    return static_cast<VkImageUsageFlagBits>(static_cast<std::underlying_type<VkImageUsageFlagBits>::type>(a) | static_cast<std::underlying_type<VkImageUsageFlagBits>::type>(b));
}

inline VkImageUsageFlagBits & operator|=(VkImageUsageFlagBits & a, const VkImageUsageFlagBits & b)
{
    a = static_cast<VkImageUsageFlagBits>(static_cast<std::underlying_type<VkImageUsageFlagBits>::type>(a) | static_cast<std::underlying_type<VkImageUsageFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkImageUsageFlagBits operator&(const VkImageUsageFlagBits & a, const VkImageUsageFlagBits & b)
{
    return static_cast<VkImageUsageFlagBits>(static_cast<std::underlying_type<VkImageUsageFlagBits>::type>(a) & static_cast<std::underlying_type<VkImageUsageFlagBits>::type>(b));
}

inline VkImageUsageFlagBits & operator&=(VkImageUsageFlagBits & a, const VkImageUsageFlagBits & b)
{
    a = static_cast<VkImageUsageFlagBits>(static_cast<std::underlying_type<VkImageUsageFlagBits>::type>(a) & static_cast<std::underlying_type<VkImageUsageFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkImageUsageFlagBits operator^(const VkImageUsageFlagBits & a, const VkImageUsageFlagBits & b)
{
    return static_cast<VkImageUsageFlagBits>(static_cast<std::underlying_type<VkImageUsageFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkImageUsageFlagBits>::type>(b));
}

inline VkImageUsageFlagBits & operator^=(VkImageUsageFlagBits & a, const VkImageUsageFlagBits & b)
{
    a = static_cast<VkImageUsageFlagBits>(static_cast<std::underlying_type<VkImageUsageFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkImageUsageFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkImageViewCreateFlagBits>
{
    std::size_t operator()(const vk::VkImageViewCreateFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkImageViewCreateFlagBits>::type>()(static_cast<std::underlying_type<vk::VkImageViewCreateFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkImageViewCreateFlagBits operator|(const VkImageViewCreateFlagBits & a, const VkImageViewCreateFlagBits & b)
{
    return static_cast<VkImageViewCreateFlagBits>(static_cast<std::underlying_type<VkImageViewCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkImageViewCreateFlagBits>::type>(b));
}

inline VkImageViewCreateFlagBits & operator|=(VkImageViewCreateFlagBits & a, const VkImageViewCreateFlagBits & b)
{
    a = static_cast<VkImageViewCreateFlagBits>(static_cast<std::underlying_type<VkImageViewCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkImageViewCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkImageViewCreateFlagBits operator&(const VkImageViewCreateFlagBits & a, const VkImageViewCreateFlagBits & b)
{
    return static_cast<VkImageViewCreateFlagBits>(static_cast<std::underlying_type<VkImageViewCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkImageViewCreateFlagBits>::type>(b));
}

inline VkImageViewCreateFlagBits & operator&=(VkImageViewCreateFlagBits & a, const VkImageViewCreateFlagBits & b)
{
    a = static_cast<VkImageViewCreateFlagBits>(static_cast<std::underlying_type<VkImageViewCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkImageViewCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkImageViewCreateFlagBits operator^(const VkImageViewCreateFlagBits & a, const VkImageViewCreateFlagBits & b)
{
    return static_cast<VkImageViewCreateFlagBits>(static_cast<std::underlying_type<VkImageViewCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkImageViewCreateFlagBits>::type>(b));
}

inline VkImageViewCreateFlagBits & operator^=(VkImageViewCreateFlagBits & a, const VkImageViewCreateFlagBits & b)
{
    a = static_cast<VkImageViewCreateFlagBits>(static_cast<std::underlying_type<VkImageViewCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkImageViewCreateFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkIndirectCommandsLayoutUsageFlagBitsNVX>
{
    std::size_t operator()(const vk::VkIndirectCommandsLayoutUsageFlagBitsNVX & t) const
    {
        return hash<std::underlying_type<vk::VkIndirectCommandsLayoutUsageFlagBitsNVX>::type>()(static_cast<std::underlying_type<vk::VkIndirectCommandsLayoutUsageFlagBitsNVX>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkIndirectCommandsLayoutUsageFlagBitsNVX operator|(const VkIndirectCommandsLayoutUsageFlagBitsNVX & a, const VkIndirectCommandsLayoutUsageFlagBitsNVX & b)
{
    return static_cast<VkIndirectCommandsLayoutUsageFlagBitsNVX>(static_cast<std::underlying_type<VkIndirectCommandsLayoutUsageFlagBitsNVX>::type>(a) | static_cast<std::underlying_type<VkIndirectCommandsLayoutUsageFlagBitsNVX>::type>(b));
}

inline VkIndirectCommandsLayoutUsageFlagBitsNVX & operator|=(VkIndirectCommandsLayoutUsageFlagBitsNVX & a, const VkIndirectCommandsLayoutUsageFlagBitsNVX & b)
{
    a = static_cast<VkIndirectCommandsLayoutUsageFlagBitsNVX>(static_cast<std::underlying_type<VkIndirectCommandsLayoutUsageFlagBitsNVX>::type>(a) | static_cast<std::underlying_type<VkIndirectCommandsLayoutUsageFlagBitsNVX>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkIndirectCommandsLayoutUsageFlagBitsNVX operator&(const VkIndirectCommandsLayoutUsageFlagBitsNVX & a, const VkIndirectCommandsLayoutUsageFlagBitsNVX & b)
{
    return static_cast<VkIndirectCommandsLayoutUsageFlagBitsNVX>(static_cast<std::underlying_type<VkIndirectCommandsLayoutUsageFlagBitsNVX>::type>(a) & static_cast<std::underlying_type<VkIndirectCommandsLayoutUsageFlagBitsNVX>::type>(b));
}

inline VkIndirectCommandsLayoutUsageFlagBitsNVX & operator&=(VkIndirectCommandsLayoutUsageFlagBitsNVX & a, const VkIndirectCommandsLayoutUsageFlagBitsNVX & b)
{
    a = static_cast<VkIndirectCommandsLayoutUsageFlagBitsNVX>(static_cast<std::underlying_type<VkIndirectCommandsLayoutUsageFlagBitsNVX>::type>(a) & static_cast<std::underlying_type<VkIndirectCommandsLayoutUsageFlagBitsNVX>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkIndirectCommandsLayoutUsageFlagBitsNVX operator^(const VkIndirectCommandsLayoutUsageFlagBitsNVX & a, const VkIndirectCommandsLayoutUsageFlagBitsNVX & b)
{
    return static_cast<VkIndirectCommandsLayoutUsageFlagBitsNVX>(static_cast<std::underlying_type<VkIndirectCommandsLayoutUsageFlagBitsNVX>::type>(a) ^ static_cast<std::underlying_type<VkIndirectCommandsLayoutUsageFlagBitsNVX>::type>(b));
}

inline VkIndirectCommandsLayoutUsageFlagBitsNVX & operator^=(VkIndirectCommandsLayoutUsageFlagBitsNVX & a, const VkIndirectCommandsLayoutUsageFlagBitsNVX & b)
{
    a = static_cast<VkIndirectCommandsLayoutUsageFlagBitsNVX>(static_cast<std::underlying_type<VkIndirectCommandsLayoutUsageFlagBitsNVX>::type>(a) ^ static_cast<std::underlying_type<VkIndirectCommandsLayoutUsageFlagBitsNVX>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkInstanceCreateFlagBits>
{
    std::size_t operator()(const vk::VkInstanceCreateFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkInstanceCreateFlagBits>::type>()(static_cast<std::underlying_type<vk::VkInstanceCreateFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkInstanceCreateFlagBits operator|(const VkInstanceCreateFlagBits & a, const VkInstanceCreateFlagBits & b)
{
    return static_cast<VkInstanceCreateFlagBits>(static_cast<std::underlying_type<VkInstanceCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkInstanceCreateFlagBits>::type>(b));
}

inline VkInstanceCreateFlagBits & operator|=(VkInstanceCreateFlagBits & a, const VkInstanceCreateFlagBits & b)
{
    a = static_cast<VkInstanceCreateFlagBits>(static_cast<std::underlying_type<VkInstanceCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkInstanceCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkInstanceCreateFlagBits operator&(const VkInstanceCreateFlagBits & a, const VkInstanceCreateFlagBits & b)
{
    return static_cast<VkInstanceCreateFlagBits>(static_cast<std::underlying_type<VkInstanceCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkInstanceCreateFlagBits>::type>(b));
}

inline VkInstanceCreateFlagBits & operator&=(VkInstanceCreateFlagBits & a, const VkInstanceCreateFlagBits & b)
{
    a = static_cast<VkInstanceCreateFlagBits>(static_cast<std::underlying_type<VkInstanceCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkInstanceCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkInstanceCreateFlagBits operator^(const VkInstanceCreateFlagBits & a, const VkInstanceCreateFlagBits & b)
{
    return static_cast<VkInstanceCreateFlagBits>(static_cast<std::underlying_type<VkInstanceCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkInstanceCreateFlagBits>::type>(b));
}

inline VkInstanceCreateFlagBits & operator^=(VkInstanceCreateFlagBits & a, const VkInstanceCreateFlagBits & b)
{
    a = static_cast<VkInstanceCreateFlagBits>(static_cast<std::underlying_type<VkInstanceCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkInstanceCreateFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkMemoryAllocateFlagBits>
{
    std::size_t operator()(const vk::VkMemoryAllocateFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkMemoryAllocateFlagBits>::type>()(static_cast<std::underlying_type<vk::VkMemoryAllocateFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkMemoryAllocateFlagBits operator|(const VkMemoryAllocateFlagBits & a, const VkMemoryAllocateFlagBits & b)
{
    return static_cast<VkMemoryAllocateFlagBits>(static_cast<std::underlying_type<VkMemoryAllocateFlagBits>::type>(a) | static_cast<std::underlying_type<VkMemoryAllocateFlagBits>::type>(b));
}

inline VkMemoryAllocateFlagBits & operator|=(VkMemoryAllocateFlagBits & a, const VkMemoryAllocateFlagBits & b)
{
    a = static_cast<VkMemoryAllocateFlagBits>(static_cast<std::underlying_type<VkMemoryAllocateFlagBits>::type>(a) | static_cast<std::underlying_type<VkMemoryAllocateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkMemoryAllocateFlagBits operator&(const VkMemoryAllocateFlagBits & a, const VkMemoryAllocateFlagBits & b)
{
    return static_cast<VkMemoryAllocateFlagBits>(static_cast<std::underlying_type<VkMemoryAllocateFlagBits>::type>(a) & static_cast<std::underlying_type<VkMemoryAllocateFlagBits>::type>(b));
}

inline VkMemoryAllocateFlagBits & operator&=(VkMemoryAllocateFlagBits & a, const VkMemoryAllocateFlagBits & b)
{
    a = static_cast<VkMemoryAllocateFlagBits>(static_cast<std::underlying_type<VkMemoryAllocateFlagBits>::type>(a) & static_cast<std::underlying_type<VkMemoryAllocateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkMemoryAllocateFlagBits operator^(const VkMemoryAllocateFlagBits & a, const VkMemoryAllocateFlagBits & b)
{
    return static_cast<VkMemoryAllocateFlagBits>(static_cast<std::underlying_type<VkMemoryAllocateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkMemoryAllocateFlagBits>::type>(b));
}

inline VkMemoryAllocateFlagBits & operator^=(VkMemoryAllocateFlagBits & a, const VkMemoryAllocateFlagBits & b)
{
    a = static_cast<VkMemoryAllocateFlagBits>(static_cast<std::underlying_type<VkMemoryAllocateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkMemoryAllocateFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkMemoryAllocateFlagBitsKHR>
{
    std::size_t operator()(const vk::VkMemoryAllocateFlagBitsKHR & t) const
    {
        return hash<std::underlying_type<vk::VkMemoryAllocateFlagBitsKHR>::type>()(static_cast<std::underlying_type<vk::VkMemoryAllocateFlagBitsKHR>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkMemoryAllocateFlagBitsKHR operator|(const VkMemoryAllocateFlagBitsKHR & a, const VkMemoryAllocateFlagBitsKHR & b)
{
    return static_cast<VkMemoryAllocateFlagBitsKHR>(static_cast<std::underlying_type<VkMemoryAllocateFlagBitsKHR>::type>(a) | static_cast<std::underlying_type<VkMemoryAllocateFlagBitsKHR>::type>(b));
}

inline VkMemoryAllocateFlagBitsKHR & operator|=(VkMemoryAllocateFlagBitsKHR & a, const VkMemoryAllocateFlagBitsKHR & b)
{
    a = static_cast<VkMemoryAllocateFlagBitsKHR>(static_cast<std::underlying_type<VkMemoryAllocateFlagBitsKHR>::type>(a) | static_cast<std::underlying_type<VkMemoryAllocateFlagBitsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkMemoryAllocateFlagBitsKHR operator&(const VkMemoryAllocateFlagBitsKHR & a, const VkMemoryAllocateFlagBitsKHR & b)
{
    return static_cast<VkMemoryAllocateFlagBitsKHR>(static_cast<std::underlying_type<VkMemoryAllocateFlagBitsKHR>::type>(a) & static_cast<std::underlying_type<VkMemoryAllocateFlagBitsKHR>::type>(b));
}

inline VkMemoryAllocateFlagBitsKHR & operator&=(VkMemoryAllocateFlagBitsKHR & a, const VkMemoryAllocateFlagBitsKHR & b)
{
    a = static_cast<VkMemoryAllocateFlagBitsKHR>(static_cast<std::underlying_type<VkMemoryAllocateFlagBitsKHR>::type>(a) & static_cast<std::underlying_type<VkMemoryAllocateFlagBitsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkMemoryAllocateFlagBitsKHR operator^(const VkMemoryAllocateFlagBitsKHR & a, const VkMemoryAllocateFlagBitsKHR & b)
{
    return static_cast<VkMemoryAllocateFlagBitsKHR>(static_cast<std::underlying_type<VkMemoryAllocateFlagBitsKHR>::type>(a) ^ static_cast<std::underlying_type<VkMemoryAllocateFlagBitsKHR>::type>(b));
}

inline VkMemoryAllocateFlagBitsKHR & operator^=(VkMemoryAllocateFlagBitsKHR & a, const VkMemoryAllocateFlagBitsKHR & b)
{
    a = static_cast<VkMemoryAllocateFlagBitsKHR>(static_cast<std::underlying_type<VkMemoryAllocateFlagBitsKHR>::type>(a) ^ static_cast<std::underlying_type<VkMemoryAllocateFlagBitsKHR>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkMemoryHeapFlagBits>
{
    std::size_t operator()(const vk::VkMemoryHeapFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkMemoryHeapFlagBits>::type>()(static_cast<std::underlying_type<vk::VkMemoryHeapFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkMemoryHeapFlagBits operator|(const VkMemoryHeapFlagBits & a, const VkMemoryHeapFlagBits & b)
{
    return static_cast<VkMemoryHeapFlagBits>(static_cast<std::underlying_type<VkMemoryHeapFlagBits>::type>(a) | static_cast<std::underlying_type<VkMemoryHeapFlagBits>::type>(b));
}

inline VkMemoryHeapFlagBits & operator|=(VkMemoryHeapFlagBits & a, const VkMemoryHeapFlagBits & b)
{
    a = static_cast<VkMemoryHeapFlagBits>(static_cast<std::underlying_type<VkMemoryHeapFlagBits>::type>(a) | static_cast<std::underlying_type<VkMemoryHeapFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkMemoryHeapFlagBits operator&(const VkMemoryHeapFlagBits & a, const VkMemoryHeapFlagBits & b)
{
    return static_cast<VkMemoryHeapFlagBits>(static_cast<std::underlying_type<VkMemoryHeapFlagBits>::type>(a) & static_cast<std::underlying_type<VkMemoryHeapFlagBits>::type>(b));
}

inline VkMemoryHeapFlagBits & operator&=(VkMemoryHeapFlagBits & a, const VkMemoryHeapFlagBits & b)
{
    a = static_cast<VkMemoryHeapFlagBits>(static_cast<std::underlying_type<VkMemoryHeapFlagBits>::type>(a) & static_cast<std::underlying_type<VkMemoryHeapFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkMemoryHeapFlagBits operator^(const VkMemoryHeapFlagBits & a, const VkMemoryHeapFlagBits & b)
{
    return static_cast<VkMemoryHeapFlagBits>(static_cast<std::underlying_type<VkMemoryHeapFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkMemoryHeapFlagBits>::type>(b));
}

inline VkMemoryHeapFlagBits & operator^=(VkMemoryHeapFlagBits & a, const VkMemoryHeapFlagBits & b)
{
    a = static_cast<VkMemoryHeapFlagBits>(static_cast<std::underlying_type<VkMemoryHeapFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkMemoryHeapFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkMemoryPropertyFlagBits>
{
    std::size_t operator()(const vk::VkMemoryPropertyFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkMemoryPropertyFlagBits>::type>()(static_cast<std::underlying_type<vk::VkMemoryPropertyFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkMemoryPropertyFlagBits operator|(const VkMemoryPropertyFlagBits & a, const VkMemoryPropertyFlagBits & b)
{
    return static_cast<VkMemoryPropertyFlagBits>(static_cast<std::underlying_type<VkMemoryPropertyFlagBits>::type>(a) | static_cast<std::underlying_type<VkMemoryPropertyFlagBits>::type>(b));
}

inline VkMemoryPropertyFlagBits & operator|=(VkMemoryPropertyFlagBits & a, const VkMemoryPropertyFlagBits & b)
{
    a = static_cast<VkMemoryPropertyFlagBits>(static_cast<std::underlying_type<VkMemoryPropertyFlagBits>::type>(a) | static_cast<std::underlying_type<VkMemoryPropertyFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkMemoryPropertyFlagBits operator&(const VkMemoryPropertyFlagBits & a, const VkMemoryPropertyFlagBits & b)
{
    return static_cast<VkMemoryPropertyFlagBits>(static_cast<std::underlying_type<VkMemoryPropertyFlagBits>::type>(a) & static_cast<std::underlying_type<VkMemoryPropertyFlagBits>::type>(b));
}

inline VkMemoryPropertyFlagBits & operator&=(VkMemoryPropertyFlagBits & a, const VkMemoryPropertyFlagBits & b)
{
    a = static_cast<VkMemoryPropertyFlagBits>(static_cast<std::underlying_type<VkMemoryPropertyFlagBits>::type>(a) & static_cast<std::underlying_type<VkMemoryPropertyFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkMemoryPropertyFlagBits operator^(const VkMemoryPropertyFlagBits & a, const VkMemoryPropertyFlagBits & b)
{
    return static_cast<VkMemoryPropertyFlagBits>(static_cast<std::underlying_type<VkMemoryPropertyFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkMemoryPropertyFlagBits>::type>(b));
}

inline VkMemoryPropertyFlagBits & operator^=(VkMemoryPropertyFlagBits & a, const VkMemoryPropertyFlagBits & b)
{
    a = static_cast<VkMemoryPropertyFlagBits>(static_cast<std::underlying_type<VkMemoryPropertyFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkMemoryPropertyFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkObjectEntryUsageFlagBitsNVX>
{
    std::size_t operator()(const vk::VkObjectEntryUsageFlagBitsNVX & t) const
    {
        return hash<std::underlying_type<vk::VkObjectEntryUsageFlagBitsNVX>::type>()(static_cast<std::underlying_type<vk::VkObjectEntryUsageFlagBitsNVX>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkObjectEntryUsageFlagBitsNVX operator|(const VkObjectEntryUsageFlagBitsNVX & a, const VkObjectEntryUsageFlagBitsNVX & b)
{
    return static_cast<VkObjectEntryUsageFlagBitsNVX>(static_cast<std::underlying_type<VkObjectEntryUsageFlagBitsNVX>::type>(a) | static_cast<std::underlying_type<VkObjectEntryUsageFlagBitsNVX>::type>(b));
}

inline VkObjectEntryUsageFlagBitsNVX & operator|=(VkObjectEntryUsageFlagBitsNVX & a, const VkObjectEntryUsageFlagBitsNVX & b)
{
    a = static_cast<VkObjectEntryUsageFlagBitsNVX>(static_cast<std::underlying_type<VkObjectEntryUsageFlagBitsNVX>::type>(a) | static_cast<std::underlying_type<VkObjectEntryUsageFlagBitsNVX>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkObjectEntryUsageFlagBitsNVX operator&(const VkObjectEntryUsageFlagBitsNVX & a, const VkObjectEntryUsageFlagBitsNVX & b)
{
    return static_cast<VkObjectEntryUsageFlagBitsNVX>(static_cast<std::underlying_type<VkObjectEntryUsageFlagBitsNVX>::type>(a) & static_cast<std::underlying_type<VkObjectEntryUsageFlagBitsNVX>::type>(b));
}

inline VkObjectEntryUsageFlagBitsNVX & operator&=(VkObjectEntryUsageFlagBitsNVX & a, const VkObjectEntryUsageFlagBitsNVX & b)
{
    a = static_cast<VkObjectEntryUsageFlagBitsNVX>(static_cast<std::underlying_type<VkObjectEntryUsageFlagBitsNVX>::type>(a) & static_cast<std::underlying_type<VkObjectEntryUsageFlagBitsNVX>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkObjectEntryUsageFlagBitsNVX operator^(const VkObjectEntryUsageFlagBitsNVX & a, const VkObjectEntryUsageFlagBitsNVX & b)
{
    return static_cast<VkObjectEntryUsageFlagBitsNVX>(static_cast<std::underlying_type<VkObjectEntryUsageFlagBitsNVX>::type>(a) ^ static_cast<std::underlying_type<VkObjectEntryUsageFlagBitsNVX>::type>(b));
}

inline VkObjectEntryUsageFlagBitsNVX & operator^=(VkObjectEntryUsageFlagBitsNVX & a, const VkObjectEntryUsageFlagBitsNVX & b)
{
    a = static_cast<VkObjectEntryUsageFlagBitsNVX>(static_cast<std::underlying_type<VkObjectEntryUsageFlagBitsNVX>::type>(a) ^ static_cast<std::underlying_type<VkObjectEntryUsageFlagBitsNVX>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPeerMemoryFeatureFlagBits>
{
    std::size_t operator()(const vk::VkPeerMemoryFeatureFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkPeerMemoryFeatureFlagBits>::type>()(static_cast<std::underlying_type<vk::VkPeerMemoryFeatureFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPeerMemoryFeatureFlagBits operator|(const VkPeerMemoryFeatureFlagBits & a, const VkPeerMemoryFeatureFlagBits & b)
{
    return static_cast<VkPeerMemoryFeatureFlagBits>(static_cast<std::underlying_type<VkPeerMemoryFeatureFlagBits>::type>(a) | static_cast<std::underlying_type<VkPeerMemoryFeatureFlagBits>::type>(b));
}

inline VkPeerMemoryFeatureFlagBits & operator|=(VkPeerMemoryFeatureFlagBits & a, const VkPeerMemoryFeatureFlagBits & b)
{
    a = static_cast<VkPeerMemoryFeatureFlagBits>(static_cast<std::underlying_type<VkPeerMemoryFeatureFlagBits>::type>(a) | static_cast<std::underlying_type<VkPeerMemoryFeatureFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPeerMemoryFeatureFlagBits operator&(const VkPeerMemoryFeatureFlagBits & a, const VkPeerMemoryFeatureFlagBits & b)
{
    return static_cast<VkPeerMemoryFeatureFlagBits>(static_cast<std::underlying_type<VkPeerMemoryFeatureFlagBits>::type>(a) & static_cast<std::underlying_type<VkPeerMemoryFeatureFlagBits>::type>(b));
}

inline VkPeerMemoryFeatureFlagBits & operator&=(VkPeerMemoryFeatureFlagBits & a, const VkPeerMemoryFeatureFlagBits & b)
{
    a = static_cast<VkPeerMemoryFeatureFlagBits>(static_cast<std::underlying_type<VkPeerMemoryFeatureFlagBits>::type>(a) & static_cast<std::underlying_type<VkPeerMemoryFeatureFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPeerMemoryFeatureFlagBits operator^(const VkPeerMemoryFeatureFlagBits & a, const VkPeerMemoryFeatureFlagBits & b)
{
    return static_cast<VkPeerMemoryFeatureFlagBits>(static_cast<std::underlying_type<VkPeerMemoryFeatureFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkPeerMemoryFeatureFlagBits>::type>(b));
}

inline VkPeerMemoryFeatureFlagBits & operator^=(VkPeerMemoryFeatureFlagBits & a, const VkPeerMemoryFeatureFlagBits & b)
{
    a = static_cast<VkPeerMemoryFeatureFlagBits>(static_cast<std::underlying_type<VkPeerMemoryFeatureFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkPeerMemoryFeatureFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPeerMemoryFeatureFlagBitsKHR>
{
    std::size_t operator()(const vk::VkPeerMemoryFeatureFlagBitsKHR & t) const
    {
        return hash<std::underlying_type<vk::VkPeerMemoryFeatureFlagBitsKHR>::type>()(static_cast<std::underlying_type<vk::VkPeerMemoryFeatureFlagBitsKHR>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPeerMemoryFeatureFlagBitsKHR operator|(const VkPeerMemoryFeatureFlagBitsKHR & a, const VkPeerMemoryFeatureFlagBitsKHR & b)
{
    return static_cast<VkPeerMemoryFeatureFlagBitsKHR>(static_cast<std::underlying_type<VkPeerMemoryFeatureFlagBitsKHR>::type>(a) | static_cast<std::underlying_type<VkPeerMemoryFeatureFlagBitsKHR>::type>(b));
}

inline VkPeerMemoryFeatureFlagBitsKHR & operator|=(VkPeerMemoryFeatureFlagBitsKHR & a, const VkPeerMemoryFeatureFlagBitsKHR & b)
{
    a = static_cast<VkPeerMemoryFeatureFlagBitsKHR>(static_cast<std::underlying_type<VkPeerMemoryFeatureFlagBitsKHR>::type>(a) | static_cast<std::underlying_type<VkPeerMemoryFeatureFlagBitsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPeerMemoryFeatureFlagBitsKHR operator&(const VkPeerMemoryFeatureFlagBitsKHR & a, const VkPeerMemoryFeatureFlagBitsKHR & b)
{
    return static_cast<VkPeerMemoryFeatureFlagBitsKHR>(static_cast<std::underlying_type<VkPeerMemoryFeatureFlagBitsKHR>::type>(a) & static_cast<std::underlying_type<VkPeerMemoryFeatureFlagBitsKHR>::type>(b));
}

inline VkPeerMemoryFeatureFlagBitsKHR & operator&=(VkPeerMemoryFeatureFlagBitsKHR & a, const VkPeerMemoryFeatureFlagBitsKHR & b)
{
    a = static_cast<VkPeerMemoryFeatureFlagBitsKHR>(static_cast<std::underlying_type<VkPeerMemoryFeatureFlagBitsKHR>::type>(a) & static_cast<std::underlying_type<VkPeerMemoryFeatureFlagBitsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPeerMemoryFeatureFlagBitsKHR operator^(const VkPeerMemoryFeatureFlagBitsKHR & a, const VkPeerMemoryFeatureFlagBitsKHR & b)
{
    return static_cast<VkPeerMemoryFeatureFlagBitsKHR>(static_cast<std::underlying_type<VkPeerMemoryFeatureFlagBitsKHR>::type>(a) ^ static_cast<std::underlying_type<VkPeerMemoryFeatureFlagBitsKHR>::type>(b));
}

inline VkPeerMemoryFeatureFlagBitsKHR & operator^=(VkPeerMemoryFeatureFlagBitsKHR & a, const VkPeerMemoryFeatureFlagBitsKHR & b)
{
    a = static_cast<VkPeerMemoryFeatureFlagBitsKHR>(static_cast<std::underlying_type<VkPeerMemoryFeatureFlagBitsKHR>::type>(a) ^ static_cast<std::underlying_type<VkPeerMemoryFeatureFlagBitsKHR>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPipelineCacheCreateFlagBits>
{
    std::size_t operator()(const vk::VkPipelineCacheCreateFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkPipelineCacheCreateFlagBits>::type>()(static_cast<std::underlying_type<vk::VkPipelineCacheCreateFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPipelineCacheCreateFlagBits operator|(const VkPipelineCacheCreateFlagBits & a, const VkPipelineCacheCreateFlagBits & b)
{
    return static_cast<VkPipelineCacheCreateFlagBits>(static_cast<std::underlying_type<VkPipelineCacheCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkPipelineCacheCreateFlagBits>::type>(b));
}

inline VkPipelineCacheCreateFlagBits & operator|=(VkPipelineCacheCreateFlagBits & a, const VkPipelineCacheCreateFlagBits & b)
{
    a = static_cast<VkPipelineCacheCreateFlagBits>(static_cast<std::underlying_type<VkPipelineCacheCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkPipelineCacheCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineCacheCreateFlagBits operator&(const VkPipelineCacheCreateFlagBits & a, const VkPipelineCacheCreateFlagBits & b)
{
    return static_cast<VkPipelineCacheCreateFlagBits>(static_cast<std::underlying_type<VkPipelineCacheCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkPipelineCacheCreateFlagBits>::type>(b));
}

inline VkPipelineCacheCreateFlagBits & operator&=(VkPipelineCacheCreateFlagBits & a, const VkPipelineCacheCreateFlagBits & b)
{
    a = static_cast<VkPipelineCacheCreateFlagBits>(static_cast<std::underlying_type<VkPipelineCacheCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkPipelineCacheCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineCacheCreateFlagBits operator^(const VkPipelineCacheCreateFlagBits & a, const VkPipelineCacheCreateFlagBits & b)
{
    return static_cast<VkPipelineCacheCreateFlagBits>(static_cast<std::underlying_type<VkPipelineCacheCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkPipelineCacheCreateFlagBits>::type>(b));
}

inline VkPipelineCacheCreateFlagBits & operator^=(VkPipelineCacheCreateFlagBits & a, const VkPipelineCacheCreateFlagBits & b)
{
    a = static_cast<VkPipelineCacheCreateFlagBits>(static_cast<std::underlying_type<VkPipelineCacheCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkPipelineCacheCreateFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPipelineColorBlendStateCreateFlagBits>
{
    std::size_t operator()(const vk::VkPipelineColorBlendStateCreateFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkPipelineColorBlendStateCreateFlagBits>::type>()(static_cast<std::underlying_type<vk::VkPipelineColorBlendStateCreateFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPipelineColorBlendStateCreateFlagBits operator|(const VkPipelineColorBlendStateCreateFlagBits & a, const VkPipelineColorBlendStateCreateFlagBits & b)
{
    return static_cast<VkPipelineColorBlendStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineColorBlendStateCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkPipelineColorBlendStateCreateFlagBits>::type>(b));
}

inline VkPipelineColorBlendStateCreateFlagBits & operator|=(VkPipelineColorBlendStateCreateFlagBits & a, const VkPipelineColorBlendStateCreateFlagBits & b)
{
    a = static_cast<VkPipelineColorBlendStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineColorBlendStateCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkPipelineColorBlendStateCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineColorBlendStateCreateFlagBits operator&(const VkPipelineColorBlendStateCreateFlagBits & a, const VkPipelineColorBlendStateCreateFlagBits & b)
{
    return static_cast<VkPipelineColorBlendStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineColorBlendStateCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkPipelineColorBlendStateCreateFlagBits>::type>(b));
}

inline VkPipelineColorBlendStateCreateFlagBits & operator&=(VkPipelineColorBlendStateCreateFlagBits & a, const VkPipelineColorBlendStateCreateFlagBits & b)
{
    a = static_cast<VkPipelineColorBlendStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineColorBlendStateCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkPipelineColorBlendStateCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineColorBlendStateCreateFlagBits operator^(const VkPipelineColorBlendStateCreateFlagBits & a, const VkPipelineColorBlendStateCreateFlagBits & b)
{
    return static_cast<VkPipelineColorBlendStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineColorBlendStateCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkPipelineColorBlendStateCreateFlagBits>::type>(b));
}

inline VkPipelineColorBlendStateCreateFlagBits & operator^=(VkPipelineColorBlendStateCreateFlagBits & a, const VkPipelineColorBlendStateCreateFlagBits & b)
{
    a = static_cast<VkPipelineColorBlendStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineColorBlendStateCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkPipelineColorBlendStateCreateFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPipelineCreateFlagBits>
{
    std::size_t operator()(const vk::VkPipelineCreateFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkPipelineCreateFlagBits>::type>()(static_cast<std::underlying_type<vk::VkPipelineCreateFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPipelineCreateFlagBits operator|(const VkPipelineCreateFlagBits & a, const VkPipelineCreateFlagBits & b)
{
    return static_cast<VkPipelineCreateFlagBits>(static_cast<std::underlying_type<VkPipelineCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkPipelineCreateFlagBits>::type>(b));
}

inline VkPipelineCreateFlagBits & operator|=(VkPipelineCreateFlagBits & a, const VkPipelineCreateFlagBits & b)
{
    a = static_cast<VkPipelineCreateFlagBits>(static_cast<std::underlying_type<VkPipelineCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkPipelineCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineCreateFlagBits operator&(const VkPipelineCreateFlagBits & a, const VkPipelineCreateFlagBits & b)
{
    return static_cast<VkPipelineCreateFlagBits>(static_cast<std::underlying_type<VkPipelineCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkPipelineCreateFlagBits>::type>(b));
}

inline VkPipelineCreateFlagBits & operator&=(VkPipelineCreateFlagBits & a, const VkPipelineCreateFlagBits & b)
{
    a = static_cast<VkPipelineCreateFlagBits>(static_cast<std::underlying_type<VkPipelineCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkPipelineCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineCreateFlagBits operator^(const VkPipelineCreateFlagBits & a, const VkPipelineCreateFlagBits & b)
{
    return static_cast<VkPipelineCreateFlagBits>(static_cast<std::underlying_type<VkPipelineCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkPipelineCreateFlagBits>::type>(b));
}

inline VkPipelineCreateFlagBits & operator^=(VkPipelineCreateFlagBits & a, const VkPipelineCreateFlagBits & b)
{
    a = static_cast<VkPipelineCreateFlagBits>(static_cast<std::underlying_type<VkPipelineCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkPipelineCreateFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPipelineCreationFeedbackFlagBitsEXT>
{
    std::size_t operator()(const vk::VkPipelineCreationFeedbackFlagBitsEXT & t) const
    {
        return hash<std::underlying_type<vk::VkPipelineCreationFeedbackFlagBitsEXT>::type>()(static_cast<std::underlying_type<vk::VkPipelineCreationFeedbackFlagBitsEXT>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPipelineCreationFeedbackFlagBitsEXT operator|(const VkPipelineCreationFeedbackFlagBitsEXT & a, const VkPipelineCreationFeedbackFlagBitsEXT & b)
{
    return static_cast<VkPipelineCreationFeedbackFlagBitsEXT>(static_cast<std::underlying_type<VkPipelineCreationFeedbackFlagBitsEXT>::type>(a) | static_cast<std::underlying_type<VkPipelineCreationFeedbackFlagBitsEXT>::type>(b));
}

inline VkPipelineCreationFeedbackFlagBitsEXT & operator|=(VkPipelineCreationFeedbackFlagBitsEXT & a, const VkPipelineCreationFeedbackFlagBitsEXT & b)
{
    a = static_cast<VkPipelineCreationFeedbackFlagBitsEXT>(static_cast<std::underlying_type<VkPipelineCreationFeedbackFlagBitsEXT>::type>(a) | static_cast<std::underlying_type<VkPipelineCreationFeedbackFlagBitsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineCreationFeedbackFlagBitsEXT operator&(const VkPipelineCreationFeedbackFlagBitsEXT & a, const VkPipelineCreationFeedbackFlagBitsEXT & b)
{
    return static_cast<VkPipelineCreationFeedbackFlagBitsEXT>(static_cast<std::underlying_type<VkPipelineCreationFeedbackFlagBitsEXT>::type>(a) & static_cast<std::underlying_type<VkPipelineCreationFeedbackFlagBitsEXT>::type>(b));
}

inline VkPipelineCreationFeedbackFlagBitsEXT & operator&=(VkPipelineCreationFeedbackFlagBitsEXT & a, const VkPipelineCreationFeedbackFlagBitsEXT & b)
{
    a = static_cast<VkPipelineCreationFeedbackFlagBitsEXT>(static_cast<std::underlying_type<VkPipelineCreationFeedbackFlagBitsEXT>::type>(a) & static_cast<std::underlying_type<VkPipelineCreationFeedbackFlagBitsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineCreationFeedbackFlagBitsEXT operator^(const VkPipelineCreationFeedbackFlagBitsEXT & a, const VkPipelineCreationFeedbackFlagBitsEXT & b)
{
    return static_cast<VkPipelineCreationFeedbackFlagBitsEXT>(static_cast<std::underlying_type<VkPipelineCreationFeedbackFlagBitsEXT>::type>(a) ^ static_cast<std::underlying_type<VkPipelineCreationFeedbackFlagBitsEXT>::type>(b));
}

inline VkPipelineCreationFeedbackFlagBitsEXT & operator^=(VkPipelineCreationFeedbackFlagBitsEXT & a, const VkPipelineCreationFeedbackFlagBitsEXT & b)
{
    a = static_cast<VkPipelineCreationFeedbackFlagBitsEXT>(static_cast<std::underlying_type<VkPipelineCreationFeedbackFlagBitsEXT>::type>(a) ^ static_cast<std::underlying_type<VkPipelineCreationFeedbackFlagBitsEXT>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPipelineDepthStencilStateCreateFlagBits>
{
    std::size_t operator()(const vk::VkPipelineDepthStencilStateCreateFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkPipelineDepthStencilStateCreateFlagBits>::type>()(static_cast<std::underlying_type<vk::VkPipelineDepthStencilStateCreateFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPipelineDepthStencilStateCreateFlagBits operator|(const VkPipelineDepthStencilStateCreateFlagBits & a, const VkPipelineDepthStencilStateCreateFlagBits & b)
{
    return static_cast<VkPipelineDepthStencilStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineDepthStencilStateCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkPipelineDepthStencilStateCreateFlagBits>::type>(b));
}

inline VkPipelineDepthStencilStateCreateFlagBits & operator|=(VkPipelineDepthStencilStateCreateFlagBits & a, const VkPipelineDepthStencilStateCreateFlagBits & b)
{
    a = static_cast<VkPipelineDepthStencilStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineDepthStencilStateCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkPipelineDepthStencilStateCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineDepthStencilStateCreateFlagBits operator&(const VkPipelineDepthStencilStateCreateFlagBits & a, const VkPipelineDepthStencilStateCreateFlagBits & b)
{
    return static_cast<VkPipelineDepthStencilStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineDepthStencilStateCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkPipelineDepthStencilStateCreateFlagBits>::type>(b));
}

inline VkPipelineDepthStencilStateCreateFlagBits & operator&=(VkPipelineDepthStencilStateCreateFlagBits & a, const VkPipelineDepthStencilStateCreateFlagBits & b)
{
    a = static_cast<VkPipelineDepthStencilStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineDepthStencilStateCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkPipelineDepthStencilStateCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineDepthStencilStateCreateFlagBits operator^(const VkPipelineDepthStencilStateCreateFlagBits & a, const VkPipelineDepthStencilStateCreateFlagBits & b)
{
    return static_cast<VkPipelineDepthStencilStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineDepthStencilStateCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkPipelineDepthStencilStateCreateFlagBits>::type>(b));
}

inline VkPipelineDepthStencilStateCreateFlagBits & operator^=(VkPipelineDepthStencilStateCreateFlagBits & a, const VkPipelineDepthStencilStateCreateFlagBits & b)
{
    a = static_cast<VkPipelineDepthStencilStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineDepthStencilStateCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkPipelineDepthStencilStateCreateFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPipelineDynamicStateCreateFlagBits>
{
    std::size_t operator()(const vk::VkPipelineDynamicStateCreateFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkPipelineDynamicStateCreateFlagBits>::type>()(static_cast<std::underlying_type<vk::VkPipelineDynamicStateCreateFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPipelineDynamicStateCreateFlagBits operator|(const VkPipelineDynamicStateCreateFlagBits & a, const VkPipelineDynamicStateCreateFlagBits & b)
{
    return static_cast<VkPipelineDynamicStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineDynamicStateCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkPipelineDynamicStateCreateFlagBits>::type>(b));
}

inline VkPipelineDynamicStateCreateFlagBits & operator|=(VkPipelineDynamicStateCreateFlagBits & a, const VkPipelineDynamicStateCreateFlagBits & b)
{
    a = static_cast<VkPipelineDynamicStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineDynamicStateCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkPipelineDynamicStateCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineDynamicStateCreateFlagBits operator&(const VkPipelineDynamicStateCreateFlagBits & a, const VkPipelineDynamicStateCreateFlagBits & b)
{
    return static_cast<VkPipelineDynamicStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineDynamicStateCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkPipelineDynamicStateCreateFlagBits>::type>(b));
}

inline VkPipelineDynamicStateCreateFlagBits & operator&=(VkPipelineDynamicStateCreateFlagBits & a, const VkPipelineDynamicStateCreateFlagBits & b)
{
    a = static_cast<VkPipelineDynamicStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineDynamicStateCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkPipelineDynamicStateCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineDynamicStateCreateFlagBits operator^(const VkPipelineDynamicStateCreateFlagBits & a, const VkPipelineDynamicStateCreateFlagBits & b)
{
    return static_cast<VkPipelineDynamicStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineDynamicStateCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkPipelineDynamicStateCreateFlagBits>::type>(b));
}

inline VkPipelineDynamicStateCreateFlagBits & operator^=(VkPipelineDynamicStateCreateFlagBits & a, const VkPipelineDynamicStateCreateFlagBits & b)
{
    a = static_cast<VkPipelineDynamicStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineDynamicStateCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkPipelineDynamicStateCreateFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPipelineInputAssemblyStateCreateFlagBits>
{
    std::size_t operator()(const vk::VkPipelineInputAssemblyStateCreateFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkPipelineInputAssemblyStateCreateFlagBits>::type>()(static_cast<std::underlying_type<vk::VkPipelineInputAssemblyStateCreateFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPipelineInputAssemblyStateCreateFlagBits operator|(const VkPipelineInputAssemblyStateCreateFlagBits & a, const VkPipelineInputAssemblyStateCreateFlagBits & b)
{
    return static_cast<VkPipelineInputAssemblyStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineInputAssemblyStateCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkPipelineInputAssemblyStateCreateFlagBits>::type>(b));
}

inline VkPipelineInputAssemblyStateCreateFlagBits & operator|=(VkPipelineInputAssemblyStateCreateFlagBits & a, const VkPipelineInputAssemblyStateCreateFlagBits & b)
{
    a = static_cast<VkPipelineInputAssemblyStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineInputAssemblyStateCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkPipelineInputAssemblyStateCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineInputAssemblyStateCreateFlagBits operator&(const VkPipelineInputAssemblyStateCreateFlagBits & a, const VkPipelineInputAssemblyStateCreateFlagBits & b)
{
    return static_cast<VkPipelineInputAssemblyStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineInputAssemblyStateCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkPipelineInputAssemblyStateCreateFlagBits>::type>(b));
}

inline VkPipelineInputAssemblyStateCreateFlagBits & operator&=(VkPipelineInputAssemblyStateCreateFlagBits & a, const VkPipelineInputAssemblyStateCreateFlagBits & b)
{
    a = static_cast<VkPipelineInputAssemblyStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineInputAssemblyStateCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkPipelineInputAssemblyStateCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineInputAssemblyStateCreateFlagBits operator^(const VkPipelineInputAssemblyStateCreateFlagBits & a, const VkPipelineInputAssemblyStateCreateFlagBits & b)
{
    return static_cast<VkPipelineInputAssemblyStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineInputAssemblyStateCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkPipelineInputAssemblyStateCreateFlagBits>::type>(b));
}

inline VkPipelineInputAssemblyStateCreateFlagBits & operator^=(VkPipelineInputAssemblyStateCreateFlagBits & a, const VkPipelineInputAssemblyStateCreateFlagBits & b)
{
    a = static_cast<VkPipelineInputAssemblyStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineInputAssemblyStateCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkPipelineInputAssemblyStateCreateFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPipelineLayoutCreateFlagBits>
{
    std::size_t operator()(const vk::VkPipelineLayoutCreateFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkPipelineLayoutCreateFlagBits>::type>()(static_cast<std::underlying_type<vk::VkPipelineLayoutCreateFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPipelineLayoutCreateFlagBits operator|(const VkPipelineLayoutCreateFlagBits & a, const VkPipelineLayoutCreateFlagBits & b)
{
    return static_cast<VkPipelineLayoutCreateFlagBits>(static_cast<std::underlying_type<VkPipelineLayoutCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkPipelineLayoutCreateFlagBits>::type>(b));
}

inline VkPipelineLayoutCreateFlagBits & operator|=(VkPipelineLayoutCreateFlagBits & a, const VkPipelineLayoutCreateFlagBits & b)
{
    a = static_cast<VkPipelineLayoutCreateFlagBits>(static_cast<std::underlying_type<VkPipelineLayoutCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkPipelineLayoutCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineLayoutCreateFlagBits operator&(const VkPipelineLayoutCreateFlagBits & a, const VkPipelineLayoutCreateFlagBits & b)
{
    return static_cast<VkPipelineLayoutCreateFlagBits>(static_cast<std::underlying_type<VkPipelineLayoutCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkPipelineLayoutCreateFlagBits>::type>(b));
}

inline VkPipelineLayoutCreateFlagBits & operator&=(VkPipelineLayoutCreateFlagBits & a, const VkPipelineLayoutCreateFlagBits & b)
{
    a = static_cast<VkPipelineLayoutCreateFlagBits>(static_cast<std::underlying_type<VkPipelineLayoutCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkPipelineLayoutCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineLayoutCreateFlagBits operator^(const VkPipelineLayoutCreateFlagBits & a, const VkPipelineLayoutCreateFlagBits & b)
{
    return static_cast<VkPipelineLayoutCreateFlagBits>(static_cast<std::underlying_type<VkPipelineLayoutCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkPipelineLayoutCreateFlagBits>::type>(b));
}

inline VkPipelineLayoutCreateFlagBits & operator^=(VkPipelineLayoutCreateFlagBits & a, const VkPipelineLayoutCreateFlagBits & b)
{
    a = static_cast<VkPipelineLayoutCreateFlagBits>(static_cast<std::underlying_type<VkPipelineLayoutCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkPipelineLayoutCreateFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPipelineMultisampleStateCreateFlagBits>
{
    std::size_t operator()(const vk::VkPipelineMultisampleStateCreateFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkPipelineMultisampleStateCreateFlagBits>::type>()(static_cast<std::underlying_type<vk::VkPipelineMultisampleStateCreateFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPipelineMultisampleStateCreateFlagBits operator|(const VkPipelineMultisampleStateCreateFlagBits & a, const VkPipelineMultisampleStateCreateFlagBits & b)
{
    return static_cast<VkPipelineMultisampleStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineMultisampleStateCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkPipelineMultisampleStateCreateFlagBits>::type>(b));
}

inline VkPipelineMultisampleStateCreateFlagBits & operator|=(VkPipelineMultisampleStateCreateFlagBits & a, const VkPipelineMultisampleStateCreateFlagBits & b)
{
    a = static_cast<VkPipelineMultisampleStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineMultisampleStateCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkPipelineMultisampleStateCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineMultisampleStateCreateFlagBits operator&(const VkPipelineMultisampleStateCreateFlagBits & a, const VkPipelineMultisampleStateCreateFlagBits & b)
{
    return static_cast<VkPipelineMultisampleStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineMultisampleStateCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkPipelineMultisampleStateCreateFlagBits>::type>(b));
}

inline VkPipelineMultisampleStateCreateFlagBits & operator&=(VkPipelineMultisampleStateCreateFlagBits & a, const VkPipelineMultisampleStateCreateFlagBits & b)
{
    a = static_cast<VkPipelineMultisampleStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineMultisampleStateCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkPipelineMultisampleStateCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineMultisampleStateCreateFlagBits operator^(const VkPipelineMultisampleStateCreateFlagBits & a, const VkPipelineMultisampleStateCreateFlagBits & b)
{
    return static_cast<VkPipelineMultisampleStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineMultisampleStateCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkPipelineMultisampleStateCreateFlagBits>::type>(b));
}

inline VkPipelineMultisampleStateCreateFlagBits & operator^=(VkPipelineMultisampleStateCreateFlagBits & a, const VkPipelineMultisampleStateCreateFlagBits & b)
{
    a = static_cast<VkPipelineMultisampleStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineMultisampleStateCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkPipelineMultisampleStateCreateFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPipelineRasterizationStateCreateFlagBits>
{
    std::size_t operator()(const vk::VkPipelineRasterizationStateCreateFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkPipelineRasterizationStateCreateFlagBits>::type>()(static_cast<std::underlying_type<vk::VkPipelineRasterizationStateCreateFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPipelineRasterizationStateCreateFlagBits operator|(const VkPipelineRasterizationStateCreateFlagBits & a, const VkPipelineRasterizationStateCreateFlagBits & b)
{
    return static_cast<VkPipelineRasterizationStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineRasterizationStateCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkPipelineRasterizationStateCreateFlagBits>::type>(b));
}

inline VkPipelineRasterizationStateCreateFlagBits & operator|=(VkPipelineRasterizationStateCreateFlagBits & a, const VkPipelineRasterizationStateCreateFlagBits & b)
{
    a = static_cast<VkPipelineRasterizationStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineRasterizationStateCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkPipelineRasterizationStateCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineRasterizationStateCreateFlagBits operator&(const VkPipelineRasterizationStateCreateFlagBits & a, const VkPipelineRasterizationStateCreateFlagBits & b)
{
    return static_cast<VkPipelineRasterizationStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineRasterizationStateCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkPipelineRasterizationStateCreateFlagBits>::type>(b));
}

inline VkPipelineRasterizationStateCreateFlagBits & operator&=(VkPipelineRasterizationStateCreateFlagBits & a, const VkPipelineRasterizationStateCreateFlagBits & b)
{
    a = static_cast<VkPipelineRasterizationStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineRasterizationStateCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkPipelineRasterizationStateCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineRasterizationStateCreateFlagBits operator^(const VkPipelineRasterizationStateCreateFlagBits & a, const VkPipelineRasterizationStateCreateFlagBits & b)
{
    return static_cast<VkPipelineRasterizationStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineRasterizationStateCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkPipelineRasterizationStateCreateFlagBits>::type>(b));
}

inline VkPipelineRasterizationStateCreateFlagBits & operator^=(VkPipelineRasterizationStateCreateFlagBits & a, const VkPipelineRasterizationStateCreateFlagBits & b)
{
    a = static_cast<VkPipelineRasterizationStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineRasterizationStateCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkPipelineRasterizationStateCreateFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPipelineShaderStageCreateFlagBits>
{
    std::size_t operator()(const vk::VkPipelineShaderStageCreateFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkPipelineShaderStageCreateFlagBits>::type>()(static_cast<std::underlying_type<vk::VkPipelineShaderStageCreateFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPipelineShaderStageCreateFlagBits operator|(const VkPipelineShaderStageCreateFlagBits & a, const VkPipelineShaderStageCreateFlagBits & b)
{
    return static_cast<VkPipelineShaderStageCreateFlagBits>(static_cast<std::underlying_type<VkPipelineShaderStageCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkPipelineShaderStageCreateFlagBits>::type>(b));
}

inline VkPipelineShaderStageCreateFlagBits & operator|=(VkPipelineShaderStageCreateFlagBits & a, const VkPipelineShaderStageCreateFlagBits & b)
{
    a = static_cast<VkPipelineShaderStageCreateFlagBits>(static_cast<std::underlying_type<VkPipelineShaderStageCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkPipelineShaderStageCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineShaderStageCreateFlagBits operator&(const VkPipelineShaderStageCreateFlagBits & a, const VkPipelineShaderStageCreateFlagBits & b)
{
    return static_cast<VkPipelineShaderStageCreateFlagBits>(static_cast<std::underlying_type<VkPipelineShaderStageCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkPipelineShaderStageCreateFlagBits>::type>(b));
}

inline VkPipelineShaderStageCreateFlagBits & operator&=(VkPipelineShaderStageCreateFlagBits & a, const VkPipelineShaderStageCreateFlagBits & b)
{
    a = static_cast<VkPipelineShaderStageCreateFlagBits>(static_cast<std::underlying_type<VkPipelineShaderStageCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkPipelineShaderStageCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineShaderStageCreateFlagBits operator^(const VkPipelineShaderStageCreateFlagBits & a, const VkPipelineShaderStageCreateFlagBits & b)
{
    return static_cast<VkPipelineShaderStageCreateFlagBits>(static_cast<std::underlying_type<VkPipelineShaderStageCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkPipelineShaderStageCreateFlagBits>::type>(b));
}

inline VkPipelineShaderStageCreateFlagBits & operator^=(VkPipelineShaderStageCreateFlagBits & a, const VkPipelineShaderStageCreateFlagBits & b)
{
    a = static_cast<VkPipelineShaderStageCreateFlagBits>(static_cast<std::underlying_type<VkPipelineShaderStageCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkPipelineShaderStageCreateFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPipelineStageFlagBits>
{
    std::size_t operator()(const vk::VkPipelineStageFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkPipelineStageFlagBits>::type>()(static_cast<std::underlying_type<vk::VkPipelineStageFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPipelineStageFlagBits operator|(const VkPipelineStageFlagBits & a, const VkPipelineStageFlagBits & b)
{
    return static_cast<VkPipelineStageFlagBits>(static_cast<std::underlying_type<VkPipelineStageFlagBits>::type>(a) | static_cast<std::underlying_type<VkPipelineStageFlagBits>::type>(b));
}

inline VkPipelineStageFlagBits & operator|=(VkPipelineStageFlagBits & a, const VkPipelineStageFlagBits & b)
{
    a = static_cast<VkPipelineStageFlagBits>(static_cast<std::underlying_type<VkPipelineStageFlagBits>::type>(a) | static_cast<std::underlying_type<VkPipelineStageFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineStageFlagBits operator&(const VkPipelineStageFlagBits & a, const VkPipelineStageFlagBits & b)
{
    return static_cast<VkPipelineStageFlagBits>(static_cast<std::underlying_type<VkPipelineStageFlagBits>::type>(a) & static_cast<std::underlying_type<VkPipelineStageFlagBits>::type>(b));
}

inline VkPipelineStageFlagBits & operator&=(VkPipelineStageFlagBits & a, const VkPipelineStageFlagBits & b)
{
    a = static_cast<VkPipelineStageFlagBits>(static_cast<std::underlying_type<VkPipelineStageFlagBits>::type>(a) & static_cast<std::underlying_type<VkPipelineStageFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineStageFlagBits operator^(const VkPipelineStageFlagBits & a, const VkPipelineStageFlagBits & b)
{
    return static_cast<VkPipelineStageFlagBits>(static_cast<std::underlying_type<VkPipelineStageFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkPipelineStageFlagBits>::type>(b));
}

inline VkPipelineStageFlagBits & operator^=(VkPipelineStageFlagBits & a, const VkPipelineStageFlagBits & b)
{
    a = static_cast<VkPipelineStageFlagBits>(static_cast<std::underlying_type<VkPipelineStageFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkPipelineStageFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPipelineTessellationStateCreateFlagBits>
{
    std::size_t operator()(const vk::VkPipelineTessellationStateCreateFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkPipelineTessellationStateCreateFlagBits>::type>()(static_cast<std::underlying_type<vk::VkPipelineTessellationStateCreateFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPipelineTessellationStateCreateFlagBits operator|(const VkPipelineTessellationStateCreateFlagBits & a, const VkPipelineTessellationStateCreateFlagBits & b)
{
    return static_cast<VkPipelineTessellationStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineTessellationStateCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkPipelineTessellationStateCreateFlagBits>::type>(b));
}

inline VkPipelineTessellationStateCreateFlagBits & operator|=(VkPipelineTessellationStateCreateFlagBits & a, const VkPipelineTessellationStateCreateFlagBits & b)
{
    a = static_cast<VkPipelineTessellationStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineTessellationStateCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkPipelineTessellationStateCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineTessellationStateCreateFlagBits operator&(const VkPipelineTessellationStateCreateFlagBits & a, const VkPipelineTessellationStateCreateFlagBits & b)
{
    return static_cast<VkPipelineTessellationStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineTessellationStateCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkPipelineTessellationStateCreateFlagBits>::type>(b));
}

inline VkPipelineTessellationStateCreateFlagBits & operator&=(VkPipelineTessellationStateCreateFlagBits & a, const VkPipelineTessellationStateCreateFlagBits & b)
{
    a = static_cast<VkPipelineTessellationStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineTessellationStateCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkPipelineTessellationStateCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineTessellationStateCreateFlagBits operator^(const VkPipelineTessellationStateCreateFlagBits & a, const VkPipelineTessellationStateCreateFlagBits & b)
{
    return static_cast<VkPipelineTessellationStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineTessellationStateCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkPipelineTessellationStateCreateFlagBits>::type>(b));
}

inline VkPipelineTessellationStateCreateFlagBits & operator^=(VkPipelineTessellationStateCreateFlagBits & a, const VkPipelineTessellationStateCreateFlagBits & b)
{
    a = static_cast<VkPipelineTessellationStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineTessellationStateCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkPipelineTessellationStateCreateFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPipelineVertexInputStateCreateFlagBits>
{
    std::size_t operator()(const vk::VkPipelineVertexInputStateCreateFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkPipelineVertexInputStateCreateFlagBits>::type>()(static_cast<std::underlying_type<vk::VkPipelineVertexInputStateCreateFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPipelineVertexInputStateCreateFlagBits operator|(const VkPipelineVertexInputStateCreateFlagBits & a, const VkPipelineVertexInputStateCreateFlagBits & b)
{
    return static_cast<VkPipelineVertexInputStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineVertexInputStateCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkPipelineVertexInputStateCreateFlagBits>::type>(b));
}

inline VkPipelineVertexInputStateCreateFlagBits & operator|=(VkPipelineVertexInputStateCreateFlagBits & a, const VkPipelineVertexInputStateCreateFlagBits & b)
{
    a = static_cast<VkPipelineVertexInputStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineVertexInputStateCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkPipelineVertexInputStateCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineVertexInputStateCreateFlagBits operator&(const VkPipelineVertexInputStateCreateFlagBits & a, const VkPipelineVertexInputStateCreateFlagBits & b)
{
    return static_cast<VkPipelineVertexInputStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineVertexInputStateCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkPipelineVertexInputStateCreateFlagBits>::type>(b));
}

inline VkPipelineVertexInputStateCreateFlagBits & operator&=(VkPipelineVertexInputStateCreateFlagBits & a, const VkPipelineVertexInputStateCreateFlagBits & b)
{
    a = static_cast<VkPipelineVertexInputStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineVertexInputStateCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkPipelineVertexInputStateCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineVertexInputStateCreateFlagBits operator^(const VkPipelineVertexInputStateCreateFlagBits & a, const VkPipelineVertexInputStateCreateFlagBits & b)
{
    return static_cast<VkPipelineVertexInputStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineVertexInputStateCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkPipelineVertexInputStateCreateFlagBits>::type>(b));
}

inline VkPipelineVertexInputStateCreateFlagBits & operator^=(VkPipelineVertexInputStateCreateFlagBits & a, const VkPipelineVertexInputStateCreateFlagBits & b)
{
    a = static_cast<VkPipelineVertexInputStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineVertexInputStateCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkPipelineVertexInputStateCreateFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPipelineViewportStateCreateFlagBits>
{
    std::size_t operator()(const vk::VkPipelineViewportStateCreateFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkPipelineViewportStateCreateFlagBits>::type>()(static_cast<std::underlying_type<vk::VkPipelineViewportStateCreateFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPipelineViewportStateCreateFlagBits operator|(const VkPipelineViewportStateCreateFlagBits & a, const VkPipelineViewportStateCreateFlagBits & b)
{
    return static_cast<VkPipelineViewportStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineViewportStateCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkPipelineViewportStateCreateFlagBits>::type>(b));
}

inline VkPipelineViewportStateCreateFlagBits & operator|=(VkPipelineViewportStateCreateFlagBits & a, const VkPipelineViewportStateCreateFlagBits & b)
{
    a = static_cast<VkPipelineViewportStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineViewportStateCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkPipelineViewportStateCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineViewportStateCreateFlagBits operator&(const VkPipelineViewportStateCreateFlagBits & a, const VkPipelineViewportStateCreateFlagBits & b)
{
    return static_cast<VkPipelineViewportStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineViewportStateCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkPipelineViewportStateCreateFlagBits>::type>(b));
}

inline VkPipelineViewportStateCreateFlagBits & operator&=(VkPipelineViewportStateCreateFlagBits & a, const VkPipelineViewportStateCreateFlagBits & b)
{
    a = static_cast<VkPipelineViewportStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineViewportStateCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkPipelineViewportStateCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineViewportStateCreateFlagBits operator^(const VkPipelineViewportStateCreateFlagBits & a, const VkPipelineViewportStateCreateFlagBits & b)
{
    return static_cast<VkPipelineViewportStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineViewportStateCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkPipelineViewportStateCreateFlagBits>::type>(b));
}

inline VkPipelineViewportStateCreateFlagBits & operator^=(VkPipelineViewportStateCreateFlagBits & a, const VkPipelineViewportStateCreateFlagBits & b)
{
    a = static_cast<VkPipelineViewportStateCreateFlagBits>(static_cast<std::underlying_type<VkPipelineViewportStateCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkPipelineViewportStateCreateFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkQueryControlFlagBits>
{
    std::size_t operator()(const vk::VkQueryControlFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkQueryControlFlagBits>::type>()(static_cast<std::underlying_type<vk::VkQueryControlFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkQueryControlFlagBits operator|(const VkQueryControlFlagBits & a, const VkQueryControlFlagBits & b)
{
    return static_cast<VkQueryControlFlagBits>(static_cast<std::underlying_type<VkQueryControlFlagBits>::type>(a) | static_cast<std::underlying_type<VkQueryControlFlagBits>::type>(b));
}

inline VkQueryControlFlagBits & operator|=(VkQueryControlFlagBits & a, const VkQueryControlFlagBits & b)
{
    a = static_cast<VkQueryControlFlagBits>(static_cast<std::underlying_type<VkQueryControlFlagBits>::type>(a) | static_cast<std::underlying_type<VkQueryControlFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkQueryControlFlagBits operator&(const VkQueryControlFlagBits & a, const VkQueryControlFlagBits & b)
{
    return static_cast<VkQueryControlFlagBits>(static_cast<std::underlying_type<VkQueryControlFlagBits>::type>(a) & static_cast<std::underlying_type<VkQueryControlFlagBits>::type>(b));
}

inline VkQueryControlFlagBits & operator&=(VkQueryControlFlagBits & a, const VkQueryControlFlagBits & b)
{
    a = static_cast<VkQueryControlFlagBits>(static_cast<std::underlying_type<VkQueryControlFlagBits>::type>(a) & static_cast<std::underlying_type<VkQueryControlFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkQueryControlFlagBits operator^(const VkQueryControlFlagBits & a, const VkQueryControlFlagBits & b)
{
    return static_cast<VkQueryControlFlagBits>(static_cast<std::underlying_type<VkQueryControlFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkQueryControlFlagBits>::type>(b));
}

inline VkQueryControlFlagBits & operator^=(VkQueryControlFlagBits & a, const VkQueryControlFlagBits & b)
{
    a = static_cast<VkQueryControlFlagBits>(static_cast<std::underlying_type<VkQueryControlFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkQueryControlFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkQueryPipelineStatisticFlagBits>
{
    std::size_t operator()(const vk::VkQueryPipelineStatisticFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkQueryPipelineStatisticFlagBits>::type>()(static_cast<std::underlying_type<vk::VkQueryPipelineStatisticFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkQueryPipelineStatisticFlagBits operator|(const VkQueryPipelineStatisticFlagBits & a, const VkQueryPipelineStatisticFlagBits & b)
{
    return static_cast<VkQueryPipelineStatisticFlagBits>(static_cast<std::underlying_type<VkQueryPipelineStatisticFlagBits>::type>(a) | static_cast<std::underlying_type<VkQueryPipelineStatisticFlagBits>::type>(b));
}

inline VkQueryPipelineStatisticFlagBits & operator|=(VkQueryPipelineStatisticFlagBits & a, const VkQueryPipelineStatisticFlagBits & b)
{
    a = static_cast<VkQueryPipelineStatisticFlagBits>(static_cast<std::underlying_type<VkQueryPipelineStatisticFlagBits>::type>(a) | static_cast<std::underlying_type<VkQueryPipelineStatisticFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkQueryPipelineStatisticFlagBits operator&(const VkQueryPipelineStatisticFlagBits & a, const VkQueryPipelineStatisticFlagBits & b)
{
    return static_cast<VkQueryPipelineStatisticFlagBits>(static_cast<std::underlying_type<VkQueryPipelineStatisticFlagBits>::type>(a) & static_cast<std::underlying_type<VkQueryPipelineStatisticFlagBits>::type>(b));
}

inline VkQueryPipelineStatisticFlagBits & operator&=(VkQueryPipelineStatisticFlagBits & a, const VkQueryPipelineStatisticFlagBits & b)
{
    a = static_cast<VkQueryPipelineStatisticFlagBits>(static_cast<std::underlying_type<VkQueryPipelineStatisticFlagBits>::type>(a) & static_cast<std::underlying_type<VkQueryPipelineStatisticFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkQueryPipelineStatisticFlagBits operator^(const VkQueryPipelineStatisticFlagBits & a, const VkQueryPipelineStatisticFlagBits & b)
{
    return static_cast<VkQueryPipelineStatisticFlagBits>(static_cast<std::underlying_type<VkQueryPipelineStatisticFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkQueryPipelineStatisticFlagBits>::type>(b));
}

inline VkQueryPipelineStatisticFlagBits & operator^=(VkQueryPipelineStatisticFlagBits & a, const VkQueryPipelineStatisticFlagBits & b)
{
    a = static_cast<VkQueryPipelineStatisticFlagBits>(static_cast<std::underlying_type<VkQueryPipelineStatisticFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkQueryPipelineStatisticFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkQueryPoolCreateFlagBits>
{
    std::size_t operator()(const vk::VkQueryPoolCreateFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkQueryPoolCreateFlagBits>::type>()(static_cast<std::underlying_type<vk::VkQueryPoolCreateFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkQueryPoolCreateFlagBits operator|(const VkQueryPoolCreateFlagBits & a, const VkQueryPoolCreateFlagBits & b)
{
    return static_cast<VkQueryPoolCreateFlagBits>(static_cast<std::underlying_type<VkQueryPoolCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkQueryPoolCreateFlagBits>::type>(b));
}

inline VkQueryPoolCreateFlagBits & operator|=(VkQueryPoolCreateFlagBits & a, const VkQueryPoolCreateFlagBits & b)
{
    a = static_cast<VkQueryPoolCreateFlagBits>(static_cast<std::underlying_type<VkQueryPoolCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkQueryPoolCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkQueryPoolCreateFlagBits operator&(const VkQueryPoolCreateFlagBits & a, const VkQueryPoolCreateFlagBits & b)
{
    return static_cast<VkQueryPoolCreateFlagBits>(static_cast<std::underlying_type<VkQueryPoolCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkQueryPoolCreateFlagBits>::type>(b));
}

inline VkQueryPoolCreateFlagBits & operator&=(VkQueryPoolCreateFlagBits & a, const VkQueryPoolCreateFlagBits & b)
{
    a = static_cast<VkQueryPoolCreateFlagBits>(static_cast<std::underlying_type<VkQueryPoolCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkQueryPoolCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkQueryPoolCreateFlagBits operator^(const VkQueryPoolCreateFlagBits & a, const VkQueryPoolCreateFlagBits & b)
{
    return static_cast<VkQueryPoolCreateFlagBits>(static_cast<std::underlying_type<VkQueryPoolCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkQueryPoolCreateFlagBits>::type>(b));
}

inline VkQueryPoolCreateFlagBits & operator^=(VkQueryPoolCreateFlagBits & a, const VkQueryPoolCreateFlagBits & b)
{
    a = static_cast<VkQueryPoolCreateFlagBits>(static_cast<std::underlying_type<VkQueryPoolCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkQueryPoolCreateFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkQueryResultFlagBits>
{
    std::size_t operator()(const vk::VkQueryResultFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkQueryResultFlagBits>::type>()(static_cast<std::underlying_type<vk::VkQueryResultFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkQueryResultFlagBits operator|(const VkQueryResultFlagBits & a, const VkQueryResultFlagBits & b)
{
    return static_cast<VkQueryResultFlagBits>(static_cast<std::underlying_type<VkQueryResultFlagBits>::type>(a) | static_cast<std::underlying_type<VkQueryResultFlagBits>::type>(b));
}

inline VkQueryResultFlagBits & operator|=(VkQueryResultFlagBits & a, const VkQueryResultFlagBits & b)
{
    a = static_cast<VkQueryResultFlagBits>(static_cast<std::underlying_type<VkQueryResultFlagBits>::type>(a) | static_cast<std::underlying_type<VkQueryResultFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkQueryResultFlagBits operator&(const VkQueryResultFlagBits & a, const VkQueryResultFlagBits & b)
{
    return static_cast<VkQueryResultFlagBits>(static_cast<std::underlying_type<VkQueryResultFlagBits>::type>(a) & static_cast<std::underlying_type<VkQueryResultFlagBits>::type>(b));
}

inline VkQueryResultFlagBits & operator&=(VkQueryResultFlagBits & a, const VkQueryResultFlagBits & b)
{
    a = static_cast<VkQueryResultFlagBits>(static_cast<std::underlying_type<VkQueryResultFlagBits>::type>(a) & static_cast<std::underlying_type<VkQueryResultFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkQueryResultFlagBits operator^(const VkQueryResultFlagBits & a, const VkQueryResultFlagBits & b)
{
    return static_cast<VkQueryResultFlagBits>(static_cast<std::underlying_type<VkQueryResultFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkQueryResultFlagBits>::type>(b));
}

inline VkQueryResultFlagBits & operator^=(VkQueryResultFlagBits & a, const VkQueryResultFlagBits & b)
{
    a = static_cast<VkQueryResultFlagBits>(static_cast<std::underlying_type<VkQueryResultFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkQueryResultFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkQueueFlagBits>
{
    std::size_t operator()(const vk::VkQueueFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkQueueFlagBits>::type>()(static_cast<std::underlying_type<vk::VkQueueFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkQueueFlagBits operator|(const VkQueueFlagBits & a, const VkQueueFlagBits & b)
{
    return static_cast<VkQueueFlagBits>(static_cast<std::underlying_type<VkQueueFlagBits>::type>(a) | static_cast<std::underlying_type<VkQueueFlagBits>::type>(b));
}

inline VkQueueFlagBits & operator|=(VkQueueFlagBits & a, const VkQueueFlagBits & b)
{
    a = static_cast<VkQueueFlagBits>(static_cast<std::underlying_type<VkQueueFlagBits>::type>(a) | static_cast<std::underlying_type<VkQueueFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkQueueFlagBits operator&(const VkQueueFlagBits & a, const VkQueueFlagBits & b)
{
    return static_cast<VkQueueFlagBits>(static_cast<std::underlying_type<VkQueueFlagBits>::type>(a) & static_cast<std::underlying_type<VkQueueFlagBits>::type>(b));
}

inline VkQueueFlagBits & operator&=(VkQueueFlagBits & a, const VkQueueFlagBits & b)
{
    a = static_cast<VkQueueFlagBits>(static_cast<std::underlying_type<VkQueueFlagBits>::type>(a) & static_cast<std::underlying_type<VkQueueFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkQueueFlagBits operator^(const VkQueueFlagBits & a, const VkQueueFlagBits & b)
{
    return static_cast<VkQueueFlagBits>(static_cast<std::underlying_type<VkQueueFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkQueueFlagBits>::type>(b));
}

inline VkQueueFlagBits & operator^=(VkQueueFlagBits & a, const VkQueueFlagBits & b)
{
    a = static_cast<VkQueueFlagBits>(static_cast<std::underlying_type<VkQueueFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkQueueFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkRenderPassCreateFlagBits>
{
    std::size_t operator()(const vk::VkRenderPassCreateFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkRenderPassCreateFlagBits>::type>()(static_cast<std::underlying_type<vk::VkRenderPassCreateFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkRenderPassCreateFlagBits operator|(const VkRenderPassCreateFlagBits & a, const VkRenderPassCreateFlagBits & b)
{
    return static_cast<VkRenderPassCreateFlagBits>(static_cast<std::underlying_type<VkRenderPassCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkRenderPassCreateFlagBits>::type>(b));
}

inline VkRenderPassCreateFlagBits & operator|=(VkRenderPassCreateFlagBits & a, const VkRenderPassCreateFlagBits & b)
{
    a = static_cast<VkRenderPassCreateFlagBits>(static_cast<std::underlying_type<VkRenderPassCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkRenderPassCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkRenderPassCreateFlagBits operator&(const VkRenderPassCreateFlagBits & a, const VkRenderPassCreateFlagBits & b)
{
    return static_cast<VkRenderPassCreateFlagBits>(static_cast<std::underlying_type<VkRenderPassCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkRenderPassCreateFlagBits>::type>(b));
}

inline VkRenderPassCreateFlagBits & operator&=(VkRenderPassCreateFlagBits & a, const VkRenderPassCreateFlagBits & b)
{
    a = static_cast<VkRenderPassCreateFlagBits>(static_cast<std::underlying_type<VkRenderPassCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkRenderPassCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkRenderPassCreateFlagBits operator^(const VkRenderPassCreateFlagBits & a, const VkRenderPassCreateFlagBits & b)
{
    return static_cast<VkRenderPassCreateFlagBits>(static_cast<std::underlying_type<VkRenderPassCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkRenderPassCreateFlagBits>::type>(b));
}

inline VkRenderPassCreateFlagBits & operator^=(VkRenderPassCreateFlagBits & a, const VkRenderPassCreateFlagBits & b)
{
    a = static_cast<VkRenderPassCreateFlagBits>(static_cast<std::underlying_type<VkRenderPassCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkRenderPassCreateFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkResolveModeFlagBitsKHR>
{
    std::size_t operator()(const vk::VkResolveModeFlagBitsKHR & t) const
    {
        return hash<std::underlying_type<vk::VkResolveModeFlagBitsKHR>::type>()(static_cast<std::underlying_type<vk::VkResolveModeFlagBitsKHR>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkResolveModeFlagBitsKHR operator|(const VkResolveModeFlagBitsKHR & a, const VkResolveModeFlagBitsKHR & b)
{
    return static_cast<VkResolveModeFlagBitsKHR>(static_cast<std::underlying_type<VkResolveModeFlagBitsKHR>::type>(a) | static_cast<std::underlying_type<VkResolveModeFlagBitsKHR>::type>(b));
}

inline VkResolveModeFlagBitsKHR & operator|=(VkResolveModeFlagBitsKHR & a, const VkResolveModeFlagBitsKHR & b)
{
    a = static_cast<VkResolveModeFlagBitsKHR>(static_cast<std::underlying_type<VkResolveModeFlagBitsKHR>::type>(a) | static_cast<std::underlying_type<VkResolveModeFlagBitsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkResolveModeFlagBitsKHR operator&(const VkResolveModeFlagBitsKHR & a, const VkResolveModeFlagBitsKHR & b)
{
    return static_cast<VkResolveModeFlagBitsKHR>(static_cast<std::underlying_type<VkResolveModeFlagBitsKHR>::type>(a) & static_cast<std::underlying_type<VkResolveModeFlagBitsKHR>::type>(b));
}

inline VkResolveModeFlagBitsKHR & operator&=(VkResolveModeFlagBitsKHR & a, const VkResolveModeFlagBitsKHR & b)
{
    a = static_cast<VkResolveModeFlagBitsKHR>(static_cast<std::underlying_type<VkResolveModeFlagBitsKHR>::type>(a) & static_cast<std::underlying_type<VkResolveModeFlagBitsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkResolveModeFlagBitsKHR operator^(const VkResolveModeFlagBitsKHR & a, const VkResolveModeFlagBitsKHR & b)
{
    return static_cast<VkResolveModeFlagBitsKHR>(static_cast<std::underlying_type<VkResolveModeFlagBitsKHR>::type>(a) ^ static_cast<std::underlying_type<VkResolveModeFlagBitsKHR>::type>(b));
}

inline VkResolveModeFlagBitsKHR & operator^=(VkResolveModeFlagBitsKHR & a, const VkResolveModeFlagBitsKHR & b)
{
    a = static_cast<VkResolveModeFlagBitsKHR>(static_cast<std::underlying_type<VkResolveModeFlagBitsKHR>::type>(a) ^ static_cast<std::underlying_type<VkResolveModeFlagBitsKHR>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkSampleCountFlagBits>
{
    std::size_t operator()(const vk::VkSampleCountFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkSampleCountFlagBits>::type>()(static_cast<std::underlying_type<vk::VkSampleCountFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkSampleCountFlagBits operator|(const VkSampleCountFlagBits & a, const VkSampleCountFlagBits & b)
{
    return static_cast<VkSampleCountFlagBits>(static_cast<std::underlying_type<VkSampleCountFlagBits>::type>(a) | static_cast<std::underlying_type<VkSampleCountFlagBits>::type>(b));
}

inline VkSampleCountFlagBits & operator|=(VkSampleCountFlagBits & a, const VkSampleCountFlagBits & b)
{
    a = static_cast<VkSampleCountFlagBits>(static_cast<std::underlying_type<VkSampleCountFlagBits>::type>(a) | static_cast<std::underlying_type<VkSampleCountFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSampleCountFlagBits operator&(const VkSampleCountFlagBits & a, const VkSampleCountFlagBits & b)
{
    return static_cast<VkSampleCountFlagBits>(static_cast<std::underlying_type<VkSampleCountFlagBits>::type>(a) & static_cast<std::underlying_type<VkSampleCountFlagBits>::type>(b));
}

inline VkSampleCountFlagBits & operator&=(VkSampleCountFlagBits & a, const VkSampleCountFlagBits & b)
{
    a = static_cast<VkSampleCountFlagBits>(static_cast<std::underlying_type<VkSampleCountFlagBits>::type>(a) & static_cast<std::underlying_type<VkSampleCountFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSampleCountFlagBits operator^(const VkSampleCountFlagBits & a, const VkSampleCountFlagBits & b)
{
    return static_cast<VkSampleCountFlagBits>(static_cast<std::underlying_type<VkSampleCountFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkSampleCountFlagBits>::type>(b));
}

inline VkSampleCountFlagBits & operator^=(VkSampleCountFlagBits & a, const VkSampleCountFlagBits & b)
{
    a = static_cast<VkSampleCountFlagBits>(static_cast<std::underlying_type<VkSampleCountFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkSampleCountFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkSamplerCreateFlagBits>
{
    std::size_t operator()(const vk::VkSamplerCreateFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkSamplerCreateFlagBits>::type>()(static_cast<std::underlying_type<vk::VkSamplerCreateFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkSamplerCreateFlagBits operator|(const VkSamplerCreateFlagBits & a, const VkSamplerCreateFlagBits & b)
{
    return static_cast<VkSamplerCreateFlagBits>(static_cast<std::underlying_type<VkSamplerCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkSamplerCreateFlagBits>::type>(b));
}

inline VkSamplerCreateFlagBits & operator|=(VkSamplerCreateFlagBits & a, const VkSamplerCreateFlagBits & b)
{
    a = static_cast<VkSamplerCreateFlagBits>(static_cast<std::underlying_type<VkSamplerCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkSamplerCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSamplerCreateFlagBits operator&(const VkSamplerCreateFlagBits & a, const VkSamplerCreateFlagBits & b)
{
    return static_cast<VkSamplerCreateFlagBits>(static_cast<std::underlying_type<VkSamplerCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkSamplerCreateFlagBits>::type>(b));
}

inline VkSamplerCreateFlagBits & operator&=(VkSamplerCreateFlagBits & a, const VkSamplerCreateFlagBits & b)
{
    a = static_cast<VkSamplerCreateFlagBits>(static_cast<std::underlying_type<VkSamplerCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkSamplerCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSamplerCreateFlagBits operator^(const VkSamplerCreateFlagBits & a, const VkSamplerCreateFlagBits & b)
{
    return static_cast<VkSamplerCreateFlagBits>(static_cast<std::underlying_type<VkSamplerCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkSamplerCreateFlagBits>::type>(b));
}

inline VkSamplerCreateFlagBits & operator^=(VkSamplerCreateFlagBits & a, const VkSamplerCreateFlagBits & b)
{
    a = static_cast<VkSamplerCreateFlagBits>(static_cast<std::underlying_type<VkSamplerCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkSamplerCreateFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkSemaphoreImportFlagBits>
{
    std::size_t operator()(const vk::VkSemaphoreImportFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkSemaphoreImportFlagBits>::type>()(static_cast<std::underlying_type<vk::VkSemaphoreImportFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkSemaphoreImportFlagBits operator|(const VkSemaphoreImportFlagBits & a, const VkSemaphoreImportFlagBits & b)
{
    return static_cast<VkSemaphoreImportFlagBits>(static_cast<std::underlying_type<VkSemaphoreImportFlagBits>::type>(a) | static_cast<std::underlying_type<VkSemaphoreImportFlagBits>::type>(b));
}

inline VkSemaphoreImportFlagBits & operator|=(VkSemaphoreImportFlagBits & a, const VkSemaphoreImportFlagBits & b)
{
    a = static_cast<VkSemaphoreImportFlagBits>(static_cast<std::underlying_type<VkSemaphoreImportFlagBits>::type>(a) | static_cast<std::underlying_type<VkSemaphoreImportFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSemaphoreImportFlagBits operator&(const VkSemaphoreImportFlagBits & a, const VkSemaphoreImportFlagBits & b)
{
    return static_cast<VkSemaphoreImportFlagBits>(static_cast<std::underlying_type<VkSemaphoreImportFlagBits>::type>(a) & static_cast<std::underlying_type<VkSemaphoreImportFlagBits>::type>(b));
}

inline VkSemaphoreImportFlagBits & operator&=(VkSemaphoreImportFlagBits & a, const VkSemaphoreImportFlagBits & b)
{
    a = static_cast<VkSemaphoreImportFlagBits>(static_cast<std::underlying_type<VkSemaphoreImportFlagBits>::type>(a) & static_cast<std::underlying_type<VkSemaphoreImportFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSemaphoreImportFlagBits operator^(const VkSemaphoreImportFlagBits & a, const VkSemaphoreImportFlagBits & b)
{
    return static_cast<VkSemaphoreImportFlagBits>(static_cast<std::underlying_type<VkSemaphoreImportFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkSemaphoreImportFlagBits>::type>(b));
}

inline VkSemaphoreImportFlagBits & operator^=(VkSemaphoreImportFlagBits & a, const VkSemaphoreImportFlagBits & b)
{
    a = static_cast<VkSemaphoreImportFlagBits>(static_cast<std::underlying_type<VkSemaphoreImportFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkSemaphoreImportFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkSemaphoreImportFlagBitsKHR>
{
    std::size_t operator()(const vk::VkSemaphoreImportFlagBitsKHR & t) const
    {
        return hash<std::underlying_type<vk::VkSemaphoreImportFlagBitsKHR>::type>()(static_cast<std::underlying_type<vk::VkSemaphoreImportFlagBitsKHR>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkSemaphoreImportFlagBitsKHR operator|(const VkSemaphoreImportFlagBitsKHR & a, const VkSemaphoreImportFlagBitsKHR & b)
{
    return static_cast<VkSemaphoreImportFlagBitsKHR>(static_cast<std::underlying_type<VkSemaphoreImportFlagBitsKHR>::type>(a) | static_cast<std::underlying_type<VkSemaphoreImportFlagBitsKHR>::type>(b));
}

inline VkSemaphoreImportFlagBitsKHR & operator|=(VkSemaphoreImportFlagBitsKHR & a, const VkSemaphoreImportFlagBitsKHR & b)
{
    a = static_cast<VkSemaphoreImportFlagBitsKHR>(static_cast<std::underlying_type<VkSemaphoreImportFlagBitsKHR>::type>(a) | static_cast<std::underlying_type<VkSemaphoreImportFlagBitsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSemaphoreImportFlagBitsKHR operator&(const VkSemaphoreImportFlagBitsKHR & a, const VkSemaphoreImportFlagBitsKHR & b)
{
    return static_cast<VkSemaphoreImportFlagBitsKHR>(static_cast<std::underlying_type<VkSemaphoreImportFlagBitsKHR>::type>(a) & static_cast<std::underlying_type<VkSemaphoreImportFlagBitsKHR>::type>(b));
}

inline VkSemaphoreImportFlagBitsKHR & operator&=(VkSemaphoreImportFlagBitsKHR & a, const VkSemaphoreImportFlagBitsKHR & b)
{
    a = static_cast<VkSemaphoreImportFlagBitsKHR>(static_cast<std::underlying_type<VkSemaphoreImportFlagBitsKHR>::type>(a) & static_cast<std::underlying_type<VkSemaphoreImportFlagBitsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSemaphoreImportFlagBitsKHR operator^(const VkSemaphoreImportFlagBitsKHR & a, const VkSemaphoreImportFlagBitsKHR & b)
{
    return static_cast<VkSemaphoreImportFlagBitsKHR>(static_cast<std::underlying_type<VkSemaphoreImportFlagBitsKHR>::type>(a) ^ static_cast<std::underlying_type<VkSemaphoreImportFlagBitsKHR>::type>(b));
}

inline VkSemaphoreImportFlagBitsKHR & operator^=(VkSemaphoreImportFlagBitsKHR & a, const VkSemaphoreImportFlagBitsKHR & b)
{
    a = static_cast<VkSemaphoreImportFlagBitsKHR>(static_cast<std::underlying_type<VkSemaphoreImportFlagBitsKHR>::type>(a) ^ static_cast<std::underlying_type<VkSemaphoreImportFlagBitsKHR>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkShaderModuleCreateFlagBits>
{
    std::size_t operator()(const vk::VkShaderModuleCreateFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkShaderModuleCreateFlagBits>::type>()(static_cast<std::underlying_type<vk::VkShaderModuleCreateFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkShaderModuleCreateFlagBits operator|(const VkShaderModuleCreateFlagBits & a, const VkShaderModuleCreateFlagBits & b)
{
    return static_cast<VkShaderModuleCreateFlagBits>(static_cast<std::underlying_type<VkShaderModuleCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkShaderModuleCreateFlagBits>::type>(b));
}

inline VkShaderModuleCreateFlagBits & operator|=(VkShaderModuleCreateFlagBits & a, const VkShaderModuleCreateFlagBits & b)
{
    a = static_cast<VkShaderModuleCreateFlagBits>(static_cast<std::underlying_type<VkShaderModuleCreateFlagBits>::type>(a) | static_cast<std::underlying_type<VkShaderModuleCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkShaderModuleCreateFlagBits operator&(const VkShaderModuleCreateFlagBits & a, const VkShaderModuleCreateFlagBits & b)
{
    return static_cast<VkShaderModuleCreateFlagBits>(static_cast<std::underlying_type<VkShaderModuleCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkShaderModuleCreateFlagBits>::type>(b));
}

inline VkShaderModuleCreateFlagBits & operator&=(VkShaderModuleCreateFlagBits & a, const VkShaderModuleCreateFlagBits & b)
{
    a = static_cast<VkShaderModuleCreateFlagBits>(static_cast<std::underlying_type<VkShaderModuleCreateFlagBits>::type>(a) & static_cast<std::underlying_type<VkShaderModuleCreateFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkShaderModuleCreateFlagBits operator^(const VkShaderModuleCreateFlagBits & a, const VkShaderModuleCreateFlagBits & b)
{
    return static_cast<VkShaderModuleCreateFlagBits>(static_cast<std::underlying_type<VkShaderModuleCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkShaderModuleCreateFlagBits>::type>(b));
}

inline VkShaderModuleCreateFlagBits & operator^=(VkShaderModuleCreateFlagBits & a, const VkShaderModuleCreateFlagBits & b)
{
    a = static_cast<VkShaderModuleCreateFlagBits>(static_cast<std::underlying_type<VkShaderModuleCreateFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkShaderModuleCreateFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkShaderStageFlagBits>
{
    std::size_t operator()(const vk::VkShaderStageFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkShaderStageFlagBits>::type>()(static_cast<std::underlying_type<vk::VkShaderStageFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkShaderStageFlagBits operator|(const VkShaderStageFlagBits & a, const VkShaderStageFlagBits & b)
{
    return static_cast<VkShaderStageFlagBits>(static_cast<std::underlying_type<VkShaderStageFlagBits>::type>(a) | static_cast<std::underlying_type<VkShaderStageFlagBits>::type>(b));
}

inline VkShaderStageFlagBits & operator|=(VkShaderStageFlagBits & a, const VkShaderStageFlagBits & b)
{
    a = static_cast<VkShaderStageFlagBits>(static_cast<std::underlying_type<VkShaderStageFlagBits>::type>(a) | static_cast<std::underlying_type<VkShaderStageFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkShaderStageFlagBits operator&(const VkShaderStageFlagBits & a, const VkShaderStageFlagBits & b)
{
    return static_cast<VkShaderStageFlagBits>(static_cast<std::underlying_type<VkShaderStageFlagBits>::type>(a) & static_cast<std::underlying_type<VkShaderStageFlagBits>::type>(b));
}

inline VkShaderStageFlagBits & operator&=(VkShaderStageFlagBits & a, const VkShaderStageFlagBits & b)
{
    a = static_cast<VkShaderStageFlagBits>(static_cast<std::underlying_type<VkShaderStageFlagBits>::type>(a) & static_cast<std::underlying_type<VkShaderStageFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkShaderStageFlagBits operator^(const VkShaderStageFlagBits & a, const VkShaderStageFlagBits & b)
{
    return static_cast<VkShaderStageFlagBits>(static_cast<std::underlying_type<VkShaderStageFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkShaderStageFlagBits>::type>(b));
}

inline VkShaderStageFlagBits & operator^=(VkShaderStageFlagBits & a, const VkShaderStageFlagBits & b)
{
    a = static_cast<VkShaderStageFlagBits>(static_cast<std::underlying_type<VkShaderStageFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkShaderStageFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkSparseImageFormatFlagBits>
{
    std::size_t operator()(const vk::VkSparseImageFormatFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkSparseImageFormatFlagBits>::type>()(static_cast<std::underlying_type<vk::VkSparseImageFormatFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkSparseImageFormatFlagBits operator|(const VkSparseImageFormatFlagBits & a, const VkSparseImageFormatFlagBits & b)
{
    return static_cast<VkSparseImageFormatFlagBits>(static_cast<std::underlying_type<VkSparseImageFormatFlagBits>::type>(a) | static_cast<std::underlying_type<VkSparseImageFormatFlagBits>::type>(b));
}

inline VkSparseImageFormatFlagBits & operator|=(VkSparseImageFormatFlagBits & a, const VkSparseImageFormatFlagBits & b)
{
    a = static_cast<VkSparseImageFormatFlagBits>(static_cast<std::underlying_type<VkSparseImageFormatFlagBits>::type>(a) | static_cast<std::underlying_type<VkSparseImageFormatFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSparseImageFormatFlagBits operator&(const VkSparseImageFormatFlagBits & a, const VkSparseImageFormatFlagBits & b)
{
    return static_cast<VkSparseImageFormatFlagBits>(static_cast<std::underlying_type<VkSparseImageFormatFlagBits>::type>(a) & static_cast<std::underlying_type<VkSparseImageFormatFlagBits>::type>(b));
}

inline VkSparseImageFormatFlagBits & operator&=(VkSparseImageFormatFlagBits & a, const VkSparseImageFormatFlagBits & b)
{
    a = static_cast<VkSparseImageFormatFlagBits>(static_cast<std::underlying_type<VkSparseImageFormatFlagBits>::type>(a) & static_cast<std::underlying_type<VkSparseImageFormatFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSparseImageFormatFlagBits operator^(const VkSparseImageFormatFlagBits & a, const VkSparseImageFormatFlagBits & b)
{
    return static_cast<VkSparseImageFormatFlagBits>(static_cast<std::underlying_type<VkSparseImageFormatFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkSparseImageFormatFlagBits>::type>(b));
}

inline VkSparseImageFormatFlagBits & operator^=(VkSparseImageFormatFlagBits & a, const VkSparseImageFormatFlagBits & b)
{
    a = static_cast<VkSparseImageFormatFlagBits>(static_cast<std::underlying_type<VkSparseImageFormatFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkSparseImageFormatFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkSparseMemoryBindFlagBits>
{
    std::size_t operator()(const vk::VkSparseMemoryBindFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkSparseMemoryBindFlagBits>::type>()(static_cast<std::underlying_type<vk::VkSparseMemoryBindFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkSparseMemoryBindFlagBits operator|(const VkSparseMemoryBindFlagBits & a, const VkSparseMemoryBindFlagBits & b)
{
    return static_cast<VkSparseMemoryBindFlagBits>(static_cast<std::underlying_type<VkSparseMemoryBindFlagBits>::type>(a) | static_cast<std::underlying_type<VkSparseMemoryBindFlagBits>::type>(b));
}

inline VkSparseMemoryBindFlagBits & operator|=(VkSparseMemoryBindFlagBits & a, const VkSparseMemoryBindFlagBits & b)
{
    a = static_cast<VkSparseMemoryBindFlagBits>(static_cast<std::underlying_type<VkSparseMemoryBindFlagBits>::type>(a) | static_cast<std::underlying_type<VkSparseMemoryBindFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSparseMemoryBindFlagBits operator&(const VkSparseMemoryBindFlagBits & a, const VkSparseMemoryBindFlagBits & b)
{
    return static_cast<VkSparseMemoryBindFlagBits>(static_cast<std::underlying_type<VkSparseMemoryBindFlagBits>::type>(a) & static_cast<std::underlying_type<VkSparseMemoryBindFlagBits>::type>(b));
}

inline VkSparseMemoryBindFlagBits & operator&=(VkSparseMemoryBindFlagBits & a, const VkSparseMemoryBindFlagBits & b)
{
    a = static_cast<VkSparseMemoryBindFlagBits>(static_cast<std::underlying_type<VkSparseMemoryBindFlagBits>::type>(a) & static_cast<std::underlying_type<VkSparseMemoryBindFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSparseMemoryBindFlagBits operator^(const VkSparseMemoryBindFlagBits & a, const VkSparseMemoryBindFlagBits & b)
{
    return static_cast<VkSparseMemoryBindFlagBits>(static_cast<std::underlying_type<VkSparseMemoryBindFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkSparseMemoryBindFlagBits>::type>(b));
}

inline VkSparseMemoryBindFlagBits & operator^=(VkSparseMemoryBindFlagBits & a, const VkSparseMemoryBindFlagBits & b)
{
    a = static_cast<VkSparseMemoryBindFlagBits>(static_cast<std::underlying_type<VkSparseMemoryBindFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkSparseMemoryBindFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkStencilFaceFlagBits>
{
    std::size_t operator()(const vk::VkStencilFaceFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkStencilFaceFlagBits>::type>()(static_cast<std::underlying_type<vk::VkStencilFaceFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkStencilFaceFlagBits operator|(const VkStencilFaceFlagBits & a, const VkStencilFaceFlagBits & b)
{
    return static_cast<VkStencilFaceFlagBits>(static_cast<std::underlying_type<VkStencilFaceFlagBits>::type>(a) | static_cast<std::underlying_type<VkStencilFaceFlagBits>::type>(b));
}

inline VkStencilFaceFlagBits & operator|=(VkStencilFaceFlagBits & a, const VkStencilFaceFlagBits & b)
{
    a = static_cast<VkStencilFaceFlagBits>(static_cast<std::underlying_type<VkStencilFaceFlagBits>::type>(a) | static_cast<std::underlying_type<VkStencilFaceFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkStencilFaceFlagBits operator&(const VkStencilFaceFlagBits & a, const VkStencilFaceFlagBits & b)
{
    return static_cast<VkStencilFaceFlagBits>(static_cast<std::underlying_type<VkStencilFaceFlagBits>::type>(a) & static_cast<std::underlying_type<VkStencilFaceFlagBits>::type>(b));
}

inline VkStencilFaceFlagBits & operator&=(VkStencilFaceFlagBits & a, const VkStencilFaceFlagBits & b)
{
    a = static_cast<VkStencilFaceFlagBits>(static_cast<std::underlying_type<VkStencilFaceFlagBits>::type>(a) & static_cast<std::underlying_type<VkStencilFaceFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkStencilFaceFlagBits operator^(const VkStencilFaceFlagBits & a, const VkStencilFaceFlagBits & b)
{
    return static_cast<VkStencilFaceFlagBits>(static_cast<std::underlying_type<VkStencilFaceFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkStencilFaceFlagBits>::type>(b));
}

inline VkStencilFaceFlagBits & operator^=(VkStencilFaceFlagBits & a, const VkStencilFaceFlagBits & b)
{
    a = static_cast<VkStencilFaceFlagBits>(static_cast<std::underlying_type<VkStencilFaceFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkStencilFaceFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkSubgroupFeatureFlagBits>
{
    std::size_t operator()(const vk::VkSubgroupFeatureFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkSubgroupFeatureFlagBits>::type>()(static_cast<std::underlying_type<vk::VkSubgroupFeatureFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkSubgroupFeatureFlagBits operator|(const VkSubgroupFeatureFlagBits & a, const VkSubgroupFeatureFlagBits & b)
{
    return static_cast<VkSubgroupFeatureFlagBits>(static_cast<std::underlying_type<VkSubgroupFeatureFlagBits>::type>(a) | static_cast<std::underlying_type<VkSubgroupFeatureFlagBits>::type>(b));
}

inline VkSubgroupFeatureFlagBits & operator|=(VkSubgroupFeatureFlagBits & a, const VkSubgroupFeatureFlagBits & b)
{
    a = static_cast<VkSubgroupFeatureFlagBits>(static_cast<std::underlying_type<VkSubgroupFeatureFlagBits>::type>(a) | static_cast<std::underlying_type<VkSubgroupFeatureFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSubgroupFeatureFlagBits operator&(const VkSubgroupFeatureFlagBits & a, const VkSubgroupFeatureFlagBits & b)
{
    return static_cast<VkSubgroupFeatureFlagBits>(static_cast<std::underlying_type<VkSubgroupFeatureFlagBits>::type>(a) & static_cast<std::underlying_type<VkSubgroupFeatureFlagBits>::type>(b));
}

inline VkSubgroupFeatureFlagBits & operator&=(VkSubgroupFeatureFlagBits & a, const VkSubgroupFeatureFlagBits & b)
{
    a = static_cast<VkSubgroupFeatureFlagBits>(static_cast<std::underlying_type<VkSubgroupFeatureFlagBits>::type>(a) & static_cast<std::underlying_type<VkSubgroupFeatureFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSubgroupFeatureFlagBits operator^(const VkSubgroupFeatureFlagBits & a, const VkSubgroupFeatureFlagBits & b)
{
    return static_cast<VkSubgroupFeatureFlagBits>(static_cast<std::underlying_type<VkSubgroupFeatureFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkSubgroupFeatureFlagBits>::type>(b));
}

inline VkSubgroupFeatureFlagBits & operator^=(VkSubgroupFeatureFlagBits & a, const VkSubgroupFeatureFlagBits & b)
{
    a = static_cast<VkSubgroupFeatureFlagBits>(static_cast<std::underlying_type<VkSubgroupFeatureFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkSubgroupFeatureFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkSubpassDescriptionFlagBits>
{
    std::size_t operator()(const vk::VkSubpassDescriptionFlagBits & t) const
    {
        return hash<std::underlying_type<vk::VkSubpassDescriptionFlagBits>::type>()(static_cast<std::underlying_type<vk::VkSubpassDescriptionFlagBits>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkSubpassDescriptionFlagBits operator|(const VkSubpassDescriptionFlagBits & a, const VkSubpassDescriptionFlagBits & b)
{
    return static_cast<VkSubpassDescriptionFlagBits>(static_cast<std::underlying_type<VkSubpassDescriptionFlagBits>::type>(a) | static_cast<std::underlying_type<VkSubpassDescriptionFlagBits>::type>(b));
}

inline VkSubpassDescriptionFlagBits & operator|=(VkSubpassDescriptionFlagBits & a, const VkSubpassDescriptionFlagBits & b)
{
    a = static_cast<VkSubpassDescriptionFlagBits>(static_cast<std::underlying_type<VkSubpassDescriptionFlagBits>::type>(a) | static_cast<std::underlying_type<VkSubpassDescriptionFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSubpassDescriptionFlagBits operator&(const VkSubpassDescriptionFlagBits & a, const VkSubpassDescriptionFlagBits & b)
{
    return static_cast<VkSubpassDescriptionFlagBits>(static_cast<std::underlying_type<VkSubpassDescriptionFlagBits>::type>(a) & static_cast<std::underlying_type<VkSubpassDescriptionFlagBits>::type>(b));
}

inline VkSubpassDescriptionFlagBits & operator&=(VkSubpassDescriptionFlagBits & a, const VkSubpassDescriptionFlagBits & b)
{
    a = static_cast<VkSubpassDescriptionFlagBits>(static_cast<std::underlying_type<VkSubpassDescriptionFlagBits>::type>(a) & static_cast<std::underlying_type<VkSubpassDescriptionFlagBits>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSubpassDescriptionFlagBits operator^(const VkSubpassDescriptionFlagBits & a, const VkSubpassDescriptionFlagBits & b)
{
    return static_cast<VkSubpassDescriptionFlagBits>(static_cast<std::underlying_type<VkSubpassDescriptionFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkSubpassDescriptionFlagBits>::type>(b));
}

inline VkSubpassDescriptionFlagBits & operator^=(VkSubpassDescriptionFlagBits & a, const VkSubpassDescriptionFlagBits & b)
{
    a = static_cast<VkSubpassDescriptionFlagBits>(static_cast<std::underlying_type<VkSubpassDescriptionFlagBits>::type>(a) ^ static_cast<std::underlying_type<VkSubpassDescriptionFlagBits>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkSurfaceCounterFlagBitsEXT>
{
    std::size_t operator()(const vk::VkSurfaceCounterFlagBitsEXT & t) const
    {
        return hash<std::underlying_type<vk::VkSurfaceCounterFlagBitsEXT>::type>()(static_cast<std::underlying_type<vk::VkSurfaceCounterFlagBitsEXT>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkSurfaceCounterFlagBitsEXT operator|(const VkSurfaceCounterFlagBitsEXT & a, const VkSurfaceCounterFlagBitsEXT & b)
{
    return static_cast<VkSurfaceCounterFlagBitsEXT>(static_cast<std::underlying_type<VkSurfaceCounterFlagBitsEXT>::type>(a) | static_cast<std::underlying_type<VkSurfaceCounterFlagBitsEXT>::type>(b));
}

inline VkSurfaceCounterFlagBitsEXT & operator|=(VkSurfaceCounterFlagBitsEXT & a, const VkSurfaceCounterFlagBitsEXT & b)
{
    a = static_cast<VkSurfaceCounterFlagBitsEXT>(static_cast<std::underlying_type<VkSurfaceCounterFlagBitsEXT>::type>(a) | static_cast<std::underlying_type<VkSurfaceCounterFlagBitsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSurfaceCounterFlagBitsEXT operator&(const VkSurfaceCounterFlagBitsEXT & a, const VkSurfaceCounterFlagBitsEXT & b)
{
    return static_cast<VkSurfaceCounterFlagBitsEXT>(static_cast<std::underlying_type<VkSurfaceCounterFlagBitsEXT>::type>(a) & static_cast<std::underlying_type<VkSurfaceCounterFlagBitsEXT>::type>(b));
}

inline VkSurfaceCounterFlagBitsEXT & operator&=(VkSurfaceCounterFlagBitsEXT & a, const VkSurfaceCounterFlagBitsEXT & b)
{
    a = static_cast<VkSurfaceCounterFlagBitsEXT>(static_cast<std::underlying_type<VkSurfaceCounterFlagBitsEXT>::type>(a) & static_cast<std::underlying_type<VkSurfaceCounterFlagBitsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSurfaceCounterFlagBitsEXT operator^(const VkSurfaceCounterFlagBitsEXT & a, const VkSurfaceCounterFlagBitsEXT & b)
{
    return static_cast<VkSurfaceCounterFlagBitsEXT>(static_cast<std::underlying_type<VkSurfaceCounterFlagBitsEXT>::type>(a) ^ static_cast<std::underlying_type<VkSurfaceCounterFlagBitsEXT>::type>(b));
}

inline VkSurfaceCounterFlagBitsEXT & operator^=(VkSurfaceCounterFlagBitsEXT & a, const VkSurfaceCounterFlagBitsEXT & b)
{
    a = static_cast<VkSurfaceCounterFlagBitsEXT>(static_cast<std::underlying_type<VkSurfaceCounterFlagBitsEXT>::type>(a) ^ static_cast<std::underlying_type<VkSurfaceCounterFlagBitsEXT>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkSurfaceTransformFlagBitsKHR>
{
    std::size_t operator()(const vk::VkSurfaceTransformFlagBitsKHR & t) const
    {
        return hash<std::underlying_type<vk::VkSurfaceTransformFlagBitsKHR>::type>()(static_cast<std::underlying_type<vk::VkSurfaceTransformFlagBitsKHR>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkSurfaceTransformFlagBitsKHR operator|(const VkSurfaceTransformFlagBitsKHR & a, const VkSurfaceTransformFlagBitsKHR & b)
{
    return static_cast<VkSurfaceTransformFlagBitsKHR>(static_cast<std::underlying_type<VkSurfaceTransformFlagBitsKHR>::type>(a) | static_cast<std::underlying_type<VkSurfaceTransformFlagBitsKHR>::type>(b));
}

inline VkSurfaceTransformFlagBitsKHR & operator|=(VkSurfaceTransformFlagBitsKHR & a, const VkSurfaceTransformFlagBitsKHR & b)
{
    a = static_cast<VkSurfaceTransformFlagBitsKHR>(static_cast<std::underlying_type<VkSurfaceTransformFlagBitsKHR>::type>(a) | static_cast<std::underlying_type<VkSurfaceTransformFlagBitsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSurfaceTransformFlagBitsKHR operator&(const VkSurfaceTransformFlagBitsKHR & a, const VkSurfaceTransformFlagBitsKHR & b)
{
    return static_cast<VkSurfaceTransformFlagBitsKHR>(static_cast<std::underlying_type<VkSurfaceTransformFlagBitsKHR>::type>(a) & static_cast<std::underlying_type<VkSurfaceTransformFlagBitsKHR>::type>(b));
}

inline VkSurfaceTransformFlagBitsKHR & operator&=(VkSurfaceTransformFlagBitsKHR & a, const VkSurfaceTransformFlagBitsKHR & b)
{
    a = static_cast<VkSurfaceTransformFlagBitsKHR>(static_cast<std::underlying_type<VkSurfaceTransformFlagBitsKHR>::type>(a) & static_cast<std::underlying_type<VkSurfaceTransformFlagBitsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSurfaceTransformFlagBitsKHR operator^(const VkSurfaceTransformFlagBitsKHR & a, const VkSurfaceTransformFlagBitsKHR & b)
{
    return static_cast<VkSurfaceTransformFlagBitsKHR>(static_cast<std::underlying_type<VkSurfaceTransformFlagBitsKHR>::type>(a) ^ static_cast<std::underlying_type<VkSurfaceTransformFlagBitsKHR>::type>(b));
}

inline VkSurfaceTransformFlagBitsKHR & operator^=(VkSurfaceTransformFlagBitsKHR & a, const VkSurfaceTransformFlagBitsKHR & b)
{
    a = static_cast<VkSurfaceTransformFlagBitsKHR>(static_cast<std::underlying_type<VkSurfaceTransformFlagBitsKHR>::type>(a) ^ static_cast<std::underlying_type<VkSurfaceTransformFlagBitsKHR>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkSwapchainCreateFlagBitsKHR>
{
    std::size_t operator()(const vk::VkSwapchainCreateFlagBitsKHR & t) const
    {
        return hash<std::underlying_type<vk::VkSwapchainCreateFlagBitsKHR>::type>()(static_cast<std::underlying_type<vk::VkSwapchainCreateFlagBitsKHR>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkSwapchainCreateFlagBitsKHR operator|(const VkSwapchainCreateFlagBitsKHR & a, const VkSwapchainCreateFlagBitsKHR & b)
{
    return static_cast<VkSwapchainCreateFlagBitsKHR>(static_cast<std::underlying_type<VkSwapchainCreateFlagBitsKHR>::type>(a) | static_cast<std::underlying_type<VkSwapchainCreateFlagBitsKHR>::type>(b));
}

inline VkSwapchainCreateFlagBitsKHR & operator|=(VkSwapchainCreateFlagBitsKHR & a, const VkSwapchainCreateFlagBitsKHR & b)
{
    a = static_cast<VkSwapchainCreateFlagBitsKHR>(static_cast<std::underlying_type<VkSwapchainCreateFlagBitsKHR>::type>(a) | static_cast<std::underlying_type<VkSwapchainCreateFlagBitsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSwapchainCreateFlagBitsKHR operator&(const VkSwapchainCreateFlagBitsKHR & a, const VkSwapchainCreateFlagBitsKHR & b)
{
    return static_cast<VkSwapchainCreateFlagBitsKHR>(static_cast<std::underlying_type<VkSwapchainCreateFlagBitsKHR>::type>(a) & static_cast<std::underlying_type<VkSwapchainCreateFlagBitsKHR>::type>(b));
}

inline VkSwapchainCreateFlagBitsKHR & operator&=(VkSwapchainCreateFlagBitsKHR & a, const VkSwapchainCreateFlagBitsKHR & b)
{
    a = static_cast<VkSwapchainCreateFlagBitsKHR>(static_cast<std::underlying_type<VkSwapchainCreateFlagBitsKHR>::type>(a) & static_cast<std::underlying_type<VkSwapchainCreateFlagBitsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSwapchainCreateFlagBitsKHR operator^(const VkSwapchainCreateFlagBitsKHR & a, const VkSwapchainCreateFlagBitsKHR & b)
{
    return static_cast<VkSwapchainCreateFlagBitsKHR>(static_cast<std::underlying_type<VkSwapchainCreateFlagBitsKHR>::type>(a) ^ static_cast<std::underlying_type<VkSwapchainCreateFlagBitsKHR>::type>(b));
}

inline VkSwapchainCreateFlagBitsKHR & operator^=(VkSwapchainCreateFlagBitsKHR & a, const VkSwapchainCreateFlagBitsKHR & b)
{
    a = static_cast<VkSwapchainCreateFlagBitsKHR>(static_cast<std::underlying_type<VkSwapchainCreateFlagBitsKHR>::type>(a) ^ static_cast<std::underlying_type<VkSwapchainCreateFlagBitsKHR>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkSwapchainImageUsageFlagBitsANDROID>
{
    std::size_t operator()(const vk::VkSwapchainImageUsageFlagBitsANDROID & t) const
    {
        return hash<std::underlying_type<vk::VkSwapchainImageUsageFlagBitsANDROID>::type>()(static_cast<std::underlying_type<vk::VkSwapchainImageUsageFlagBitsANDROID>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkSwapchainImageUsageFlagBitsANDROID operator|(const VkSwapchainImageUsageFlagBitsANDROID & a, const VkSwapchainImageUsageFlagBitsANDROID & b)
{
    return static_cast<VkSwapchainImageUsageFlagBitsANDROID>(static_cast<std::underlying_type<VkSwapchainImageUsageFlagBitsANDROID>::type>(a) | static_cast<std::underlying_type<VkSwapchainImageUsageFlagBitsANDROID>::type>(b));
}

inline VkSwapchainImageUsageFlagBitsANDROID & operator|=(VkSwapchainImageUsageFlagBitsANDROID & a, const VkSwapchainImageUsageFlagBitsANDROID & b)
{
    a = static_cast<VkSwapchainImageUsageFlagBitsANDROID>(static_cast<std::underlying_type<VkSwapchainImageUsageFlagBitsANDROID>::type>(a) | static_cast<std::underlying_type<VkSwapchainImageUsageFlagBitsANDROID>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSwapchainImageUsageFlagBitsANDROID operator&(const VkSwapchainImageUsageFlagBitsANDROID & a, const VkSwapchainImageUsageFlagBitsANDROID & b)
{
    return static_cast<VkSwapchainImageUsageFlagBitsANDROID>(static_cast<std::underlying_type<VkSwapchainImageUsageFlagBitsANDROID>::type>(a) & static_cast<std::underlying_type<VkSwapchainImageUsageFlagBitsANDROID>::type>(b));
}

inline VkSwapchainImageUsageFlagBitsANDROID & operator&=(VkSwapchainImageUsageFlagBitsANDROID & a, const VkSwapchainImageUsageFlagBitsANDROID & b)
{
    a = static_cast<VkSwapchainImageUsageFlagBitsANDROID>(static_cast<std::underlying_type<VkSwapchainImageUsageFlagBitsANDROID>::type>(a) & static_cast<std::underlying_type<VkSwapchainImageUsageFlagBitsANDROID>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSwapchainImageUsageFlagBitsANDROID operator^(const VkSwapchainImageUsageFlagBitsANDROID & a, const VkSwapchainImageUsageFlagBitsANDROID & b)
{
    return static_cast<VkSwapchainImageUsageFlagBitsANDROID>(static_cast<std::underlying_type<VkSwapchainImageUsageFlagBitsANDROID>::type>(a) ^ static_cast<std::underlying_type<VkSwapchainImageUsageFlagBitsANDROID>::type>(b));
}

inline VkSwapchainImageUsageFlagBitsANDROID & operator^=(VkSwapchainImageUsageFlagBitsANDROID & a, const VkSwapchainImageUsageFlagBitsANDROID & b)
{
    a = static_cast<VkSwapchainImageUsageFlagBitsANDROID>(static_cast<std::underlying_type<VkSwapchainImageUsageFlagBitsANDROID>::type>(a) ^ static_cast<std::underlying_type<VkSwapchainImageUsageFlagBitsANDROID>::type>(b));

    return a;
}


} // namespace vk