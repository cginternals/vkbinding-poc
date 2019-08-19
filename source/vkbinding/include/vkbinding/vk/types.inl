
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
struct hash<vk::VkAccessFlags>
{
    std::size_t operator()(const vk::VkAccessFlags & t) const
    {
        return hash<std::underlying_type<vk::VkAccessFlags>::type>()(static_cast<std::underlying_type<vk::VkAccessFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkAccessFlags operator|(const VkAccessFlags & a, const VkAccessFlags & b)
{
    return static_cast<VkAccessFlags>(static_cast<std::underlying_type<VkAccessFlags>::type>(a) | static_cast<std::underlying_type<VkAccessFlags>::type>(b));
}

inline VkAccessFlags & operator|=(VkAccessFlags & a, const VkAccessFlags & b)
{
    a = static_cast<VkAccessFlags>(static_cast<std::underlying_type<VkAccessFlags>::type>(a) | static_cast<std::underlying_type<VkAccessFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkAccessFlags operator&(const VkAccessFlags & a, const VkAccessFlags & b)
{
    return static_cast<VkAccessFlags>(static_cast<std::underlying_type<VkAccessFlags>::type>(a) & static_cast<std::underlying_type<VkAccessFlags>::type>(b));
}

inline VkAccessFlags & operator&=(VkAccessFlags & a, const VkAccessFlags & b)
{
    a = static_cast<VkAccessFlags>(static_cast<std::underlying_type<VkAccessFlags>::type>(a) & static_cast<std::underlying_type<VkAccessFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkAccessFlags operator^(const VkAccessFlags & a, const VkAccessFlags & b)
{
    return static_cast<VkAccessFlags>(static_cast<std::underlying_type<VkAccessFlags>::type>(a) ^ static_cast<std::underlying_type<VkAccessFlags>::type>(b));
}

inline VkAccessFlags & operator^=(VkAccessFlags & a, const VkAccessFlags & b)
{
    a = static_cast<VkAccessFlags>(static_cast<std::underlying_type<VkAccessFlags>::type>(a) ^ static_cast<std::underlying_type<VkAccessFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkAttachmentDescriptionFlags>
{
    std::size_t operator()(const vk::VkAttachmentDescriptionFlags & t) const
    {
        return hash<std::underlying_type<vk::VkAttachmentDescriptionFlags>::type>()(static_cast<std::underlying_type<vk::VkAttachmentDescriptionFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkAttachmentDescriptionFlags operator|(const VkAttachmentDescriptionFlags & a, const VkAttachmentDescriptionFlags & b)
{
    return static_cast<VkAttachmentDescriptionFlags>(static_cast<std::underlying_type<VkAttachmentDescriptionFlags>::type>(a) | static_cast<std::underlying_type<VkAttachmentDescriptionFlags>::type>(b));
}

inline VkAttachmentDescriptionFlags & operator|=(VkAttachmentDescriptionFlags & a, const VkAttachmentDescriptionFlags & b)
{
    a = static_cast<VkAttachmentDescriptionFlags>(static_cast<std::underlying_type<VkAttachmentDescriptionFlags>::type>(a) | static_cast<std::underlying_type<VkAttachmentDescriptionFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkAttachmentDescriptionFlags operator&(const VkAttachmentDescriptionFlags & a, const VkAttachmentDescriptionFlags & b)
{
    return static_cast<VkAttachmentDescriptionFlags>(static_cast<std::underlying_type<VkAttachmentDescriptionFlags>::type>(a) & static_cast<std::underlying_type<VkAttachmentDescriptionFlags>::type>(b));
}

inline VkAttachmentDescriptionFlags & operator&=(VkAttachmentDescriptionFlags & a, const VkAttachmentDescriptionFlags & b)
{
    a = static_cast<VkAttachmentDescriptionFlags>(static_cast<std::underlying_type<VkAttachmentDescriptionFlags>::type>(a) & static_cast<std::underlying_type<VkAttachmentDescriptionFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkAttachmentDescriptionFlags operator^(const VkAttachmentDescriptionFlags & a, const VkAttachmentDescriptionFlags & b)
{
    return static_cast<VkAttachmentDescriptionFlags>(static_cast<std::underlying_type<VkAttachmentDescriptionFlags>::type>(a) ^ static_cast<std::underlying_type<VkAttachmentDescriptionFlags>::type>(b));
}

inline VkAttachmentDescriptionFlags & operator^=(VkAttachmentDescriptionFlags & a, const VkAttachmentDescriptionFlags & b)
{
    a = static_cast<VkAttachmentDescriptionFlags>(static_cast<std::underlying_type<VkAttachmentDescriptionFlags>::type>(a) ^ static_cast<std::underlying_type<VkAttachmentDescriptionFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkBufferCreateFlags>
{
    std::size_t operator()(const vk::VkBufferCreateFlags & t) const
    {
        return hash<std::underlying_type<vk::VkBufferCreateFlags>::type>()(static_cast<std::underlying_type<vk::VkBufferCreateFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkBufferCreateFlags operator|(const VkBufferCreateFlags & a, const VkBufferCreateFlags & b)
{
    return static_cast<VkBufferCreateFlags>(static_cast<std::underlying_type<VkBufferCreateFlags>::type>(a) | static_cast<std::underlying_type<VkBufferCreateFlags>::type>(b));
}

inline VkBufferCreateFlags & operator|=(VkBufferCreateFlags & a, const VkBufferCreateFlags & b)
{
    a = static_cast<VkBufferCreateFlags>(static_cast<std::underlying_type<VkBufferCreateFlags>::type>(a) | static_cast<std::underlying_type<VkBufferCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkBufferCreateFlags operator&(const VkBufferCreateFlags & a, const VkBufferCreateFlags & b)
{
    return static_cast<VkBufferCreateFlags>(static_cast<std::underlying_type<VkBufferCreateFlags>::type>(a) & static_cast<std::underlying_type<VkBufferCreateFlags>::type>(b));
}

inline VkBufferCreateFlags & operator&=(VkBufferCreateFlags & a, const VkBufferCreateFlags & b)
{
    a = static_cast<VkBufferCreateFlags>(static_cast<std::underlying_type<VkBufferCreateFlags>::type>(a) & static_cast<std::underlying_type<VkBufferCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkBufferCreateFlags operator^(const VkBufferCreateFlags & a, const VkBufferCreateFlags & b)
{
    return static_cast<VkBufferCreateFlags>(static_cast<std::underlying_type<VkBufferCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkBufferCreateFlags>::type>(b));
}

inline VkBufferCreateFlags & operator^=(VkBufferCreateFlags & a, const VkBufferCreateFlags & b)
{
    a = static_cast<VkBufferCreateFlags>(static_cast<std::underlying_type<VkBufferCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkBufferCreateFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkBufferUsageFlags>
{
    std::size_t operator()(const vk::VkBufferUsageFlags & t) const
    {
        return hash<std::underlying_type<vk::VkBufferUsageFlags>::type>()(static_cast<std::underlying_type<vk::VkBufferUsageFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkBufferUsageFlags operator|(const VkBufferUsageFlags & a, const VkBufferUsageFlags & b)
{
    return static_cast<VkBufferUsageFlags>(static_cast<std::underlying_type<VkBufferUsageFlags>::type>(a) | static_cast<std::underlying_type<VkBufferUsageFlags>::type>(b));
}

inline VkBufferUsageFlags & operator|=(VkBufferUsageFlags & a, const VkBufferUsageFlags & b)
{
    a = static_cast<VkBufferUsageFlags>(static_cast<std::underlying_type<VkBufferUsageFlags>::type>(a) | static_cast<std::underlying_type<VkBufferUsageFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkBufferUsageFlags operator&(const VkBufferUsageFlags & a, const VkBufferUsageFlags & b)
{
    return static_cast<VkBufferUsageFlags>(static_cast<std::underlying_type<VkBufferUsageFlags>::type>(a) & static_cast<std::underlying_type<VkBufferUsageFlags>::type>(b));
}

inline VkBufferUsageFlags & operator&=(VkBufferUsageFlags & a, const VkBufferUsageFlags & b)
{
    a = static_cast<VkBufferUsageFlags>(static_cast<std::underlying_type<VkBufferUsageFlags>::type>(a) & static_cast<std::underlying_type<VkBufferUsageFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkBufferUsageFlags operator^(const VkBufferUsageFlags & a, const VkBufferUsageFlags & b)
{
    return static_cast<VkBufferUsageFlags>(static_cast<std::underlying_type<VkBufferUsageFlags>::type>(a) ^ static_cast<std::underlying_type<VkBufferUsageFlags>::type>(b));
}

inline VkBufferUsageFlags & operator^=(VkBufferUsageFlags & a, const VkBufferUsageFlags & b)
{
    a = static_cast<VkBufferUsageFlags>(static_cast<std::underlying_type<VkBufferUsageFlags>::type>(a) ^ static_cast<std::underlying_type<VkBufferUsageFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkBufferViewCreateFlags>
{
    std::size_t operator()(const vk::VkBufferViewCreateFlags & t) const
    {
        return hash<std::underlying_type<vk::VkBufferViewCreateFlags>::type>()(static_cast<std::underlying_type<vk::VkBufferViewCreateFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkBufferViewCreateFlags operator|(const VkBufferViewCreateFlags & a, const VkBufferViewCreateFlags & b)
{
    return static_cast<VkBufferViewCreateFlags>(static_cast<std::underlying_type<VkBufferViewCreateFlags>::type>(a) | static_cast<std::underlying_type<VkBufferViewCreateFlags>::type>(b));
}

inline VkBufferViewCreateFlags & operator|=(VkBufferViewCreateFlags & a, const VkBufferViewCreateFlags & b)
{
    a = static_cast<VkBufferViewCreateFlags>(static_cast<std::underlying_type<VkBufferViewCreateFlags>::type>(a) | static_cast<std::underlying_type<VkBufferViewCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkBufferViewCreateFlags operator&(const VkBufferViewCreateFlags & a, const VkBufferViewCreateFlags & b)
{
    return static_cast<VkBufferViewCreateFlags>(static_cast<std::underlying_type<VkBufferViewCreateFlags>::type>(a) & static_cast<std::underlying_type<VkBufferViewCreateFlags>::type>(b));
}

inline VkBufferViewCreateFlags & operator&=(VkBufferViewCreateFlags & a, const VkBufferViewCreateFlags & b)
{
    a = static_cast<VkBufferViewCreateFlags>(static_cast<std::underlying_type<VkBufferViewCreateFlags>::type>(a) & static_cast<std::underlying_type<VkBufferViewCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkBufferViewCreateFlags operator^(const VkBufferViewCreateFlags & a, const VkBufferViewCreateFlags & b)
{
    return static_cast<VkBufferViewCreateFlags>(static_cast<std::underlying_type<VkBufferViewCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkBufferViewCreateFlags>::type>(b));
}

inline VkBufferViewCreateFlags & operator^=(VkBufferViewCreateFlags & a, const VkBufferViewCreateFlags & b)
{
    a = static_cast<VkBufferViewCreateFlags>(static_cast<std::underlying_type<VkBufferViewCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkBufferViewCreateFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkBuildAccelerationStructureFlagsNV>
{
    std::size_t operator()(const vk::VkBuildAccelerationStructureFlagsNV & t) const
    {
        return hash<std::underlying_type<vk::VkBuildAccelerationStructureFlagsNV>::type>()(static_cast<std::underlying_type<vk::VkBuildAccelerationStructureFlagsNV>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkBuildAccelerationStructureFlagsNV operator|(const VkBuildAccelerationStructureFlagsNV & a, const VkBuildAccelerationStructureFlagsNV & b)
{
    return static_cast<VkBuildAccelerationStructureFlagsNV>(static_cast<std::underlying_type<VkBuildAccelerationStructureFlagsNV>::type>(a) | static_cast<std::underlying_type<VkBuildAccelerationStructureFlagsNV>::type>(b));
}

inline VkBuildAccelerationStructureFlagsNV & operator|=(VkBuildAccelerationStructureFlagsNV & a, const VkBuildAccelerationStructureFlagsNV & b)
{
    a = static_cast<VkBuildAccelerationStructureFlagsNV>(static_cast<std::underlying_type<VkBuildAccelerationStructureFlagsNV>::type>(a) | static_cast<std::underlying_type<VkBuildAccelerationStructureFlagsNV>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkBuildAccelerationStructureFlagsNV operator&(const VkBuildAccelerationStructureFlagsNV & a, const VkBuildAccelerationStructureFlagsNV & b)
{
    return static_cast<VkBuildAccelerationStructureFlagsNV>(static_cast<std::underlying_type<VkBuildAccelerationStructureFlagsNV>::type>(a) & static_cast<std::underlying_type<VkBuildAccelerationStructureFlagsNV>::type>(b));
}

inline VkBuildAccelerationStructureFlagsNV & operator&=(VkBuildAccelerationStructureFlagsNV & a, const VkBuildAccelerationStructureFlagsNV & b)
{
    a = static_cast<VkBuildAccelerationStructureFlagsNV>(static_cast<std::underlying_type<VkBuildAccelerationStructureFlagsNV>::type>(a) & static_cast<std::underlying_type<VkBuildAccelerationStructureFlagsNV>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkBuildAccelerationStructureFlagsNV operator^(const VkBuildAccelerationStructureFlagsNV & a, const VkBuildAccelerationStructureFlagsNV & b)
{
    return static_cast<VkBuildAccelerationStructureFlagsNV>(static_cast<std::underlying_type<VkBuildAccelerationStructureFlagsNV>::type>(a) ^ static_cast<std::underlying_type<VkBuildAccelerationStructureFlagsNV>::type>(b));
}

inline VkBuildAccelerationStructureFlagsNV & operator^=(VkBuildAccelerationStructureFlagsNV & a, const VkBuildAccelerationStructureFlagsNV & b)
{
    a = static_cast<VkBuildAccelerationStructureFlagsNV>(static_cast<std::underlying_type<VkBuildAccelerationStructureFlagsNV>::type>(a) ^ static_cast<std::underlying_type<VkBuildAccelerationStructureFlagsNV>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkColorComponentFlags>
{
    std::size_t operator()(const vk::VkColorComponentFlags & t) const
    {
        return hash<std::underlying_type<vk::VkColorComponentFlags>::type>()(static_cast<std::underlying_type<vk::VkColorComponentFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkColorComponentFlags operator|(const VkColorComponentFlags & a, const VkColorComponentFlags & b)
{
    return static_cast<VkColorComponentFlags>(static_cast<std::underlying_type<VkColorComponentFlags>::type>(a) | static_cast<std::underlying_type<VkColorComponentFlags>::type>(b));
}

inline VkColorComponentFlags & operator|=(VkColorComponentFlags & a, const VkColorComponentFlags & b)
{
    a = static_cast<VkColorComponentFlags>(static_cast<std::underlying_type<VkColorComponentFlags>::type>(a) | static_cast<std::underlying_type<VkColorComponentFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkColorComponentFlags operator&(const VkColorComponentFlags & a, const VkColorComponentFlags & b)
{
    return static_cast<VkColorComponentFlags>(static_cast<std::underlying_type<VkColorComponentFlags>::type>(a) & static_cast<std::underlying_type<VkColorComponentFlags>::type>(b));
}

inline VkColorComponentFlags & operator&=(VkColorComponentFlags & a, const VkColorComponentFlags & b)
{
    a = static_cast<VkColorComponentFlags>(static_cast<std::underlying_type<VkColorComponentFlags>::type>(a) & static_cast<std::underlying_type<VkColorComponentFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkColorComponentFlags operator^(const VkColorComponentFlags & a, const VkColorComponentFlags & b)
{
    return static_cast<VkColorComponentFlags>(static_cast<std::underlying_type<VkColorComponentFlags>::type>(a) ^ static_cast<std::underlying_type<VkColorComponentFlags>::type>(b));
}

inline VkColorComponentFlags & operator^=(VkColorComponentFlags & a, const VkColorComponentFlags & b)
{
    a = static_cast<VkColorComponentFlags>(static_cast<std::underlying_type<VkColorComponentFlags>::type>(a) ^ static_cast<std::underlying_type<VkColorComponentFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkCommandBufferResetFlags>
{
    std::size_t operator()(const vk::VkCommandBufferResetFlags & t) const
    {
        return hash<std::underlying_type<vk::VkCommandBufferResetFlags>::type>()(static_cast<std::underlying_type<vk::VkCommandBufferResetFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkCommandBufferResetFlags operator|(const VkCommandBufferResetFlags & a, const VkCommandBufferResetFlags & b)
{
    return static_cast<VkCommandBufferResetFlags>(static_cast<std::underlying_type<VkCommandBufferResetFlags>::type>(a) | static_cast<std::underlying_type<VkCommandBufferResetFlags>::type>(b));
}

inline VkCommandBufferResetFlags & operator|=(VkCommandBufferResetFlags & a, const VkCommandBufferResetFlags & b)
{
    a = static_cast<VkCommandBufferResetFlags>(static_cast<std::underlying_type<VkCommandBufferResetFlags>::type>(a) | static_cast<std::underlying_type<VkCommandBufferResetFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkCommandBufferResetFlags operator&(const VkCommandBufferResetFlags & a, const VkCommandBufferResetFlags & b)
{
    return static_cast<VkCommandBufferResetFlags>(static_cast<std::underlying_type<VkCommandBufferResetFlags>::type>(a) & static_cast<std::underlying_type<VkCommandBufferResetFlags>::type>(b));
}

inline VkCommandBufferResetFlags & operator&=(VkCommandBufferResetFlags & a, const VkCommandBufferResetFlags & b)
{
    a = static_cast<VkCommandBufferResetFlags>(static_cast<std::underlying_type<VkCommandBufferResetFlags>::type>(a) & static_cast<std::underlying_type<VkCommandBufferResetFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkCommandBufferResetFlags operator^(const VkCommandBufferResetFlags & a, const VkCommandBufferResetFlags & b)
{
    return static_cast<VkCommandBufferResetFlags>(static_cast<std::underlying_type<VkCommandBufferResetFlags>::type>(a) ^ static_cast<std::underlying_type<VkCommandBufferResetFlags>::type>(b));
}

inline VkCommandBufferResetFlags & operator^=(VkCommandBufferResetFlags & a, const VkCommandBufferResetFlags & b)
{
    a = static_cast<VkCommandBufferResetFlags>(static_cast<std::underlying_type<VkCommandBufferResetFlags>::type>(a) ^ static_cast<std::underlying_type<VkCommandBufferResetFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkCommandBufferUsageFlags>
{
    std::size_t operator()(const vk::VkCommandBufferUsageFlags & t) const
    {
        return hash<std::underlying_type<vk::VkCommandBufferUsageFlags>::type>()(static_cast<std::underlying_type<vk::VkCommandBufferUsageFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkCommandBufferUsageFlags operator|(const VkCommandBufferUsageFlags & a, const VkCommandBufferUsageFlags & b)
{
    return static_cast<VkCommandBufferUsageFlags>(static_cast<std::underlying_type<VkCommandBufferUsageFlags>::type>(a) | static_cast<std::underlying_type<VkCommandBufferUsageFlags>::type>(b));
}

inline VkCommandBufferUsageFlags & operator|=(VkCommandBufferUsageFlags & a, const VkCommandBufferUsageFlags & b)
{
    a = static_cast<VkCommandBufferUsageFlags>(static_cast<std::underlying_type<VkCommandBufferUsageFlags>::type>(a) | static_cast<std::underlying_type<VkCommandBufferUsageFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkCommandBufferUsageFlags operator&(const VkCommandBufferUsageFlags & a, const VkCommandBufferUsageFlags & b)
{
    return static_cast<VkCommandBufferUsageFlags>(static_cast<std::underlying_type<VkCommandBufferUsageFlags>::type>(a) & static_cast<std::underlying_type<VkCommandBufferUsageFlags>::type>(b));
}

inline VkCommandBufferUsageFlags & operator&=(VkCommandBufferUsageFlags & a, const VkCommandBufferUsageFlags & b)
{
    a = static_cast<VkCommandBufferUsageFlags>(static_cast<std::underlying_type<VkCommandBufferUsageFlags>::type>(a) & static_cast<std::underlying_type<VkCommandBufferUsageFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkCommandBufferUsageFlags operator^(const VkCommandBufferUsageFlags & a, const VkCommandBufferUsageFlags & b)
{
    return static_cast<VkCommandBufferUsageFlags>(static_cast<std::underlying_type<VkCommandBufferUsageFlags>::type>(a) ^ static_cast<std::underlying_type<VkCommandBufferUsageFlags>::type>(b));
}

inline VkCommandBufferUsageFlags & operator^=(VkCommandBufferUsageFlags & a, const VkCommandBufferUsageFlags & b)
{
    a = static_cast<VkCommandBufferUsageFlags>(static_cast<std::underlying_type<VkCommandBufferUsageFlags>::type>(a) ^ static_cast<std::underlying_type<VkCommandBufferUsageFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkCommandPoolCreateFlags>
{
    std::size_t operator()(const vk::VkCommandPoolCreateFlags & t) const
    {
        return hash<std::underlying_type<vk::VkCommandPoolCreateFlags>::type>()(static_cast<std::underlying_type<vk::VkCommandPoolCreateFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkCommandPoolCreateFlags operator|(const VkCommandPoolCreateFlags & a, const VkCommandPoolCreateFlags & b)
{
    return static_cast<VkCommandPoolCreateFlags>(static_cast<std::underlying_type<VkCommandPoolCreateFlags>::type>(a) | static_cast<std::underlying_type<VkCommandPoolCreateFlags>::type>(b));
}

inline VkCommandPoolCreateFlags & operator|=(VkCommandPoolCreateFlags & a, const VkCommandPoolCreateFlags & b)
{
    a = static_cast<VkCommandPoolCreateFlags>(static_cast<std::underlying_type<VkCommandPoolCreateFlags>::type>(a) | static_cast<std::underlying_type<VkCommandPoolCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkCommandPoolCreateFlags operator&(const VkCommandPoolCreateFlags & a, const VkCommandPoolCreateFlags & b)
{
    return static_cast<VkCommandPoolCreateFlags>(static_cast<std::underlying_type<VkCommandPoolCreateFlags>::type>(a) & static_cast<std::underlying_type<VkCommandPoolCreateFlags>::type>(b));
}

inline VkCommandPoolCreateFlags & operator&=(VkCommandPoolCreateFlags & a, const VkCommandPoolCreateFlags & b)
{
    a = static_cast<VkCommandPoolCreateFlags>(static_cast<std::underlying_type<VkCommandPoolCreateFlags>::type>(a) & static_cast<std::underlying_type<VkCommandPoolCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkCommandPoolCreateFlags operator^(const VkCommandPoolCreateFlags & a, const VkCommandPoolCreateFlags & b)
{
    return static_cast<VkCommandPoolCreateFlags>(static_cast<std::underlying_type<VkCommandPoolCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkCommandPoolCreateFlags>::type>(b));
}

inline VkCommandPoolCreateFlags & operator^=(VkCommandPoolCreateFlags & a, const VkCommandPoolCreateFlags & b)
{
    a = static_cast<VkCommandPoolCreateFlags>(static_cast<std::underlying_type<VkCommandPoolCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkCommandPoolCreateFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkCommandPoolResetFlags>
{
    std::size_t operator()(const vk::VkCommandPoolResetFlags & t) const
    {
        return hash<std::underlying_type<vk::VkCommandPoolResetFlags>::type>()(static_cast<std::underlying_type<vk::VkCommandPoolResetFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkCommandPoolResetFlags operator|(const VkCommandPoolResetFlags & a, const VkCommandPoolResetFlags & b)
{
    return static_cast<VkCommandPoolResetFlags>(static_cast<std::underlying_type<VkCommandPoolResetFlags>::type>(a) | static_cast<std::underlying_type<VkCommandPoolResetFlags>::type>(b));
}

inline VkCommandPoolResetFlags & operator|=(VkCommandPoolResetFlags & a, const VkCommandPoolResetFlags & b)
{
    a = static_cast<VkCommandPoolResetFlags>(static_cast<std::underlying_type<VkCommandPoolResetFlags>::type>(a) | static_cast<std::underlying_type<VkCommandPoolResetFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkCommandPoolResetFlags operator&(const VkCommandPoolResetFlags & a, const VkCommandPoolResetFlags & b)
{
    return static_cast<VkCommandPoolResetFlags>(static_cast<std::underlying_type<VkCommandPoolResetFlags>::type>(a) & static_cast<std::underlying_type<VkCommandPoolResetFlags>::type>(b));
}

inline VkCommandPoolResetFlags & operator&=(VkCommandPoolResetFlags & a, const VkCommandPoolResetFlags & b)
{
    a = static_cast<VkCommandPoolResetFlags>(static_cast<std::underlying_type<VkCommandPoolResetFlags>::type>(a) & static_cast<std::underlying_type<VkCommandPoolResetFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkCommandPoolResetFlags operator^(const VkCommandPoolResetFlags & a, const VkCommandPoolResetFlags & b)
{
    return static_cast<VkCommandPoolResetFlags>(static_cast<std::underlying_type<VkCommandPoolResetFlags>::type>(a) ^ static_cast<std::underlying_type<VkCommandPoolResetFlags>::type>(b));
}

inline VkCommandPoolResetFlags & operator^=(VkCommandPoolResetFlags & a, const VkCommandPoolResetFlags & b)
{
    a = static_cast<VkCommandPoolResetFlags>(static_cast<std::underlying_type<VkCommandPoolResetFlags>::type>(a) ^ static_cast<std::underlying_type<VkCommandPoolResetFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkCommandPoolTrimFlags>
{
    std::size_t operator()(const vk::VkCommandPoolTrimFlags & t) const
    {
        return hash<std::underlying_type<vk::VkCommandPoolTrimFlags>::type>()(static_cast<std::underlying_type<vk::VkCommandPoolTrimFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkCommandPoolTrimFlags operator|(const VkCommandPoolTrimFlags & a, const VkCommandPoolTrimFlags & b)
{
    return static_cast<VkCommandPoolTrimFlags>(static_cast<std::underlying_type<VkCommandPoolTrimFlags>::type>(a) | static_cast<std::underlying_type<VkCommandPoolTrimFlags>::type>(b));
}

inline VkCommandPoolTrimFlags & operator|=(VkCommandPoolTrimFlags & a, const VkCommandPoolTrimFlags & b)
{
    a = static_cast<VkCommandPoolTrimFlags>(static_cast<std::underlying_type<VkCommandPoolTrimFlags>::type>(a) | static_cast<std::underlying_type<VkCommandPoolTrimFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkCommandPoolTrimFlags operator&(const VkCommandPoolTrimFlags & a, const VkCommandPoolTrimFlags & b)
{
    return static_cast<VkCommandPoolTrimFlags>(static_cast<std::underlying_type<VkCommandPoolTrimFlags>::type>(a) & static_cast<std::underlying_type<VkCommandPoolTrimFlags>::type>(b));
}

inline VkCommandPoolTrimFlags & operator&=(VkCommandPoolTrimFlags & a, const VkCommandPoolTrimFlags & b)
{
    a = static_cast<VkCommandPoolTrimFlags>(static_cast<std::underlying_type<VkCommandPoolTrimFlags>::type>(a) & static_cast<std::underlying_type<VkCommandPoolTrimFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkCommandPoolTrimFlags operator^(const VkCommandPoolTrimFlags & a, const VkCommandPoolTrimFlags & b)
{
    return static_cast<VkCommandPoolTrimFlags>(static_cast<std::underlying_type<VkCommandPoolTrimFlags>::type>(a) ^ static_cast<std::underlying_type<VkCommandPoolTrimFlags>::type>(b));
}

inline VkCommandPoolTrimFlags & operator^=(VkCommandPoolTrimFlags & a, const VkCommandPoolTrimFlags & b)
{
    a = static_cast<VkCommandPoolTrimFlags>(static_cast<std::underlying_type<VkCommandPoolTrimFlags>::type>(a) ^ static_cast<std::underlying_type<VkCommandPoolTrimFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkCommandPoolTrimFlagsKHR>
{
    std::size_t operator()(const vk::VkCommandPoolTrimFlagsKHR & t) const
    {
        return hash<std::underlying_type<vk::VkCommandPoolTrimFlagsKHR>::type>()(static_cast<std::underlying_type<vk::VkCommandPoolTrimFlagsKHR>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkCommandPoolTrimFlagsKHR operator|(const VkCommandPoolTrimFlagsKHR & a, const VkCommandPoolTrimFlagsKHR & b)
{
    return static_cast<VkCommandPoolTrimFlagsKHR>(static_cast<std::underlying_type<VkCommandPoolTrimFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkCommandPoolTrimFlagsKHR>::type>(b));
}

inline VkCommandPoolTrimFlagsKHR & operator|=(VkCommandPoolTrimFlagsKHR & a, const VkCommandPoolTrimFlagsKHR & b)
{
    a = static_cast<VkCommandPoolTrimFlagsKHR>(static_cast<std::underlying_type<VkCommandPoolTrimFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkCommandPoolTrimFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkCommandPoolTrimFlagsKHR operator&(const VkCommandPoolTrimFlagsKHR & a, const VkCommandPoolTrimFlagsKHR & b)
{
    return static_cast<VkCommandPoolTrimFlagsKHR>(static_cast<std::underlying_type<VkCommandPoolTrimFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkCommandPoolTrimFlagsKHR>::type>(b));
}

inline VkCommandPoolTrimFlagsKHR & operator&=(VkCommandPoolTrimFlagsKHR & a, const VkCommandPoolTrimFlagsKHR & b)
{
    a = static_cast<VkCommandPoolTrimFlagsKHR>(static_cast<std::underlying_type<VkCommandPoolTrimFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkCommandPoolTrimFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkCommandPoolTrimFlagsKHR operator^(const VkCommandPoolTrimFlagsKHR & a, const VkCommandPoolTrimFlagsKHR & b)
{
    return static_cast<VkCommandPoolTrimFlagsKHR>(static_cast<std::underlying_type<VkCommandPoolTrimFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkCommandPoolTrimFlagsKHR>::type>(b));
}

inline VkCommandPoolTrimFlagsKHR & operator^=(VkCommandPoolTrimFlagsKHR & a, const VkCommandPoolTrimFlagsKHR & b)
{
    a = static_cast<VkCommandPoolTrimFlagsKHR>(static_cast<std::underlying_type<VkCommandPoolTrimFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkCommandPoolTrimFlagsKHR>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkCompositeAlphaFlagsKHR>
{
    std::size_t operator()(const vk::VkCompositeAlphaFlagsKHR & t) const
    {
        return hash<std::underlying_type<vk::VkCompositeAlphaFlagsKHR>::type>()(static_cast<std::underlying_type<vk::VkCompositeAlphaFlagsKHR>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkCompositeAlphaFlagsKHR operator|(const VkCompositeAlphaFlagsKHR & a, const VkCompositeAlphaFlagsKHR & b)
{
    return static_cast<VkCompositeAlphaFlagsKHR>(static_cast<std::underlying_type<VkCompositeAlphaFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkCompositeAlphaFlagsKHR>::type>(b));
}

inline VkCompositeAlphaFlagsKHR & operator|=(VkCompositeAlphaFlagsKHR & a, const VkCompositeAlphaFlagsKHR & b)
{
    a = static_cast<VkCompositeAlphaFlagsKHR>(static_cast<std::underlying_type<VkCompositeAlphaFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkCompositeAlphaFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkCompositeAlphaFlagsKHR operator&(const VkCompositeAlphaFlagsKHR & a, const VkCompositeAlphaFlagsKHR & b)
{
    return static_cast<VkCompositeAlphaFlagsKHR>(static_cast<std::underlying_type<VkCompositeAlphaFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkCompositeAlphaFlagsKHR>::type>(b));
}

inline VkCompositeAlphaFlagsKHR & operator&=(VkCompositeAlphaFlagsKHR & a, const VkCompositeAlphaFlagsKHR & b)
{
    a = static_cast<VkCompositeAlphaFlagsKHR>(static_cast<std::underlying_type<VkCompositeAlphaFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkCompositeAlphaFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkCompositeAlphaFlagsKHR operator^(const VkCompositeAlphaFlagsKHR & a, const VkCompositeAlphaFlagsKHR & b)
{
    return static_cast<VkCompositeAlphaFlagsKHR>(static_cast<std::underlying_type<VkCompositeAlphaFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkCompositeAlphaFlagsKHR>::type>(b));
}

inline VkCompositeAlphaFlagsKHR & operator^=(VkCompositeAlphaFlagsKHR & a, const VkCompositeAlphaFlagsKHR & b)
{
    a = static_cast<VkCompositeAlphaFlagsKHR>(static_cast<std::underlying_type<VkCompositeAlphaFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkCompositeAlphaFlagsKHR>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkConditionalRenderingFlagsEXT>
{
    std::size_t operator()(const vk::VkConditionalRenderingFlagsEXT & t) const
    {
        return hash<std::underlying_type<vk::VkConditionalRenderingFlagsEXT>::type>()(static_cast<std::underlying_type<vk::VkConditionalRenderingFlagsEXT>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkConditionalRenderingFlagsEXT operator|(const VkConditionalRenderingFlagsEXT & a, const VkConditionalRenderingFlagsEXT & b)
{
    return static_cast<VkConditionalRenderingFlagsEXT>(static_cast<std::underlying_type<VkConditionalRenderingFlagsEXT>::type>(a) | static_cast<std::underlying_type<VkConditionalRenderingFlagsEXT>::type>(b));
}

inline VkConditionalRenderingFlagsEXT & operator|=(VkConditionalRenderingFlagsEXT & a, const VkConditionalRenderingFlagsEXT & b)
{
    a = static_cast<VkConditionalRenderingFlagsEXT>(static_cast<std::underlying_type<VkConditionalRenderingFlagsEXT>::type>(a) | static_cast<std::underlying_type<VkConditionalRenderingFlagsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkConditionalRenderingFlagsEXT operator&(const VkConditionalRenderingFlagsEXT & a, const VkConditionalRenderingFlagsEXT & b)
{
    return static_cast<VkConditionalRenderingFlagsEXT>(static_cast<std::underlying_type<VkConditionalRenderingFlagsEXT>::type>(a) & static_cast<std::underlying_type<VkConditionalRenderingFlagsEXT>::type>(b));
}

inline VkConditionalRenderingFlagsEXT & operator&=(VkConditionalRenderingFlagsEXT & a, const VkConditionalRenderingFlagsEXT & b)
{
    a = static_cast<VkConditionalRenderingFlagsEXT>(static_cast<std::underlying_type<VkConditionalRenderingFlagsEXT>::type>(a) & static_cast<std::underlying_type<VkConditionalRenderingFlagsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkConditionalRenderingFlagsEXT operator^(const VkConditionalRenderingFlagsEXT & a, const VkConditionalRenderingFlagsEXT & b)
{
    return static_cast<VkConditionalRenderingFlagsEXT>(static_cast<std::underlying_type<VkConditionalRenderingFlagsEXT>::type>(a) ^ static_cast<std::underlying_type<VkConditionalRenderingFlagsEXT>::type>(b));
}

inline VkConditionalRenderingFlagsEXT & operator^=(VkConditionalRenderingFlagsEXT & a, const VkConditionalRenderingFlagsEXT & b)
{
    a = static_cast<VkConditionalRenderingFlagsEXT>(static_cast<std::underlying_type<VkConditionalRenderingFlagsEXT>::type>(a) ^ static_cast<std::underlying_type<VkConditionalRenderingFlagsEXT>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkCullModeFlags>
{
    std::size_t operator()(const vk::VkCullModeFlags & t) const
    {
        return hash<std::underlying_type<vk::VkCullModeFlags>::type>()(static_cast<std::underlying_type<vk::VkCullModeFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkCullModeFlags operator|(const VkCullModeFlags & a, const VkCullModeFlags & b)
{
    return static_cast<VkCullModeFlags>(static_cast<std::underlying_type<VkCullModeFlags>::type>(a) | static_cast<std::underlying_type<VkCullModeFlags>::type>(b));
}

inline VkCullModeFlags & operator|=(VkCullModeFlags & a, const VkCullModeFlags & b)
{
    a = static_cast<VkCullModeFlags>(static_cast<std::underlying_type<VkCullModeFlags>::type>(a) | static_cast<std::underlying_type<VkCullModeFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkCullModeFlags operator&(const VkCullModeFlags & a, const VkCullModeFlags & b)
{
    return static_cast<VkCullModeFlags>(static_cast<std::underlying_type<VkCullModeFlags>::type>(a) & static_cast<std::underlying_type<VkCullModeFlags>::type>(b));
}

inline VkCullModeFlags & operator&=(VkCullModeFlags & a, const VkCullModeFlags & b)
{
    a = static_cast<VkCullModeFlags>(static_cast<std::underlying_type<VkCullModeFlags>::type>(a) & static_cast<std::underlying_type<VkCullModeFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkCullModeFlags operator^(const VkCullModeFlags & a, const VkCullModeFlags & b)
{
    return static_cast<VkCullModeFlags>(static_cast<std::underlying_type<VkCullModeFlags>::type>(a) ^ static_cast<std::underlying_type<VkCullModeFlags>::type>(b));
}

inline VkCullModeFlags & operator^=(VkCullModeFlags & a, const VkCullModeFlags & b)
{
    a = static_cast<VkCullModeFlags>(static_cast<std::underlying_type<VkCullModeFlags>::type>(a) ^ static_cast<std::underlying_type<VkCullModeFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkDebugReportFlagsEXT>
{
    std::size_t operator()(const vk::VkDebugReportFlagsEXT & t) const
    {
        return hash<std::underlying_type<vk::VkDebugReportFlagsEXT>::type>()(static_cast<std::underlying_type<vk::VkDebugReportFlagsEXT>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkDebugReportFlagsEXT operator|(const VkDebugReportFlagsEXT & a, const VkDebugReportFlagsEXT & b)
{
    return static_cast<VkDebugReportFlagsEXT>(static_cast<std::underlying_type<VkDebugReportFlagsEXT>::type>(a) | static_cast<std::underlying_type<VkDebugReportFlagsEXT>::type>(b));
}

inline VkDebugReportFlagsEXT & operator|=(VkDebugReportFlagsEXT & a, const VkDebugReportFlagsEXT & b)
{
    a = static_cast<VkDebugReportFlagsEXT>(static_cast<std::underlying_type<VkDebugReportFlagsEXT>::type>(a) | static_cast<std::underlying_type<VkDebugReportFlagsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDebugReportFlagsEXT operator&(const VkDebugReportFlagsEXT & a, const VkDebugReportFlagsEXT & b)
{
    return static_cast<VkDebugReportFlagsEXT>(static_cast<std::underlying_type<VkDebugReportFlagsEXT>::type>(a) & static_cast<std::underlying_type<VkDebugReportFlagsEXT>::type>(b));
}

inline VkDebugReportFlagsEXT & operator&=(VkDebugReportFlagsEXT & a, const VkDebugReportFlagsEXT & b)
{
    a = static_cast<VkDebugReportFlagsEXT>(static_cast<std::underlying_type<VkDebugReportFlagsEXT>::type>(a) & static_cast<std::underlying_type<VkDebugReportFlagsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDebugReportFlagsEXT operator^(const VkDebugReportFlagsEXT & a, const VkDebugReportFlagsEXT & b)
{
    return static_cast<VkDebugReportFlagsEXT>(static_cast<std::underlying_type<VkDebugReportFlagsEXT>::type>(a) ^ static_cast<std::underlying_type<VkDebugReportFlagsEXT>::type>(b));
}

inline VkDebugReportFlagsEXT & operator^=(VkDebugReportFlagsEXT & a, const VkDebugReportFlagsEXT & b)
{
    a = static_cast<VkDebugReportFlagsEXT>(static_cast<std::underlying_type<VkDebugReportFlagsEXT>::type>(a) ^ static_cast<std::underlying_type<VkDebugReportFlagsEXT>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkDebugUtilsMessageSeverityFlagsEXT>
{
    std::size_t operator()(const vk::VkDebugUtilsMessageSeverityFlagsEXT & t) const
    {
        return hash<std::underlying_type<vk::VkDebugUtilsMessageSeverityFlagsEXT>::type>()(static_cast<std::underlying_type<vk::VkDebugUtilsMessageSeverityFlagsEXT>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkDebugUtilsMessageSeverityFlagsEXT operator|(const VkDebugUtilsMessageSeverityFlagsEXT & a, const VkDebugUtilsMessageSeverityFlagsEXT & b)
{
    return static_cast<VkDebugUtilsMessageSeverityFlagsEXT>(static_cast<std::underlying_type<VkDebugUtilsMessageSeverityFlagsEXT>::type>(a) | static_cast<std::underlying_type<VkDebugUtilsMessageSeverityFlagsEXT>::type>(b));
}

inline VkDebugUtilsMessageSeverityFlagsEXT & operator|=(VkDebugUtilsMessageSeverityFlagsEXT & a, const VkDebugUtilsMessageSeverityFlagsEXT & b)
{
    a = static_cast<VkDebugUtilsMessageSeverityFlagsEXT>(static_cast<std::underlying_type<VkDebugUtilsMessageSeverityFlagsEXT>::type>(a) | static_cast<std::underlying_type<VkDebugUtilsMessageSeverityFlagsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDebugUtilsMessageSeverityFlagsEXT operator&(const VkDebugUtilsMessageSeverityFlagsEXT & a, const VkDebugUtilsMessageSeverityFlagsEXT & b)
{
    return static_cast<VkDebugUtilsMessageSeverityFlagsEXT>(static_cast<std::underlying_type<VkDebugUtilsMessageSeverityFlagsEXT>::type>(a) & static_cast<std::underlying_type<VkDebugUtilsMessageSeverityFlagsEXT>::type>(b));
}

inline VkDebugUtilsMessageSeverityFlagsEXT & operator&=(VkDebugUtilsMessageSeverityFlagsEXT & a, const VkDebugUtilsMessageSeverityFlagsEXT & b)
{
    a = static_cast<VkDebugUtilsMessageSeverityFlagsEXT>(static_cast<std::underlying_type<VkDebugUtilsMessageSeverityFlagsEXT>::type>(a) & static_cast<std::underlying_type<VkDebugUtilsMessageSeverityFlagsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDebugUtilsMessageSeverityFlagsEXT operator^(const VkDebugUtilsMessageSeverityFlagsEXT & a, const VkDebugUtilsMessageSeverityFlagsEXT & b)
{
    return static_cast<VkDebugUtilsMessageSeverityFlagsEXT>(static_cast<std::underlying_type<VkDebugUtilsMessageSeverityFlagsEXT>::type>(a) ^ static_cast<std::underlying_type<VkDebugUtilsMessageSeverityFlagsEXT>::type>(b));
}

inline VkDebugUtilsMessageSeverityFlagsEXT & operator^=(VkDebugUtilsMessageSeverityFlagsEXT & a, const VkDebugUtilsMessageSeverityFlagsEXT & b)
{
    a = static_cast<VkDebugUtilsMessageSeverityFlagsEXT>(static_cast<std::underlying_type<VkDebugUtilsMessageSeverityFlagsEXT>::type>(a) ^ static_cast<std::underlying_type<VkDebugUtilsMessageSeverityFlagsEXT>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkDebugUtilsMessageTypeFlagsEXT>
{
    std::size_t operator()(const vk::VkDebugUtilsMessageTypeFlagsEXT & t) const
    {
        return hash<std::underlying_type<vk::VkDebugUtilsMessageTypeFlagsEXT>::type>()(static_cast<std::underlying_type<vk::VkDebugUtilsMessageTypeFlagsEXT>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkDebugUtilsMessageTypeFlagsEXT operator|(const VkDebugUtilsMessageTypeFlagsEXT & a, const VkDebugUtilsMessageTypeFlagsEXT & b)
{
    return static_cast<VkDebugUtilsMessageTypeFlagsEXT>(static_cast<std::underlying_type<VkDebugUtilsMessageTypeFlagsEXT>::type>(a) | static_cast<std::underlying_type<VkDebugUtilsMessageTypeFlagsEXT>::type>(b));
}

inline VkDebugUtilsMessageTypeFlagsEXT & operator|=(VkDebugUtilsMessageTypeFlagsEXT & a, const VkDebugUtilsMessageTypeFlagsEXT & b)
{
    a = static_cast<VkDebugUtilsMessageTypeFlagsEXT>(static_cast<std::underlying_type<VkDebugUtilsMessageTypeFlagsEXT>::type>(a) | static_cast<std::underlying_type<VkDebugUtilsMessageTypeFlagsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDebugUtilsMessageTypeFlagsEXT operator&(const VkDebugUtilsMessageTypeFlagsEXT & a, const VkDebugUtilsMessageTypeFlagsEXT & b)
{
    return static_cast<VkDebugUtilsMessageTypeFlagsEXT>(static_cast<std::underlying_type<VkDebugUtilsMessageTypeFlagsEXT>::type>(a) & static_cast<std::underlying_type<VkDebugUtilsMessageTypeFlagsEXT>::type>(b));
}

inline VkDebugUtilsMessageTypeFlagsEXT & operator&=(VkDebugUtilsMessageTypeFlagsEXT & a, const VkDebugUtilsMessageTypeFlagsEXT & b)
{
    a = static_cast<VkDebugUtilsMessageTypeFlagsEXT>(static_cast<std::underlying_type<VkDebugUtilsMessageTypeFlagsEXT>::type>(a) & static_cast<std::underlying_type<VkDebugUtilsMessageTypeFlagsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDebugUtilsMessageTypeFlagsEXT operator^(const VkDebugUtilsMessageTypeFlagsEXT & a, const VkDebugUtilsMessageTypeFlagsEXT & b)
{
    return static_cast<VkDebugUtilsMessageTypeFlagsEXT>(static_cast<std::underlying_type<VkDebugUtilsMessageTypeFlagsEXT>::type>(a) ^ static_cast<std::underlying_type<VkDebugUtilsMessageTypeFlagsEXT>::type>(b));
}

inline VkDebugUtilsMessageTypeFlagsEXT & operator^=(VkDebugUtilsMessageTypeFlagsEXT & a, const VkDebugUtilsMessageTypeFlagsEXT & b)
{
    a = static_cast<VkDebugUtilsMessageTypeFlagsEXT>(static_cast<std::underlying_type<VkDebugUtilsMessageTypeFlagsEXT>::type>(a) ^ static_cast<std::underlying_type<VkDebugUtilsMessageTypeFlagsEXT>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkDebugUtilsMessengerCallbackDataFlagsEXT>
{
    std::size_t operator()(const vk::VkDebugUtilsMessengerCallbackDataFlagsEXT & t) const
    {
        return hash<std::underlying_type<vk::VkDebugUtilsMessengerCallbackDataFlagsEXT>::type>()(static_cast<std::underlying_type<vk::VkDebugUtilsMessengerCallbackDataFlagsEXT>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkDebugUtilsMessengerCallbackDataFlagsEXT operator|(const VkDebugUtilsMessengerCallbackDataFlagsEXT & a, const VkDebugUtilsMessengerCallbackDataFlagsEXT & b)
{
    return static_cast<VkDebugUtilsMessengerCallbackDataFlagsEXT>(static_cast<std::underlying_type<VkDebugUtilsMessengerCallbackDataFlagsEXT>::type>(a) | static_cast<std::underlying_type<VkDebugUtilsMessengerCallbackDataFlagsEXT>::type>(b));
}

inline VkDebugUtilsMessengerCallbackDataFlagsEXT & operator|=(VkDebugUtilsMessengerCallbackDataFlagsEXT & a, const VkDebugUtilsMessengerCallbackDataFlagsEXT & b)
{
    a = static_cast<VkDebugUtilsMessengerCallbackDataFlagsEXT>(static_cast<std::underlying_type<VkDebugUtilsMessengerCallbackDataFlagsEXT>::type>(a) | static_cast<std::underlying_type<VkDebugUtilsMessengerCallbackDataFlagsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDebugUtilsMessengerCallbackDataFlagsEXT operator&(const VkDebugUtilsMessengerCallbackDataFlagsEXT & a, const VkDebugUtilsMessengerCallbackDataFlagsEXT & b)
{
    return static_cast<VkDebugUtilsMessengerCallbackDataFlagsEXT>(static_cast<std::underlying_type<VkDebugUtilsMessengerCallbackDataFlagsEXT>::type>(a) & static_cast<std::underlying_type<VkDebugUtilsMessengerCallbackDataFlagsEXT>::type>(b));
}

inline VkDebugUtilsMessengerCallbackDataFlagsEXT & operator&=(VkDebugUtilsMessengerCallbackDataFlagsEXT & a, const VkDebugUtilsMessengerCallbackDataFlagsEXT & b)
{
    a = static_cast<VkDebugUtilsMessengerCallbackDataFlagsEXT>(static_cast<std::underlying_type<VkDebugUtilsMessengerCallbackDataFlagsEXT>::type>(a) & static_cast<std::underlying_type<VkDebugUtilsMessengerCallbackDataFlagsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDebugUtilsMessengerCallbackDataFlagsEXT operator^(const VkDebugUtilsMessengerCallbackDataFlagsEXT & a, const VkDebugUtilsMessengerCallbackDataFlagsEXT & b)
{
    return static_cast<VkDebugUtilsMessengerCallbackDataFlagsEXT>(static_cast<std::underlying_type<VkDebugUtilsMessengerCallbackDataFlagsEXT>::type>(a) ^ static_cast<std::underlying_type<VkDebugUtilsMessengerCallbackDataFlagsEXT>::type>(b));
}

inline VkDebugUtilsMessengerCallbackDataFlagsEXT & operator^=(VkDebugUtilsMessengerCallbackDataFlagsEXT & a, const VkDebugUtilsMessengerCallbackDataFlagsEXT & b)
{
    a = static_cast<VkDebugUtilsMessengerCallbackDataFlagsEXT>(static_cast<std::underlying_type<VkDebugUtilsMessengerCallbackDataFlagsEXT>::type>(a) ^ static_cast<std::underlying_type<VkDebugUtilsMessengerCallbackDataFlagsEXT>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkDependencyFlags>
{
    std::size_t operator()(const vk::VkDependencyFlags & t) const
    {
        return hash<std::underlying_type<vk::VkDependencyFlags>::type>()(static_cast<std::underlying_type<vk::VkDependencyFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkDependencyFlags operator|(const VkDependencyFlags & a, const VkDependencyFlags & b)
{
    return static_cast<VkDependencyFlags>(static_cast<std::underlying_type<VkDependencyFlags>::type>(a) | static_cast<std::underlying_type<VkDependencyFlags>::type>(b));
}

inline VkDependencyFlags & operator|=(VkDependencyFlags & a, const VkDependencyFlags & b)
{
    a = static_cast<VkDependencyFlags>(static_cast<std::underlying_type<VkDependencyFlags>::type>(a) | static_cast<std::underlying_type<VkDependencyFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDependencyFlags operator&(const VkDependencyFlags & a, const VkDependencyFlags & b)
{
    return static_cast<VkDependencyFlags>(static_cast<std::underlying_type<VkDependencyFlags>::type>(a) & static_cast<std::underlying_type<VkDependencyFlags>::type>(b));
}

inline VkDependencyFlags & operator&=(VkDependencyFlags & a, const VkDependencyFlags & b)
{
    a = static_cast<VkDependencyFlags>(static_cast<std::underlying_type<VkDependencyFlags>::type>(a) & static_cast<std::underlying_type<VkDependencyFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDependencyFlags operator^(const VkDependencyFlags & a, const VkDependencyFlags & b)
{
    return static_cast<VkDependencyFlags>(static_cast<std::underlying_type<VkDependencyFlags>::type>(a) ^ static_cast<std::underlying_type<VkDependencyFlags>::type>(b));
}

inline VkDependencyFlags & operator^=(VkDependencyFlags & a, const VkDependencyFlags & b)
{
    a = static_cast<VkDependencyFlags>(static_cast<std::underlying_type<VkDependencyFlags>::type>(a) ^ static_cast<std::underlying_type<VkDependencyFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkDescriptorPoolCreateFlags>
{
    std::size_t operator()(const vk::VkDescriptorPoolCreateFlags & t) const
    {
        return hash<std::underlying_type<vk::VkDescriptorPoolCreateFlags>::type>()(static_cast<std::underlying_type<vk::VkDescriptorPoolCreateFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkDescriptorPoolCreateFlags operator|(const VkDescriptorPoolCreateFlags & a, const VkDescriptorPoolCreateFlags & b)
{
    return static_cast<VkDescriptorPoolCreateFlags>(static_cast<std::underlying_type<VkDescriptorPoolCreateFlags>::type>(a) | static_cast<std::underlying_type<VkDescriptorPoolCreateFlags>::type>(b));
}

inline VkDescriptorPoolCreateFlags & operator|=(VkDescriptorPoolCreateFlags & a, const VkDescriptorPoolCreateFlags & b)
{
    a = static_cast<VkDescriptorPoolCreateFlags>(static_cast<std::underlying_type<VkDescriptorPoolCreateFlags>::type>(a) | static_cast<std::underlying_type<VkDescriptorPoolCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDescriptorPoolCreateFlags operator&(const VkDescriptorPoolCreateFlags & a, const VkDescriptorPoolCreateFlags & b)
{
    return static_cast<VkDescriptorPoolCreateFlags>(static_cast<std::underlying_type<VkDescriptorPoolCreateFlags>::type>(a) & static_cast<std::underlying_type<VkDescriptorPoolCreateFlags>::type>(b));
}

inline VkDescriptorPoolCreateFlags & operator&=(VkDescriptorPoolCreateFlags & a, const VkDescriptorPoolCreateFlags & b)
{
    a = static_cast<VkDescriptorPoolCreateFlags>(static_cast<std::underlying_type<VkDescriptorPoolCreateFlags>::type>(a) & static_cast<std::underlying_type<VkDescriptorPoolCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDescriptorPoolCreateFlags operator^(const VkDescriptorPoolCreateFlags & a, const VkDescriptorPoolCreateFlags & b)
{
    return static_cast<VkDescriptorPoolCreateFlags>(static_cast<std::underlying_type<VkDescriptorPoolCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkDescriptorPoolCreateFlags>::type>(b));
}

inline VkDescriptorPoolCreateFlags & operator^=(VkDescriptorPoolCreateFlags & a, const VkDescriptorPoolCreateFlags & b)
{
    a = static_cast<VkDescriptorPoolCreateFlags>(static_cast<std::underlying_type<VkDescriptorPoolCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkDescriptorPoolCreateFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkDescriptorPoolResetFlags>
{
    std::size_t operator()(const vk::VkDescriptorPoolResetFlags & t) const
    {
        return hash<std::underlying_type<vk::VkDescriptorPoolResetFlags>::type>()(static_cast<std::underlying_type<vk::VkDescriptorPoolResetFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkDescriptorPoolResetFlags operator|(const VkDescriptorPoolResetFlags & a, const VkDescriptorPoolResetFlags & b)
{
    return static_cast<VkDescriptorPoolResetFlags>(static_cast<std::underlying_type<VkDescriptorPoolResetFlags>::type>(a) | static_cast<std::underlying_type<VkDescriptorPoolResetFlags>::type>(b));
}

inline VkDescriptorPoolResetFlags & operator|=(VkDescriptorPoolResetFlags & a, const VkDescriptorPoolResetFlags & b)
{
    a = static_cast<VkDescriptorPoolResetFlags>(static_cast<std::underlying_type<VkDescriptorPoolResetFlags>::type>(a) | static_cast<std::underlying_type<VkDescriptorPoolResetFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDescriptorPoolResetFlags operator&(const VkDescriptorPoolResetFlags & a, const VkDescriptorPoolResetFlags & b)
{
    return static_cast<VkDescriptorPoolResetFlags>(static_cast<std::underlying_type<VkDescriptorPoolResetFlags>::type>(a) & static_cast<std::underlying_type<VkDescriptorPoolResetFlags>::type>(b));
}

inline VkDescriptorPoolResetFlags & operator&=(VkDescriptorPoolResetFlags & a, const VkDescriptorPoolResetFlags & b)
{
    a = static_cast<VkDescriptorPoolResetFlags>(static_cast<std::underlying_type<VkDescriptorPoolResetFlags>::type>(a) & static_cast<std::underlying_type<VkDescriptorPoolResetFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDescriptorPoolResetFlags operator^(const VkDescriptorPoolResetFlags & a, const VkDescriptorPoolResetFlags & b)
{
    return static_cast<VkDescriptorPoolResetFlags>(static_cast<std::underlying_type<VkDescriptorPoolResetFlags>::type>(a) ^ static_cast<std::underlying_type<VkDescriptorPoolResetFlags>::type>(b));
}

inline VkDescriptorPoolResetFlags & operator^=(VkDescriptorPoolResetFlags & a, const VkDescriptorPoolResetFlags & b)
{
    a = static_cast<VkDescriptorPoolResetFlags>(static_cast<std::underlying_type<VkDescriptorPoolResetFlags>::type>(a) ^ static_cast<std::underlying_type<VkDescriptorPoolResetFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkDescriptorSetLayoutCreateFlags>
{
    std::size_t operator()(const vk::VkDescriptorSetLayoutCreateFlags & t) const
    {
        return hash<std::underlying_type<vk::VkDescriptorSetLayoutCreateFlags>::type>()(static_cast<std::underlying_type<vk::VkDescriptorSetLayoutCreateFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkDescriptorSetLayoutCreateFlags operator|(const VkDescriptorSetLayoutCreateFlags & a, const VkDescriptorSetLayoutCreateFlags & b)
{
    return static_cast<VkDescriptorSetLayoutCreateFlags>(static_cast<std::underlying_type<VkDescriptorSetLayoutCreateFlags>::type>(a) | static_cast<std::underlying_type<VkDescriptorSetLayoutCreateFlags>::type>(b));
}

inline VkDescriptorSetLayoutCreateFlags & operator|=(VkDescriptorSetLayoutCreateFlags & a, const VkDescriptorSetLayoutCreateFlags & b)
{
    a = static_cast<VkDescriptorSetLayoutCreateFlags>(static_cast<std::underlying_type<VkDescriptorSetLayoutCreateFlags>::type>(a) | static_cast<std::underlying_type<VkDescriptorSetLayoutCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDescriptorSetLayoutCreateFlags operator&(const VkDescriptorSetLayoutCreateFlags & a, const VkDescriptorSetLayoutCreateFlags & b)
{
    return static_cast<VkDescriptorSetLayoutCreateFlags>(static_cast<std::underlying_type<VkDescriptorSetLayoutCreateFlags>::type>(a) & static_cast<std::underlying_type<VkDescriptorSetLayoutCreateFlags>::type>(b));
}

inline VkDescriptorSetLayoutCreateFlags & operator&=(VkDescriptorSetLayoutCreateFlags & a, const VkDescriptorSetLayoutCreateFlags & b)
{
    a = static_cast<VkDescriptorSetLayoutCreateFlags>(static_cast<std::underlying_type<VkDescriptorSetLayoutCreateFlags>::type>(a) & static_cast<std::underlying_type<VkDescriptorSetLayoutCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDescriptorSetLayoutCreateFlags operator^(const VkDescriptorSetLayoutCreateFlags & a, const VkDescriptorSetLayoutCreateFlags & b)
{
    return static_cast<VkDescriptorSetLayoutCreateFlags>(static_cast<std::underlying_type<VkDescriptorSetLayoutCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkDescriptorSetLayoutCreateFlags>::type>(b));
}

inline VkDescriptorSetLayoutCreateFlags & operator^=(VkDescriptorSetLayoutCreateFlags & a, const VkDescriptorSetLayoutCreateFlags & b)
{
    a = static_cast<VkDescriptorSetLayoutCreateFlags>(static_cast<std::underlying_type<VkDescriptorSetLayoutCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkDescriptorSetLayoutCreateFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkDescriptorUpdateTemplateCreateFlags>
{
    std::size_t operator()(const vk::VkDescriptorUpdateTemplateCreateFlags & t) const
    {
        return hash<std::underlying_type<vk::VkDescriptorUpdateTemplateCreateFlags>::type>()(static_cast<std::underlying_type<vk::VkDescriptorUpdateTemplateCreateFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkDescriptorUpdateTemplateCreateFlags operator|(const VkDescriptorUpdateTemplateCreateFlags & a, const VkDescriptorUpdateTemplateCreateFlags & b)
{
    return static_cast<VkDescriptorUpdateTemplateCreateFlags>(static_cast<std::underlying_type<VkDescriptorUpdateTemplateCreateFlags>::type>(a) | static_cast<std::underlying_type<VkDescriptorUpdateTemplateCreateFlags>::type>(b));
}

inline VkDescriptorUpdateTemplateCreateFlags & operator|=(VkDescriptorUpdateTemplateCreateFlags & a, const VkDescriptorUpdateTemplateCreateFlags & b)
{
    a = static_cast<VkDescriptorUpdateTemplateCreateFlags>(static_cast<std::underlying_type<VkDescriptorUpdateTemplateCreateFlags>::type>(a) | static_cast<std::underlying_type<VkDescriptorUpdateTemplateCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDescriptorUpdateTemplateCreateFlags operator&(const VkDescriptorUpdateTemplateCreateFlags & a, const VkDescriptorUpdateTemplateCreateFlags & b)
{
    return static_cast<VkDescriptorUpdateTemplateCreateFlags>(static_cast<std::underlying_type<VkDescriptorUpdateTemplateCreateFlags>::type>(a) & static_cast<std::underlying_type<VkDescriptorUpdateTemplateCreateFlags>::type>(b));
}

inline VkDescriptorUpdateTemplateCreateFlags & operator&=(VkDescriptorUpdateTemplateCreateFlags & a, const VkDescriptorUpdateTemplateCreateFlags & b)
{
    a = static_cast<VkDescriptorUpdateTemplateCreateFlags>(static_cast<std::underlying_type<VkDescriptorUpdateTemplateCreateFlags>::type>(a) & static_cast<std::underlying_type<VkDescriptorUpdateTemplateCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDescriptorUpdateTemplateCreateFlags operator^(const VkDescriptorUpdateTemplateCreateFlags & a, const VkDescriptorUpdateTemplateCreateFlags & b)
{
    return static_cast<VkDescriptorUpdateTemplateCreateFlags>(static_cast<std::underlying_type<VkDescriptorUpdateTemplateCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkDescriptorUpdateTemplateCreateFlags>::type>(b));
}

inline VkDescriptorUpdateTemplateCreateFlags & operator^=(VkDescriptorUpdateTemplateCreateFlags & a, const VkDescriptorUpdateTemplateCreateFlags & b)
{
    a = static_cast<VkDescriptorUpdateTemplateCreateFlags>(static_cast<std::underlying_type<VkDescriptorUpdateTemplateCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkDescriptorUpdateTemplateCreateFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkDescriptorUpdateTemplateCreateFlagsKHR>
{
    std::size_t operator()(const vk::VkDescriptorUpdateTemplateCreateFlagsKHR & t) const
    {
        return hash<std::underlying_type<vk::VkDescriptorUpdateTemplateCreateFlagsKHR>::type>()(static_cast<std::underlying_type<vk::VkDescriptorUpdateTemplateCreateFlagsKHR>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkDescriptorUpdateTemplateCreateFlagsKHR operator|(const VkDescriptorUpdateTemplateCreateFlagsKHR & a, const VkDescriptorUpdateTemplateCreateFlagsKHR & b)
{
    return static_cast<VkDescriptorUpdateTemplateCreateFlagsKHR>(static_cast<std::underlying_type<VkDescriptorUpdateTemplateCreateFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkDescriptorUpdateTemplateCreateFlagsKHR>::type>(b));
}

inline VkDescriptorUpdateTemplateCreateFlagsKHR & operator|=(VkDescriptorUpdateTemplateCreateFlagsKHR & a, const VkDescriptorUpdateTemplateCreateFlagsKHR & b)
{
    a = static_cast<VkDescriptorUpdateTemplateCreateFlagsKHR>(static_cast<std::underlying_type<VkDescriptorUpdateTemplateCreateFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkDescriptorUpdateTemplateCreateFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDescriptorUpdateTemplateCreateFlagsKHR operator&(const VkDescriptorUpdateTemplateCreateFlagsKHR & a, const VkDescriptorUpdateTemplateCreateFlagsKHR & b)
{
    return static_cast<VkDescriptorUpdateTemplateCreateFlagsKHR>(static_cast<std::underlying_type<VkDescriptorUpdateTemplateCreateFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkDescriptorUpdateTemplateCreateFlagsKHR>::type>(b));
}

inline VkDescriptorUpdateTemplateCreateFlagsKHR & operator&=(VkDescriptorUpdateTemplateCreateFlagsKHR & a, const VkDescriptorUpdateTemplateCreateFlagsKHR & b)
{
    a = static_cast<VkDescriptorUpdateTemplateCreateFlagsKHR>(static_cast<std::underlying_type<VkDescriptorUpdateTemplateCreateFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkDescriptorUpdateTemplateCreateFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDescriptorUpdateTemplateCreateFlagsKHR operator^(const VkDescriptorUpdateTemplateCreateFlagsKHR & a, const VkDescriptorUpdateTemplateCreateFlagsKHR & b)
{
    return static_cast<VkDescriptorUpdateTemplateCreateFlagsKHR>(static_cast<std::underlying_type<VkDescriptorUpdateTemplateCreateFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkDescriptorUpdateTemplateCreateFlagsKHR>::type>(b));
}

inline VkDescriptorUpdateTemplateCreateFlagsKHR & operator^=(VkDescriptorUpdateTemplateCreateFlagsKHR & a, const VkDescriptorUpdateTemplateCreateFlagsKHR & b)
{
    a = static_cast<VkDescriptorUpdateTemplateCreateFlagsKHR>(static_cast<std::underlying_type<VkDescriptorUpdateTemplateCreateFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkDescriptorUpdateTemplateCreateFlagsKHR>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkDeviceCreateFlags>
{
    std::size_t operator()(const vk::VkDeviceCreateFlags & t) const
    {
        return hash<std::underlying_type<vk::VkDeviceCreateFlags>::type>()(static_cast<std::underlying_type<vk::VkDeviceCreateFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkDeviceCreateFlags operator|(const VkDeviceCreateFlags & a, const VkDeviceCreateFlags & b)
{
    return static_cast<VkDeviceCreateFlags>(static_cast<std::underlying_type<VkDeviceCreateFlags>::type>(a) | static_cast<std::underlying_type<VkDeviceCreateFlags>::type>(b));
}

inline VkDeviceCreateFlags & operator|=(VkDeviceCreateFlags & a, const VkDeviceCreateFlags & b)
{
    a = static_cast<VkDeviceCreateFlags>(static_cast<std::underlying_type<VkDeviceCreateFlags>::type>(a) | static_cast<std::underlying_type<VkDeviceCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDeviceCreateFlags operator&(const VkDeviceCreateFlags & a, const VkDeviceCreateFlags & b)
{
    return static_cast<VkDeviceCreateFlags>(static_cast<std::underlying_type<VkDeviceCreateFlags>::type>(a) & static_cast<std::underlying_type<VkDeviceCreateFlags>::type>(b));
}

inline VkDeviceCreateFlags & operator&=(VkDeviceCreateFlags & a, const VkDeviceCreateFlags & b)
{
    a = static_cast<VkDeviceCreateFlags>(static_cast<std::underlying_type<VkDeviceCreateFlags>::type>(a) & static_cast<std::underlying_type<VkDeviceCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDeviceCreateFlags operator^(const VkDeviceCreateFlags & a, const VkDeviceCreateFlags & b)
{
    return static_cast<VkDeviceCreateFlags>(static_cast<std::underlying_type<VkDeviceCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkDeviceCreateFlags>::type>(b));
}

inline VkDeviceCreateFlags & operator^=(VkDeviceCreateFlags & a, const VkDeviceCreateFlags & b)
{
    a = static_cast<VkDeviceCreateFlags>(static_cast<std::underlying_type<VkDeviceCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkDeviceCreateFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkDeviceGroupPresentModeFlagsKHR>
{
    std::size_t operator()(const vk::VkDeviceGroupPresentModeFlagsKHR & t) const
    {
        return hash<std::underlying_type<vk::VkDeviceGroupPresentModeFlagsKHR>::type>()(static_cast<std::underlying_type<vk::VkDeviceGroupPresentModeFlagsKHR>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkDeviceGroupPresentModeFlagsKHR operator|(const VkDeviceGroupPresentModeFlagsKHR & a, const VkDeviceGroupPresentModeFlagsKHR & b)
{
    return static_cast<VkDeviceGroupPresentModeFlagsKHR>(static_cast<std::underlying_type<VkDeviceGroupPresentModeFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkDeviceGroupPresentModeFlagsKHR>::type>(b));
}

inline VkDeviceGroupPresentModeFlagsKHR & operator|=(VkDeviceGroupPresentModeFlagsKHR & a, const VkDeviceGroupPresentModeFlagsKHR & b)
{
    a = static_cast<VkDeviceGroupPresentModeFlagsKHR>(static_cast<std::underlying_type<VkDeviceGroupPresentModeFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkDeviceGroupPresentModeFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDeviceGroupPresentModeFlagsKHR operator&(const VkDeviceGroupPresentModeFlagsKHR & a, const VkDeviceGroupPresentModeFlagsKHR & b)
{
    return static_cast<VkDeviceGroupPresentModeFlagsKHR>(static_cast<std::underlying_type<VkDeviceGroupPresentModeFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkDeviceGroupPresentModeFlagsKHR>::type>(b));
}

inline VkDeviceGroupPresentModeFlagsKHR & operator&=(VkDeviceGroupPresentModeFlagsKHR & a, const VkDeviceGroupPresentModeFlagsKHR & b)
{
    a = static_cast<VkDeviceGroupPresentModeFlagsKHR>(static_cast<std::underlying_type<VkDeviceGroupPresentModeFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkDeviceGroupPresentModeFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDeviceGroupPresentModeFlagsKHR operator^(const VkDeviceGroupPresentModeFlagsKHR & a, const VkDeviceGroupPresentModeFlagsKHR & b)
{
    return static_cast<VkDeviceGroupPresentModeFlagsKHR>(static_cast<std::underlying_type<VkDeviceGroupPresentModeFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkDeviceGroupPresentModeFlagsKHR>::type>(b));
}

inline VkDeviceGroupPresentModeFlagsKHR & operator^=(VkDeviceGroupPresentModeFlagsKHR & a, const VkDeviceGroupPresentModeFlagsKHR & b)
{
    a = static_cast<VkDeviceGroupPresentModeFlagsKHR>(static_cast<std::underlying_type<VkDeviceGroupPresentModeFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkDeviceGroupPresentModeFlagsKHR>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkDeviceQueueCreateFlags>
{
    std::size_t operator()(const vk::VkDeviceQueueCreateFlags & t) const
    {
        return hash<std::underlying_type<vk::VkDeviceQueueCreateFlags>::type>()(static_cast<std::underlying_type<vk::VkDeviceQueueCreateFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkDeviceQueueCreateFlags operator|(const VkDeviceQueueCreateFlags & a, const VkDeviceQueueCreateFlags & b)
{
    return static_cast<VkDeviceQueueCreateFlags>(static_cast<std::underlying_type<VkDeviceQueueCreateFlags>::type>(a) | static_cast<std::underlying_type<VkDeviceQueueCreateFlags>::type>(b));
}

inline VkDeviceQueueCreateFlags & operator|=(VkDeviceQueueCreateFlags & a, const VkDeviceQueueCreateFlags & b)
{
    a = static_cast<VkDeviceQueueCreateFlags>(static_cast<std::underlying_type<VkDeviceQueueCreateFlags>::type>(a) | static_cast<std::underlying_type<VkDeviceQueueCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDeviceQueueCreateFlags operator&(const VkDeviceQueueCreateFlags & a, const VkDeviceQueueCreateFlags & b)
{
    return static_cast<VkDeviceQueueCreateFlags>(static_cast<std::underlying_type<VkDeviceQueueCreateFlags>::type>(a) & static_cast<std::underlying_type<VkDeviceQueueCreateFlags>::type>(b));
}

inline VkDeviceQueueCreateFlags & operator&=(VkDeviceQueueCreateFlags & a, const VkDeviceQueueCreateFlags & b)
{
    a = static_cast<VkDeviceQueueCreateFlags>(static_cast<std::underlying_type<VkDeviceQueueCreateFlags>::type>(a) & static_cast<std::underlying_type<VkDeviceQueueCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDeviceQueueCreateFlags operator^(const VkDeviceQueueCreateFlags & a, const VkDeviceQueueCreateFlags & b)
{
    return static_cast<VkDeviceQueueCreateFlags>(static_cast<std::underlying_type<VkDeviceQueueCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkDeviceQueueCreateFlags>::type>(b));
}

inline VkDeviceQueueCreateFlags & operator^=(VkDeviceQueueCreateFlags & a, const VkDeviceQueueCreateFlags & b)
{
    a = static_cast<VkDeviceQueueCreateFlags>(static_cast<std::underlying_type<VkDeviceQueueCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkDeviceQueueCreateFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkDisplayModeCreateFlagsKHR>
{
    std::size_t operator()(const vk::VkDisplayModeCreateFlagsKHR & t) const
    {
        return hash<std::underlying_type<vk::VkDisplayModeCreateFlagsKHR>::type>()(static_cast<std::underlying_type<vk::VkDisplayModeCreateFlagsKHR>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkDisplayModeCreateFlagsKHR operator|(const VkDisplayModeCreateFlagsKHR & a, const VkDisplayModeCreateFlagsKHR & b)
{
    return static_cast<VkDisplayModeCreateFlagsKHR>(static_cast<std::underlying_type<VkDisplayModeCreateFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkDisplayModeCreateFlagsKHR>::type>(b));
}

inline VkDisplayModeCreateFlagsKHR & operator|=(VkDisplayModeCreateFlagsKHR & a, const VkDisplayModeCreateFlagsKHR & b)
{
    a = static_cast<VkDisplayModeCreateFlagsKHR>(static_cast<std::underlying_type<VkDisplayModeCreateFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkDisplayModeCreateFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDisplayModeCreateFlagsKHR operator&(const VkDisplayModeCreateFlagsKHR & a, const VkDisplayModeCreateFlagsKHR & b)
{
    return static_cast<VkDisplayModeCreateFlagsKHR>(static_cast<std::underlying_type<VkDisplayModeCreateFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkDisplayModeCreateFlagsKHR>::type>(b));
}

inline VkDisplayModeCreateFlagsKHR & operator&=(VkDisplayModeCreateFlagsKHR & a, const VkDisplayModeCreateFlagsKHR & b)
{
    a = static_cast<VkDisplayModeCreateFlagsKHR>(static_cast<std::underlying_type<VkDisplayModeCreateFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkDisplayModeCreateFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDisplayModeCreateFlagsKHR operator^(const VkDisplayModeCreateFlagsKHR & a, const VkDisplayModeCreateFlagsKHR & b)
{
    return static_cast<VkDisplayModeCreateFlagsKHR>(static_cast<std::underlying_type<VkDisplayModeCreateFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkDisplayModeCreateFlagsKHR>::type>(b));
}

inline VkDisplayModeCreateFlagsKHR & operator^=(VkDisplayModeCreateFlagsKHR & a, const VkDisplayModeCreateFlagsKHR & b)
{
    a = static_cast<VkDisplayModeCreateFlagsKHR>(static_cast<std::underlying_type<VkDisplayModeCreateFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkDisplayModeCreateFlagsKHR>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkDisplayPlaneAlphaFlagsKHR>
{
    std::size_t operator()(const vk::VkDisplayPlaneAlphaFlagsKHR & t) const
    {
        return hash<std::underlying_type<vk::VkDisplayPlaneAlphaFlagsKHR>::type>()(static_cast<std::underlying_type<vk::VkDisplayPlaneAlphaFlagsKHR>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkDisplayPlaneAlphaFlagsKHR operator|(const VkDisplayPlaneAlphaFlagsKHR & a, const VkDisplayPlaneAlphaFlagsKHR & b)
{
    return static_cast<VkDisplayPlaneAlphaFlagsKHR>(static_cast<std::underlying_type<VkDisplayPlaneAlphaFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkDisplayPlaneAlphaFlagsKHR>::type>(b));
}

inline VkDisplayPlaneAlphaFlagsKHR & operator|=(VkDisplayPlaneAlphaFlagsKHR & a, const VkDisplayPlaneAlphaFlagsKHR & b)
{
    a = static_cast<VkDisplayPlaneAlphaFlagsKHR>(static_cast<std::underlying_type<VkDisplayPlaneAlphaFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkDisplayPlaneAlphaFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDisplayPlaneAlphaFlagsKHR operator&(const VkDisplayPlaneAlphaFlagsKHR & a, const VkDisplayPlaneAlphaFlagsKHR & b)
{
    return static_cast<VkDisplayPlaneAlphaFlagsKHR>(static_cast<std::underlying_type<VkDisplayPlaneAlphaFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkDisplayPlaneAlphaFlagsKHR>::type>(b));
}

inline VkDisplayPlaneAlphaFlagsKHR & operator&=(VkDisplayPlaneAlphaFlagsKHR & a, const VkDisplayPlaneAlphaFlagsKHR & b)
{
    a = static_cast<VkDisplayPlaneAlphaFlagsKHR>(static_cast<std::underlying_type<VkDisplayPlaneAlphaFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkDisplayPlaneAlphaFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDisplayPlaneAlphaFlagsKHR operator^(const VkDisplayPlaneAlphaFlagsKHR & a, const VkDisplayPlaneAlphaFlagsKHR & b)
{
    return static_cast<VkDisplayPlaneAlphaFlagsKHR>(static_cast<std::underlying_type<VkDisplayPlaneAlphaFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkDisplayPlaneAlphaFlagsKHR>::type>(b));
}

inline VkDisplayPlaneAlphaFlagsKHR & operator^=(VkDisplayPlaneAlphaFlagsKHR & a, const VkDisplayPlaneAlphaFlagsKHR & b)
{
    a = static_cast<VkDisplayPlaneAlphaFlagsKHR>(static_cast<std::underlying_type<VkDisplayPlaneAlphaFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkDisplayPlaneAlphaFlagsKHR>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkDisplaySurfaceCreateFlagsKHR>
{
    std::size_t operator()(const vk::VkDisplaySurfaceCreateFlagsKHR & t) const
    {
        return hash<std::underlying_type<vk::VkDisplaySurfaceCreateFlagsKHR>::type>()(static_cast<std::underlying_type<vk::VkDisplaySurfaceCreateFlagsKHR>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkDisplaySurfaceCreateFlagsKHR operator|(const VkDisplaySurfaceCreateFlagsKHR & a, const VkDisplaySurfaceCreateFlagsKHR & b)
{
    return static_cast<VkDisplaySurfaceCreateFlagsKHR>(static_cast<std::underlying_type<VkDisplaySurfaceCreateFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkDisplaySurfaceCreateFlagsKHR>::type>(b));
}

inline VkDisplaySurfaceCreateFlagsKHR & operator|=(VkDisplaySurfaceCreateFlagsKHR & a, const VkDisplaySurfaceCreateFlagsKHR & b)
{
    a = static_cast<VkDisplaySurfaceCreateFlagsKHR>(static_cast<std::underlying_type<VkDisplaySurfaceCreateFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkDisplaySurfaceCreateFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDisplaySurfaceCreateFlagsKHR operator&(const VkDisplaySurfaceCreateFlagsKHR & a, const VkDisplaySurfaceCreateFlagsKHR & b)
{
    return static_cast<VkDisplaySurfaceCreateFlagsKHR>(static_cast<std::underlying_type<VkDisplaySurfaceCreateFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkDisplaySurfaceCreateFlagsKHR>::type>(b));
}

inline VkDisplaySurfaceCreateFlagsKHR & operator&=(VkDisplaySurfaceCreateFlagsKHR & a, const VkDisplaySurfaceCreateFlagsKHR & b)
{
    a = static_cast<VkDisplaySurfaceCreateFlagsKHR>(static_cast<std::underlying_type<VkDisplaySurfaceCreateFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkDisplaySurfaceCreateFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkDisplaySurfaceCreateFlagsKHR operator^(const VkDisplaySurfaceCreateFlagsKHR & a, const VkDisplaySurfaceCreateFlagsKHR & b)
{
    return static_cast<VkDisplaySurfaceCreateFlagsKHR>(static_cast<std::underlying_type<VkDisplaySurfaceCreateFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkDisplaySurfaceCreateFlagsKHR>::type>(b));
}

inline VkDisplaySurfaceCreateFlagsKHR & operator^=(VkDisplaySurfaceCreateFlagsKHR & a, const VkDisplaySurfaceCreateFlagsKHR & b)
{
    a = static_cast<VkDisplaySurfaceCreateFlagsKHR>(static_cast<std::underlying_type<VkDisplaySurfaceCreateFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkDisplaySurfaceCreateFlagsKHR>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkEventCreateFlags>
{
    std::size_t operator()(const vk::VkEventCreateFlags & t) const
    {
        return hash<std::underlying_type<vk::VkEventCreateFlags>::type>()(static_cast<std::underlying_type<vk::VkEventCreateFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkEventCreateFlags operator|(const VkEventCreateFlags & a, const VkEventCreateFlags & b)
{
    return static_cast<VkEventCreateFlags>(static_cast<std::underlying_type<VkEventCreateFlags>::type>(a) | static_cast<std::underlying_type<VkEventCreateFlags>::type>(b));
}

inline VkEventCreateFlags & operator|=(VkEventCreateFlags & a, const VkEventCreateFlags & b)
{
    a = static_cast<VkEventCreateFlags>(static_cast<std::underlying_type<VkEventCreateFlags>::type>(a) | static_cast<std::underlying_type<VkEventCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkEventCreateFlags operator&(const VkEventCreateFlags & a, const VkEventCreateFlags & b)
{
    return static_cast<VkEventCreateFlags>(static_cast<std::underlying_type<VkEventCreateFlags>::type>(a) & static_cast<std::underlying_type<VkEventCreateFlags>::type>(b));
}

inline VkEventCreateFlags & operator&=(VkEventCreateFlags & a, const VkEventCreateFlags & b)
{
    a = static_cast<VkEventCreateFlags>(static_cast<std::underlying_type<VkEventCreateFlags>::type>(a) & static_cast<std::underlying_type<VkEventCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkEventCreateFlags operator^(const VkEventCreateFlags & a, const VkEventCreateFlags & b)
{
    return static_cast<VkEventCreateFlags>(static_cast<std::underlying_type<VkEventCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkEventCreateFlags>::type>(b));
}

inline VkEventCreateFlags & operator^=(VkEventCreateFlags & a, const VkEventCreateFlags & b)
{
    a = static_cast<VkEventCreateFlags>(static_cast<std::underlying_type<VkEventCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkEventCreateFlags>::type>(b));

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
struct hash<vk::VkExternalFenceFeatureFlags>
{
    std::size_t operator()(const vk::VkExternalFenceFeatureFlags & t) const
    {
        return hash<std::underlying_type<vk::VkExternalFenceFeatureFlags>::type>()(static_cast<std::underlying_type<vk::VkExternalFenceFeatureFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkExternalFenceFeatureFlags operator|(const VkExternalFenceFeatureFlags & a, const VkExternalFenceFeatureFlags & b)
{
    return static_cast<VkExternalFenceFeatureFlags>(static_cast<std::underlying_type<VkExternalFenceFeatureFlags>::type>(a) | static_cast<std::underlying_type<VkExternalFenceFeatureFlags>::type>(b));
}

inline VkExternalFenceFeatureFlags & operator|=(VkExternalFenceFeatureFlags & a, const VkExternalFenceFeatureFlags & b)
{
    a = static_cast<VkExternalFenceFeatureFlags>(static_cast<std::underlying_type<VkExternalFenceFeatureFlags>::type>(a) | static_cast<std::underlying_type<VkExternalFenceFeatureFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalFenceFeatureFlags operator&(const VkExternalFenceFeatureFlags & a, const VkExternalFenceFeatureFlags & b)
{
    return static_cast<VkExternalFenceFeatureFlags>(static_cast<std::underlying_type<VkExternalFenceFeatureFlags>::type>(a) & static_cast<std::underlying_type<VkExternalFenceFeatureFlags>::type>(b));
}

inline VkExternalFenceFeatureFlags & operator&=(VkExternalFenceFeatureFlags & a, const VkExternalFenceFeatureFlags & b)
{
    a = static_cast<VkExternalFenceFeatureFlags>(static_cast<std::underlying_type<VkExternalFenceFeatureFlags>::type>(a) & static_cast<std::underlying_type<VkExternalFenceFeatureFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalFenceFeatureFlags operator^(const VkExternalFenceFeatureFlags & a, const VkExternalFenceFeatureFlags & b)
{
    return static_cast<VkExternalFenceFeatureFlags>(static_cast<std::underlying_type<VkExternalFenceFeatureFlags>::type>(a) ^ static_cast<std::underlying_type<VkExternalFenceFeatureFlags>::type>(b));
}

inline VkExternalFenceFeatureFlags & operator^=(VkExternalFenceFeatureFlags & a, const VkExternalFenceFeatureFlags & b)
{
    a = static_cast<VkExternalFenceFeatureFlags>(static_cast<std::underlying_type<VkExternalFenceFeatureFlags>::type>(a) ^ static_cast<std::underlying_type<VkExternalFenceFeatureFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkExternalFenceFeatureFlagsKHR>
{
    std::size_t operator()(const vk::VkExternalFenceFeatureFlagsKHR & t) const
    {
        return hash<std::underlying_type<vk::VkExternalFenceFeatureFlagsKHR>::type>()(static_cast<std::underlying_type<vk::VkExternalFenceFeatureFlagsKHR>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkExternalFenceFeatureFlagsKHR operator|(const VkExternalFenceFeatureFlagsKHR & a, const VkExternalFenceFeatureFlagsKHR & b)
{
    return static_cast<VkExternalFenceFeatureFlagsKHR>(static_cast<std::underlying_type<VkExternalFenceFeatureFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkExternalFenceFeatureFlagsKHR>::type>(b));
}

inline VkExternalFenceFeatureFlagsKHR & operator|=(VkExternalFenceFeatureFlagsKHR & a, const VkExternalFenceFeatureFlagsKHR & b)
{
    a = static_cast<VkExternalFenceFeatureFlagsKHR>(static_cast<std::underlying_type<VkExternalFenceFeatureFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkExternalFenceFeatureFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalFenceFeatureFlagsKHR operator&(const VkExternalFenceFeatureFlagsKHR & a, const VkExternalFenceFeatureFlagsKHR & b)
{
    return static_cast<VkExternalFenceFeatureFlagsKHR>(static_cast<std::underlying_type<VkExternalFenceFeatureFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkExternalFenceFeatureFlagsKHR>::type>(b));
}

inline VkExternalFenceFeatureFlagsKHR & operator&=(VkExternalFenceFeatureFlagsKHR & a, const VkExternalFenceFeatureFlagsKHR & b)
{
    a = static_cast<VkExternalFenceFeatureFlagsKHR>(static_cast<std::underlying_type<VkExternalFenceFeatureFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkExternalFenceFeatureFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalFenceFeatureFlagsKHR operator^(const VkExternalFenceFeatureFlagsKHR & a, const VkExternalFenceFeatureFlagsKHR & b)
{
    return static_cast<VkExternalFenceFeatureFlagsKHR>(static_cast<std::underlying_type<VkExternalFenceFeatureFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkExternalFenceFeatureFlagsKHR>::type>(b));
}

inline VkExternalFenceFeatureFlagsKHR & operator^=(VkExternalFenceFeatureFlagsKHR & a, const VkExternalFenceFeatureFlagsKHR & b)
{
    a = static_cast<VkExternalFenceFeatureFlagsKHR>(static_cast<std::underlying_type<VkExternalFenceFeatureFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkExternalFenceFeatureFlagsKHR>::type>(b));

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
struct hash<vk::VkExternalFenceHandleTypeFlags>
{
    std::size_t operator()(const vk::VkExternalFenceHandleTypeFlags & t) const
    {
        return hash<std::underlying_type<vk::VkExternalFenceHandleTypeFlags>::type>()(static_cast<std::underlying_type<vk::VkExternalFenceHandleTypeFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkExternalFenceHandleTypeFlags operator|(const VkExternalFenceHandleTypeFlags & a, const VkExternalFenceHandleTypeFlags & b)
{
    return static_cast<VkExternalFenceHandleTypeFlags>(static_cast<std::underlying_type<VkExternalFenceHandleTypeFlags>::type>(a) | static_cast<std::underlying_type<VkExternalFenceHandleTypeFlags>::type>(b));
}

inline VkExternalFenceHandleTypeFlags & operator|=(VkExternalFenceHandleTypeFlags & a, const VkExternalFenceHandleTypeFlags & b)
{
    a = static_cast<VkExternalFenceHandleTypeFlags>(static_cast<std::underlying_type<VkExternalFenceHandleTypeFlags>::type>(a) | static_cast<std::underlying_type<VkExternalFenceHandleTypeFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalFenceHandleTypeFlags operator&(const VkExternalFenceHandleTypeFlags & a, const VkExternalFenceHandleTypeFlags & b)
{
    return static_cast<VkExternalFenceHandleTypeFlags>(static_cast<std::underlying_type<VkExternalFenceHandleTypeFlags>::type>(a) & static_cast<std::underlying_type<VkExternalFenceHandleTypeFlags>::type>(b));
}

inline VkExternalFenceHandleTypeFlags & operator&=(VkExternalFenceHandleTypeFlags & a, const VkExternalFenceHandleTypeFlags & b)
{
    a = static_cast<VkExternalFenceHandleTypeFlags>(static_cast<std::underlying_type<VkExternalFenceHandleTypeFlags>::type>(a) & static_cast<std::underlying_type<VkExternalFenceHandleTypeFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalFenceHandleTypeFlags operator^(const VkExternalFenceHandleTypeFlags & a, const VkExternalFenceHandleTypeFlags & b)
{
    return static_cast<VkExternalFenceHandleTypeFlags>(static_cast<std::underlying_type<VkExternalFenceHandleTypeFlags>::type>(a) ^ static_cast<std::underlying_type<VkExternalFenceHandleTypeFlags>::type>(b));
}

inline VkExternalFenceHandleTypeFlags & operator^=(VkExternalFenceHandleTypeFlags & a, const VkExternalFenceHandleTypeFlags & b)
{
    a = static_cast<VkExternalFenceHandleTypeFlags>(static_cast<std::underlying_type<VkExternalFenceHandleTypeFlags>::type>(a) ^ static_cast<std::underlying_type<VkExternalFenceHandleTypeFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkExternalFenceHandleTypeFlagsKHR>
{
    std::size_t operator()(const vk::VkExternalFenceHandleTypeFlagsKHR & t) const
    {
        return hash<std::underlying_type<vk::VkExternalFenceHandleTypeFlagsKHR>::type>()(static_cast<std::underlying_type<vk::VkExternalFenceHandleTypeFlagsKHR>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkExternalFenceHandleTypeFlagsKHR operator|(const VkExternalFenceHandleTypeFlagsKHR & a, const VkExternalFenceHandleTypeFlagsKHR & b)
{
    return static_cast<VkExternalFenceHandleTypeFlagsKHR>(static_cast<std::underlying_type<VkExternalFenceHandleTypeFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkExternalFenceHandleTypeFlagsKHR>::type>(b));
}

inline VkExternalFenceHandleTypeFlagsKHR & operator|=(VkExternalFenceHandleTypeFlagsKHR & a, const VkExternalFenceHandleTypeFlagsKHR & b)
{
    a = static_cast<VkExternalFenceHandleTypeFlagsKHR>(static_cast<std::underlying_type<VkExternalFenceHandleTypeFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkExternalFenceHandleTypeFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalFenceHandleTypeFlagsKHR operator&(const VkExternalFenceHandleTypeFlagsKHR & a, const VkExternalFenceHandleTypeFlagsKHR & b)
{
    return static_cast<VkExternalFenceHandleTypeFlagsKHR>(static_cast<std::underlying_type<VkExternalFenceHandleTypeFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkExternalFenceHandleTypeFlagsKHR>::type>(b));
}

inline VkExternalFenceHandleTypeFlagsKHR & operator&=(VkExternalFenceHandleTypeFlagsKHR & a, const VkExternalFenceHandleTypeFlagsKHR & b)
{
    a = static_cast<VkExternalFenceHandleTypeFlagsKHR>(static_cast<std::underlying_type<VkExternalFenceHandleTypeFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkExternalFenceHandleTypeFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalFenceHandleTypeFlagsKHR operator^(const VkExternalFenceHandleTypeFlagsKHR & a, const VkExternalFenceHandleTypeFlagsKHR & b)
{
    return static_cast<VkExternalFenceHandleTypeFlagsKHR>(static_cast<std::underlying_type<VkExternalFenceHandleTypeFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkExternalFenceHandleTypeFlagsKHR>::type>(b));
}

inline VkExternalFenceHandleTypeFlagsKHR & operator^=(VkExternalFenceHandleTypeFlagsKHR & a, const VkExternalFenceHandleTypeFlagsKHR & b)
{
    a = static_cast<VkExternalFenceHandleTypeFlagsKHR>(static_cast<std::underlying_type<VkExternalFenceHandleTypeFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkExternalFenceHandleTypeFlagsKHR>::type>(b));

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
struct hash<vk::VkExternalMemoryFeatureFlags>
{
    std::size_t operator()(const vk::VkExternalMemoryFeatureFlags & t) const
    {
        return hash<std::underlying_type<vk::VkExternalMemoryFeatureFlags>::type>()(static_cast<std::underlying_type<vk::VkExternalMemoryFeatureFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkExternalMemoryFeatureFlags operator|(const VkExternalMemoryFeatureFlags & a, const VkExternalMemoryFeatureFlags & b)
{
    return static_cast<VkExternalMemoryFeatureFlags>(static_cast<std::underlying_type<VkExternalMemoryFeatureFlags>::type>(a) | static_cast<std::underlying_type<VkExternalMemoryFeatureFlags>::type>(b));
}

inline VkExternalMemoryFeatureFlags & operator|=(VkExternalMemoryFeatureFlags & a, const VkExternalMemoryFeatureFlags & b)
{
    a = static_cast<VkExternalMemoryFeatureFlags>(static_cast<std::underlying_type<VkExternalMemoryFeatureFlags>::type>(a) | static_cast<std::underlying_type<VkExternalMemoryFeatureFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalMemoryFeatureFlags operator&(const VkExternalMemoryFeatureFlags & a, const VkExternalMemoryFeatureFlags & b)
{
    return static_cast<VkExternalMemoryFeatureFlags>(static_cast<std::underlying_type<VkExternalMemoryFeatureFlags>::type>(a) & static_cast<std::underlying_type<VkExternalMemoryFeatureFlags>::type>(b));
}

inline VkExternalMemoryFeatureFlags & operator&=(VkExternalMemoryFeatureFlags & a, const VkExternalMemoryFeatureFlags & b)
{
    a = static_cast<VkExternalMemoryFeatureFlags>(static_cast<std::underlying_type<VkExternalMemoryFeatureFlags>::type>(a) & static_cast<std::underlying_type<VkExternalMemoryFeatureFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalMemoryFeatureFlags operator^(const VkExternalMemoryFeatureFlags & a, const VkExternalMemoryFeatureFlags & b)
{
    return static_cast<VkExternalMemoryFeatureFlags>(static_cast<std::underlying_type<VkExternalMemoryFeatureFlags>::type>(a) ^ static_cast<std::underlying_type<VkExternalMemoryFeatureFlags>::type>(b));
}

inline VkExternalMemoryFeatureFlags & operator^=(VkExternalMemoryFeatureFlags & a, const VkExternalMemoryFeatureFlags & b)
{
    a = static_cast<VkExternalMemoryFeatureFlags>(static_cast<std::underlying_type<VkExternalMemoryFeatureFlags>::type>(a) ^ static_cast<std::underlying_type<VkExternalMemoryFeatureFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkExternalMemoryFeatureFlagsKHR>
{
    std::size_t operator()(const vk::VkExternalMemoryFeatureFlagsKHR & t) const
    {
        return hash<std::underlying_type<vk::VkExternalMemoryFeatureFlagsKHR>::type>()(static_cast<std::underlying_type<vk::VkExternalMemoryFeatureFlagsKHR>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkExternalMemoryFeatureFlagsKHR operator|(const VkExternalMemoryFeatureFlagsKHR & a, const VkExternalMemoryFeatureFlagsKHR & b)
{
    return static_cast<VkExternalMemoryFeatureFlagsKHR>(static_cast<std::underlying_type<VkExternalMemoryFeatureFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkExternalMemoryFeatureFlagsKHR>::type>(b));
}

inline VkExternalMemoryFeatureFlagsKHR & operator|=(VkExternalMemoryFeatureFlagsKHR & a, const VkExternalMemoryFeatureFlagsKHR & b)
{
    a = static_cast<VkExternalMemoryFeatureFlagsKHR>(static_cast<std::underlying_type<VkExternalMemoryFeatureFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkExternalMemoryFeatureFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalMemoryFeatureFlagsKHR operator&(const VkExternalMemoryFeatureFlagsKHR & a, const VkExternalMemoryFeatureFlagsKHR & b)
{
    return static_cast<VkExternalMemoryFeatureFlagsKHR>(static_cast<std::underlying_type<VkExternalMemoryFeatureFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkExternalMemoryFeatureFlagsKHR>::type>(b));
}

inline VkExternalMemoryFeatureFlagsKHR & operator&=(VkExternalMemoryFeatureFlagsKHR & a, const VkExternalMemoryFeatureFlagsKHR & b)
{
    a = static_cast<VkExternalMemoryFeatureFlagsKHR>(static_cast<std::underlying_type<VkExternalMemoryFeatureFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkExternalMemoryFeatureFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalMemoryFeatureFlagsKHR operator^(const VkExternalMemoryFeatureFlagsKHR & a, const VkExternalMemoryFeatureFlagsKHR & b)
{
    return static_cast<VkExternalMemoryFeatureFlagsKHR>(static_cast<std::underlying_type<VkExternalMemoryFeatureFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkExternalMemoryFeatureFlagsKHR>::type>(b));
}

inline VkExternalMemoryFeatureFlagsKHR & operator^=(VkExternalMemoryFeatureFlagsKHR & a, const VkExternalMemoryFeatureFlagsKHR & b)
{
    a = static_cast<VkExternalMemoryFeatureFlagsKHR>(static_cast<std::underlying_type<VkExternalMemoryFeatureFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkExternalMemoryFeatureFlagsKHR>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkExternalMemoryFeatureFlagsNV>
{
    std::size_t operator()(const vk::VkExternalMemoryFeatureFlagsNV & t) const
    {
        return hash<std::underlying_type<vk::VkExternalMemoryFeatureFlagsNV>::type>()(static_cast<std::underlying_type<vk::VkExternalMemoryFeatureFlagsNV>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkExternalMemoryFeatureFlagsNV operator|(const VkExternalMemoryFeatureFlagsNV & a, const VkExternalMemoryFeatureFlagsNV & b)
{
    return static_cast<VkExternalMemoryFeatureFlagsNV>(static_cast<std::underlying_type<VkExternalMemoryFeatureFlagsNV>::type>(a) | static_cast<std::underlying_type<VkExternalMemoryFeatureFlagsNV>::type>(b));
}

inline VkExternalMemoryFeatureFlagsNV & operator|=(VkExternalMemoryFeatureFlagsNV & a, const VkExternalMemoryFeatureFlagsNV & b)
{
    a = static_cast<VkExternalMemoryFeatureFlagsNV>(static_cast<std::underlying_type<VkExternalMemoryFeatureFlagsNV>::type>(a) | static_cast<std::underlying_type<VkExternalMemoryFeatureFlagsNV>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalMemoryFeatureFlagsNV operator&(const VkExternalMemoryFeatureFlagsNV & a, const VkExternalMemoryFeatureFlagsNV & b)
{
    return static_cast<VkExternalMemoryFeatureFlagsNV>(static_cast<std::underlying_type<VkExternalMemoryFeatureFlagsNV>::type>(a) & static_cast<std::underlying_type<VkExternalMemoryFeatureFlagsNV>::type>(b));
}

inline VkExternalMemoryFeatureFlagsNV & operator&=(VkExternalMemoryFeatureFlagsNV & a, const VkExternalMemoryFeatureFlagsNV & b)
{
    a = static_cast<VkExternalMemoryFeatureFlagsNV>(static_cast<std::underlying_type<VkExternalMemoryFeatureFlagsNV>::type>(a) & static_cast<std::underlying_type<VkExternalMemoryFeatureFlagsNV>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalMemoryFeatureFlagsNV operator^(const VkExternalMemoryFeatureFlagsNV & a, const VkExternalMemoryFeatureFlagsNV & b)
{
    return static_cast<VkExternalMemoryFeatureFlagsNV>(static_cast<std::underlying_type<VkExternalMemoryFeatureFlagsNV>::type>(a) ^ static_cast<std::underlying_type<VkExternalMemoryFeatureFlagsNV>::type>(b));
}

inline VkExternalMemoryFeatureFlagsNV & operator^=(VkExternalMemoryFeatureFlagsNV & a, const VkExternalMemoryFeatureFlagsNV & b)
{
    a = static_cast<VkExternalMemoryFeatureFlagsNV>(static_cast<std::underlying_type<VkExternalMemoryFeatureFlagsNV>::type>(a) ^ static_cast<std::underlying_type<VkExternalMemoryFeatureFlagsNV>::type>(b));

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
struct hash<vk::VkExternalMemoryHandleTypeFlags>
{
    std::size_t operator()(const vk::VkExternalMemoryHandleTypeFlags & t) const
    {
        return hash<std::underlying_type<vk::VkExternalMemoryHandleTypeFlags>::type>()(static_cast<std::underlying_type<vk::VkExternalMemoryHandleTypeFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkExternalMemoryHandleTypeFlags operator|(const VkExternalMemoryHandleTypeFlags & a, const VkExternalMemoryHandleTypeFlags & b)
{
    return static_cast<VkExternalMemoryHandleTypeFlags>(static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlags>::type>(a) | static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlags>::type>(b));
}

inline VkExternalMemoryHandleTypeFlags & operator|=(VkExternalMemoryHandleTypeFlags & a, const VkExternalMemoryHandleTypeFlags & b)
{
    a = static_cast<VkExternalMemoryHandleTypeFlags>(static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlags>::type>(a) | static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalMemoryHandleTypeFlags operator&(const VkExternalMemoryHandleTypeFlags & a, const VkExternalMemoryHandleTypeFlags & b)
{
    return static_cast<VkExternalMemoryHandleTypeFlags>(static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlags>::type>(a) & static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlags>::type>(b));
}

inline VkExternalMemoryHandleTypeFlags & operator&=(VkExternalMemoryHandleTypeFlags & a, const VkExternalMemoryHandleTypeFlags & b)
{
    a = static_cast<VkExternalMemoryHandleTypeFlags>(static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlags>::type>(a) & static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalMemoryHandleTypeFlags operator^(const VkExternalMemoryHandleTypeFlags & a, const VkExternalMemoryHandleTypeFlags & b)
{
    return static_cast<VkExternalMemoryHandleTypeFlags>(static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlags>::type>(a) ^ static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlags>::type>(b));
}

inline VkExternalMemoryHandleTypeFlags & operator^=(VkExternalMemoryHandleTypeFlags & a, const VkExternalMemoryHandleTypeFlags & b)
{
    a = static_cast<VkExternalMemoryHandleTypeFlags>(static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlags>::type>(a) ^ static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkExternalMemoryHandleTypeFlagsKHR>
{
    std::size_t operator()(const vk::VkExternalMemoryHandleTypeFlagsKHR & t) const
    {
        return hash<std::underlying_type<vk::VkExternalMemoryHandleTypeFlagsKHR>::type>()(static_cast<std::underlying_type<vk::VkExternalMemoryHandleTypeFlagsKHR>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkExternalMemoryHandleTypeFlagsKHR operator|(const VkExternalMemoryHandleTypeFlagsKHR & a, const VkExternalMemoryHandleTypeFlagsKHR & b)
{
    return static_cast<VkExternalMemoryHandleTypeFlagsKHR>(static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagsKHR>::type>(b));
}

inline VkExternalMemoryHandleTypeFlagsKHR & operator|=(VkExternalMemoryHandleTypeFlagsKHR & a, const VkExternalMemoryHandleTypeFlagsKHR & b)
{
    a = static_cast<VkExternalMemoryHandleTypeFlagsKHR>(static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalMemoryHandleTypeFlagsKHR operator&(const VkExternalMemoryHandleTypeFlagsKHR & a, const VkExternalMemoryHandleTypeFlagsKHR & b)
{
    return static_cast<VkExternalMemoryHandleTypeFlagsKHR>(static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagsKHR>::type>(b));
}

inline VkExternalMemoryHandleTypeFlagsKHR & operator&=(VkExternalMemoryHandleTypeFlagsKHR & a, const VkExternalMemoryHandleTypeFlagsKHR & b)
{
    a = static_cast<VkExternalMemoryHandleTypeFlagsKHR>(static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalMemoryHandleTypeFlagsKHR operator^(const VkExternalMemoryHandleTypeFlagsKHR & a, const VkExternalMemoryHandleTypeFlagsKHR & b)
{
    return static_cast<VkExternalMemoryHandleTypeFlagsKHR>(static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagsKHR>::type>(b));
}

inline VkExternalMemoryHandleTypeFlagsKHR & operator^=(VkExternalMemoryHandleTypeFlagsKHR & a, const VkExternalMemoryHandleTypeFlagsKHR & b)
{
    a = static_cast<VkExternalMemoryHandleTypeFlagsKHR>(static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagsKHR>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkExternalMemoryHandleTypeFlagsNV>
{
    std::size_t operator()(const vk::VkExternalMemoryHandleTypeFlagsNV & t) const
    {
        return hash<std::underlying_type<vk::VkExternalMemoryHandleTypeFlagsNV>::type>()(static_cast<std::underlying_type<vk::VkExternalMemoryHandleTypeFlagsNV>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkExternalMemoryHandleTypeFlagsNV operator|(const VkExternalMemoryHandleTypeFlagsNV & a, const VkExternalMemoryHandleTypeFlagsNV & b)
{
    return static_cast<VkExternalMemoryHandleTypeFlagsNV>(static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagsNV>::type>(a) | static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagsNV>::type>(b));
}

inline VkExternalMemoryHandleTypeFlagsNV & operator|=(VkExternalMemoryHandleTypeFlagsNV & a, const VkExternalMemoryHandleTypeFlagsNV & b)
{
    a = static_cast<VkExternalMemoryHandleTypeFlagsNV>(static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagsNV>::type>(a) | static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagsNV>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalMemoryHandleTypeFlagsNV operator&(const VkExternalMemoryHandleTypeFlagsNV & a, const VkExternalMemoryHandleTypeFlagsNV & b)
{
    return static_cast<VkExternalMemoryHandleTypeFlagsNV>(static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagsNV>::type>(a) & static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagsNV>::type>(b));
}

inline VkExternalMemoryHandleTypeFlagsNV & operator&=(VkExternalMemoryHandleTypeFlagsNV & a, const VkExternalMemoryHandleTypeFlagsNV & b)
{
    a = static_cast<VkExternalMemoryHandleTypeFlagsNV>(static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagsNV>::type>(a) & static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagsNV>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalMemoryHandleTypeFlagsNV operator^(const VkExternalMemoryHandleTypeFlagsNV & a, const VkExternalMemoryHandleTypeFlagsNV & b)
{
    return static_cast<VkExternalMemoryHandleTypeFlagsNV>(static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagsNV>::type>(a) ^ static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagsNV>::type>(b));
}

inline VkExternalMemoryHandleTypeFlagsNV & operator^=(VkExternalMemoryHandleTypeFlagsNV & a, const VkExternalMemoryHandleTypeFlagsNV & b)
{
    a = static_cast<VkExternalMemoryHandleTypeFlagsNV>(static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagsNV>::type>(a) ^ static_cast<std::underlying_type<VkExternalMemoryHandleTypeFlagsNV>::type>(b));

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
struct hash<vk::VkExternalSemaphoreFeatureFlags>
{
    std::size_t operator()(const vk::VkExternalSemaphoreFeatureFlags & t) const
    {
        return hash<std::underlying_type<vk::VkExternalSemaphoreFeatureFlags>::type>()(static_cast<std::underlying_type<vk::VkExternalSemaphoreFeatureFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkExternalSemaphoreFeatureFlags operator|(const VkExternalSemaphoreFeatureFlags & a, const VkExternalSemaphoreFeatureFlags & b)
{
    return static_cast<VkExternalSemaphoreFeatureFlags>(static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlags>::type>(a) | static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlags>::type>(b));
}

inline VkExternalSemaphoreFeatureFlags & operator|=(VkExternalSemaphoreFeatureFlags & a, const VkExternalSemaphoreFeatureFlags & b)
{
    a = static_cast<VkExternalSemaphoreFeatureFlags>(static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlags>::type>(a) | static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalSemaphoreFeatureFlags operator&(const VkExternalSemaphoreFeatureFlags & a, const VkExternalSemaphoreFeatureFlags & b)
{
    return static_cast<VkExternalSemaphoreFeatureFlags>(static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlags>::type>(a) & static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlags>::type>(b));
}

inline VkExternalSemaphoreFeatureFlags & operator&=(VkExternalSemaphoreFeatureFlags & a, const VkExternalSemaphoreFeatureFlags & b)
{
    a = static_cast<VkExternalSemaphoreFeatureFlags>(static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlags>::type>(a) & static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalSemaphoreFeatureFlags operator^(const VkExternalSemaphoreFeatureFlags & a, const VkExternalSemaphoreFeatureFlags & b)
{
    return static_cast<VkExternalSemaphoreFeatureFlags>(static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlags>::type>(a) ^ static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlags>::type>(b));
}

inline VkExternalSemaphoreFeatureFlags & operator^=(VkExternalSemaphoreFeatureFlags & a, const VkExternalSemaphoreFeatureFlags & b)
{
    a = static_cast<VkExternalSemaphoreFeatureFlags>(static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlags>::type>(a) ^ static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkExternalSemaphoreFeatureFlagsKHR>
{
    std::size_t operator()(const vk::VkExternalSemaphoreFeatureFlagsKHR & t) const
    {
        return hash<std::underlying_type<vk::VkExternalSemaphoreFeatureFlagsKHR>::type>()(static_cast<std::underlying_type<vk::VkExternalSemaphoreFeatureFlagsKHR>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkExternalSemaphoreFeatureFlagsKHR operator|(const VkExternalSemaphoreFeatureFlagsKHR & a, const VkExternalSemaphoreFeatureFlagsKHR & b)
{
    return static_cast<VkExternalSemaphoreFeatureFlagsKHR>(static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlagsKHR>::type>(b));
}

inline VkExternalSemaphoreFeatureFlagsKHR & operator|=(VkExternalSemaphoreFeatureFlagsKHR & a, const VkExternalSemaphoreFeatureFlagsKHR & b)
{
    a = static_cast<VkExternalSemaphoreFeatureFlagsKHR>(static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalSemaphoreFeatureFlagsKHR operator&(const VkExternalSemaphoreFeatureFlagsKHR & a, const VkExternalSemaphoreFeatureFlagsKHR & b)
{
    return static_cast<VkExternalSemaphoreFeatureFlagsKHR>(static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlagsKHR>::type>(b));
}

inline VkExternalSemaphoreFeatureFlagsKHR & operator&=(VkExternalSemaphoreFeatureFlagsKHR & a, const VkExternalSemaphoreFeatureFlagsKHR & b)
{
    a = static_cast<VkExternalSemaphoreFeatureFlagsKHR>(static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalSemaphoreFeatureFlagsKHR operator^(const VkExternalSemaphoreFeatureFlagsKHR & a, const VkExternalSemaphoreFeatureFlagsKHR & b)
{
    return static_cast<VkExternalSemaphoreFeatureFlagsKHR>(static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlagsKHR>::type>(b));
}

inline VkExternalSemaphoreFeatureFlagsKHR & operator^=(VkExternalSemaphoreFeatureFlagsKHR & a, const VkExternalSemaphoreFeatureFlagsKHR & b)
{
    a = static_cast<VkExternalSemaphoreFeatureFlagsKHR>(static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkExternalSemaphoreFeatureFlagsKHR>::type>(b));

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
struct hash<vk::VkExternalSemaphoreHandleTypeFlags>
{
    std::size_t operator()(const vk::VkExternalSemaphoreHandleTypeFlags & t) const
    {
        return hash<std::underlying_type<vk::VkExternalSemaphoreHandleTypeFlags>::type>()(static_cast<std::underlying_type<vk::VkExternalSemaphoreHandleTypeFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkExternalSemaphoreHandleTypeFlags operator|(const VkExternalSemaphoreHandleTypeFlags & a, const VkExternalSemaphoreHandleTypeFlags & b)
{
    return static_cast<VkExternalSemaphoreHandleTypeFlags>(static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlags>::type>(a) | static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlags>::type>(b));
}

inline VkExternalSemaphoreHandleTypeFlags & operator|=(VkExternalSemaphoreHandleTypeFlags & a, const VkExternalSemaphoreHandleTypeFlags & b)
{
    a = static_cast<VkExternalSemaphoreHandleTypeFlags>(static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlags>::type>(a) | static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalSemaphoreHandleTypeFlags operator&(const VkExternalSemaphoreHandleTypeFlags & a, const VkExternalSemaphoreHandleTypeFlags & b)
{
    return static_cast<VkExternalSemaphoreHandleTypeFlags>(static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlags>::type>(a) & static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlags>::type>(b));
}

inline VkExternalSemaphoreHandleTypeFlags & operator&=(VkExternalSemaphoreHandleTypeFlags & a, const VkExternalSemaphoreHandleTypeFlags & b)
{
    a = static_cast<VkExternalSemaphoreHandleTypeFlags>(static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlags>::type>(a) & static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalSemaphoreHandleTypeFlags operator^(const VkExternalSemaphoreHandleTypeFlags & a, const VkExternalSemaphoreHandleTypeFlags & b)
{
    return static_cast<VkExternalSemaphoreHandleTypeFlags>(static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlags>::type>(a) ^ static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlags>::type>(b));
}

inline VkExternalSemaphoreHandleTypeFlags & operator^=(VkExternalSemaphoreHandleTypeFlags & a, const VkExternalSemaphoreHandleTypeFlags & b)
{
    a = static_cast<VkExternalSemaphoreHandleTypeFlags>(static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlags>::type>(a) ^ static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkExternalSemaphoreHandleTypeFlagsKHR>
{
    std::size_t operator()(const vk::VkExternalSemaphoreHandleTypeFlagsKHR & t) const
    {
        return hash<std::underlying_type<vk::VkExternalSemaphoreHandleTypeFlagsKHR>::type>()(static_cast<std::underlying_type<vk::VkExternalSemaphoreHandleTypeFlagsKHR>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkExternalSemaphoreHandleTypeFlagsKHR operator|(const VkExternalSemaphoreHandleTypeFlagsKHR & a, const VkExternalSemaphoreHandleTypeFlagsKHR & b)
{
    return static_cast<VkExternalSemaphoreHandleTypeFlagsKHR>(static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlagsKHR>::type>(b));
}

inline VkExternalSemaphoreHandleTypeFlagsKHR & operator|=(VkExternalSemaphoreHandleTypeFlagsKHR & a, const VkExternalSemaphoreHandleTypeFlagsKHR & b)
{
    a = static_cast<VkExternalSemaphoreHandleTypeFlagsKHR>(static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalSemaphoreHandleTypeFlagsKHR operator&(const VkExternalSemaphoreHandleTypeFlagsKHR & a, const VkExternalSemaphoreHandleTypeFlagsKHR & b)
{
    return static_cast<VkExternalSemaphoreHandleTypeFlagsKHR>(static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlagsKHR>::type>(b));
}

inline VkExternalSemaphoreHandleTypeFlagsKHR & operator&=(VkExternalSemaphoreHandleTypeFlagsKHR & a, const VkExternalSemaphoreHandleTypeFlagsKHR & b)
{
    a = static_cast<VkExternalSemaphoreHandleTypeFlagsKHR>(static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkExternalSemaphoreHandleTypeFlagsKHR operator^(const VkExternalSemaphoreHandleTypeFlagsKHR & a, const VkExternalSemaphoreHandleTypeFlagsKHR & b)
{
    return static_cast<VkExternalSemaphoreHandleTypeFlagsKHR>(static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlagsKHR>::type>(b));
}

inline VkExternalSemaphoreHandleTypeFlagsKHR & operator^=(VkExternalSemaphoreHandleTypeFlagsKHR & a, const VkExternalSemaphoreHandleTypeFlagsKHR & b)
{
    a = static_cast<VkExternalSemaphoreHandleTypeFlagsKHR>(static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkExternalSemaphoreHandleTypeFlagsKHR>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkFenceCreateFlags>
{
    std::size_t operator()(const vk::VkFenceCreateFlags & t) const
    {
        return hash<std::underlying_type<vk::VkFenceCreateFlags>::type>()(static_cast<std::underlying_type<vk::VkFenceCreateFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkFenceCreateFlags operator|(const VkFenceCreateFlags & a, const VkFenceCreateFlags & b)
{
    return static_cast<VkFenceCreateFlags>(static_cast<std::underlying_type<VkFenceCreateFlags>::type>(a) | static_cast<std::underlying_type<VkFenceCreateFlags>::type>(b));
}

inline VkFenceCreateFlags & operator|=(VkFenceCreateFlags & a, const VkFenceCreateFlags & b)
{
    a = static_cast<VkFenceCreateFlags>(static_cast<std::underlying_type<VkFenceCreateFlags>::type>(a) | static_cast<std::underlying_type<VkFenceCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkFenceCreateFlags operator&(const VkFenceCreateFlags & a, const VkFenceCreateFlags & b)
{
    return static_cast<VkFenceCreateFlags>(static_cast<std::underlying_type<VkFenceCreateFlags>::type>(a) & static_cast<std::underlying_type<VkFenceCreateFlags>::type>(b));
}

inline VkFenceCreateFlags & operator&=(VkFenceCreateFlags & a, const VkFenceCreateFlags & b)
{
    a = static_cast<VkFenceCreateFlags>(static_cast<std::underlying_type<VkFenceCreateFlags>::type>(a) & static_cast<std::underlying_type<VkFenceCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkFenceCreateFlags operator^(const VkFenceCreateFlags & a, const VkFenceCreateFlags & b)
{
    return static_cast<VkFenceCreateFlags>(static_cast<std::underlying_type<VkFenceCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkFenceCreateFlags>::type>(b));
}

inline VkFenceCreateFlags & operator^=(VkFenceCreateFlags & a, const VkFenceCreateFlags & b)
{
    a = static_cast<VkFenceCreateFlags>(static_cast<std::underlying_type<VkFenceCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkFenceCreateFlags>::type>(b));

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
struct hash<vk::VkFenceImportFlags>
{
    std::size_t operator()(const vk::VkFenceImportFlags & t) const
    {
        return hash<std::underlying_type<vk::VkFenceImportFlags>::type>()(static_cast<std::underlying_type<vk::VkFenceImportFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkFenceImportFlags operator|(const VkFenceImportFlags & a, const VkFenceImportFlags & b)
{
    return static_cast<VkFenceImportFlags>(static_cast<std::underlying_type<VkFenceImportFlags>::type>(a) | static_cast<std::underlying_type<VkFenceImportFlags>::type>(b));
}

inline VkFenceImportFlags & operator|=(VkFenceImportFlags & a, const VkFenceImportFlags & b)
{
    a = static_cast<VkFenceImportFlags>(static_cast<std::underlying_type<VkFenceImportFlags>::type>(a) | static_cast<std::underlying_type<VkFenceImportFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkFenceImportFlags operator&(const VkFenceImportFlags & a, const VkFenceImportFlags & b)
{
    return static_cast<VkFenceImportFlags>(static_cast<std::underlying_type<VkFenceImportFlags>::type>(a) & static_cast<std::underlying_type<VkFenceImportFlags>::type>(b));
}

inline VkFenceImportFlags & operator&=(VkFenceImportFlags & a, const VkFenceImportFlags & b)
{
    a = static_cast<VkFenceImportFlags>(static_cast<std::underlying_type<VkFenceImportFlags>::type>(a) & static_cast<std::underlying_type<VkFenceImportFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkFenceImportFlags operator^(const VkFenceImportFlags & a, const VkFenceImportFlags & b)
{
    return static_cast<VkFenceImportFlags>(static_cast<std::underlying_type<VkFenceImportFlags>::type>(a) ^ static_cast<std::underlying_type<VkFenceImportFlags>::type>(b));
}

inline VkFenceImportFlags & operator^=(VkFenceImportFlags & a, const VkFenceImportFlags & b)
{
    a = static_cast<VkFenceImportFlags>(static_cast<std::underlying_type<VkFenceImportFlags>::type>(a) ^ static_cast<std::underlying_type<VkFenceImportFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkFenceImportFlagsKHR>
{
    std::size_t operator()(const vk::VkFenceImportFlagsKHR & t) const
    {
        return hash<std::underlying_type<vk::VkFenceImportFlagsKHR>::type>()(static_cast<std::underlying_type<vk::VkFenceImportFlagsKHR>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkFenceImportFlagsKHR operator|(const VkFenceImportFlagsKHR & a, const VkFenceImportFlagsKHR & b)
{
    return static_cast<VkFenceImportFlagsKHR>(static_cast<std::underlying_type<VkFenceImportFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkFenceImportFlagsKHR>::type>(b));
}

inline VkFenceImportFlagsKHR & operator|=(VkFenceImportFlagsKHR & a, const VkFenceImportFlagsKHR & b)
{
    a = static_cast<VkFenceImportFlagsKHR>(static_cast<std::underlying_type<VkFenceImportFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkFenceImportFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkFenceImportFlagsKHR operator&(const VkFenceImportFlagsKHR & a, const VkFenceImportFlagsKHR & b)
{
    return static_cast<VkFenceImportFlagsKHR>(static_cast<std::underlying_type<VkFenceImportFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkFenceImportFlagsKHR>::type>(b));
}

inline VkFenceImportFlagsKHR & operator&=(VkFenceImportFlagsKHR & a, const VkFenceImportFlagsKHR & b)
{
    a = static_cast<VkFenceImportFlagsKHR>(static_cast<std::underlying_type<VkFenceImportFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkFenceImportFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkFenceImportFlagsKHR operator^(const VkFenceImportFlagsKHR & a, const VkFenceImportFlagsKHR & b)
{
    return static_cast<VkFenceImportFlagsKHR>(static_cast<std::underlying_type<VkFenceImportFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkFenceImportFlagsKHR>::type>(b));
}

inline VkFenceImportFlagsKHR & operator^=(VkFenceImportFlagsKHR & a, const VkFenceImportFlagsKHR & b)
{
    a = static_cast<VkFenceImportFlagsKHR>(static_cast<std::underlying_type<VkFenceImportFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkFenceImportFlagsKHR>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkFormatFeatureFlags>
{
    std::size_t operator()(const vk::VkFormatFeatureFlags & t) const
    {
        return hash<std::underlying_type<vk::VkFormatFeatureFlags>::type>()(static_cast<std::underlying_type<vk::VkFormatFeatureFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkFormatFeatureFlags operator|(const VkFormatFeatureFlags & a, const VkFormatFeatureFlags & b)
{
    return static_cast<VkFormatFeatureFlags>(static_cast<std::underlying_type<VkFormatFeatureFlags>::type>(a) | static_cast<std::underlying_type<VkFormatFeatureFlags>::type>(b));
}

inline VkFormatFeatureFlags & operator|=(VkFormatFeatureFlags & a, const VkFormatFeatureFlags & b)
{
    a = static_cast<VkFormatFeatureFlags>(static_cast<std::underlying_type<VkFormatFeatureFlags>::type>(a) | static_cast<std::underlying_type<VkFormatFeatureFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkFormatFeatureFlags operator&(const VkFormatFeatureFlags & a, const VkFormatFeatureFlags & b)
{
    return static_cast<VkFormatFeatureFlags>(static_cast<std::underlying_type<VkFormatFeatureFlags>::type>(a) & static_cast<std::underlying_type<VkFormatFeatureFlags>::type>(b));
}

inline VkFormatFeatureFlags & operator&=(VkFormatFeatureFlags & a, const VkFormatFeatureFlags & b)
{
    a = static_cast<VkFormatFeatureFlags>(static_cast<std::underlying_type<VkFormatFeatureFlags>::type>(a) & static_cast<std::underlying_type<VkFormatFeatureFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkFormatFeatureFlags operator^(const VkFormatFeatureFlags & a, const VkFormatFeatureFlags & b)
{
    return static_cast<VkFormatFeatureFlags>(static_cast<std::underlying_type<VkFormatFeatureFlags>::type>(a) ^ static_cast<std::underlying_type<VkFormatFeatureFlags>::type>(b));
}

inline VkFormatFeatureFlags & operator^=(VkFormatFeatureFlags & a, const VkFormatFeatureFlags & b)
{
    a = static_cast<VkFormatFeatureFlags>(static_cast<std::underlying_type<VkFormatFeatureFlags>::type>(a) ^ static_cast<std::underlying_type<VkFormatFeatureFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkFramebufferCreateFlags>
{
    std::size_t operator()(const vk::VkFramebufferCreateFlags & t) const
    {
        return hash<std::underlying_type<vk::VkFramebufferCreateFlags>::type>()(static_cast<std::underlying_type<vk::VkFramebufferCreateFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkFramebufferCreateFlags operator|(const VkFramebufferCreateFlags & a, const VkFramebufferCreateFlags & b)
{
    return static_cast<VkFramebufferCreateFlags>(static_cast<std::underlying_type<VkFramebufferCreateFlags>::type>(a) | static_cast<std::underlying_type<VkFramebufferCreateFlags>::type>(b));
}

inline VkFramebufferCreateFlags & operator|=(VkFramebufferCreateFlags & a, const VkFramebufferCreateFlags & b)
{
    a = static_cast<VkFramebufferCreateFlags>(static_cast<std::underlying_type<VkFramebufferCreateFlags>::type>(a) | static_cast<std::underlying_type<VkFramebufferCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkFramebufferCreateFlags operator&(const VkFramebufferCreateFlags & a, const VkFramebufferCreateFlags & b)
{
    return static_cast<VkFramebufferCreateFlags>(static_cast<std::underlying_type<VkFramebufferCreateFlags>::type>(a) & static_cast<std::underlying_type<VkFramebufferCreateFlags>::type>(b));
}

inline VkFramebufferCreateFlags & operator&=(VkFramebufferCreateFlags & a, const VkFramebufferCreateFlags & b)
{
    a = static_cast<VkFramebufferCreateFlags>(static_cast<std::underlying_type<VkFramebufferCreateFlags>::type>(a) & static_cast<std::underlying_type<VkFramebufferCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkFramebufferCreateFlags operator^(const VkFramebufferCreateFlags & a, const VkFramebufferCreateFlags & b)
{
    return static_cast<VkFramebufferCreateFlags>(static_cast<std::underlying_type<VkFramebufferCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkFramebufferCreateFlags>::type>(b));
}

inline VkFramebufferCreateFlags & operator^=(VkFramebufferCreateFlags & a, const VkFramebufferCreateFlags & b)
{
    a = static_cast<VkFramebufferCreateFlags>(static_cast<std::underlying_type<VkFramebufferCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkFramebufferCreateFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkGeometryFlagsNV>
{
    std::size_t operator()(const vk::VkGeometryFlagsNV & t) const
    {
        return hash<std::underlying_type<vk::VkGeometryFlagsNV>::type>()(static_cast<std::underlying_type<vk::VkGeometryFlagsNV>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkGeometryFlagsNV operator|(const VkGeometryFlagsNV & a, const VkGeometryFlagsNV & b)
{
    return static_cast<VkGeometryFlagsNV>(static_cast<std::underlying_type<VkGeometryFlagsNV>::type>(a) | static_cast<std::underlying_type<VkGeometryFlagsNV>::type>(b));
}

inline VkGeometryFlagsNV & operator|=(VkGeometryFlagsNV & a, const VkGeometryFlagsNV & b)
{
    a = static_cast<VkGeometryFlagsNV>(static_cast<std::underlying_type<VkGeometryFlagsNV>::type>(a) | static_cast<std::underlying_type<VkGeometryFlagsNV>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkGeometryFlagsNV operator&(const VkGeometryFlagsNV & a, const VkGeometryFlagsNV & b)
{
    return static_cast<VkGeometryFlagsNV>(static_cast<std::underlying_type<VkGeometryFlagsNV>::type>(a) & static_cast<std::underlying_type<VkGeometryFlagsNV>::type>(b));
}

inline VkGeometryFlagsNV & operator&=(VkGeometryFlagsNV & a, const VkGeometryFlagsNV & b)
{
    a = static_cast<VkGeometryFlagsNV>(static_cast<std::underlying_type<VkGeometryFlagsNV>::type>(a) & static_cast<std::underlying_type<VkGeometryFlagsNV>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkGeometryFlagsNV operator^(const VkGeometryFlagsNV & a, const VkGeometryFlagsNV & b)
{
    return static_cast<VkGeometryFlagsNV>(static_cast<std::underlying_type<VkGeometryFlagsNV>::type>(a) ^ static_cast<std::underlying_type<VkGeometryFlagsNV>::type>(b));
}

inline VkGeometryFlagsNV & operator^=(VkGeometryFlagsNV & a, const VkGeometryFlagsNV & b)
{
    a = static_cast<VkGeometryFlagsNV>(static_cast<std::underlying_type<VkGeometryFlagsNV>::type>(a) ^ static_cast<std::underlying_type<VkGeometryFlagsNV>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkGeometryInstanceFlagsNV>
{
    std::size_t operator()(const vk::VkGeometryInstanceFlagsNV & t) const
    {
        return hash<std::underlying_type<vk::VkGeometryInstanceFlagsNV>::type>()(static_cast<std::underlying_type<vk::VkGeometryInstanceFlagsNV>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkGeometryInstanceFlagsNV operator|(const VkGeometryInstanceFlagsNV & a, const VkGeometryInstanceFlagsNV & b)
{
    return static_cast<VkGeometryInstanceFlagsNV>(static_cast<std::underlying_type<VkGeometryInstanceFlagsNV>::type>(a) | static_cast<std::underlying_type<VkGeometryInstanceFlagsNV>::type>(b));
}

inline VkGeometryInstanceFlagsNV & operator|=(VkGeometryInstanceFlagsNV & a, const VkGeometryInstanceFlagsNV & b)
{
    a = static_cast<VkGeometryInstanceFlagsNV>(static_cast<std::underlying_type<VkGeometryInstanceFlagsNV>::type>(a) | static_cast<std::underlying_type<VkGeometryInstanceFlagsNV>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkGeometryInstanceFlagsNV operator&(const VkGeometryInstanceFlagsNV & a, const VkGeometryInstanceFlagsNV & b)
{
    return static_cast<VkGeometryInstanceFlagsNV>(static_cast<std::underlying_type<VkGeometryInstanceFlagsNV>::type>(a) & static_cast<std::underlying_type<VkGeometryInstanceFlagsNV>::type>(b));
}

inline VkGeometryInstanceFlagsNV & operator&=(VkGeometryInstanceFlagsNV & a, const VkGeometryInstanceFlagsNV & b)
{
    a = static_cast<VkGeometryInstanceFlagsNV>(static_cast<std::underlying_type<VkGeometryInstanceFlagsNV>::type>(a) & static_cast<std::underlying_type<VkGeometryInstanceFlagsNV>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkGeometryInstanceFlagsNV operator^(const VkGeometryInstanceFlagsNV & a, const VkGeometryInstanceFlagsNV & b)
{
    return static_cast<VkGeometryInstanceFlagsNV>(static_cast<std::underlying_type<VkGeometryInstanceFlagsNV>::type>(a) ^ static_cast<std::underlying_type<VkGeometryInstanceFlagsNV>::type>(b));
}

inline VkGeometryInstanceFlagsNV & operator^=(VkGeometryInstanceFlagsNV & a, const VkGeometryInstanceFlagsNV & b)
{
    a = static_cast<VkGeometryInstanceFlagsNV>(static_cast<std::underlying_type<VkGeometryInstanceFlagsNV>::type>(a) ^ static_cast<std::underlying_type<VkGeometryInstanceFlagsNV>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkHeadlessSurfaceCreateFlagsEXT>
{
    std::size_t operator()(const vk::VkHeadlessSurfaceCreateFlagsEXT & t) const
    {
        return hash<std::underlying_type<vk::VkHeadlessSurfaceCreateFlagsEXT>::type>()(static_cast<std::underlying_type<vk::VkHeadlessSurfaceCreateFlagsEXT>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkHeadlessSurfaceCreateFlagsEXT operator|(const VkHeadlessSurfaceCreateFlagsEXT & a, const VkHeadlessSurfaceCreateFlagsEXT & b)
{
    return static_cast<VkHeadlessSurfaceCreateFlagsEXT>(static_cast<std::underlying_type<VkHeadlessSurfaceCreateFlagsEXT>::type>(a) | static_cast<std::underlying_type<VkHeadlessSurfaceCreateFlagsEXT>::type>(b));
}

inline VkHeadlessSurfaceCreateFlagsEXT & operator|=(VkHeadlessSurfaceCreateFlagsEXT & a, const VkHeadlessSurfaceCreateFlagsEXT & b)
{
    a = static_cast<VkHeadlessSurfaceCreateFlagsEXT>(static_cast<std::underlying_type<VkHeadlessSurfaceCreateFlagsEXT>::type>(a) | static_cast<std::underlying_type<VkHeadlessSurfaceCreateFlagsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkHeadlessSurfaceCreateFlagsEXT operator&(const VkHeadlessSurfaceCreateFlagsEXT & a, const VkHeadlessSurfaceCreateFlagsEXT & b)
{
    return static_cast<VkHeadlessSurfaceCreateFlagsEXT>(static_cast<std::underlying_type<VkHeadlessSurfaceCreateFlagsEXT>::type>(a) & static_cast<std::underlying_type<VkHeadlessSurfaceCreateFlagsEXT>::type>(b));
}

inline VkHeadlessSurfaceCreateFlagsEXT & operator&=(VkHeadlessSurfaceCreateFlagsEXT & a, const VkHeadlessSurfaceCreateFlagsEXT & b)
{
    a = static_cast<VkHeadlessSurfaceCreateFlagsEXT>(static_cast<std::underlying_type<VkHeadlessSurfaceCreateFlagsEXT>::type>(a) & static_cast<std::underlying_type<VkHeadlessSurfaceCreateFlagsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkHeadlessSurfaceCreateFlagsEXT operator^(const VkHeadlessSurfaceCreateFlagsEXT & a, const VkHeadlessSurfaceCreateFlagsEXT & b)
{
    return static_cast<VkHeadlessSurfaceCreateFlagsEXT>(static_cast<std::underlying_type<VkHeadlessSurfaceCreateFlagsEXT>::type>(a) ^ static_cast<std::underlying_type<VkHeadlessSurfaceCreateFlagsEXT>::type>(b));
}

inline VkHeadlessSurfaceCreateFlagsEXT & operator^=(VkHeadlessSurfaceCreateFlagsEXT & a, const VkHeadlessSurfaceCreateFlagsEXT & b)
{
    a = static_cast<VkHeadlessSurfaceCreateFlagsEXT>(static_cast<std::underlying_type<VkHeadlessSurfaceCreateFlagsEXT>::type>(a) ^ static_cast<std::underlying_type<VkHeadlessSurfaceCreateFlagsEXT>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkImageAspectFlags>
{
    std::size_t operator()(const vk::VkImageAspectFlags & t) const
    {
        return hash<std::underlying_type<vk::VkImageAspectFlags>::type>()(static_cast<std::underlying_type<vk::VkImageAspectFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkImageAspectFlags operator|(const VkImageAspectFlags & a, const VkImageAspectFlags & b)
{
    return static_cast<VkImageAspectFlags>(static_cast<std::underlying_type<VkImageAspectFlags>::type>(a) | static_cast<std::underlying_type<VkImageAspectFlags>::type>(b));
}

inline VkImageAspectFlags & operator|=(VkImageAspectFlags & a, const VkImageAspectFlags & b)
{
    a = static_cast<VkImageAspectFlags>(static_cast<std::underlying_type<VkImageAspectFlags>::type>(a) | static_cast<std::underlying_type<VkImageAspectFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkImageAspectFlags operator&(const VkImageAspectFlags & a, const VkImageAspectFlags & b)
{
    return static_cast<VkImageAspectFlags>(static_cast<std::underlying_type<VkImageAspectFlags>::type>(a) & static_cast<std::underlying_type<VkImageAspectFlags>::type>(b));
}

inline VkImageAspectFlags & operator&=(VkImageAspectFlags & a, const VkImageAspectFlags & b)
{
    a = static_cast<VkImageAspectFlags>(static_cast<std::underlying_type<VkImageAspectFlags>::type>(a) & static_cast<std::underlying_type<VkImageAspectFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkImageAspectFlags operator^(const VkImageAspectFlags & a, const VkImageAspectFlags & b)
{
    return static_cast<VkImageAspectFlags>(static_cast<std::underlying_type<VkImageAspectFlags>::type>(a) ^ static_cast<std::underlying_type<VkImageAspectFlags>::type>(b));
}

inline VkImageAspectFlags & operator^=(VkImageAspectFlags & a, const VkImageAspectFlags & b)
{
    a = static_cast<VkImageAspectFlags>(static_cast<std::underlying_type<VkImageAspectFlags>::type>(a) ^ static_cast<std::underlying_type<VkImageAspectFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkImageCreateFlags>
{
    std::size_t operator()(const vk::VkImageCreateFlags & t) const
    {
        return hash<std::underlying_type<vk::VkImageCreateFlags>::type>()(static_cast<std::underlying_type<vk::VkImageCreateFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkImageCreateFlags operator|(const VkImageCreateFlags & a, const VkImageCreateFlags & b)
{
    return static_cast<VkImageCreateFlags>(static_cast<std::underlying_type<VkImageCreateFlags>::type>(a) | static_cast<std::underlying_type<VkImageCreateFlags>::type>(b));
}

inline VkImageCreateFlags & operator|=(VkImageCreateFlags & a, const VkImageCreateFlags & b)
{
    a = static_cast<VkImageCreateFlags>(static_cast<std::underlying_type<VkImageCreateFlags>::type>(a) | static_cast<std::underlying_type<VkImageCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkImageCreateFlags operator&(const VkImageCreateFlags & a, const VkImageCreateFlags & b)
{
    return static_cast<VkImageCreateFlags>(static_cast<std::underlying_type<VkImageCreateFlags>::type>(a) & static_cast<std::underlying_type<VkImageCreateFlags>::type>(b));
}

inline VkImageCreateFlags & operator&=(VkImageCreateFlags & a, const VkImageCreateFlags & b)
{
    a = static_cast<VkImageCreateFlags>(static_cast<std::underlying_type<VkImageCreateFlags>::type>(a) & static_cast<std::underlying_type<VkImageCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkImageCreateFlags operator^(const VkImageCreateFlags & a, const VkImageCreateFlags & b)
{
    return static_cast<VkImageCreateFlags>(static_cast<std::underlying_type<VkImageCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkImageCreateFlags>::type>(b));
}

inline VkImageCreateFlags & operator^=(VkImageCreateFlags & a, const VkImageCreateFlags & b)
{
    a = static_cast<VkImageCreateFlags>(static_cast<std::underlying_type<VkImageCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkImageCreateFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkImageUsageFlags>
{
    std::size_t operator()(const vk::VkImageUsageFlags & t) const
    {
        return hash<std::underlying_type<vk::VkImageUsageFlags>::type>()(static_cast<std::underlying_type<vk::VkImageUsageFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkImageUsageFlags operator|(const VkImageUsageFlags & a, const VkImageUsageFlags & b)
{
    return static_cast<VkImageUsageFlags>(static_cast<std::underlying_type<VkImageUsageFlags>::type>(a) | static_cast<std::underlying_type<VkImageUsageFlags>::type>(b));
}

inline VkImageUsageFlags & operator|=(VkImageUsageFlags & a, const VkImageUsageFlags & b)
{
    a = static_cast<VkImageUsageFlags>(static_cast<std::underlying_type<VkImageUsageFlags>::type>(a) | static_cast<std::underlying_type<VkImageUsageFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkImageUsageFlags operator&(const VkImageUsageFlags & a, const VkImageUsageFlags & b)
{
    return static_cast<VkImageUsageFlags>(static_cast<std::underlying_type<VkImageUsageFlags>::type>(a) & static_cast<std::underlying_type<VkImageUsageFlags>::type>(b));
}

inline VkImageUsageFlags & operator&=(VkImageUsageFlags & a, const VkImageUsageFlags & b)
{
    a = static_cast<VkImageUsageFlags>(static_cast<std::underlying_type<VkImageUsageFlags>::type>(a) & static_cast<std::underlying_type<VkImageUsageFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkImageUsageFlags operator^(const VkImageUsageFlags & a, const VkImageUsageFlags & b)
{
    return static_cast<VkImageUsageFlags>(static_cast<std::underlying_type<VkImageUsageFlags>::type>(a) ^ static_cast<std::underlying_type<VkImageUsageFlags>::type>(b));
}

inline VkImageUsageFlags & operator^=(VkImageUsageFlags & a, const VkImageUsageFlags & b)
{
    a = static_cast<VkImageUsageFlags>(static_cast<std::underlying_type<VkImageUsageFlags>::type>(a) ^ static_cast<std::underlying_type<VkImageUsageFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkImageViewCreateFlags>
{
    std::size_t operator()(const vk::VkImageViewCreateFlags & t) const
    {
        return hash<std::underlying_type<vk::VkImageViewCreateFlags>::type>()(static_cast<std::underlying_type<vk::VkImageViewCreateFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkImageViewCreateFlags operator|(const VkImageViewCreateFlags & a, const VkImageViewCreateFlags & b)
{
    return static_cast<VkImageViewCreateFlags>(static_cast<std::underlying_type<VkImageViewCreateFlags>::type>(a) | static_cast<std::underlying_type<VkImageViewCreateFlags>::type>(b));
}

inline VkImageViewCreateFlags & operator|=(VkImageViewCreateFlags & a, const VkImageViewCreateFlags & b)
{
    a = static_cast<VkImageViewCreateFlags>(static_cast<std::underlying_type<VkImageViewCreateFlags>::type>(a) | static_cast<std::underlying_type<VkImageViewCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkImageViewCreateFlags operator&(const VkImageViewCreateFlags & a, const VkImageViewCreateFlags & b)
{
    return static_cast<VkImageViewCreateFlags>(static_cast<std::underlying_type<VkImageViewCreateFlags>::type>(a) & static_cast<std::underlying_type<VkImageViewCreateFlags>::type>(b));
}

inline VkImageViewCreateFlags & operator&=(VkImageViewCreateFlags & a, const VkImageViewCreateFlags & b)
{
    a = static_cast<VkImageViewCreateFlags>(static_cast<std::underlying_type<VkImageViewCreateFlags>::type>(a) & static_cast<std::underlying_type<VkImageViewCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkImageViewCreateFlags operator^(const VkImageViewCreateFlags & a, const VkImageViewCreateFlags & b)
{
    return static_cast<VkImageViewCreateFlags>(static_cast<std::underlying_type<VkImageViewCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkImageViewCreateFlags>::type>(b));
}

inline VkImageViewCreateFlags & operator^=(VkImageViewCreateFlags & a, const VkImageViewCreateFlags & b)
{
    a = static_cast<VkImageViewCreateFlags>(static_cast<std::underlying_type<VkImageViewCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkImageViewCreateFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkIndirectCommandsLayoutUsageFlagsNVX>
{
    std::size_t operator()(const vk::VkIndirectCommandsLayoutUsageFlagsNVX & t) const
    {
        return hash<std::underlying_type<vk::VkIndirectCommandsLayoutUsageFlagsNVX>::type>()(static_cast<std::underlying_type<vk::VkIndirectCommandsLayoutUsageFlagsNVX>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkIndirectCommandsLayoutUsageFlagsNVX operator|(const VkIndirectCommandsLayoutUsageFlagsNVX & a, const VkIndirectCommandsLayoutUsageFlagsNVX & b)
{
    return static_cast<VkIndirectCommandsLayoutUsageFlagsNVX>(static_cast<std::underlying_type<VkIndirectCommandsLayoutUsageFlagsNVX>::type>(a) | static_cast<std::underlying_type<VkIndirectCommandsLayoutUsageFlagsNVX>::type>(b));
}

inline VkIndirectCommandsLayoutUsageFlagsNVX & operator|=(VkIndirectCommandsLayoutUsageFlagsNVX & a, const VkIndirectCommandsLayoutUsageFlagsNVX & b)
{
    a = static_cast<VkIndirectCommandsLayoutUsageFlagsNVX>(static_cast<std::underlying_type<VkIndirectCommandsLayoutUsageFlagsNVX>::type>(a) | static_cast<std::underlying_type<VkIndirectCommandsLayoutUsageFlagsNVX>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkIndirectCommandsLayoutUsageFlagsNVX operator&(const VkIndirectCommandsLayoutUsageFlagsNVX & a, const VkIndirectCommandsLayoutUsageFlagsNVX & b)
{
    return static_cast<VkIndirectCommandsLayoutUsageFlagsNVX>(static_cast<std::underlying_type<VkIndirectCommandsLayoutUsageFlagsNVX>::type>(a) & static_cast<std::underlying_type<VkIndirectCommandsLayoutUsageFlagsNVX>::type>(b));
}

inline VkIndirectCommandsLayoutUsageFlagsNVX & operator&=(VkIndirectCommandsLayoutUsageFlagsNVX & a, const VkIndirectCommandsLayoutUsageFlagsNVX & b)
{
    a = static_cast<VkIndirectCommandsLayoutUsageFlagsNVX>(static_cast<std::underlying_type<VkIndirectCommandsLayoutUsageFlagsNVX>::type>(a) & static_cast<std::underlying_type<VkIndirectCommandsLayoutUsageFlagsNVX>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkIndirectCommandsLayoutUsageFlagsNVX operator^(const VkIndirectCommandsLayoutUsageFlagsNVX & a, const VkIndirectCommandsLayoutUsageFlagsNVX & b)
{
    return static_cast<VkIndirectCommandsLayoutUsageFlagsNVX>(static_cast<std::underlying_type<VkIndirectCommandsLayoutUsageFlagsNVX>::type>(a) ^ static_cast<std::underlying_type<VkIndirectCommandsLayoutUsageFlagsNVX>::type>(b));
}

inline VkIndirectCommandsLayoutUsageFlagsNVX & operator^=(VkIndirectCommandsLayoutUsageFlagsNVX & a, const VkIndirectCommandsLayoutUsageFlagsNVX & b)
{
    a = static_cast<VkIndirectCommandsLayoutUsageFlagsNVX>(static_cast<std::underlying_type<VkIndirectCommandsLayoutUsageFlagsNVX>::type>(a) ^ static_cast<std::underlying_type<VkIndirectCommandsLayoutUsageFlagsNVX>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkInstanceCreateFlags>
{
    std::size_t operator()(const vk::VkInstanceCreateFlags & t) const
    {
        return hash<std::underlying_type<vk::VkInstanceCreateFlags>::type>()(static_cast<std::underlying_type<vk::VkInstanceCreateFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkInstanceCreateFlags operator|(const VkInstanceCreateFlags & a, const VkInstanceCreateFlags & b)
{
    return static_cast<VkInstanceCreateFlags>(static_cast<std::underlying_type<VkInstanceCreateFlags>::type>(a) | static_cast<std::underlying_type<VkInstanceCreateFlags>::type>(b));
}

inline VkInstanceCreateFlags & operator|=(VkInstanceCreateFlags & a, const VkInstanceCreateFlags & b)
{
    a = static_cast<VkInstanceCreateFlags>(static_cast<std::underlying_type<VkInstanceCreateFlags>::type>(a) | static_cast<std::underlying_type<VkInstanceCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkInstanceCreateFlags operator&(const VkInstanceCreateFlags & a, const VkInstanceCreateFlags & b)
{
    return static_cast<VkInstanceCreateFlags>(static_cast<std::underlying_type<VkInstanceCreateFlags>::type>(a) & static_cast<std::underlying_type<VkInstanceCreateFlags>::type>(b));
}

inline VkInstanceCreateFlags & operator&=(VkInstanceCreateFlags & a, const VkInstanceCreateFlags & b)
{
    a = static_cast<VkInstanceCreateFlags>(static_cast<std::underlying_type<VkInstanceCreateFlags>::type>(a) & static_cast<std::underlying_type<VkInstanceCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkInstanceCreateFlags operator^(const VkInstanceCreateFlags & a, const VkInstanceCreateFlags & b)
{
    return static_cast<VkInstanceCreateFlags>(static_cast<std::underlying_type<VkInstanceCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkInstanceCreateFlags>::type>(b));
}

inline VkInstanceCreateFlags & operator^=(VkInstanceCreateFlags & a, const VkInstanceCreateFlags & b)
{
    a = static_cast<VkInstanceCreateFlags>(static_cast<std::underlying_type<VkInstanceCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkInstanceCreateFlags>::type>(b));

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
struct hash<vk::VkMemoryAllocateFlags>
{
    std::size_t operator()(const vk::VkMemoryAllocateFlags & t) const
    {
        return hash<std::underlying_type<vk::VkMemoryAllocateFlags>::type>()(static_cast<std::underlying_type<vk::VkMemoryAllocateFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkMemoryAllocateFlags operator|(const VkMemoryAllocateFlags & a, const VkMemoryAllocateFlags & b)
{
    return static_cast<VkMemoryAllocateFlags>(static_cast<std::underlying_type<VkMemoryAllocateFlags>::type>(a) | static_cast<std::underlying_type<VkMemoryAllocateFlags>::type>(b));
}

inline VkMemoryAllocateFlags & operator|=(VkMemoryAllocateFlags & a, const VkMemoryAllocateFlags & b)
{
    a = static_cast<VkMemoryAllocateFlags>(static_cast<std::underlying_type<VkMemoryAllocateFlags>::type>(a) | static_cast<std::underlying_type<VkMemoryAllocateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkMemoryAllocateFlags operator&(const VkMemoryAllocateFlags & a, const VkMemoryAllocateFlags & b)
{
    return static_cast<VkMemoryAllocateFlags>(static_cast<std::underlying_type<VkMemoryAllocateFlags>::type>(a) & static_cast<std::underlying_type<VkMemoryAllocateFlags>::type>(b));
}

inline VkMemoryAllocateFlags & operator&=(VkMemoryAllocateFlags & a, const VkMemoryAllocateFlags & b)
{
    a = static_cast<VkMemoryAllocateFlags>(static_cast<std::underlying_type<VkMemoryAllocateFlags>::type>(a) & static_cast<std::underlying_type<VkMemoryAllocateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkMemoryAllocateFlags operator^(const VkMemoryAllocateFlags & a, const VkMemoryAllocateFlags & b)
{
    return static_cast<VkMemoryAllocateFlags>(static_cast<std::underlying_type<VkMemoryAllocateFlags>::type>(a) ^ static_cast<std::underlying_type<VkMemoryAllocateFlags>::type>(b));
}

inline VkMemoryAllocateFlags & operator^=(VkMemoryAllocateFlags & a, const VkMemoryAllocateFlags & b)
{
    a = static_cast<VkMemoryAllocateFlags>(static_cast<std::underlying_type<VkMemoryAllocateFlags>::type>(a) ^ static_cast<std::underlying_type<VkMemoryAllocateFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkMemoryAllocateFlagsKHR>
{
    std::size_t operator()(const vk::VkMemoryAllocateFlagsKHR & t) const
    {
        return hash<std::underlying_type<vk::VkMemoryAllocateFlagsKHR>::type>()(static_cast<std::underlying_type<vk::VkMemoryAllocateFlagsKHR>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkMemoryAllocateFlagsKHR operator|(const VkMemoryAllocateFlagsKHR & a, const VkMemoryAllocateFlagsKHR & b)
{
    return static_cast<VkMemoryAllocateFlagsKHR>(static_cast<std::underlying_type<VkMemoryAllocateFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkMemoryAllocateFlagsKHR>::type>(b));
}

inline VkMemoryAllocateFlagsKHR & operator|=(VkMemoryAllocateFlagsKHR & a, const VkMemoryAllocateFlagsKHR & b)
{
    a = static_cast<VkMemoryAllocateFlagsKHR>(static_cast<std::underlying_type<VkMemoryAllocateFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkMemoryAllocateFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkMemoryAllocateFlagsKHR operator&(const VkMemoryAllocateFlagsKHR & a, const VkMemoryAllocateFlagsKHR & b)
{
    return static_cast<VkMemoryAllocateFlagsKHR>(static_cast<std::underlying_type<VkMemoryAllocateFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkMemoryAllocateFlagsKHR>::type>(b));
}

inline VkMemoryAllocateFlagsKHR & operator&=(VkMemoryAllocateFlagsKHR & a, const VkMemoryAllocateFlagsKHR & b)
{
    a = static_cast<VkMemoryAllocateFlagsKHR>(static_cast<std::underlying_type<VkMemoryAllocateFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkMemoryAllocateFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkMemoryAllocateFlagsKHR operator^(const VkMemoryAllocateFlagsKHR & a, const VkMemoryAllocateFlagsKHR & b)
{
    return static_cast<VkMemoryAllocateFlagsKHR>(static_cast<std::underlying_type<VkMemoryAllocateFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkMemoryAllocateFlagsKHR>::type>(b));
}

inline VkMemoryAllocateFlagsKHR & operator^=(VkMemoryAllocateFlagsKHR & a, const VkMemoryAllocateFlagsKHR & b)
{
    a = static_cast<VkMemoryAllocateFlagsKHR>(static_cast<std::underlying_type<VkMemoryAllocateFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkMemoryAllocateFlagsKHR>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkMemoryHeapFlags>
{
    std::size_t operator()(const vk::VkMemoryHeapFlags & t) const
    {
        return hash<std::underlying_type<vk::VkMemoryHeapFlags>::type>()(static_cast<std::underlying_type<vk::VkMemoryHeapFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkMemoryHeapFlags operator|(const VkMemoryHeapFlags & a, const VkMemoryHeapFlags & b)
{
    return static_cast<VkMemoryHeapFlags>(static_cast<std::underlying_type<VkMemoryHeapFlags>::type>(a) | static_cast<std::underlying_type<VkMemoryHeapFlags>::type>(b));
}

inline VkMemoryHeapFlags & operator|=(VkMemoryHeapFlags & a, const VkMemoryHeapFlags & b)
{
    a = static_cast<VkMemoryHeapFlags>(static_cast<std::underlying_type<VkMemoryHeapFlags>::type>(a) | static_cast<std::underlying_type<VkMemoryHeapFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkMemoryHeapFlags operator&(const VkMemoryHeapFlags & a, const VkMemoryHeapFlags & b)
{
    return static_cast<VkMemoryHeapFlags>(static_cast<std::underlying_type<VkMemoryHeapFlags>::type>(a) & static_cast<std::underlying_type<VkMemoryHeapFlags>::type>(b));
}

inline VkMemoryHeapFlags & operator&=(VkMemoryHeapFlags & a, const VkMemoryHeapFlags & b)
{
    a = static_cast<VkMemoryHeapFlags>(static_cast<std::underlying_type<VkMemoryHeapFlags>::type>(a) & static_cast<std::underlying_type<VkMemoryHeapFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkMemoryHeapFlags operator^(const VkMemoryHeapFlags & a, const VkMemoryHeapFlags & b)
{
    return static_cast<VkMemoryHeapFlags>(static_cast<std::underlying_type<VkMemoryHeapFlags>::type>(a) ^ static_cast<std::underlying_type<VkMemoryHeapFlags>::type>(b));
}

inline VkMemoryHeapFlags & operator^=(VkMemoryHeapFlags & a, const VkMemoryHeapFlags & b)
{
    a = static_cast<VkMemoryHeapFlags>(static_cast<std::underlying_type<VkMemoryHeapFlags>::type>(a) ^ static_cast<std::underlying_type<VkMemoryHeapFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkMemoryMapFlags>
{
    std::size_t operator()(const vk::VkMemoryMapFlags & t) const
    {
        return hash<std::underlying_type<vk::VkMemoryMapFlags>::type>()(static_cast<std::underlying_type<vk::VkMemoryMapFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkMemoryMapFlags operator|(const VkMemoryMapFlags & a, const VkMemoryMapFlags & b)
{
    return static_cast<VkMemoryMapFlags>(static_cast<std::underlying_type<VkMemoryMapFlags>::type>(a) | static_cast<std::underlying_type<VkMemoryMapFlags>::type>(b));
}

inline VkMemoryMapFlags & operator|=(VkMemoryMapFlags & a, const VkMemoryMapFlags & b)
{
    a = static_cast<VkMemoryMapFlags>(static_cast<std::underlying_type<VkMemoryMapFlags>::type>(a) | static_cast<std::underlying_type<VkMemoryMapFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkMemoryMapFlags operator&(const VkMemoryMapFlags & a, const VkMemoryMapFlags & b)
{
    return static_cast<VkMemoryMapFlags>(static_cast<std::underlying_type<VkMemoryMapFlags>::type>(a) & static_cast<std::underlying_type<VkMemoryMapFlags>::type>(b));
}

inline VkMemoryMapFlags & operator&=(VkMemoryMapFlags & a, const VkMemoryMapFlags & b)
{
    a = static_cast<VkMemoryMapFlags>(static_cast<std::underlying_type<VkMemoryMapFlags>::type>(a) & static_cast<std::underlying_type<VkMemoryMapFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkMemoryMapFlags operator^(const VkMemoryMapFlags & a, const VkMemoryMapFlags & b)
{
    return static_cast<VkMemoryMapFlags>(static_cast<std::underlying_type<VkMemoryMapFlags>::type>(a) ^ static_cast<std::underlying_type<VkMemoryMapFlags>::type>(b));
}

inline VkMemoryMapFlags & operator^=(VkMemoryMapFlags & a, const VkMemoryMapFlags & b)
{
    a = static_cast<VkMemoryMapFlags>(static_cast<std::underlying_type<VkMemoryMapFlags>::type>(a) ^ static_cast<std::underlying_type<VkMemoryMapFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkMemoryPropertyFlags>
{
    std::size_t operator()(const vk::VkMemoryPropertyFlags & t) const
    {
        return hash<std::underlying_type<vk::VkMemoryPropertyFlags>::type>()(static_cast<std::underlying_type<vk::VkMemoryPropertyFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkMemoryPropertyFlags operator|(const VkMemoryPropertyFlags & a, const VkMemoryPropertyFlags & b)
{
    return static_cast<VkMemoryPropertyFlags>(static_cast<std::underlying_type<VkMemoryPropertyFlags>::type>(a) | static_cast<std::underlying_type<VkMemoryPropertyFlags>::type>(b));
}

inline VkMemoryPropertyFlags & operator|=(VkMemoryPropertyFlags & a, const VkMemoryPropertyFlags & b)
{
    a = static_cast<VkMemoryPropertyFlags>(static_cast<std::underlying_type<VkMemoryPropertyFlags>::type>(a) | static_cast<std::underlying_type<VkMemoryPropertyFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkMemoryPropertyFlags operator&(const VkMemoryPropertyFlags & a, const VkMemoryPropertyFlags & b)
{
    return static_cast<VkMemoryPropertyFlags>(static_cast<std::underlying_type<VkMemoryPropertyFlags>::type>(a) & static_cast<std::underlying_type<VkMemoryPropertyFlags>::type>(b));
}

inline VkMemoryPropertyFlags & operator&=(VkMemoryPropertyFlags & a, const VkMemoryPropertyFlags & b)
{
    a = static_cast<VkMemoryPropertyFlags>(static_cast<std::underlying_type<VkMemoryPropertyFlags>::type>(a) & static_cast<std::underlying_type<VkMemoryPropertyFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkMemoryPropertyFlags operator^(const VkMemoryPropertyFlags & a, const VkMemoryPropertyFlags & b)
{
    return static_cast<VkMemoryPropertyFlags>(static_cast<std::underlying_type<VkMemoryPropertyFlags>::type>(a) ^ static_cast<std::underlying_type<VkMemoryPropertyFlags>::type>(b));
}

inline VkMemoryPropertyFlags & operator^=(VkMemoryPropertyFlags & a, const VkMemoryPropertyFlags & b)
{
    a = static_cast<VkMemoryPropertyFlags>(static_cast<std::underlying_type<VkMemoryPropertyFlags>::type>(a) ^ static_cast<std::underlying_type<VkMemoryPropertyFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkObjectEntryUsageFlagsNVX>
{
    std::size_t operator()(const vk::VkObjectEntryUsageFlagsNVX & t) const
    {
        return hash<std::underlying_type<vk::VkObjectEntryUsageFlagsNVX>::type>()(static_cast<std::underlying_type<vk::VkObjectEntryUsageFlagsNVX>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkObjectEntryUsageFlagsNVX operator|(const VkObjectEntryUsageFlagsNVX & a, const VkObjectEntryUsageFlagsNVX & b)
{
    return static_cast<VkObjectEntryUsageFlagsNVX>(static_cast<std::underlying_type<VkObjectEntryUsageFlagsNVX>::type>(a) | static_cast<std::underlying_type<VkObjectEntryUsageFlagsNVX>::type>(b));
}

inline VkObjectEntryUsageFlagsNVX & operator|=(VkObjectEntryUsageFlagsNVX & a, const VkObjectEntryUsageFlagsNVX & b)
{
    a = static_cast<VkObjectEntryUsageFlagsNVX>(static_cast<std::underlying_type<VkObjectEntryUsageFlagsNVX>::type>(a) | static_cast<std::underlying_type<VkObjectEntryUsageFlagsNVX>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkObjectEntryUsageFlagsNVX operator&(const VkObjectEntryUsageFlagsNVX & a, const VkObjectEntryUsageFlagsNVX & b)
{
    return static_cast<VkObjectEntryUsageFlagsNVX>(static_cast<std::underlying_type<VkObjectEntryUsageFlagsNVX>::type>(a) & static_cast<std::underlying_type<VkObjectEntryUsageFlagsNVX>::type>(b));
}

inline VkObjectEntryUsageFlagsNVX & operator&=(VkObjectEntryUsageFlagsNVX & a, const VkObjectEntryUsageFlagsNVX & b)
{
    a = static_cast<VkObjectEntryUsageFlagsNVX>(static_cast<std::underlying_type<VkObjectEntryUsageFlagsNVX>::type>(a) & static_cast<std::underlying_type<VkObjectEntryUsageFlagsNVX>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkObjectEntryUsageFlagsNVX operator^(const VkObjectEntryUsageFlagsNVX & a, const VkObjectEntryUsageFlagsNVX & b)
{
    return static_cast<VkObjectEntryUsageFlagsNVX>(static_cast<std::underlying_type<VkObjectEntryUsageFlagsNVX>::type>(a) ^ static_cast<std::underlying_type<VkObjectEntryUsageFlagsNVX>::type>(b));
}

inline VkObjectEntryUsageFlagsNVX & operator^=(VkObjectEntryUsageFlagsNVX & a, const VkObjectEntryUsageFlagsNVX & b)
{
    a = static_cast<VkObjectEntryUsageFlagsNVX>(static_cast<std::underlying_type<VkObjectEntryUsageFlagsNVX>::type>(a) ^ static_cast<std::underlying_type<VkObjectEntryUsageFlagsNVX>::type>(b));

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
struct hash<vk::VkPeerMemoryFeatureFlags>
{
    std::size_t operator()(const vk::VkPeerMemoryFeatureFlags & t) const
    {
        return hash<std::underlying_type<vk::VkPeerMemoryFeatureFlags>::type>()(static_cast<std::underlying_type<vk::VkPeerMemoryFeatureFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPeerMemoryFeatureFlags operator|(const VkPeerMemoryFeatureFlags & a, const VkPeerMemoryFeatureFlags & b)
{
    return static_cast<VkPeerMemoryFeatureFlags>(static_cast<std::underlying_type<VkPeerMemoryFeatureFlags>::type>(a) | static_cast<std::underlying_type<VkPeerMemoryFeatureFlags>::type>(b));
}

inline VkPeerMemoryFeatureFlags & operator|=(VkPeerMemoryFeatureFlags & a, const VkPeerMemoryFeatureFlags & b)
{
    a = static_cast<VkPeerMemoryFeatureFlags>(static_cast<std::underlying_type<VkPeerMemoryFeatureFlags>::type>(a) | static_cast<std::underlying_type<VkPeerMemoryFeatureFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPeerMemoryFeatureFlags operator&(const VkPeerMemoryFeatureFlags & a, const VkPeerMemoryFeatureFlags & b)
{
    return static_cast<VkPeerMemoryFeatureFlags>(static_cast<std::underlying_type<VkPeerMemoryFeatureFlags>::type>(a) & static_cast<std::underlying_type<VkPeerMemoryFeatureFlags>::type>(b));
}

inline VkPeerMemoryFeatureFlags & operator&=(VkPeerMemoryFeatureFlags & a, const VkPeerMemoryFeatureFlags & b)
{
    a = static_cast<VkPeerMemoryFeatureFlags>(static_cast<std::underlying_type<VkPeerMemoryFeatureFlags>::type>(a) & static_cast<std::underlying_type<VkPeerMemoryFeatureFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPeerMemoryFeatureFlags operator^(const VkPeerMemoryFeatureFlags & a, const VkPeerMemoryFeatureFlags & b)
{
    return static_cast<VkPeerMemoryFeatureFlags>(static_cast<std::underlying_type<VkPeerMemoryFeatureFlags>::type>(a) ^ static_cast<std::underlying_type<VkPeerMemoryFeatureFlags>::type>(b));
}

inline VkPeerMemoryFeatureFlags & operator^=(VkPeerMemoryFeatureFlags & a, const VkPeerMemoryFeatureFlags & b)
{
    a = static_cast<VkPeerMemoryFeatureFlags>(static_cast<std::underlying_type<VkPeerMemoryFeatureFlags>::type>(a) ^ static_cast<std::underlying_type<VkPeerMemoryFeatureFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPeerMemoryFeatureFlagsKHR>
{
    std::size_t operator()(const vk::VkPeerMemoryFeatureFlagsKHR & t) const
    {
        return hash<std::underlying_type<vk::VkPeerMemoryFeatureFlagsKHR>::type>()(static_cast<std::underlying_type<vk::VkPeerMemoryFeatureFlagsKHR>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPeerMemoryFeatureFlagsKHR operator|(const VkPeerMemoryFeatureFlagsKHR & a, const VkPeerMemoryFeatureFlagsKHR & b)
{
    return static_cast<VkPeerMemoryFeatureFlagsKHR>(static_cast<std::underlying_type<VkPeerMemoryFeatureFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkPeerMemoryFeatureFlagsKHR>::type>(b));
}

inline VkPeerMemoryFeatureFlagsKHR & operator|=(VkPeerMemoryFeatureFlagsKHR & a, const VkPeerMemoryFeatureFlagsKHR & b)
{
    a = static_cast<VkPeerMemoryFeatureFlagsKHR>(static_cast<std::underlying_type<VkPeerMemoryFeatureFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkPeerMemoryFeatureFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPeerMemoryFeatureFlagsKHR operator&(const VkPeerMemoryFeatureFlagsKHR & a, const VkPeerMemoryFeatureFlagsKHR & b)
{
    return static_cast<VkPeerMemoryFeatureFlagsKHR>(static_cast<std::underlying_type<VkPeerMemoryFeatureFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkPeerMemoryFeatureFlagsKHR>::type>(b));
}

inline VkPeerMemoryFeatureFlagsKHR & operator&=(VkPeerMemoryFeatureFlagsKHR & a, const VkPeerMemoryFeatureFlagsKHR & b)
{
    a = static_cast<VkPeerMemoryFeatureFlagsKHR>(static_cast<std::underlying_type<VkPeerMemoryFeatureFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkPeerMemoryFeatureFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPeerMemoryFeatureFlagsKHR operator^(const VkPeerMemoryFeatureFlagsKHR & a, const VkPeerMemoryFeatureFlagsKHR & b)
{
    return static_cast<VkPeerMemoryFeatureFlagsKHR>(static_cast<std::underlying_type<VkPeerMemoryFeatureFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkPeerMemoryFeatureFlagsKHR>::type>(b));
}

inline VkPeerMemoryFeatureFlagsKHR & operator^=(VkPeerMemoryFeatureFlagsKHR & a, const VkPeerMemoryFeatureFlagsKHR & b)
{
    a = static_cast<VkPeerMemoryFeatureFlagsKHR>(static_cast<std::underlying_type<VkPeerMemoryFeatureFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkPeerMemoryFeatureFlagsKHR>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPipelineCacheCreateFlags>
{
    std::size_t operator()(const vk::VkPipelineCacheCreateFlags & t) const
    {
        return hash<std::underlying_type<vk::VkPipelineCacheCreateFlags>::type>()(static_cast<std::underlying_type<vk::VkPipelineCacheCreateFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPipelineCacheCreateFlags operator|(const VkPipelineCacheCreateFlags & a, const VkPipelineCacheCreateFlags & b)
{
    return static_cast<VkPipelineCacheCreateFlags>(static_cast<std::underlying_type<VkPipelineCacheCreateFlags>::type>(a) | static_cast<std::underlying_type<VkPipelineCacheCreateFlags>::type>(b));
}

inline VkPipelineCacheCreateFlags & operator|=(VkPipelineCacheCreateFlags & a, const VkPipelineCacheCreateFlags & b)
{
    a = static_cast<VkPipelineCacheCreateFlags>(static_cast<std::underlying_type<VkPipelineCacheCreateFlags>::type>(a) | static_cast<std::underlying_type<VkPipelineCacheCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineCacheCreateFlags operator&(const VkPipelineCacheCreateFlags & a, const VkPipelineCacheCreateFlags & b)
{
    return static_cast<VkPipelineCacheCreateFlags>(static_cast<std::underlying_type<VkPipelineCacheCreateFlags>::type>(a) & static_cast<std::underlying_type<VkPipelineCacheCreateFlags>::type>(b));
}

inline VkPipelineCacheCreateFlags & operator&=(VkPipelineCacheCreateFlags & a, const VkPipelineCacheCreateFlags & b)
{
    a = static_cast<VkPipelineCacheCreateFlags>(static_cast<std::underlying_type<VkPipelineCacheCreateFlags>::type>(a) & static_cast<std::underlying_type<VkPipelineCacheCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineCacheCreateFlags operator^(const VkPipelineCacheCreateFlags & a, const VkPipelineCacheCreateFlags & b)
{
    return static_cast<VkPipelineCacheCreateFlags>(static_cast<std::underlying_type<VkPipelineCacheCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkPipelineCacheCreateFlags>::type>(b));
}

inline VkPipelineCacheCreateFlags & operator^=(VkPipelineCacheCreateFlags & a, const VkPipelineCacheCreateFlags & b)
{
    a = static_cast<VkPipelineCacheCreateFlags>(static_cast<std::underlying_type<VkPipelineCacheCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkPipelineCacheCreateFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPipelineColorBlendStateCreateFlags>
{
    std::size_t operator()(const vk::VkPipelineColorBlendStateCreateFlags & t) const
    {
        return hash<std::underlying_type<vk::VkPipelineColorBlendStateCreateFlags>::type>()(static_cast<std::underlying_type<vk::VkPipelineColorBlendStateCreateFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPipelineColorBlendStateCreateFlags operator|(const VkPipelineColorBlendStateCreateFlags & a, const VkPipelineColorBlendStateCreateFlags & b)
{
    return static_cast<VkPipelineColorBlendStateCreateFlags>(static_cast<std::underlying_type<VkPipelineColorBlendStateCreateFlags>::type>(a) | static_cast<std::underlying_type<VkPipelineColorBlendStateCreateFlags>::type>(b));
}

inline VkPipelineColorBlendStateCreateFlags & operator|=(VkPipelineColorBlendStateCreateFlags & a, const VkPipelineColorBlendStateCreateFlags & b)
{
    a = static_cast<VkPipelineColorBlendStateCreateFlags>(static_cast<std::underlying_type<VkPipelineColorBlendStateCreateFlags>::type>(a) | static_cast<std::underlying_type<VkPipelineColorBlendStateCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineColorBlendStateCreateFlags operator&(const VkPipelineColorBlendStateCreateFlags & a, const VkPipelineColorBlendStateCreateFlags & b)
{
    return static_cast<VkPipelineColorBlendStateCreateFlags>(static_cast<std::underlying_type<VkPipelineColorBlendStateCreateFlags>::type>(a) & static_cast<std::underlying_type<VkPipelineColorBlendStateCreateFlags>::type>(b));
}

inline VkPipelineColorBlendStateCreateFlags & operator&=(VkPipelineColorBlendStateCreateFlags & a, const VkPipelineColorBlendStateCreateFlags & b)
{
    a = static_cast<VkPipelineColorBlendStateCreateFlags>(static_cast<std::underlying_type<VkPipelineColorBlendStateCreateFlags>::type>(a) & static_cast<std::underlying_type<VkPipelineColorBlendStateCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineColorBlendStateCreateFlags operator^(const VkPipelineColorBlendStateCreateFlags & a, const VkPipelineColorBlendStateCreateFlags & b)
{
    return static_cast<VkPipelineColorBlendStateCreateFlags>(static_cast<std::underlying_type<VkPipelineColorBlendStateCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkPipelineColorBlendStateCreateFlags>::type>(b));
}

inline VkPipelineColorBlendStateCreateFlags & operator^=(VkPipelineColorBlendStateCreateFlags & a, const VkPipelineColorBlendStateCreateFlags & b)
{
    a = static_cast<VkPipelineColorBlendStateCreateFlags>(static_cast<std::underlying_type<VkPipelineColorBlendStateCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkPipelineColorBlendStateCreateFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPipelineCompilerControlFlagsAMD>
{
    std::size_t operator()(const vk::VkPipelineCompilerControlFlagsAMD & t) const
    {
        return hash<std::underlying_type<vk::VkPipelineCompilerControlFlagsAMD>::type>()(static_cast<std::underlying_type<vk::VkPipelineCompilerControlFlagsAMD>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPipelineCompilerControlFlagsAMD operator|(const VkPipelineCompilerControlFlagsAMD & a, const VkPipelineCompilerControlFlagsAMD & b)
{
    return static_cast<VkPipelineCompilerControlFlagsAMD>(static_cast<std::underlying_type<VkPipelineCompilerControlFlagsAMD>::type>(a) | static_cast<std::underlying_type<VkPipelineCompilerControlFlagsAMD>::type>(b));
}

inline VkPipelineCompilerControlFlagsAMD & operator|=(VkPipelineCompilerControlFlagsAMD & a, const VkPipelineCompilerControlFlagsAMD & b)
{
    a = static_cast<VkPipelineCompilerControlFlagsAMD>(static_cast<std::underlying_type<VkPipelineCompilerControlFlagsAMD>::type>(a) | static_cast<std::underlying_type<VkPipelineCompilerControlFlagsAMD>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineCompilerControlFlagsAMD operator&(const VkPipelineCompilerControlFlagsAMD & a, const VkPipelineCompilerControlFlagsAMD & b)
{
    return static_cast<VkPipelineCompilerControlFlagsAMD>(static_cast<std::underlying_type<VkPipelineCompilerControlFlagsAMD>::type>(a) & static_cast<std::underlying_type<VkPipelineCompilerControlFlagsAMD>::type>(b));
}

inline VkPipelineCompilerControlFlagsAMD & operator&=(VkPipelineCompilerControlFlagsAMD & a, const VkPipelineCompilerControlFlagsAMD & b)
{
    a = static_cast<VkPipelineCompilerControlFlagsAMD>(static_cast<std::underlying_type<VkPipelineCompilerControlFlagsAMD>::type>(a) & static_cast<std::underlying_type<VkPipelineCompilerControlFlagsAMD>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineCompilerControlFlagsAMD operator^(const VkPipelineCompilerControlFlagsAMD & a, const VkPipelineCompilerControlFlagsAMD & b)
{
    return static_cast<VkPipelineCompilerControlFlagsAMD>(static_cast<std::underlying_type<VkPipelineCompilerControlFlagsAMD>::type>(a) ^ static_cast<std::underlying_type<VkPipelineCompilerControlFlagsAMD>::type>(b));
}

inline VkPipelineCompilerControlFlagsAMD & operator^=(VkPipelineCompilerControlFlagsAMD & a, const VkPipelineCompilerControlFlagsAMD & b)
{
    a = static_cast<VkPipelineCompilerControlFlagsAMD>(static_cast<std::underlying_type<VkPipelineCompilerControlFlagsAMD>::type>(a) ^ static_cast<std::underlying_type<VkPipelineCompilerControlFlagsAMD>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPipelineCoverageModulationStateCreateFlagsNV>
{
    std::size_t operator()(const vk::VkPipelineCoverageModulationStateCreateFlagsNV & t) const
    {
        return hash<std::underlying_type<vk::VkPipelineCoverageModulationStateCreateFlagsNV>::type>()(static_cast<std::underlying_type<vk::VkPipelineCoverageModulationStateCreateFlagsNV>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPipelineCoverageModulationStateCreateFlagsNV operator|(const VkPipelineCoverageModulationStateCreateFlagsNV & a, const VkPipelineCoverageModulationStateCreateFlagsNV & b)
{
    return static_cast<VkPipelineCoverageModulationStateCreateFlagsNV>(static_cast<std::underlying_type<VkPipelineCoverageModulationStateCreateFlagsNV>::type>(a) | static_cast<std::underlying_type<VkPipelineCoverageModulationStateCreateFlagsNV>::type>(b));
}

inline VkPipelineCoverageModulationStateCreateFlagsNV & operator|=(VkPipelineCoverageModulationStateCreateFlagsNV & a, const VkPipelineCoverageModulationStateCreateFlagsNV & b)
{
    a = static_cast<VkPipelineCoverageModulationStateCreateFlagsNV>(static_cast<std::underlying_type<VkPipelineCoverageModulationStateCreateFlagsNV>::type>(a) | static_cast<std::underlying_type<VkPipelineCoverageModulationStateCreateFlagsNV>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineCoverageModulationStateCreateFlagsNV operator&(const VkPipelineCoverageModulationStateCreateFlagsNV & a, const VkPipelineCoverageModulationStateCreateFlagsNV & b)
{
    return static_cast<VkPipelineCoverageModulationStateCreateFlagsNV>(static_cast<std::underlying_type<VkPipelineCoverageModulationStateCreateFlagsNV>::type>(a) & static_cast<std::underlying_type<VkPipelineCoverageModulationStateCreateFlagsNV>::type>(b));
}

inline VkPipelineCoverageModulationStateCreateFlagsNV & operator&=(VkPipelineCoverageModulationStateCreateFlagsNV & a, const VkPipelineCoverageModulationStateCreateFlagsNV & b)
{
    a = static_cast<VkPipelineCoverageModulationStateCreateFlagsNV>(static_cast<std::underlying_type<VkPipelineCoverageModulationStateCreateFlagsNV>::type>(a) & static_cast<std::underlying_type<VkPipelineCoverageModulationStateCreateFlagsNV>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineCoverageModulationStateCreateFlagsNV operator^(const VkPipelineCoverageModulationStateCreateFlagsNV & a, const VkPipelineCoverageModulationStateCreateFlagsNV & b)
{
    return static_cast<VkPipelineCoverageModulationStateCreateFlagsNV>(static_cast<std::underlying_type<VkPipelineCoverageModulationStateCreateFlagsNV>::type>(a) ^ static_cast<std::underlying_type<VkPipelineCoverageModulationStateCreateFlagsNV>::type>(b));
}

inline VkPipelineCoverageModulationStateCreateFlagsNV & operator^=(VkPipelineCoverageModulationStateCreateFlagsNV & a, const VkPipelineCoverageModulationStateCreateFlagsNV & b)
{
    a = static_cast<VkPipelineCoverageModulationStateCreateFlagsNV>(static_cast<std::underlying_type<VkPipelineCoverageModulationStateCreateFlagsNV>::type>(a) ^ static_cast<std::underlying_type<VkPipelineCoverageModulationStateCreateFlagsNV>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPipelineCoverageReductionStateCreateFlagsNV>
{
    std::size_t operator()(const vk::VkPipelineCoverageReductionStateCreateFlagsNV & t) const
    {
        return hash<std::underlying_type<vk::VkPipelineCoverageReductionStateCreateFlagsNV>::type>()(static_cast<std::underlying_type<vk::VkPipelineCoverageReductionStateCreateFlagsNV>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPipelineCoverageReductionStateCreateFlagsNV operator|(const VkPipelineCoverageReductionStateCreateFlagsNV & a, const VkPipelineCoverageReductionStateCreateFlagsNV & b)
{
    return static_cast<VkPipelineCoverageReductionStateCreateFlagsNV>(static_cast<std::underlying_type<VkPipelineCoverageReductionStateCreateFlagsNV>::type>(a) | static_cast<std::underlying_type<VkPipelineCoverageReductionStateCreateFlagsNV>::type>(b));
}

inline VkPipelineCoverageReductionStateCreateFlagsNV & operator|=(VkPipelineCoverageReductionStateCreateFlagsNV & a, const VkPipelineCoverageReductionStateCreateFlagsNV & b)
{
    a = static_cast<VkPipelineCoverageReductionStateCreateFlagsNV>(static_cast<std::underlying_type<VkPipelineCoverageReductionStateCreateFlagsNV>::type>(a) | static_cast<std::underlying_type<VkPipelineCoverageReductionStateCreateFlagsNV>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineCoverageReductionStateCreateFlagsNV operator&(const VkPipelineCoverageReductionStateCreateFlagsNV & a, const VkPipelineCoverageReductionStateCreateFlagsNV & b)
{
    return static_cast<VkPipelineCoverageReductionStateCreateFlagsNV>(static_cast<std::underlying_type<VkPipelineCoverageReductionStateCreateFlagsNV>::type>(a) & static_cast<std::underlying_type<VkPipelineCoverageReductionStateCreateFlagsNV>::type>(b));
}

inline VkPipelineCoverageReductionStateCreateFlagsNV & operator&=(VkPipelineCoverageReductionStateCreateFlagsNV & a, const VkPipelineCoverageReductionStateCreateFlagsNV & b)
{
    a = static_cast<VkPipelineCoverageReductionStateCreateFlagsNV>(static_cast<std::underlying_type<VkPipelineCoverageReductionStateCreateFlagsNV>::type>(a) & static_cast<std::underlying_type<VkPipelineCoverageReductionStateCreateFlagsNV>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineCoverageReductionStateCreateFlagsNV operator^(const VkPipelineCoverageReductionStateCreateFlagsNV & a, const VkPipelineCoverageReductionStateCreateFlagsNV & b)
{
    return static_cast<VkPipelineCoverageReductionStateCreateFlagsNV>(static_cast<std::underlying_type<VkPipelineCoverageReductionStateCreateFlagsNV>::type>(a) ^ static_cast<std::underlying_type<VkPipelineCoverageReductionStateCreateFlagsNV>::type>(b));
}

inline VkPipelineCoverageReductionStateCreateFlagsNV & operator^=(VkPipelineCoverageReductionStateCreateFlagsNV & a, const VkPipelineCoverageReductionStateCreateFlagsNV & b)
{
    a = static_cast<VkPipelineCoverageReductionStateCreateFlagsNV>(static_cast<std::underlying_type<VkPipelineCoverageReductionStateCreateFlagsNV>::type>(a) ^ static_cast<std::underlying_type<VkPipelineCoverageReductionStateCreateFlagsNV>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPipelineCoverageToColorStateCreateFlagsNV>
{
    std::size_t operator()(const vk::VkPipelineCoverageToColorStateCreateFlagsNV & t) const
    {
        return hash<std::underlying_type<vk::VkPipelineCoverageToColorStateCreateFlagsNV>::type>()(static_cast<std::underlying_type<vk::VkPipelineCoverageToColorStateCreateFlagsNV>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPipelineCoverageToColorStateCreateFlagsNV operator|(const VkPipelineCoverageToColorStateCreateFlagsNV & a, const VkPipelineCoverageToColorStateCreateFlagsNV & b)
{
    return static_cast<VkPipelineCoverageToColorStateCreateFlagsNV>(static_cast<std::underlying_type<VkPipelineCoverageToColorStateCreateFlagsNV>::type>(a) | static_cast<std::underlying_type<VkPipelineCoverageToColorStateCreateFlagsNV>::type>(b));
}

inline VkPipelineCoverageToColorStateCreateFlagsNV & operator|=(VkPipelineCoverageToColorStateCreateFlagsNV & a, const VkPipelineCoverageToColorStateCreateFlagsNV & b)
{
    a = static_cast<VkPipelineCoverageToColorStateCreateFlagsNV>(static_cast<std::underlying_type<VkPipelineCoverageToColorStateCreateFlagsNV>::type>(a) | static_cast<std::underlying_type<VkPipelineCoverageToColorStateCreateFlagsNV>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineCoverageToColorStateCreateFlagsNV operator&(const VkPipelineCoverageToColorStateCreateFlagsNV & a, const VkPipelineCoverageToColorStateCreateFlagsNV & b)
{
    return static_cast<VkPipelineCoverageToColorStateCreateFlagsNV>(static_cast<std::underlying_type<VkPipelineCoverageToColorStateCreateFlagsNV>::type>(a) & static_cast<std::underlying_type<VkPipelineCoverageToColorStateCreateFlagsNV>::type>(b));
}

inline VkPipelineCoverageToColorStateCreateFlagsNV & operator&=(VkPipelineCoverageToColorStateCreateFlagsNV & a, const VkPipelineCoverageToColorStateCreateFlagsNV & b)
{
    a = static_cast<VkPipelineCoverageToColorStateCreateFlagsNV>(static_cast<std::underlying_type<VkPipelineCoverageToColorStateCreateFlagsNV>::type>(a) & static_cast<std::underlying_type<VkPipelineCoverageToColorStateCreateFlagsNV>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineCoverageToColorStateCreateFlagsNV operator^(const VkPipelineCoverageToColorStateCreateFlagsNV & a, const VkPipelineCoverageToColorStateCreateFlagsNV & b)
{
    return static_cast<VkPipelineCoverageToColorStateCreateFlagsNV>(static_cast<std::underlying_type<VkPipelineCoverageToColorStateCreateFlagsNV>::type>(a) ^ static_cast<std::underlying_type<VkPipelineCoverageToColorStateCreateFlagsNV>::type>(b));
}

inline VkPipelineCoverageToColorStateCreateFlagsNV & operator^=(VkPipelineCoverageToColorStateCreateFlagsNV & a, const VkPipelineCoverageToColorStateCreateFlagsNV & b)
{
    a = static_cast<VkPipelineCoverageToColorStateCreateFlagsNV>(static_cast<std::underlying_type<VkPipelineCoverageToColorStateCreateFlagsNV>::type>(a) ^ static_cast<std::underlying_type<VkPipelineCoverageToColorStateCreateFlagsNV>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPipelineCreateFlags>
{
    std::size_t operator()(const vk::VkPipelineCreateFlags & t) const
    {
        return hash<std::underlying_type<vk::VkPipelineCreateFlags>::type>()(static_cast<std::underlying_type<vk::VkPipelineCreateFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPipelineCreateFlags operator|(const VkPipelineCreateFlags & a, const VkPipelineCreateFlags & b)
{
    return static_cast<VkPipelineCreateFlags>(static_cast<std::underlying_type<VkPipelineCreateFlags>::type>(a) | static_cast<std::underlying_type<VkPipelineCreateFlags>::type>(b));
}

inline VkPipelineCreateFlags & operator|=(VkPipelineCreateFlags & a, const VkPipelineCreateFlags & b)
{
    a = static_cast<VkPipelineCreateFlags>(static_cast<std::underlying_type<VkPipelineCreateFlags>::type>(a) | static_cast<std::underlying_type<VkPipelineCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineCreateFlags operator&(const VkPipelineCreateFlags & a, const VkPipelineCreateFlags & b)
{
    return static_cast<VkPipelineCreateFlags>(static_cast<std::underlying_type<VkPipelineCreateFlags>::type>(a) & static_cast<std::underlying_type<VkPipelineCreateFlags>::type>(b));
}

inline VkPipelineCreateFlags & operator&=(VkPipelineCreateFlags & a, const VkPipelineCreateFlags & b)
{
    a = static_cast<VkPipelineCreateFlags>(static_cast<std::underlying_type<VkPipelineCreateFlags>::type>(a) & static_cast<std::underlying_type<VkPipelineCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineCreateFlags operator^(const VkPipelineCreateFlags & a, const VkPipelineCreateFlags & b)
{
    return static_cast<VkPipelineCreateFlags>(static_cast<std::underlying_type<VkPipelineCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkPipelineCreateFlags>::type>(b));
}

inline VkPipelineCreateFlags & operator^=(VkPipelineCreateFlags & a, const VkPipelineCreateFlags & b)
{
    a = static_cast<VkPipelineCreateFlags>(static_cast<std::underlying_type<VkPipelineCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkPipelineCreateFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPipelineCreationFeedbackFlagsEXT>
{
    std::size_t operator()(const vk::VkPipelineCreationFeedbackFlagsEXT & t) const
    {
        return hash<std::underlying_type<vk::VkPipelineCreationFeedbackFlagsEXT>::type>()(static_cast<std::underlying_type<vk::VkPipelineCreationFeedbackFlagsEXT>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPipelineCreationFeedbackFlagsEXT operator|(const VkPipelineCreationFeedbackFlagsEXT & a, const VkPipelineCreationFeedbackFlagsEXT & b)
{
    return static_cast<VkPipelineCreationFeedbackFlagsEXT>(static_cast<std::underlying_type<VkPipelineCreationFeedbackFlagsEXT>::type>(a) | static_cast<std::underlying_type<VkPipelineCreationFeedbackFlagsEXT>::type>(b));
}

inline VkPipelineCreationFeedbackFlagsEXT & operator|=(VkPipelineCreationFeedbackFlagsEXT & a, const VkPipelineCreationFeedbackFlagsEXT & b)
{
    a = static_cast<VkPipelineCreationFeedbackFlagsEXT>(static_cast<std::underlying_type<VkPipelineCreationFeedbackFlagsEXT>::type>(a) | static_cast<std::underlying_type<VkPipelineCreationFeedbackFlagsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineCreationFeedbackFlagsEXT operator&(const VkPipelineCreationFeedbackFlagsEXT & a, const VkPipelineCreationFeedbackFlagsEXT & b)
{
    return static_cast<VkPipelineCreationFeedbackFlagsEXT>(static_cast<std::underlying_type<VkPipelineCreationFeedbackFlagsEXT>::type>(a) & static_cast<std::underlying_type<VkPipelineCreationFeedbackFlagsEXT>::type>(b));
}

inline VkPipelineCreationFeedbackFlagsEXT & operator&=(VkPipelineCreationFeedbackFlagsEXT & a, const VkPipelineCreationFeedbackFlagsEXT & b)
{
    a = static_cast<VkPipelineCreationFeedbackFlagsEXT>(static_cast<std::underlying_type<VkPipelineCreationFeedbackFlagsEXT>::type>(a) & static_cast<std::underlying_type<VkPipelineCreationFeedbackFlagsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineCreationFeedbackFlagsEXT operator^(const VkPipelineCreationFeedbackFlagsEXT & a, const VkPipelineCreationFeedbackFlagsEXT & b)
{
    return static_cast<VkPipelineCreationFeedbackFlagsEXT>(static_cast<std::underlying_type<VkPipelineCreationFeedbackFlagsEXT>::type>(a) ^ static_cast<std::underlying_type<VkPipelineCreationFeedbackFlagsEXT>::type>(b));
}

inline VkPipelineCreationFeedbackFlagsEXT & operator^=(VkPipelineCreationFeedbackFlagsEXT & a, const VkPipelineCreationFeedbackFlagsEXT & b)
{
    a = static_cast<VkPipelineCreationFeedbackFlagsEXT>(static_cast<std::underlying_type<VkPipelineCreationFeedbackFlagsEXT>::type>(a) ^ static_cast<std::underlying_type<VkPipelineCreationFeedbackFlagsEXT>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPipelineDepthStencilStateCreateFlags>
{
    std::size_t operator()(const vk::VkPipelineDepthStencilStateCreateFlags & t) const
    {
        return hash<std::underlying_type<vk::VkPipelineDepthStencilStateCreateFlags>::type>()(static_cast<std::underlying_type<vk::VkPipelineDepthStencilStateCreateFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPipelineDepthStencilStateCreateFlags operator|(const VkPipelineDepthStencilStateCreateFlags & a, const VkPipelineDepthStencilStateCreateFlags & b)
{
    return static_cast<VkPipelineDepthStencilStateCreateFlags>(static_cast<std::underlying_type<VkPipelineDepthStencilStateCreateFlags>::type>(a) | static_cast<std::underlying_type<VkPipelineDepthStencilStateCreateFlags>::type>(b));
}

inline VkPipelineDepthStencilStateCreateFlags & operator|=(VkPipelineDepthStencilStateCreateFlags & a, const VkPipelineDepthStencilStateCreateFlags & b)
{
    a = static_cast<VkPipelineDepthStencilStateCreateFlags>(static_cast<std::underlying_type<VkPipelineDepthStencilStateCreateFlags>::type>(a) | static_cast<std::underlying_type<VkPipelineDepthStencilStateCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineDepthStencilStateCreateFlags operator&(const VkPipelineDepthStencilStateCreateFlags & a, const VkPipelineDepthStencilStateCreateFlags & b)
{
    return static_cast<VkPipelineDepthStencilStateCreateFlags>(static_cast<std::underlying_type<VkPipelineDepthStencilStateCreateFlags>::type>(a) & static_cast<std::underlying_type<VkPipelineDepthStencilStateCreateFlags>::type>(b));
}

inline VkPipelineDepthStencilStateCreateFlags & operator&=(VkPipelineDepthStencilStateCreateFlags & a, const VkPipelineDepthStencilStateCreateFlags & b)
{
    a = static_cast<VkPipelineDepthStencilStateCreateFlags>(static_cast<std::underlying_type<VkPipelineDepthStencilStateCreateFlags>::type>(a) & static_cast<std::underlying_type<VkPipelineDepthStencilStateCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineDepthStencilStateCreateFlags operator^(const VkPipelineDepthStencilStateCreateFlags & a, const VkPipelineDepthStencilStateCreateFlags & b)
{
    return static_cast<VkPipelineDepthStencilStateCreateFlags>(static_cast<std::underlying_type<VkPipelineDepthStencilStateCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkPipelineDepthStencilStateCreateFlags>::type>(b));
}

inline VkPipelineDepthStencilStateCreateFlags & operator^=(VkPipelineDepthStencilStateCreateFlags & a, const VkPipelineDepthStencilStateCreateFlags & b)
{
    a = static_cast<VkPipelineDepthStencilStateCreateFlags>(static_cast<std::underlying_type<VkPipelineDepthStencilStateCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkPipelineDepthStencilStateCreateFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPipelineDiscardRectangleStateCreateFlagsEXT>
{
    std::size_t operator()(const vk::VkPipelineDiscardRectangleStateCreateFlagsEXT & t) const
    {
        return hash<std::underlying_type<vk::VkPipelineDiscardRectangleStateCreateFlagsEXT>::type>()(static_cast<std::underlying_type<vk::VkPipelineDiscardRectangleStateCreateFlagsEXT>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPipelineDiscardRectangleStateCreateFlagsEXT operator|(const VkPipelineDiscardRectangleStateCreateFlagsEXT & a, const VkPipelineDiscardRectangleStateCreateFlagsEXT & b)
{
    return static_cast<VkPipelineDiscardRectangleStateCreateFlagsEXT>(static_cast<std::underlying_type<VkPipelineDiscardRectangleStateCreateFlagsEXT>::type>(a) | static_cast<std::underlying_type<VkPipelineDiscardRectangleStateCreateFlagsEXT>::type>(b));
}

inline VkPipelineDiscardRectangleStateCreateFlagsEXT & operator|=(VkPipelineDiscardRectangleStateCreateFlagsEXT & a, const VkPipelineDiscardRectangleStateCreateFlagsEXT & b)
{
    a = static_cast<VkPipelineDiscardRectangleStateCreateFlagsEXT>(static_cast<std::underlying_type<VkPipelineDiscardRectangleStateCreateFlagsEXT>::type>(a) | static_cast<std::underlying_type<VkPipelineDiscardRectangleStateCreateFlagsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineDiscardRectangleStateCreateFlagsEXT operator&(const VkPipelineDiscardRectangleStateCreateFlagsEXT & a, const VkPipelineDiscardRectangleStateCreateFlagsEXT & b)
{
    return static_cast<VkPipelineDiscardRectangleStateCreateFlagsEXT>(static_cast<std::underlying_type<VkPipelineDiscardRectangleStateCreateFlagsEXT>::type>(a) & static_cast<std::underlying_type<VkPipelineDiscardRectangleStateCreateFlagsEXT>::type>(b));
}

inline VkPipelineDiscardRectangleStateCreateFlagsEXT & operator&=(VkPipelineDiscardRectangleStateCreateFlagsEXT & a, const VkPipelineDiscardRectangleStateCreateFlagsEXT & b)
{
    a = static_cast<VkPipelineDiscardRectangleStateCreateFlagsEXT>(static_cast<std::underlying_type<VkPipelineDiscardRectangleStateCreateFlagsEXT>::type>(a) & static_cast<std::underlying_type<VkPipelineDiscardRectangleStateCreateFlagsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineDiscardRectangleStateCreateFlagsEXT operator^(const VkPipelineDiscardRectangleStateCreateFlagsEXT & a, const VkPipelineDiscardRectangleStateCreateFlagsEXT & b)
{
    return static_cast<VkPipelineDiscardRectangleStateCreateFlagsEXT>(static_cast<std::underlying_type<VkPipelineDiscardRectangleStateCreateFlagsEXT>::type>(a) ^ static_cast<std::underlying_type<VkPipelineDiscardRectangleStateCreateFlagsEXT>::type>(b));
}

inline VkPipelineDiscardRectangleStateCreateFlagsEXT & operator^=(VkPipelineDiscardRectangleStateCreateFlagsEXT & a, const VkPipelineDiscardRectangleStateCreateFlagsEXT & b)
{
    a = static_cast<VkPipelineDiscardRectangleStateCreateFlagsEXT>(static_cast<std::underlying_type<VkPipelineDiscardRectangleStateCreateFlagsEXT>::type>(a) ^ static_cast<std::underlying_type<VkPipelineDiscardRectangleStateCreateFlagsEXT>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPipelineDynamicStateCreateFlags>
{
    std::size_t operator()(const vk::VkPipelineDynamicStateCreateFlags & t) const
    {
        return hash<std::underlying_type<vk::VkPipelineDynamicStateCreateFlags>::type>()(static_cast<std::underlying_type<vk::VkPipelineDynamicStateCreateFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPipelineDynamicStateCreateFlags operator|(const VkPipelineDynamicStateCreateFlags & a, const VkPipelineDynamicStateCreateFlags & b)
{
    return static_cast<VkPipelineDynamicStateCreateFlags>(static_cast<std::underlying_type<VkPipelineDynamicStateCreateFlags>::type>(a) | static_cast<std::underlying_type<VkPipelineDynamicStateCreateFlags>::type>(b));
}

inline VkPipelineDynamicStateCreateFlags & operator|=(VkPipelineDynamicStateCreateFlags & a, const VkPipelineDynamicStateCreateFlags & b)
{
    a = static_cast<VkPipelineDynamicStateCreateFlags>(static_cast<std::underlying_type<VkPipelineDynamicStateCreateFlags>::type>(a) | static_cast<std::underlying_type<VkPipelineDynamicStateCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineDynamicStateCreateFlags operator&(const VkPipelineDynamicStateCreateFlags & a, const VkPipelineDynamicStateCreateFlags & b)
{
    return static_cast<VkPipelineDynamicStateCreateFlags>(static_cast<std::underlying_type<VkPipelineDynamicStateCreateFlags>::type>(a) & static_cast<std::underlying_type<VkPipelineDynamicStateCreateFlags>::type>(b));
}

inline VkPipelineDynamicStateCreateFlags & operator&=(VkPipelineDynamicStateCreateFlags & a, const VkPipelineDynamicStateCreateFlags & b)
{
    a = static_cast<VkPipelineDynamicStateCreateFlags>(static_cast<std::underlying_type<VkPipelineDynamicStateCreateFlags>::type>(a) & static_cast<std::underlying_type<VkPipelineDynamicStateCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineDynamicStateCreateFlags operator^(const VkPipelineDynamicStateCreateFlags & a, const VkPipelineDynamicStateCreateFlags & b)
{
    return static_cast<VkPipelineDynamicStateCreateFlags>(static_cast<std::underlying_type<VkPipelineDynamicStateCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkPipelineDynamicStateCreateFlags>::type>(b));
}

inline VkPipelineDynamicStateCreateFlags & operator^=(VkPipelineDynamicStateCreateFlags & a, const VkPipelineDynamicStateCreateFlags & b)
{
    a = static_cast<VkPipelineDynamicStateCreateFlags>(static_cast<std::underlying_type<VkPipelineDynamicStateCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkPipelineDynamicStateCreateFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPipelineInputAssemblyStateCreateFlags>
{
    std::size_t operator()(const vk::VkPipelineInputAssemblyStateCreateFlags & t) const
    {
        return hash<std::underlying_type<vk::VkPipelineInputAssemblyStateCreateFlags>::type>()(static_cast<std::underlying_type<vk::VkPipelineInputAssemblyStateCreateFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPipelineInputAssemblyStateCreateFlags operator|(const VkPipelineInputAssemblyStateCreateFlags & a, const VkPipelineInputAssemblyStateCreateFlags & b)
{
    return static_cast<VkPipelineInputAssemblyStateCreateFlags>(static_cast<std::underlying_type<VkPipelineInputAssemblyStateCreateFlags>::type>(a) | static_cast<std::underlying_type<VkPipelineInputAssemblyStateCreateFlags>::type>(b));
}

inline VkPipelineInputAssemblyStateCreateFlags & operator|=(VkPipelineInputAssemblyStateCreateFlags & a, const VkPipelineInputAssemblyStateCreateFlags & b)
{
    a = static_cast<VkPipelineInputAssemblyStateCreateFlags>(static_cast<std::underlying_type<VkPipelineInputAssemblyStateCreateFlags>::type>(a) | static_cast<std::underlying_type<VkPipelineInputAssemblyStateCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineInputAssemblyStateCreateFlags operator&(const VkPipelineInputAssemblyStateCreateFlags & a, const VkPipelineInputAssemblyStateCreateFlags & b)
{
    return static_cast<VkPipelineInputAssemblyStateCreateFlags>(static_cast<std::underlying_type<VkPipelineInputAssemblyStateCreateFlags>::type>(a) & static_cast<std::underlying_type<VkPipelineInputAssemblyStateCreateFlags>::type>(b));
}

inline VkPipelineInputAssemblyStateCreateFlags & operator&=(VkPipelineInputAssemblyStateCreateFlags & a, const VkPipelineInputAssemblyStateCreateFlags & b)
{
    a = static_cast<VkPipelineInputAssemblyStateCreateFlags>(static_cast<std::underlying_type<VkPipelineInputAssemblyStateCreateFlags>::type>(a) & static_cast<std::underlying_type<VkPipelineInputAssemblyStateCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineInputAssemblyStateCreateFlags operator^(const VkPipelineInputAssemblyStateCreateFlags & a, const VkPipelineInputAssemblyStateCreateFlags & b)
{
    return static_cast<VkPipelineInputAssemblyStateCreateFlags>(static_cast<std::underlying_type<VkPipelineInputAssemblyStateCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkPipelineInputAssemblyStateCreateFlags>::type>(b));
}

inline VkPipelineInputAssemblyStateCreateFlags & operator^=(VkPipelineInputAssemblyStateCreateFlags & a, const VkPipelineInputAssemblyStateCreateFlags & b)
{
    a = static_cast<VkPipelineInputAssemblyStateCreateFlags>(static_cast<std::underlying_type<VkPipelineInputAssemblyStateCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkPipelineInputAssemblyStateCreateFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPipelineLayoutCreateFlags>
{
    std::size_t operator()(const vk::VkPipelineLayoutCreateFlags & t) const
    {
        return hash<std::underlying_type<vk::VkPipelineLayoutCreateFlags>::type>()(static_cast<std::underlying_type<vk::VkPipelineLayoutCreateFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPipelineLayoutCreateFlags operator|(const VkPipelineLayoutCreateFlags & a, const VkPipelineLayoutCreateFlags & b)
{
    return static_cast<VkPipelineLayoutCreateFlags>(static_cast<std::underlying_type<VkPipelineLayoutCreateFlags>::type>(a) | static_cast<std::underlying_type<VkPipelineLayoutCreateFlags>::type>(b));
}

inline VkPipelineLayoutCreateFlags & operator|=(VkPipelineLayoutCreateFlags & a, const VkPipelineLayoutCreateFlags & b)
{
    a = static_cast<VkPipelineLayoutCreateFlags>(static_cast<std::underlying_type<VkPipelineLayoutCreateFlags>::type>(a) | static_cast<std::underlying_type<VkPipelineLayoutCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineLayoutCreateFlags operator&(const VkPipelineLayoutCreateFlags & a, const VkPipelineLayoutCreateFlags & b)
{
    return static_cast<VkPipelineLayoutCreateFlags>(static_cast<std::underlying_type<VkPipelineLayoutCreateFlags>::type>(a) & static_cast<std::underlying_type<VkPipelineLayoutCreateFlags>::type>(b));
}

inline VkPipelineLayoutCreateFlags & operator&=(VkPipelineLayoutCreateFlags & a, const VkPipelineLayoutCreateFlags & b)
{
    a = static_cast<VkPipelineLayoutCreateFlags>(static_cast<std::underlying_type<VkPipelineLayoutCreateFlags>::type>(a) & static_cast<std::underlying_type<VkPipelineLayoutCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineLayoutCreateFlags operator^(const VkPipelineLayoutCreateFlags & a, const VkPipelineLayoutCreateFlags & b)
{
    return static_cast<VkPipelineLayoutCreateFlags>(static_cast<std::underlying_type<VkPipelineLayoutCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkPipelineLayoutCreateFlags>::type>(b));
}

inline VkPipelineLayoutCreateFlags & operator^=(VkPipelineLayoutCreateFlags & a, const VkPipelineLayoutCreateFlags & b)
{
    a = static_cast<VkPipelineLayoutCreateFlags>(static_cast<std::underlying_type<VkPipelineLayoutCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkPipelineLayoutCreateFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPipelineMultisampleStateCreateFlags>
{
    std::size_t operator()(const vk::VkPipelineMultisampleStateCreateFlags & t) const
    {
        return hash<std::underlying_type<vk::VkPipelineMultisampleStateCreateFlags>::type>()(static_cast<std::underlying_type<vk::VkPipelineMultisampleStateCreateFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPipelineMultisampleStateCreateFlags operator|(const VkPipelineMultisampleStateCreateFlags & a, const VkPipelineMultisampleStateCreateFlags & b)
{
    return static_cast<VkPipelineMultisampleStateCreateFlags>(static_cast<std::underlying_type<VkPipelineMultisampleStateCreateFlags>::type>(a) | static_cast<std::underlying_type<VkPipelineMultisampleStateCreateFlags>::type>(b));
}

inline VkPipelineMultisampleStateCreateFlags & operator|=(VkPipelineMultisampleStateCreateFlags & a, const VkPipelineMultisampleStateCreateFlags & b)
{
    a = static_cast<VkPipelineMultisampleStateCreateFlags>(static_cast<std::underlying_type<VkPipelineMultisampleStateCreateFlags>::type>(a) | static_cast<std::underlying_type<VkPipelineMultisampleStateCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineMultisampleStateCreateFlags operator&(const VkPipelineMultisampleStateCreateFlags & a, const VkPipelineMultisampleStateCreateFlags & b)
{
    return static_cast<VkPipelineMultisampleStateCreateFlags>(static_cast<std::underlying_type<VkPipelineMultisampleStateCreateFlags>::type>(a) & static_cast<std::underlying_type<VkPipelineMultisampleStateCreateFlags>::type>(b));
}

inline VkPipelineMultisampleStateCreateFlags & operator&=(VkPipelineMultisampleStateCreateFlags & a, const VkPipelineMultisampleStateCreateFlags & b)
{
    a = static_cast<VkPipelineMultisampleStateCreateFlags>(static_cast<std::underlying_type<VkPipelineMultisampleStateCreateFlags>::type>(a) & static_cast<std::underlying_type<VkPipelineMultisampleStateCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineMultisampleStateCreateFlags operator^(const VkPipelineMultisampleStateCreateFlags & a, const VkPipelineMultisampleStateCreateFlags & b)
{
    return static_cast<VkPipelineMultisampleStateCreateFlags>(static_cast<std::underlying_type<VkPipelineMultisampleStateCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkPipelineMultisampleStateCreateFlags>::type>(b));
}

inline VkPipelineMultisampleStateCreateFlags & operator^=(VkPipelineMultisampleStateCreateFlags & a, const VkPipelineMultisampleStateCreateFlags & b)
{
    a = static_cast<VkPipelineMultisampleStateCreateFlags>(static_cast<std::underlying_type<VkPipelineMultisampleStateCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkPipelineMultisampleStateCreateFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPipelineRasterizationConservativeStateCreateFlagsEXT>
{
    std::size_t operator()(const vk::VkPipelineRasterizationConservativeStateCreateFlagsEXT & t) const
    {
        return hash<std::underlying_type<vk::VkPipelineRasterizationConservativeStateCreateFlagsEXT>::type>()(static_cast<std::underlying_type<vk::VkPipelineRasterizationConservativeStateCreateFlagsEXT>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPipelineRasterizationConservativeStateCreateFlagsEXT operator|(const VkPipelineRasterizationConservativeStateCreateFlagsEXT & a, const VkPipelineRasterizationConservativeStateCreateFlagsEXT & b)
{
    return static_cast<VkPipelineRasterizationConservativeStateCreateFlagsEXT>(static_cast<std::underlying_type<VkPipelineRasterizationConservativeStateCreateFlagsEXT>::type>(a) | static_cast<std::underlying_type<VkPipelineRasterizationConservativeStateCreateFlagsEXT>::type>(b));
}

inline VkPipelineRasterizationConservativeStateCreateFlagsEXT & operator|=(VkPipelineRasterizationConservativeStateCreateFlagsEXT & a, const VkPipelineRasterizationConservativeStateCreateFlagsEXT & b)
{
    a = static_cast<VkPipelineRasterizationConservativeStateCreateFlagsEXT>(static_cast<std::underlying_type<VkPipelineRasterizationConservativeStateCreateFlagsEXT>::type>(a) | static_cast<std::underlying_type<VkPipelineRasterizationConservativeStateCreateFlagsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineRasterizationConservativeStateCreateFlagsEXT operator&(const VkPipelineRasterizationConservativeStateCreateFlagsEXT & a, const VkPipelineRasterizationConservativeStateCreateFlagsEXT & b)
{
    return static_cast<VkPipelineRasterizationConservativeStateCreateFlagsEXT>(static_cast<std::underlying_type<VkPipelineRasterizationConservativeStateCreateFlagsEXT>::type>(a) & static_cast<std::underlying_type<VkPipelineRasterizationConservativeStateCreateFlagsEXT>::type>(b));
}

inline VkPipelineRasterizationConservativeStateCreateFlagsEXT & operator&=(VkPipelineRasterizationConservativeStateCreateFlagsEXT & a, const VkPipelineRasterizationConservativeStateCreateFlagsEXT & b)
{
    a = static_cast<VkPipelineRasterizationConservativeStateCreateFlagsEXT>(static_cast<std::underlying_type<VkPipelineRasterizationConservativeStateCreateFlagsEXT>::type>(a) & static_cast<std::underlying_type<VkPipelineRasterizationConservativeStateCreateFlagsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineRasterizationConservativeStateCreateFlagsEXT operator^(const VkPipelineRasterizationConservativeStateCreateFlagsEXT & a, const VkPipelineRasterizationConservativeStateCreateFlagsEXT & b)
{
    return static_cast<VkPipelineRasterizationConservativeStateCreateFlagsEXT>(static_cast<std::underlying_type<VkPipelineRasterizationConservativeStateCreateFlagsEXT>::type>(a) ^ static_cast<std::underlying_type<VkPipelineRasterizationConservativeStateCreateFlagsEXT>::type>(b));
}

inline VkPipelineRasterizationConservativeStateCreateFlagsEXT & operator^=(VkPipelineRasterizationConservativeStateCreateFlagsEXT & a, const VkPipelineRasterizationConservativeStateCreateFlagsEXT & b)
{
    a = static_cast<VkPipelineRasterizationConservativeStateCreateFlagsEXT>(static_cast<std::underlying_type<VkPipelineRasterizationConservativeStateCreateFlagsEXT>::type>(a) ^ static_cast<std::underlying_type<VkPipelineRasterizationConservativeStateCreateFlagsEXT>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPipelineRasterizationDepthClipStateCreateFlagsEXT>
{
    std::size_t operator()(const vk::VkPipelineRasterizationDepthClipStateCreateFlagsEXT & t) const
    {
        return hash<std::underlying_type<vk::VkPipelineRasterizationDepthClipStateCreateFlagsEXT>::type>()(static_cast<std::underlying_type<vk::VkPipelineRasterizationDepthClipStateCreateFlagsEXT>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPipelineRasterizationDepthClipStateCreateFlagsEXT operator|(const VkPipelineRasterizationDepthClipStateCreateFlagsEXT & a, const VkPipelineRasterizationDepthClipStateCreateFlagsEXT & b)
{
    return static_cast<VkPipelineRasterizationDepthClipStateCreateFlagsEXT>(static_cast<std::underlying_type<VkPipelineRasterizationDepthClipStateCreateFlagsEXT>::type>(a) | static_cast<std::underlying_type<VkPipelineRasterizationDepthClipStateCreateFlagsEXT>::type>(b));
}

inline VkPipelineRasterizationDepthClipStateCreateFlagsEXT & operator|=(VkPipelineRasterizationDepthClipStateCreateFlagsEXT & a, const VkPipelineRasterizationDepthClipStateCreateFlagsEXT & b)
{
    a = static_cast<VkPipelineRasterizationDepthClipStateCreateFlagsEXT>(static_cast<std::underlying_type<VkPipelineRasterizationDepthClipStateCreateFlagsEXT>::type>(a) | static_cast<std::underlying_type<VkPipelineRasterizationDepthClipStateCreateFlagsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineRasterizationDepthClipStateCreateFlagsEXT operator&(const VkPipelineRasterizationDepthClipStateCreateFlagsEXT & a, const VkPipelineRasterizationDepthClipStateCreateFlagsEXT & b)
{
    return static_cast<VkPipelineRasterizationDepthClipStateCreateFlagsEXT>(static_cast<std::underlying_type<VkPipelineRasterizationDepthClipStateCreateFlagsEXT>::type>(a) & static_cast<std::underlying_type<VkPipelineRasterizationDepthClipStateCreateFlagsEXT>::type>(b));
}

inline VkPipelineRasterizationDepthClipStateCreateFlagsEXT & operator&=(VkPipelineRasterizationDepthClipStateCreateFlagsEXT & a, const VkPipelineRasterizationDepthClipStateCreateFlagsEXT & b)
{
    a = static_cast<VkPipelineRasterizationDepthClipStateCreateFlagsEXT>(static_cast<std::underlying_type<VkPipelineRasterizationDepthClipStateCreateFlagsEXT>::type>(a) & static_cast<std::underlying_type<VkPipelineRasterizationDepthClipStateCreateFlagsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineRasterizationDepthClipStateCreateFlagsEXT operator^(const VkPipelineRasterizationDepthClipStateCreateFlagsEXT & a, const VkPipelineRasterizationDepthClipStateCreateFlagsEXT & b)
{
    return static_cast<VkPipelineRasterizationDepthClipStateCreateFlagsEXT>(static_cast<std::underlying_type<VkPipelineRasterizationDepthClipStateCreateFlagsEXT>::type>(a) ^ static_cast<std::underlying_type<VkPipelineRasterizationDepthClipStateCreateFlagsEXT>::type>(b));
}

inline VkPipelineRasterizationDepthClipStateCreateFlagsEXT & operator^=(VkPipelineRasterizationDepthClipStateCreateFlagsEXT & a, const VkPipelineRasterizationDepthClipStateCreateFlagsEXT & b)
{
    a = static_cast<VkPipelineRasterizationDepthClipStateCreateFlagsEXT>(static_cast<std::underlying_type<VkPipelineRasterizationDepthClipStateCreateFlagsEXT>::type>(a) ^ static_cast<std::underlying_type<VkPipelineRasterizationDepthClipStateCreateFlagsEXT>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPipelineRasterizationStateCreateFlags>
{
    std::size_t operator()(const vk::VkPipelineRasterizationStateCreateFlags & t) const
    {
        return hash<std::underlying_type<vk::VkPipelineRasterizationStateCreateFlags>::type>()(static_cast<std::underlying_type<vk::VkPipelineRasterizationStateCreateFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPipelineRasterizationStateCreateFlags operator|(const VkPipelineRasterizationStateCreateFlags & a, const VkPipelineRasterizationStateCreateFlags & b)
{
    return static_cast<VkPipelineRasterizationStateCreateFlags>(static_cast<std::underlying_type<VkPipelineRasterizationStateCreateFlags>::type>(a) | static_cast<std::underlying_type<VkPipelineRasterizationStateCreateFlags>::type>(b));
}

inline VkPipelineRasterizationStateCreateFlags & operator|=(VkPipelineRasterizationStateCreateFlags & a, const VkPipelineRasterizationStateCreateFlags & b)
{
    a = static_cast<VkPipelineRasterizationStateCreateFlags>(static_cast<std::underlying_type<VkPipelineRasterizationStateCreateFlags>::type>(a) | static_cast<std::underlying_type<VkPipelineRasterizationStateCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineRasterizationStateCreateFlags operator&(const VkPipelineRasterizationStateCreateFlags & a, const VkPipelineRasterizationStateCreateFlags & b)
{
    return static_cast<VkPipelineRasterizationStateCreateFlags>(static_cast<std::underlying_type<VkPipelineRasterizationStateCreateFlags>::type>(a) & static_cast<std::underlying_type<VkPipelineRasterizationStateCreateFlags>::type>(b));
}

inline VkPipelineRasterizationStateCreateFlags & operator&=(VkPipelineRasterizationStateCreateFlags & a, const VkPipelineRasterizationStateCreateFlags & b)
{
    a = static_cast<VkPipelineRasterizationStateCreateFlags>(static_cast<std::underlying_type<VkPipelineRasterizationStateCreateFlags>::type>(a) & static_cast<std::underlying_type<VkPipelineRasterizationStateCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineRasterizationStateCreateFlags operator^(const VkPipelineRasterizationStateCreateFlags & a, const VkPipelineRasterizationStateCreateFlags & b)
{
    return static_cast<VkPipelineRasterizationStateCreateFlags>(static_cast<std::underlying_type<VkPipelineRasterizationStateCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkPipelineRasterizationStateCreateFlags>::type>(b));
}

inline VkPipelineRasterizationStateCreateFlags & operator^=(VkPipelineRasterizationStateCreateFlags & a, const VkPipelineRasterizationStateCreateFlags & b)
{
    a = static_cast<VkPipelineRasterizationStateCreateFlags>(static_cast<std::underlying_type<VkPipelineRasterizationStateCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkPipelineRasterizationStateCreateFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPipelineRasterizationStateStreamCreateFlagsEXT>
{
    std::size_t operator()(const vk::VkPipelineRasterizationStateStreamCreateFlagsEXT & t) const
    {
        return hash<std::underlying_type<vk::VkPipelineRasterizationStateStreamCreateFlagsEXT>::type>()(static_cast<std::underlying_type<vk::VkPipelineRasterizationStateStreamCreateFlagsEXT>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPipelineRasterizationStateStreamCreateFlagsEXT operator|(const VkPipelineRasterizationStateStreamCreateFlagsEXT & a, const VkPipelineRasterizationStateStreamCreateFlagsEXT & b)
{
    return static_cast<VkPipelineRasterizationStateStreamCreateFlagsEXT>(static_cast<std::underlying_type<VkPipelineRasterizationStateStreamCreateFlagsEXT>::type>(a) | static_cast<std::underlying_type<VkPipelineRasterizationStateStreamCreateFlagsEXT>::type>(b));
}

inline VkPipelineRasterizationStateStreamCreateFlagsEXT & operator|=(VkPipelineRasterizationStateStreamCreateFlagsEXT & a, const VkPipelineRasterizationStateStreamCreateFlagsEXT & b)
{
    a = static_cast<VkPipelineRasterizationStateStreamCreateFlagsEXT>(static_cast<std::underlying_type<VkPipelineRasterizationStateStreamCreateFlagsEXT>::type>(a) | static_cast<std::underlying_type<VkPipelineRasterizationStateStreamCreateFlagsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineRasterizationStateStreamCreateFlagsEXT operator&(const VkPipelineRasterizationStateStreamCreateFlagsEXT & a, const VkPipelineRasterizationStateStreamCreateFlagsEXT & b)
{
    return static_cast<VkPipelineRasterizationStateStreamCreateFlagsEXT>(static_cast<std::underlying_type<VkPipelineRasterizationStateStreamCreateFlagsEXT>::type>(a) & static_cast<std::underlying_type<VkPipelineRasterizationStateStreamCreateFlagsEXT>::type>(b));
}

inline VkPipelineRasterizationStateStreamCreateFlagsEXT & operator&=(VkPipelineRasterizationStateStreamCreateFlagsEXT & a, const VkPipelineRasterizationStateStreamCreateFlagsEXT & b)
{
    a = static_cast<VkPipelineRasterizationStateStreamCreateFlagsEXT>(static_cast<std::underlying_type<VkPipelineRasterizationStateStreamCreateFlagsEXT>::type>(a) & static_cast<std::underlying_type<VkPipelineRasterizationStateStreamCreateFlagsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineRasterizationStateStreamCreateFlagsEXT operator^(const VkPipelineRasterizationStateStreamCreateFlagsEXT & a, const VkPipelineRasterizationStateStreamCreateFlagsEXT & b)
{
    return static_cast<VkPipelineRasterizationStateStreamCreateFlagsEXT>(static_cast<std::underlying_type<VkPipelineRasterizationStateStreamCreateFlagsEXT>::type>(a) ^ static_cast<std::underlying_type<VkPipelineRasterizationStateStreamCreateFlagsEXT>::type>(b));
}

inline VkPipelineRasterizationStateStreamCreateFlagsEXT & operator^=(VkPipelineRasterizationStateStreamCreateFlagsEXT & a, const VkPipelineRasterizationStateStreamCreateFlagsEXT & b)
{
    a = static_cast<VkPipelineRasterizationStateStreamCreateFlagsEXT>(static_cast<std::underlying_type<VkPipelineRasterizationStateStreamCreateFlagsEXT>::type>(a) ^ static_cast<std::underlying_type<VkPipelineRasterizationStateStreamCreateFlagsEXT>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPipelineShaderStageCreateFlags>
{
    std::size_t operator()(const vk::VkPipelineShaderStageCreateFlags & t) const
    {
        return hash<std::underlying_type<vk::VkPipelineShaderStageCreateFlags>::type>()(static_cast<std::underlying_type<vk::VkPipelineShaderStageCreateFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPipelineShaderStageCreateFlags operator|(const VkPipelineShaderStageCreateFlags & a, const VkPipelineShaderStageCreateFlags & b)
{
    return static_cast<VkPipelineShaderStageCreateFlags>(static_cast<std::underlying_type<VkPipelineShaderStageCreateFlags>::type>(a) | static_cast<std::underlying_type<VkPipelineShaderStageCreateFlags>::type>(b));
}

inline VkPipelineShaderStageCreateFlags & operator|=(VkPipelineShaderStageCreateFlags & a, const VkPipelineShaderStageCreateFlags & b)
{
    a = static_cast<VkPipelineShaderStageCreateFlags>(static_cast<std::underlying_type<VkPipelineShaderStageCreateFlags>::type>(a) | static_cast<std::underlying_type<VkPipelineShaderStageCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineShaderStageCreateFlags operator&(const VkPipelineShaderStageCreateFlags & a, const VkPipelineShaderStageCreateFlags & b)
{
    return static_cast<VkPipelineShaderStageCreateFlags>(static_cast<std::underlying_type<VkPipelineShaderStageCreateFlags>::type>(a) & static_cast<std::underlying_type<VkPipelineShaderStageCreateFlags>::type>(b));
}

inline VkPipelineShaderStageCreateFlags & operator&=(VkPipelineShaderStageCreateFlags & a, const VkPipelineShaderStageCreateFlags & b)
{
    a = static_cast<VkPipelineShaderStageCreateFlags>(static_cast<std::underlying_type<VkPipelineShaderStageCreateFlags>::type>(a) & static_cast<std::underlying_type<VkPipelineShaderStageCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineShaderStageCreateFlags operator^(const VkPipelineShaderStageCreateFlags & a, const VkPipelineShaderStageCreateFlags & b)
{
    return static_cast<VkPipelineShaderStageCreateFlags>(static_cast<std::underlying_type<VkPipelineShaderStageCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkPipelineShaderStageCreateFlags>::type>(b));
}

inline VkPipelineShaderStageCreateFlags & operator^=(VkPipelineShaderStageCreateFlags & a, const VkPipelineShaderStageCreateFlags & b)
{
    a = static_cast<VkPipelineShaderStageCreateFlags>(static_cast<std::underlying_type<VkPipelineShaderStageCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkPipelineShaderStageCreateFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPipelineStageFlags>
{
    std::size_t operator()(const vk::VkPipelineStageFlags & t) const
    {
        return hash<std::underlying_type<vk::VkPipelineStageFlags>::type>()(static_cast<std::underlying_type<vk::VkPipelineStageFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPipelineStageFlags operator|(const VkPipelineStageFlags & a, const VkPipelineStageFlags & b)
{
    return static_cast<VkPipelineStageFlags>(static_cast<std::underlying_type<VkPipelineStageFlags>::type>(a) | static_cast<std::underlying_type<VkPipelineStageFlags>::type>(b));
}

inline VkPipelineStageFlags & operator|=(VkPipelineStageFlags & a, const VkPipelineStageFlags & b)
{
    a = static_cast<VkPipelineStageFlags>(static_cast<std::underlying_type<VkPipelineStageFlags>::type>(a) | static_cast<std::underlying_type<VkPipelineStageFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineStageFlags operator&(const VkPipelineStageFlags & a, const VkPipelineStageFlags & b)
{
    return static_cast<VkPipelineStageFlags>(static_cast<std::underlying_type<VkPipelineStageFlags>::type>(a) & static_cast<std::underlying_type<VkPipelineStageFlags>::type>(b));
}

inline VkPipelineStageFlags & operator&=(VkPipelineStageFlags & a, const VkPipelineStageFlags & b)
{
    a = static_cast<VkPipelineStageFlags>(static_cast<std::underlying_type<VkPipelineStageFlags>::type>(a) & static_cast<std::underlying_type<VkPipelineStageFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineStageFlags operator^(const VkPipelineStageFlags & a, const VkPipelineStageFlags & b)
{
    return static_cast<VkPipelineStageFlags>(static_cast<std::underlying_type<VkPipelineStageFlags>::type>(a) ^ static_cast<std::underlying_type<VkPipelineStageFlags>::type>(b));
}

inline VkPipelineStageFlags & operator^=(VkPipelineStageFlags & a, const VkPipelineStageFlags & b)
{
    a = static_cast<VkPipelineStageFlags>(static_cast<std::underlying_type<VkPipelineStageFlags>::type>(a) ^ static_cast<std::underlying_type<VkPipelineStageFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPipelineTessellationStateCreateFlags>
{
    std::size_t operator()(const vk::VkPipelineTessellationStateCreateFlags & t) const
    {
        return hash<std::underlying_type<vk::VkPipelineTessellationStateCreateFlags>::type>()(static_cast<std::underlying_type<vk::VkPipelineTessellationStateCreateFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPipelineTessellationStateCreateFlags operator|(const VkPipelineTessellationStateCreateFlags & a, const VkPipelineTessellationStateCreateFlags & b)
{
    return static_cast<VkPipelineTessellationStateCreateFlags>(static_cast<std::underlying_type<VkPipelineTessellationStateCreateFlags>::type>(a) | static_cast<std::underlying_type<VkPipelineTessellationStateCreateFlags>::type>(b));
}

inline VkPipelineTessellationStateCreateFlags & operator|=(VkPipelineTessellationStateCreateFlags & a, const VkPipelineTessellationStateCreateFlags & b)
{
    a = static_cast<VkPipelineTessellationStateCreateFlags>(static_cast<std::underlying_type<VkPipelineTessellationStateCreateFlags>::type>(a) | static_cast<std::underlying_type<VkPipelineTessellationStateCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineTessellationStateCreateFlags operator&(const VkPipelineTessellationStateCreateFlags & a, const VkPipelineTessellationStateCreateFlags & b)
{
    return static_cast<VkPipelineTessellationStateCreateFlags>(static_cast<std::underlying_type<VkPipelineTessellationStateCreateFlags>::type>(a) & static_cast<std::underlying_type<VkPipelineTessellationStateCreateFlags>::type>(b));
}

inline VkPipelineTessellationStateCreateFlags & operator&=(VkPipelineTessellationStateCreateFlags & a, const VkPipelineTessellationStateCreateFlags & b)
{
    a = static_cast<VkPipelineTessellationStateCreateFlags>(static_cast<std::underlying_type<VkPipelineTessellationStateCreateFlags>::type>(a) & static_cast<std::underlying_type<VkPipelineTessellationStateCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineTessellationStateCreateFlags operator^(const VkPipelineTessellationStateCreateFlags & a, const VkPipelineTessellationStateCreateFlags & b)
{
    return static_cast<VkPipelineTessellationStateCreateFlags>(static_cast<std::underlying_type<VkPipelineTessellationStateCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkPipelineTessellationStateCreateFlags>::type>(b));
}

inline VkPipelineTessellationStateCreateFlags & operator^=(VkPipelineTessellationStateCreateFlags & a, const VkPipelineTessellationStateCreateFlags & b)
{
    a = static_cast<VkPipelineTessellationStateCreateFlags>(static_cast<std::underlying_type<VkPipelineTessellationStateCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkPipelineTessellationStateCreateFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPipelineVertexInputStateCreateFlags>
{
    std::size_t operator()(const vk::VkPipelineVertexInputStateCreateFlags & t) const
    {
        return hash<std::underlying_type<vk::VkPipelineVertexInputStateCreateFlags>::type>()(static_cast<std::underlying_type<vk::VkPipelineVertexInputStateCreateFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPipelineVertexInputStateCreateFlags operator|(const VkPipelineVertexInputStateCreateFlags & a, const VkPipelineVertexInputStateCreateFlags & b)
{
    return static_cast<VkPipelineVertexInputStateCreateFlags>(static_cast<std::underlying_type<VkPipelineVertexInputStateCreateFlags>::type>(a) | static_cast<std::underlying_type<VkPipelineVertexInputStateCreateFlags>::type>(b));
}

inline VkPipelineVertexInputStateCreateFlags & operator|=(VkPipelineVertexInputStateCreateFlags & a, const VkPipelineVertexInputStateCreateFlags & b)
{
    a = static_cast<VkPipelineVertexInputStateCreateFlags>(static_cast<std::underlying_type<VkPipelineVertexInputStateCreateFlags>::type>(a) | static_cast<std::underlying_type<VkPipelineVertexInputStateCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineVertexInputStateCreateFlags operator&(const VkPipelineVertexInputStateCreateFlags & a, const VkPipelineVertexInputStateCreateFlags & b)
{
    return static_cast<VkPipelineVertexInputStateCreateFlags>(static_cast<std::underlying_type<VkPipelineVertexInputStateCreateFlags>::type>(a) & static_cast<std::underlying_type<VkPipelineVertexInputStateCreateFlags>::type>(b));
}

inline VkPipelineVertexInputStateCreateFlags & operator&=(VkPipelineVertexInputStateCreateFlags & a, const VkPipelineVertexInputStateCreateFlags & b)
{
    a = static_cast<VkPipelineVertexInputStateCreateFlags>(static_cast<std::underlying_type<VkPipelineVertexInputStateCreateFlags>::type>(a) & static_cast<std::underlying_type<VkPipelineVertexInputStateCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineVertexInputStateCreateFlags operator^(const VkPipelineVertexInputStateCreateFlags & a, const VkPipelineVertexInputStateCreateFlags & b)
{
    return static_cast<VkPipelineVertexInputStateCreateFlags>(static_cast<std::underlying_type<VkPipelineVertexInputStateCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkPipelineVertexInputStateCreateFlags>::type>(b));
}

inline VkPipelineVertexInputStateCreateFlags & operator^=(VkPipelineVertexInputStateCreateFlags & a, const VkPipelineVertexInputStateCreateFlags & b)
{
    a = static_cast<VkPipelineVertexInputStateCreateFlags>(static_cast<std::underlying_type<VkPipelineVertexInputStateCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkPipelineVertexInputStateCreateFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPipelineViewportStateCreateFlags>
{
    std::size_t operator()(const vk::VkPipelineViewportStateCreateFlags & t) const
    {
        return hash<std::underlying_type<vk::VkPipelineViewportStateCreateFlags>::type>()(static_cast<std::underlying_type<vk::VkPipelineViewportStateCreateFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPipelineViewportStateCreateFlags operator|(const VkPipelineViewportStateCreateFlags & a, const VkPipelineViewportStateCreateFlags & b)
{
    return static_cast<VkPipelineViewportStateCreateFlags>(static_cast<std::underlying_type<VkPipelineViewportStateCreateFlags>::type>(a) | static_cast<std::underlying_type<VkPipelineViewportStateCreateFlags>::type>(b));
}

inline VkPipelineViewportStateCreateFlags & operator|=(VkPipelineViewportStateCreateFlags & a, const VkPipelineViewportStateCreateFlags & b)
{
    a = static_cast<VkPipelineViewportStateCreateFlags>(static_cast<std::underlying_type<VkPipelineViewportStateCreateFlags>::type>(a) | static_cast<std::underlying_type<VkPipelineViewportStateCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineViewportStateCreateFlags operator&(const VkPipelineViewportStateCreateFlags & a, const VkPipelineViewportStateCreateFlags & b)
{
    return static_cast<VkPipelineViewportStateCreateFlags>(static_cast<std::underlying_type<VkPipelineViewportStateCreateFlags>::type>(a) & static_cast<std::underlying_type<VkPipelineViewportStateCreateFlags>::type>(b));
}

inline VkPipelineViewportStateCreateFlags & operator&=(VkPipelineViewportStateCreateFlags & a, const VkPipelineViewportStateCreateFlags & b)
{
    a = static_cast<VkPipelineViewportStateCreateFlags>(static_cast<std::underlying_type<VkPipelineViewportStateCreateFlags>::type>(a) & static_cast<std::underlying_type<VkPipelineViewportStateCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineViewportStateCreateFlags operator^(const VkPipelineViewportStateCreateFlags & a, const VkPipelineViewportStateCreateFlags & b)
{
    return static_cast<VkPipelineViewportStateCreateFlags>(static_cast<std::underlying_type<VkPipelineViewportStateCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkPipelineViewportStateCreateFlags>::type>(b));
}

inline VkPipelineViewportStateCreateFlags & operator^=(VkPipelineViewportStateCreateFlags & a, const VkPipelineViewportStateCreateFlags & b)
{
    a = static_cast<VkPipelineViewportStateCreateFlags>(static_cast<std::underlying_type<VkPipelineViewportStateCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkPipelineViewportStateCreateFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkPipelineViewportSwizzleStateCreateFlagsNV>
{
    std::size_t operator()(const vk::VkPipelineViewportSwizzleStateCreateFlagsNV & t) const
    {
        return hash<std::underlying_type<vk::VkPipelineViewportSwizzleStateCreateFlagsNV>::type>()(static_cast<std::underlying_type<vk::VkPipelineViewportSwizzleStateCreateFlagsNV>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkPipelineViewportSwizzleStateCreateFlagsNV operator|(const VkPipelineViewportSwizzleStateCreateFlagsNV & a, const VkPipelineViewportSwizzleStateCreateFlagsNV & b)
{
    return static_cast<VkPipelineViewportSwizzleStateCreateFlagsNV>(static_cast<std::underlying_type<VkPipelineViewportSwizzleStateCreateFlagsNV>::type>(a) | static_cast<std::underlying_type<VkPipelineViewportSwizzleStateCreateFlagsNV>::type>(b));
}

inline VkPipelineViewportSwizzleStateCreateFlagsNV & operator|=(VkPipelineViewportSwizzleStateCreateFlagsNV & a, const VkPipelineViewportSwizzleStateCreateFlagsNV & b)
{
    a = static_cast<VkPipelineViewportSwizzleStateCreateFlagsNV>(static_cast<std::underlying_type<VkPipelineViewportSwizzleStateCreateFlagsNV>::type>(a) | static_cast<std::underlying_type<VkPipelineViewportSwizzleStateCreateFlagsNV>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineViewportSwizzleStateCreateFlagsNV operator&(const VkPipelineViewportSwizzleStateCreateFlagsNV & a, const VkPipelineViewportSwizzleStateCreateFlagsNV & b)
{
    return static_cast<VkPipelineViewportSwizzleStateCreateFlagsNV>(static_cast<std::underlying_type<VkPipelineViewportSwizzleStateCreateFlagsNV>::type>(a) & static_cast<std::underlying_type<VkPipelineViewportSwizzleStateCreateFlagsNV>::type>(b));
}

inline VkPipelineViewportSwizzleStateCreateFlagsNV & operator&=(VkPipelineViewportSwizzleStateCreateFlagsNV & a, const VkPipelineViewportSwizzleStateCreateFlagsNV & b)
{
    a = static_cast<VkPipelineViewportSwizzleStateCreateFlagsNV>(static_cast<std::underlying_type<VkPipelineViewportSwizzleStateCreateFlagsNV>::type>(a) & static_cast<std::underlying_type<VkPipelineViewportSwizzleStateCreateFlagsNV>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkPipelineViewportSwizzleStateCreateFlagsNV operator^(const VkPipelineViewportSwizzleStateCreateFlagsNV & a, const VkPipelineViewportSwizzleStateCreateFlagsNV & b)
{
    return static_cast<VkPipelineViewportSwizzleStateCreateFlagsNV>(static_cast<std::underlying_type<VkPipelineViewportSwizzleStateCreateFlagsNV>::type>(a) ^ static_cast<std::underlying_type<VkPipelineViewportSwizzleStateCreateFlagsNV>::type>(b));
}

inline VkPipelineViewportSwizzleStateCreateFlagsNV & operator^=(VkPipelineViewportSwizzleStateCreateFlagsNV & a, const VkPipelineViewportSwizzleStateCreateFlagsNV & b)
{
    a = static_cast<VkPipelineViewportSwizzleStateCreateFlagsNV>(static_cast<std::underlying_type<VkPipelineViewportSwizzleStateCreateFlagsNV>::type>(a) ^ static_cast<std::underlying_type<VkPipelineViewportSwizzleStateCreateFlagsNV>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkQueryControlFlags>
{
    std::size_t operator()(const vk::VkQueryControlFlags & t) const
    {
        return hash<std::underlying_type<vk::VkQueryControlFlags>::type>()(static_cast<std::underlying_type<vk::VkQueryControlFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkQueryControlFlags operator|(const VkQueryControlFlags & a, const VkQueryControlFlags & b)
{
    return static_cast<VkQueryControlFlags>(static_cast<std::underlying_type<VkQueryControlFlags>::type>(a) | static_cast<std::underlying_type<VkQueryControlFlags>::type>(b));
}

inline VkQueryControlFlags & operator|=(VkQueryControlFlags & a, const VkQueryControlFlags & b)
{
    a = static_cast<VkQueryControlFlags>(static_cast<std::underlying_type<VkQueryControlFlags>::type>(a) | static_cast<std::underlying_type<VkQueryControlFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkQueryControlFlags operator&(const VkQueryControlFlags & a, const VkQueryControlFlags & b)
{
    return static_cast<VkQueryControlFlags>(static_cast<std::underlying_type<VkQueryControlFlags>::type>(a) & static_cast<std::underlying_type<VkQueryControlFlags>::type>(b));
}

inline VkQueryControlFlags & operator&=(VkQueryControlFlags & a, const VkQueryControlFlags & b)
{
    a = static_cast<VkQueryControlFlags>(static_cast<std::underlying_type<VkQueryControlFlags>::type>(a) & static_cast<std::underlying_type<VkQueryControlFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkQueryControlFlags operator^(const VkQueryControlFlags & a, const VkQueryControlFlags & b)
{
    return static_cast<VkQueryControlFlags>(static_cast<std::underlying_type<VkQueryControlFlags>::type>(a) ^ static_cast<std::underlying_type<VkQueryControlFlags>::type>(b));
}

inline VkQueryControlFlags & operator^=(VkQueryControlFlags & a, const VkQueryControlFlags & b)
{
    a = static_cast<VkQueryControlFlags>(static_cast<std::underlying_type<VkQueryControlFlags>::type>(a) ^ static_cast<std::underlying_type<VkQueryControlFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkQueryPipelineStatisticFlags>
{
    std::size_t operator()(const vk::VkQueryPipelineStatisticFlags & t) const
    {
        return hash<std::underlying_type<vk::VkQueryPipelineStatisticFlags>::type>()(static_cast<std::underlying_type<vk::VkQueryPipelineStatisticFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkQueryPipelineStatisticFlags operator|(const VkQueryPipelineStatisticFlags & a, const VkQueryPipelineStatisticFlags & b)
{
    return static_cast<VkQueryPipelineStatisticFlags>(static_cast<std::underlying_type<VkQueryPipelineStatisticFlags>::type>(a) | static_cast<std::underlying_type<VkQueryPipelineStatisticFlags>::type>(b));
}

inline VkQueryPipelineStatisticFlags & operator|=(VkQueryPipelineStatisticFlags & a, const VkQueryPipelineStatisticFlags & b)
{
    a = static_cast<VkQueryPipelineStatisticFlags>(static_cast<std::underlying_type<VkQueryPipelineStatisticFlags>::type>(a) | static_cast<std::underlying_type<VkQueryPipelineStatisticFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkQueryPipelineStatisticFlags operator&(const VkQueryPipelineStatisticFlags & a, const VkQueryPipelineStatisticFlags & b)
{
    return static_cast<VkQueryPipelineStatisticFlags>(static_cast<std::underlying_type<VkQueryPipelineStatisticFlags>::type>(a) & static_cast<std::underlying_type<VkQueryPipelineStatisticFlags>::type>(b));
}

inline VkQueryPipelineStatisticFlags & operator&=(VkQueryPipelineStatisticFlags & a, const VkQueryPipelineStatisticFlags & b)
{
    a = static_cast<VkQueryPipelineStatisticFlags>(static_cast<std::underlying_type<VkQueryPipelineStatisticFlags>::type>(a) & static_cast<std::underlying_type<VkQueryPipelineStatisticFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkQueryPipelineStatisticFlags operator^(const VkQueryPipelineStatisticFlags & a, const VkQueryPipelineStatisticFlags & b)
{
    return static_cast<VkQueryPipelineStatisticFlags>(static_cast<std::underlying_type<VkQueryPipelineStatisticFlags>::type>(a) ^ static_cast<std::underlying_type<VkQueryPipelineStatisticFlags>::type>(b));
}

inline VkQueryPipelineStatisticFlags & operator^=(VkQueryPipelineStatisticFlags & a, const VkQueryPipelineStatisticFlags & b)
{
    a = static_cast<VkQueryPipelineStatisticFlags>(static_cast<std::underlying_type<VkQueryPipelineStatisticFlags>::type>(a) ^ static_cast<std::underlying_type<VkQueryPipelineStatisticFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkQueryPoolCreateFlags>
{
    std::size_t operator()(const vk::VkQueryPoolCreateFlags & t) const
    {
        return hash<std::underlying_type<vk::VkQueryPoolCreateFlags>::type>()(static_cast<std::underlying_type<vk::VkQueryPoolCreateFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkQueryPoolCreateFlags operator|(const VkQueryPoolCreateFlags & a, const VkQueryPoolCreateFlags & b)
{
    return static_cast<VkQueryPoolCreateFlags>(static_cast<std::underlying_type<VkQueryPoolCreateFlags>::type>(a) | static_cast<std::underlying_type<VkQueryPoolCreateFlags>::type>(b));
}

inline VkQueryPoolCreateFlags & operator|=(VkQueryPoolCreateFlags & a, const VkQueryPoolCreateFlags & b)
{
    a = static_cast<VkQueryPoolCreateFlags>(static_cast<std::underlying_type<VkQueryPoolCreateFlags>::type>(a) | static_cast<std::underlying_type<VkQueryPoolCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkQueryPoolCreateFlags operator&(const VkQueryPoolCreateFlags & a, const VkQueryPoolCreateFlags & b)
{
    return static_cast<VkQueryPoolCreateFlags>(static_cast<std::underlying_type<VkQueryPoolCreateFlags>::type>(a) & static_cast<std::underlying_type<VkQueryPoolCreateFlags>::type>(b));
}

inline VkQueryPoolCreateFlags & operator&=(VkQueryPoolCreateFlags & a, const VkQueryPoolCreateFlags & b)
{
    a = static_cast<VkQueryPoolCreateFlags>(static_cast<std::underlying_type<VkQueryPoolCreateFlags>::type>(a) & static_cast<std::underlying_type<VkQueryPoolCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkQueryPoolCreateFlags operator^(const VkQueryPoolCreateFlags & a, const VkQueryPoolCreateFlags & b)
{
    return static_cast<VkQueryPoolCreateFlags>(static_cast<std::underlying_type<VkQueryPoolCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkQueryPoolCreateFlags>::type>(b));
}

inline VkQueryPoolCreateFlags & operator^=(VkQueryPoolCreateFlags & a, const VkQueryPoolCreateFlags & b)
{
    a = static_cast<VkQueryPoolCreateFlags>(static_cast<std::underlying_type<VkQueryPoolCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkQueryPoolCreateFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkQueryResultFlags>
{
    std::size_t operator()(const vk::VkQueryResultFlags & t) const
    {
        return hash<std::underlying_type<vk::VkQueryResultFlags>::type>()(static_cast<std::underlying_type<vk::VkQueryResultFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkQueryResultFlags operator|(const VkQueryResultFlags & a, const VkQueryResultFlags & b)
{
    return static_cast<VkQueryResultFlags>(static_cast<std::underlying_type<VkQueryResultFlags>::type>(a) | static_cast<std::underlying_type<VkQueryResultFlags>::type>(b));
}

inline VkQueryResultFlags & operator|=(VkQueryResultFlags & a, const VkQueryResultFlags & b)
{
    a = static_cast<VkQueryResultFlags>(static_cast<std::underlying_type<VkQueryResultFlags>::type>(a) | static_cast<std::underlying_type<VkQueryResultFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkQueryResultFlags operator&(const VkQueryResultFlags & a, const VkQueryResultFlags & b)
{
    return static_cast<VkQueryResultFlags>(static_cast<std::underlying_type<VkQueryResultFlags>::type>(a) & static_cast<std::underlying_type<VkQueryResultFlags>::type>(b));
}

inline VkQueryResultFlags & operator&=(VkQueryResultFlags & a, const VkQueryResultFlags & b)
{
    a = static_cast<VkQueryResultFlags>(static_cast<std::underlying_type<VkQueryResultFlags>::type>(a) & static_cast<std::underlying_type<VkQueryResultFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkQueryResultFlags operator^(const VkQueryResultFlags & a, const VkQueryResultFlags & b)
{
    return static_cast<VkQueryResultFlags>(static_cast<std::underlying_type<VkQueryResultFlags>::type>(a) ^ static_cast<std::underlying_type<VkQueryResultFlags>::type>(b));
}

inline VkQueryResultFlags & operator^=(VkQueryResultFlags & a, const VkQueryResultFlags & b)
{
    a = static_cast<VkQueryResultFlags>(static_cast<std::underlying_type<VkQueryResultFlags>::type>(a) ^ static_cast<std::underlying_type<VkQueryResultFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkQueueFlags>
{
    std::size_t operator()(const vk::VkQueueFlags & t) const
    {
        return hash<std::underlying_type<vk::VkQueueFlags>::type>()(static_cast<std::underlying_type<vk::VkQueueFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkQueueFlags operator|(const VkQueueFlags & a, const VkQueueFlags & b)
{
    return static_cast<VkQueueFlags>(static_cast<std::underlying_type<VkQueueFlags>::type>(a) | static_cast<std::underlying_type<VkQueueFlags>::type>(b));
}

inline VkQueueFlags & operator|=(VkQueueFlags & a, const VkQueueFlags & b)
{
    a = static_cast<VkQueueFlags>(static_cast<std::underlying_type<VkQueueFlags>::type>(a) | static_cast<std::underlying_type<VkQueueFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkQueueFlags operator&(const VkQueueFlags & a, const VkQueueFlags & b)
{
    return static_cast<VkQueueFlags>(static_cast<std::underlying_type<VkQueueFlags>::type>(a) & static_cast<std::underlying_type<VkQueueFlags>::type>(b));
}

inline VkQueueFlags & operator&=(VkQueueFlags & a, const VkQueueFlags & b)
{
    a = static_cast<VkQueueFlags>(static_cast<std::underlying_type<VkQueueFlags>::type>(a) & static_cast<std::underlying_type<VkQueueFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkQueueFlags operator^(const VkQueueFlags & a, const VkQueueFlags & b)
{
    return static_cast<VkQueueFlags>(static_cast<std::underlying_type<VkQueueFlags>::type>(a) ^ static_cast<std::underlying_type<VkQueueFlags>::type>(b));
}

inline VkQueueFlags & operator^=(VkQueueFlags & a, const VkQueueFlags & b)
{
    a = static_cast<VkQueueFlags>(static_cast<std::underlying_type<VkQueueFlags>::type>(a) ^ static_cast<std::underlying_type<VkQueueFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkRenderPassCreateFlags>
{
    std::size_t operator()(const vk::VkRenderPassCreateFlags & t) const
    {
        return hash<std::underlying_type<vk::VkRenderPassCreateFlags>::type>()(static_cast<std::underlying_type<vk::VkRenderPassCreateFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkRenderPassCreateFlags operator|(const VkRenderPassCreateFlags & a, const VkRenderPassCreateFlags & b)
{
    return static_cast<VkRenderPassCreateFlags>(static_cast<std::underlying_type<VkRenderPassCreateFlags>::type>(a) | static_cast<std::underlying_type<VkRenderPassCreateFlags>::type>(b));
}

inline VkRenderPassCreateFlags & operator|=(VkRenderPassCreateFlags & a, const VkRenderPassCreateFlags & b)
{
    a = static_cast<VkRenderPassCreateFlags>(static_cast<std::underlying_type<VkRenderPassCreateFlags>::type>(a) | static_cast<std::underlying_type<VkRenderPassCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkRenderPassCreateFlags operator&(const VkRenderPassCreateFlags & a, const VkRenderPassCreateFlags & b)
{
    return static_cast<VkRenderPassCreateFlags>(static_cast<std::underlying_type<VkRenderPassCreateFlags>::type>(a) & static_cast<std::underlying_type<VkRenderPassCreateFlags>::type>(b));
}

inline VkRenderPassCreateFlags & operator&=(VkRenderPassCreateFlags & a, const VkRenderPassCreateFlags & b)
{
    a = static_cast<VkRenderPassCreateFlags>(static_cast<std::underlying_type<VkRenderPassCreateFlags>::type>(a) & static_cast<std::underlying_type<VkRenderPassCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkRenderPassCreateFlags operator^(const VkRenderPassCreateFlags & a, const VkRenderPassCreateFlags & b)
{
    return static_cast<VkRenderPassCreateFlags>(static_cast<std::underlying_type<VkRenderPassCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkRenderPassCreateFlags>::type>(b));
}

inline VkRenderPassCreateFlags & operator^=(VkRenderPassCreateFlags & a, const VkRenderPassCreateFlags & b)
{
    a = static_cast<VkRenderPassCreateFlags>(static_cast<std::underlying_type<VkRenderPassCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkRenderPassCreateFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkResolveModeFlagsKHR>
{
    std::size_t operator()(const vk::VkResolveModeFlagsKHR & t) const
    {
        return hash<std::underlying_type<vk::VkResolveModeFlagsKHR>::type>()(static_cast<std::underlying_type<vk::VkResolveModeFlagsKHR>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkResolveModeFlagsKHR operator|(const VkResolveModeFlagsKHR & a, const VkResolveModeFlagsKHR & b)
{
    return static_cast<VkResolveModeFlagsKHR>(static_cast<std::underlying_type<VkResolveModeFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkResolveModeFlagsKHR>::type>(b));
}

inline VkResolveModeFlagsKHR & operator|=(VkResolveModeFlagsKHR & a, const VkResolveModeFlagsKHR & b)
{
    a = static_cast<VkResolveModeFlagsKHR>(static_cast<std::underlying_type<VkResolveModeFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkResolveModeFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkResolveModeFlagsKHR operator&(const VkResolveModeFlagsKHR & a, const VkResolveModeFlagsKHR & b)
{
    return static_cast<VkResolveModeFlagsKHR>(static_cast<std::underlying_type<VkResolveModeFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkResolveModeFlagsKHR>::type>(b));
}

inline VkResolveModeFlagsKHR & operator&=(VkResolveModeFlagsKHR & a, const VkResolveModeFlagsKHR & b)
{
    a = static_cast<VkResolveModeFlagsKHR>(static_cast<std::underlying_type<VkResolveModeFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkResolveModeFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkResolveModeFlagsKHR operator^(const VkResolveModeFlagsKHR & a, const VkResolveModeFlagsKHR & b)
{
    return static_cast<VkResolveModeFlagsKHR>(static_cast<std::underlying_type<VkResolveModeFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkResolveModeFlagsKHR>::type>(b));
}

inline VkResolveModeFlagsKHR & operator^=(VkResolveModeFlagsKHR & a, const VkResolveModeFlagsKHR & b)
{
    a = static_cast<VkResolveModeFlagsKHR>(static_cast<std::underlying_type<VkResolveModeFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkResolveModeFlagsKHR>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkSampleCountFlags>
{
    std::size_t operator()(const vk::VkSampleCountFlags & t) const
    {
        return hash<std::underlying_type<vk::VkSampleCountFlags>::type>()(static_cast<std::underlying_type<vk::VkSampleCountFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkSampleCountFlags operator|(const VkSampleCountFlags & a, const VkSampleCountFlags & b)
{
    return static_cast<VkSampleCountFlags>(static_cast<std::underlying_type<VkSampleCountFlags>::type>(a) | static_cast<std::underlying_type<VkSampleCountFlags>::type>(b));
}

inline VkSampleCountFlags & operator|=(VkSampleCountFlags & a, const VkSampleCountFlags & b)
{
    a = static_cast<VkSampleCountFlags>(static_cast<std::underlying_type<VkSampleCountFlags>::type>(a) | static_cast<std::underlying_type<VkSampleCountFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSampleCountFlags operator&(const VkSampleCountFlags & a, const VkSampleCountFlags & b)
{
    return static_cast<VkSampleCountFlags>(static_cast<std::underlying_type<VkSampleCountFlags>::type>(a) & static_cast<std::underlying_type<VkSampleCountFlags>::type>(b));
}

inline VkSampleCountFlags & operator&=(VkSampleCountFlags & a, const VkSampleCountFlags & b)
{
    a = static_cast<VkSampleCountFlags>(static_cast<std::underlying_type<VkSampleCountFlags>::type>(a) & static_cast<std::underlying_type<VkSampleCountFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSampleCountFlags operator^(const VkSampleCountFlags & a, const VkSampleCountFlags & b)
{
    return static_cast<VkSampleCountFlags>(static_cast<std::underlying_type<VkSampleCountFlags>::type>(a) ^ static_cast<std::underlying_type<VkSampleCountFlags>::type>(b));
}

inline VkSampleCountFlags & operator^=(VkSampleCountFlags & a, const VkSampleCountFlags & b)
{
    a = static_cast<VkSampleCountFlags>(static_cast<std::underlying_type<VkSampleCountFlags>::type>(a) ^ static_cast<std::underlying_type<VkSampleCountFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkSamplerCreateFlags>
{
    std::size_t operator()(const vk::VkSamplerCreateFlags & t) const
    {
        return hash<std::underlying_type<vk::VkSamplerCreateFlags>::type>()(static_cast<std::underlying_type<vk::VkSamplerCreateFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkSamplerCreateFlags operator|(const VkSamplerCreateFlags & a, const VkSamplerCreateFlags & b)
{
    return static_cast<VkSamplerCreateFlags>(static_cast<std::underlying_type<VkSamplerCreateFlags>::type>(a) | static_cast<std::underlying_type<VkSamplerCreateFlags>::type>(b));
}

inline VkSamplerCreateFlags & operator|=(VkSamplerCreateFlags & a, const VkSamplerCreateFlags & b)
{
    a = static_cast<VkSamplerCreateFlags>(static_cast<std::underlying_type<VkSamplerCreateFlags>::type>(a) | static_cast<std::underlying_type<VkSamplerCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSamplerCreateFlags operator&(const VkSamplerCreateFlags & a, const VkSamplerCreateFlags & b)
{
    return static_cast<VkSamplerCreateFlags>(static_cast<std::underlying_type<VkSamplerCreateFlags>::type>(a) & static_cast<std::underlying_type<VkSamplerCreateFlags>::type>(b));
}

inline VkSamplerCreateFlags & operator&=(VkSamplerCreateFlags & a, const VkSamplerCreateFlags & b)
{
    a = static_cast<VkSamplerCreateFlags>(static_cast<std::underlying_type<VkSamplerCreateFlags>::type>(a) & static_cast<std::underlying_type<VkSamplerCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSamplerCreateFlags operator^(const VkSamplerCreateFlags & a, const VkSamplerCreateFlags & b)
{
    return static_cast<VkSamplerCreateFlags>(static_cast<std::underlying_type<VkSamplerCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkSamplerCreateFlags>::type>(b));
}

inline VkSamplerCreateFlags & operator^=(VkSamplerCreateFlags & a, const VkSamplerCreateFlags & b)
{
    a = static_cast<VkSamplerCreateFlags>(static_cast<std::underlying_type<VkSamplerCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkSamplerCreateFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkSemaphoreCreateFlags>
{
    std::size_t operator()(const vk::VkSemaphoreCreateFlags & t) const
    {
        return hash<std::underlying_type<vk::VkSemaphoreCreateFlags>::type>()(static_cast<std::underlying_type<vk::VkSemaphoreCreateFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkSemaphoreCreateFlags operator|(const VkSemaphoreCreateFlags & a, const VkSemaphoreCreateFlags & b)
{
    return static_cast<VkSemaphoreCreateFlags>(static_cast<std::underlying_type<VkSemaphoreCreateFlags>::type>(a) | static_cast<std::underlying_type<VkSemaphoreCreateFlags>::type>(b));
}

inline VkSemaphoreCreateFlags & operator|=(VkSemaphoreCreateFlags & a, const VkSemaphoreCreateFlags & b)
{
    a = static_cast<VkSemaphoreCreateFlags>(static_cast<std::underlying_type<VkSemaphoreCreateFlags>::type>(a) | static_cast<std::underlying_type<VkSemaphoreCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSemaphoreCreateFlags operator&(const VkSemaphoreCreateFlags & a, const VkSemaphoreCreateFlags & b)
{
    return static_cast<VkSemaphoreCreateFlags>(static_cast<std::underlying_type<VkSemaphoreCreateFlags>::type>(a) & static_cast<std::underlying_type<VkSemaphoreCreateFlags>::type>(b));
}

inline VkSemaphoreCreateFlags & operator&=(VkSemaphoreCreateFlags & a, const VkSemaphoreCreateFlags & b)
{
    a = static_cast<VkSemaphoreCreateFlags>(static_cast<std::underlying_type<VkSemaphoreCreateFlags>::type>(a) & static_cast<std::underlying_type<VkSemaphoreCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSemaphoreCreateFlags operator^(const VkSemaphoreCreateFlags & a, const VkSemaphoreCreateFlags & b)
{
    return static_cast<VkSemaphoreCreateFlags>(static_cast<std::underlying_type<VkSemaphoreCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkSemaphoreCreateFlags>::type>(b));
}

inline VkSemaphoreCreateFlags & operator^=(VkSemaphoreCreateFlags & a, const VkSemaphoreCreateFlags & b)
{
    a = static_cast<VkSemaphoreCreateFlags>(static_cast<std::underlying_type<VkSemaphoreCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkSemaphoreCreateFlags>::type>(b));

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
struct hash<vk::VkSemaphoreImportFlags>
{
    std::size_t operator()(const vk::VkSemaphoreImportFlags & t) const
    {
        return hash<std::underlying_type<vk::VkSemaphoreImportFlags>::type>()(static_cast<std::underlying_type<vk::VkSemaphoreImportFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkSemaphoreImportFlags operator|(const VkSemaphoreImportFlags & a, const VkSemaphoreImportFlags & b)
{
    return static_cast<VkSemaphoreImportFlags>(static_cast<std::underlying_type<VkSemaphoreImportFlags>::type>(a) | static_cast<std::underlying_type<VkSemaphoreImportFlags>::type>(b));
}

inline VkSemaphoreImportFlags & operator|=(VkSemaphoreImportFlags & a, const VkSemaphoreImportFlags & b)
{
    a = static_cast<VkSemaphoreImportFlags>(static_cast<std::underlying_type<VkSemaphoreImportFlags>::type>(a) | static_cast<std::underlying_type<VkSemaphoreImportFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSemaphoreImportFlags operator&(const VkSemaphoreImportFlags & a, const VkSemaphoreImportFlags & b)
{
    return static_cast<VkSemaphoreImportFlags>(static_cast<std::underlying_type<VkSemaphoreImportFlags>::type>(a) & static_cast<std::underlying_type<VkSemaphoreImportFlags>::type>(b));
}

inline VkSemaphoreImportFlags & operator&=(VkSemaphoreImportFlags & a, const VkSemaphoreImportFlags & b)
{
    a = static_cast<VkSemaphoreImportFlags>(static_cast<std::underlying_type<VkSemaphoreImportFlags>::type>(a) & static_cast<std::underlying_type<VkSemaphoreImportFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSemaphoreImportFlags operator^(const VkSemaphoreImportFlags & a, const VkSemaphoreImportFlags & b)
{
    return static_cast<VkSemaphoreImportFlags>(static_cast<std::underlying_type<VkSemaphoreImportFlags>::type>(a) ^ static_cast<std::underlying_type<VkSemaphoreImportFlags>::type>(b));
}

inline VkSemaphoreImportFlags & operator^=(VkSemaphoreImportFlags & a, const VkSemaphoreImportFlags & b)
{
    a = static_cast<VkSemaphoreImportFlags>(static_cast<std::underlying_type<VkSemaphoreImportFlags>::type>(a) ^ static_cast<std::underlying_type<VkSemaphoreImportFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkSemaphoreImportFlagsKHR>
{
    std::size_t operator()(const vk::VkSemaphoreImportFlagsKHR & t) const
    {
        return hash<std::underlying_type<vk::VkSemaphoreImportFlagsKHR>::type>()(static_cast<std::underlying_type<vk::VkSemaphoreImportFlagsKHR>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkSemaphoreImportFlagsKHR operator|(const VkSemaphoreImportFlagsKHR & a, const VkSemaphoreImportFlagsKHR & b)
{
    return static_cast<VkSemaphoreImportFlagsKHR>(static_cast<std::underlying_type<VkSemaphoreImportFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkSemaphoreImportFlagsKHR>::type>(b));
}

inline VkSemaphoreImportFlagsKHR & operator|=(VkSemaphoreImportFlagsKHR & a, const VkSemaphoreImportFlagsKHR & b)
{
    a = static_cast<VkSemaphoreImportFlagsKHR>(static_cast<std::underlying_type<VkSemaphoreImportFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkSemaphoreImportFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSemaphoreImportFlagsKHR operator&(const VkSemaphoreImportFlagsKHR & a, const VkSemaphoreImportFlagsKHR & b)
{
    return static_cast<VkSemaphoreImportFlagsKHR>(static_cast<std::underlying_type<VkSemaphoreImportFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkSemaphoreImportFlagsKHR>::type>(b));
}

inline VkSemaphoreImportFlagsKHR & operator&=(VkSemaphoreImportFlagsKHR & a, const VkSemaphoreImportFlagsKHR & b)
{
    a = static_cast<VkSemaphoreImportFlagsKHR>(static_cast<std::underlying_type<VkSemaphoreImportFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkSemaphoreImportFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSemaphoreImportFlagsKHR operator^(const VkSemaphoreImportFlagsKHR & a, const VkSemaphoreImportFlagsKHR & b)
{
    return static_cast<VkSemaphoreImportFlagsKHR>(static_cast<std::underlying_type<VkSemaphoreImportFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkSemaphoreImportFlagsKHR>::type>(b));
}

inline VkSemaphoreImportFlagsKHR & operator^=(VkSemaphoreImportFlagsKHR & a, const VkSemaphoreImportFlagsKHR & b)
{
    a = static_cast<VkSemaphoreImportFlagsKHR>(static_cast<std::underlying_type<VkSemaphoreImportFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkSemaphoreImportFlagsKHR>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkShaderCorePropertiesFlagsAMD>
{
    std::size_t operator()(const vk::VkShaderCorePropertiesFlagsAMD & t) const
    {
        return hash<std::underlying_type<vk::VkShaderCorePropertiesFlagsAMD>::type>()(static_cast<std::underlying_type<vk::VkShaderCorePropertiesFlagsAMD>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkShaderCorePropertiesFlagsAMD operator|(const VkShaderCorePropertiesFlagsAMD & a, const VkShaderCorePropertiesFlagsAMD & b)
{
    return static_cast<VkShaderCorePropertiesFlagsAMD>(static_cast<std::underlying_type<VkShaderCorePropertiesFlagsAMD>::type>(a) | static_cast<std::underlying_type<VkShaderCorePropertiesFlagsAMD>::type>(b));
}

inline VkShaderCorePropertiesFlagsAMD & operator|=(VkShaderCorePropertiesFlagsAMD & a, const VkShaderCorePropertiesFlagsAMD & b)
{
    a = static_cast<VkShaderCorePropertiesFlagsAMD>(static_cast<std::underlying_type<VkShaderCorePropertiesFlagsAMD>::type>(a) | static_cast<std::underlying_type<VkShaderCorePropertiesFlagsAMD>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkShaderCorePropertiesFlagsAMD operator&(const VkShaderCorePropertiesFlagsAMD & a, const VkShaderCorePropertiesFlagsAMD & b)
{
    return static_cast<VkShaderCorePropertiesFlagsAMD>(static_cast<std::underlying_type<VkShaderCorePropertiesFlagsAMD>::type>(a) & static_cast<std::underlying_type<VkShaderCorePropertiesFlagsAMD>::type>(b));
}

inline VkShaderCorePropertiesFlagsAMD & operator&=(VkShaderCorePropertiesFlagsAMD & a, const VkShaderCorePropertiesFlagsAMD & b)
{
    a = static_cast<VkShaderCorePropertiesFlagsAMD>(static_cast<std::underlying_type<VkShaderCorePropertiesFlagsAMD>::type>(a) & static_cast<std::underlying_type<VkShaderCorePropertiesFlagsAMD>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkShaderCorePropertiesFlagsAMD operator^(const VkShaderCorePropertiesFlagsAMD & a, const VkShaderCorePropertiesFlagsAMD & b)
{
    return static_cast<VkShaderCorePropertiesFlagsAMD>(static_cast<std::underlying_type<VkShaderCorePropertiesFlagsAMD>::type>(a) ^ static_cast<std::underlying_type<VkShaderCorePropertiesFlagsAMD>::type>(b));
}

inline VkShaderCorePropertiesFlagsAMD & operator^=(VkShaderCorePropertiesFlagsAMD & a, const VkShaderCorePropertiesFlagsAMD & b)
{
    a = static_cast<VkShaderCorePropertiesFlagsAMD>(static_cast<std::underlying_type<VkShaderCorePropertiesFlagsAMD>::type>(a) ^ static_cast<std::underlying_type<VkShaderCorePropertiesFlagsAMD>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkShaderModuleCreateFlags>
{
    std::size_t operator()(const vk::VkShaderModuleCreateFlags & t) const
    {
        return hash<std::underlying_type<vk::VkShaderModuleCreateFlags>::type>()(static_cast<std::underlying_type<vk::VkShaderModuleCreateFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkShaderModuleCreateFlags operator|(const VkShaderModuleCreateFlags & a, const VkShaderModuleCreateFlags & b)
{
    return static_cast<VkShaderModuleCreateFlags>(static_cast<std::underlying_type<VkShaderModuleCreateFlags>::type>(a) | static_cast<std::underlying_type<VkShaderModuleCreateFlags>::type>(b));
}

inline VkShaderModuleCreateFlags & operator|=(VkShaderModuleCreateFlags & a, const VkShaderModuleCreateFlags & b)
{
    a = static_cast<VkShaderModuleCreateFlags>(static_cast<std::underlying_type<VkShaderModuleCreateFlags>::type>(a) | static_cast<std::underlying_type<VkShaderModuleCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkShaderModuleCreateFlags operator&(const VkShaderModuleCreateFlags & a, const VkShaderModuleCreateFlags & b)
{
    return static_cast<VkShaderModuleCreateFlags>(static_cast<std::underlying_type<VkShaderModuleCreateFlags>::type>(a) & static_cast<std::underlying_type<VkShaderModuleCreateFlags>::type>(b));
}

inline VkShaderModuleCreateFlags & operator&=(VkShaderModuleCreateFlags & a, const VkShaderModuleCreateFlags & b)
{
    a = static_cast<VkShaderModuleCreateFlags>(static_cast<std::underlying_type<VkShaderModuleCreateFlags>::type>(a) & static_cast<std::underlying_type<VkShaderModuleCreateFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkShaderModuleCreateFlags operator^(const VkShaderModuleCreateFlags & a, const VkShaderModuleCreateFlags & b)
{
    return static_cast<VkShaderModuleCreateFlags>(static_cast<std::underlying_type<VkShaderModuleCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkShaderModuleCreateFlags>::type>(b));
}

inline VkShaderModuleCreateFlags & operator^=(VkShaderModuleCreateFlags & a, const VkShaderModuleCreateFlags & b)
{
    a = static_cast<VkShaderModuleCreateFlags>(static_cast<std::underlying_type<VkShaderModuleCreateFlags>::type>(a) ^ static_cast<std::underlying_type<VkShaderModuleCreateFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkShaderStageFlags>
{
    std::size_t operator()(const vk::VkShaderStageFlags & t) const
    {
        return hash<std::underlying_type<vk::VkShaderStageFlags>::type>()(static_cast<std::underlying_type<vk::VkShaderStageFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkShaderStageFlags operator|(const VkShaderStageFlags & a, const VkShaderStageFlags & b)
{
    return static_cast<VkShaderStageFlags>(static_cast<std::underlying_type<VkShaderStageFlags>::type>(a) | static_cast<std::underlying_type<VkShaderStageFlags>::type>(b));
}

inline VkShaderStageFlags & operator|=(VkShaderStageFlags & a, const VkShaderStageFlags & b)
{
    a = static_cast<VkShaderStageFlags>(static_cast<std::underlying_type<VkShaderStageFlags>::type>(a) | static_cast<std::underlying_type<VkShaderStageFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkShaderStageFlags operator&(const VkShaderStageFlags & a, const VkShaderStageFlags & b)
{
    return static_cast<VkShaderStageFlags>(static_cast<std::underlying_type<VkShaderStageFlags>::type>(a) & static_cast<std::underlying_type<VkShaderStageFlags>::type>(b));
}

inline VkShaderStageFlags & operator&=(VkShaderStageFlags & a, const VkShaderStageFlags & b)
{
    a = static_cast<VkShaderStageFlags>(static_cast<std::underlying_type<VkShaderStageFlags>::type>(a) & static_cast<std::underlying_type<VkShaderStageFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkShaderStageFlags operator^(const VkShaderStageFlags & a, const VkShaderStageFlags & b)
{
    return static_cast<VkShaderStageFlags>(static_cast<std::underlying_type<VkShaderStageFlags>::type>(a) ^ static_cast<std::underlying_type<VkShaderStageFlags>::type>(b));
}

inline VkShaderStageFlags & operator^=(VkShaderStageFlags & a, const VkShaderStageFlags & b)
{
    a = static_cast<VkShaderStageFlags>(static_cast<std::underlying_type<VkShaderStageFlags>::type>(a) ^ static_cast<std::underlying_type<VkShaderStageFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkSparseImageFormatFlags>
{
    std::size_t operator()(const vk::VkSparseImageFormatFlags & t) const
    {
        return hash<std::underlying_type<vk::VkSparseImageFormatFlags>::type>()(static_cast<std::underlying_type<vk::VkSparseImageFormatFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkSparseImageFormatFlags operator|(const VkSparseImageFormatFlags & a, const VkSparseImageFormatFlags & b)
{
    return static_cast<VkSparseImageFormatFlags>(static_cast<std::underlying_type<VkSparseImageFormatFlags>::type>(a) | static_cast<std::underlying_type<VkSparseImageFormatFlags>::type>(b));
}

inline VkSparseImageFormatFlags & operator|=(VkSparseImageFormatFlags & a, const VkSparseImageFormatFlags & b)
{
    a = static_cast<VkSparseImageFormatFlags>(static_cast<std::underlying_type<VkSparseImageFormatFlags>::type>(a) | static_cast<std::underlying_type<VkSparseImageFormatFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSparseImageFormatFlags operator&(const VkSparseImageFormatFlags & a, const VkSparseImageFormatFlags & b)
{
    return static_cast<VkSparseImageFormatFlags>(static_cast<std::underlying_type<VkSparseImageFormatFlags>::type>(a) & static_cast<std::underlying_type<VkSparseImageFormatFlags>::type>(b));
}

inline VkSparseImageFormatFlags & operator&=(VkSparseImageFormatFlags & a, const VkSparseImageFormatFlags & b)
{
    a = static_cast<VkSparseImageFormatFlags>(static_cast<std::underlying_type<VkSparseImageFormatFlags>::type>(a) & static_cast<std::underlying_type<VkSparseImageFormatFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSparseImageFormatFlags operator^(const VkSparseImageFormatFlags & a, const VkSparseImageFormatFlags & b)
{
    return static_cast<VkSparseImageFormatFlags>(static_cast<std::underlying_type<VkSparseImageFormatFlags>::type>(a) ^ static_cast<std::underlying_type<VkSparseImageFormatFlags>::type>(b));
}

inline VkSparseImageFormatFlags & operator^=(VkSparseImageFormatFlags & a, const VkSparseImageFormatFlags & b)
{
    a = static_cast<VkSparseImageFormatFlags>(static_cast<std::underlying_type<VkSparseImageFormatFlags>::type>(a) ^ static_cast<std::underlying_type<VkSparseImageFormatFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkSparseMemoryBindFlags>
{
    std::size_t operator()(const vk::VkSparseMemoryBindFlags & t) const
    {
        return hash<std::underlying_type<vk::VkSparseMemoryBindFlags>::type>()(static_cast<std::underlying_type<vk::VkSparseMemoryBindFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkSparseMemoryBindFlags operator|(const VkSparseMemoryBindFlags & a, const VkSparseMemoryBindFlags & b)
{
    return static_cast<VkSparseMemoryBindFlags>(static_cast<std::underlying_type<VkSparseMemoryBindFlags>::type>(a) | static_cast<std::underlying_type<VkSparseMemoryBindFlags>::type>(b));
}

inline VkSparseMemoryBindFlags & operator|=(VkSparseMemoryBindFlags & a, const VkSparseMemoryBindFlags & b)
{
    a = static_cast<VkSparseMemoryBindFlags>(static_cast<std::underlying_type<VkSparseMemoryBindFlags>::type>(a) | static_cast<std::underlying_type<VkSparseMemoryBindFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSparseMemoryBindFlags operator&(const VkSparseMemoryBindFlags & a, const VkSparseMemoryBindFlags & b)
{
    return static_cast<VkSparseMemoryBindFlags>(static_cast<std::underlying_type<VkSparseMemoryBindFlags>::type>(a) & static_cast<std::underlying_type<VkSparseMemoryBindFlags>::type>(b));
}

inline VkSparseMemoryBindFlags & operator&=(VkSparseMemoryBindFlags & a, const VkSparseMemoryBindFlags & b)
{
    a = static_cast<VkSparseMemoryBindFlags>(static_cast<std::underlying_type<VkSparseMemoryBindFlags>::type>(a) & static_cast<std::underlying_type<VkSparseMemoryBindFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSparseMemoryBindFlags operator^(const VkSparseMemoryBindFlags & a, const VkSparseMemoryBindFlags & b)
{
    return static_cast<VkSparseMemoryBindFlags>(static_cast<std::underlying_type<VkSparseMemoryBindFlags>::type>(a) ^ static_cast<std::underlying_type<VkSparseMemoryBindFlags>::type>(b));
}

inline VkSparseMemoryBindFlags & operator^=(VkSparseMemoryBindFlags & a, const VkSparseMemoryBindFlags & b)
{
    a = static_cast<VkSparseMemoryBindFlags>(static_cast<std::underlying_type<VkSparseMemoryBindFlags>::type>(a) ^ static_cast<std::underlying_type<VkSparseMemoryBindFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkStencilFaceFlags>
{
    std::size_t operator()(const vk::VkStencilFaceFlags & t) const
    {
        return hash<std::underlying_type<vk::VkStencilFaceFlags>::type>()(static_cast<std::underlying_type<vk::VkStencilFaceFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkStencilFaceFlags operator|(const VkStencilFaceFlags & a, const VkStencilFaceFlags & b)
{
    return static_cast<VkStencilFaceFlags>(static_cast<std::underlying_type<VkStencilFaceFlags>::type>(a) | static_cast<std::underlying_type<VkStencilFaceFlags>::type>(b));
}

inline VkStencilFaceFlags & operator|=(VkStencilFaceFlags & a, const VkStencilFaceFlags & b)
{
    a = static_cast<VkStencilFaceFlags>(static_cast<std::underlying_type<VkStencilFaceFlags>::type>(a) | static_cast<std::underlying_type<VkStencilFaceFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkStencilFaceFlags operator&(const VkStencilFaceFlags & a, const VkStencilFaceFlags & b)
{
    return static_cast<VkStencilFaceFlags>(static_cast<std::underlying_type<VkStencilFaceFlags>::type>(a) & static_cast<std::underlying_type<VkStencilFaceFlags>::type>(b));
}

inline VkStencilFaceFlags & operator&=(VkStencilFaceFlags & a, const VkStencilFaceFlags & b)
{
    a = static_cast<VkStencilFaceFlags>(static_cast<std::underlying_type<VkStencilFaceFlags>::type>(a) & static_cast<std::underlying_type<VkStencilFaceFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkStencilFaceFlags operator^(const VkStencilFaceFlags & a, const VkStencilFaceFlags & b)
{
    return static_cast<VkStencilFaceFlags>(static_cast<std::underlying_type<VkStencilFaceFlags>::type>(a) ^ static_cast<std::underlying_type<VkStencilFaceFlags>::type>(b));
}

inline VkStencilFaceFlags & operator^=(VkStencilFaceFlags & a, const VkStencilFaceFlags & b)
{
    a = static_cast<VkStencilFaceFlags>(static_cast<std::underlying_type<VkStencilFaceFlags>::type>(a) ^ static_cast<std::underlying_type<VkStencilFaceFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkSubgroupFeatureFlags>
{
    std::size_t operator()(const vk::VkSubgroupFeatureFlags & t) const
    {
        return hash<std::underlying_type<vk::VkSubgroupFeatureFlags>::type>()(static_cast<std::underlying_type<vk::VkSubgroupFeatureFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkSubgroupFeatureFlags operator|(const VkSubgroupFeatureFlags & a, const VkSubgroupFeatureFlags & b)
{
    return static_cast<VkSubgroupFeatureFlags>(static_cast<std::underlying_type<VkSubgroupFeatureFlags>::type>(a) | static_cast<std::underlying_type<VkSubgroupFeatureFlags>::type>(b));
}

inline VkSubgroupFeatureFlags & operator|=(VkSubgroupFeatureFlags & a, const VkSubgroupFeatureFlags & b)
{
    a = static_cast<VkSubgroupFeatureFlags>(static_cast<std::underlying_type<VkSubgroupFeatureFlags>::type>(a) | static_cast<std::underlying_type<VkSubgroupFeatureFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSubgroupFeatureFlags operator&(const VkSubgroupFeatureFlags & a, const VkSubgroupFeatureFlags & b)
{
    return static_cast<VkSubgroupFeatureFlags>(static_cast<std::underlying_type<VkSubgroupFeatureFlags>::type>(a) & static_cast<std::underlying_type<VkSubgroupFeatureFlags>::type>(b));
}

inline VkSubgroupFeatureFlags & operator&=(VkSubgroupFeatureFlags & a, const VkSubgroupFeatureFlags & b)
{
    a = static_cast<VkSubgroupFeatureFlags>(static_cast<std::underlying_type<VkSubgroupFeatureFlags>::type>(a) & static_cast<std::underlying_type<VkSubgroupFeatureFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSubgroupFeatureFlags operator^(const VkSubgroupFeatureFlags & a, const VkSubgroupFeatureFlags & b)
{
    return static_cast<VkSubgroupFeatureFlags>(static_cast<std::underlying_type<VkSubgroupFeatureFlags>::type>(a) ^ static_cast<std::underlying_type<VkSubgroupFeatureFlags>::type>(b));
}

inline VkSubgroupFeatureFlags & operator^=(VkSubgroupFeatureFlags & a, const VkSubgroupFeatureFlags & b)
{
    a = static_cast<VkSubgroupFeatureFlags>(static_cast<std::underlying_type<VkSubgroupFeatureFlags>::type>(a) ^ static_cast<std::underlying_type<VkSubgroupFeatureFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkSubpassDescriptionFlags>
{
    std::size_t operator()(const vk::VkSubpassDescriptionFlags & t) const
    {
        return hash<std::underlying_type<vk::VkSubpassDescriptionFlags>::type>()(static_cast<std::underlying_type<vk::VkSubpassDescriptionFlags>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkSubpassDescriptionFlags operator|(const VkSubpassDescriptionFlags & a, const VkSubpassDescriptionFlags & b)
{
    return static_cast<VkSubpassDescriptionFlags>(static_cast<std::underlying_type<VkSubpassDescriptionFlags>::type>(a) | static_cast<std::underlying_type<VkSubpassDescriptionFlags>::type>(b));
}

inline VkSubpassDescriptionFlags & operator|=(VkSubpassDescriptionFlags & a, const VkSubpassDescriptionFlags & b)
{
    a = static_cast<VkSubpassDescriptionFlags>(static_cast<std::underlying_type<VkSubpassDescriptionFlags>::type>(a) | static_cast<std::underlying_type<VkSubpassDescriptionFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSubpassDescriptionFlags operator&(const VkSubpassDescriptionFlags & a, const VkSubpassDescriptionFlags & b)
{
    return static_cast<VkSubpassDescriptionFlags>(static_cast<std::underlying_type<VkSubpassDescriptionFlags>::type>(a) & static_cast<std::underlying_type<VkSubpassDescriptionFlags>::type>(b));
}

inline VkSubpassDescriptionFlags & operator&=(VkSubpassDescriptionFlags & a, const VkSubpassDescriptionFlags & b)
{
    a = static_cast<VkSubpassDescriptionFlags>(static_cast<std::underlying_type<VkSubpassDescriptionFlags>::type>(a) & static_cast<std::underlying_type<VkSubpassDescriptionFlags>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSubpassDescriptionFlags operator^(const VkSubpassDescriptionFlags & a, const VkSubpassDescriptionFlags & b)
{
    return static_cast<VkSubpassDescriptionFlags>(static_cast<std::underlying_type<VkSubpassDescriptionFlags>::type>(a) ^ static_cast<std::underlying_type<VkSubpassDescriptionFlags>::type>(b));
}

inline VkSubpassDescriptionFlags & operator^=(VkSubpassDescriptionFlags & a, const VkSubpassDescriptionFlags & b)
{
    a = static_cast<VkSubpassDescriptionFlags>(static_cast<std::underlying_type<VkSubpassDescriptionFlags>::type>(a) ^ static_cast<std::underlying_type<VkSubpassDescriptionFlags>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkSurfaceCounterFlagsEXT>
{
    std::size_t operator()(const vk::VkSurfaceCounterFlagsEXT & t) const
    {
        return hash<std::underlying_type<vk::VkSurfaceCounterFlagsEXT>::type>()(static_cast<std::underlying_type<vk::VkSurfaceCounterFlagsEXT>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkSurfaceCounterFlagsEXT operator|(const VkSurfaceCounterFlagsEXT & a, const VkSurfaceCounterFlagsEXT & b)
{
    return static_cast<VkSurfaceCounterFlagsEXT>(static_cast<std::underlying_type<VkSurfaceCounterFlagsEXT>::type>(a) | static_cast<std::underlying_type<VkSurfaceCounterFlagsEXT>::type>(b));
}

inline VkSurfaceCounterFlagsEXT & operator|=(VkSurfaceCounterFlagsEXT & a, const VkSurfaceCounterFlagsEXT & b)
{
    a = static_cast<VkSurfaceCounterFlagsEXT>(static_cast<std::underlying_type<VkSurfaceCounterFlagsEXT>::type>(a) | static_cast<std::underlying_type<VkSurfaceCounterFlagsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSurfaceCounterFlagsEXT operator&(const VkSurfaceCounterFlagsEXT & a, const VkSurfaceCounterFlagsEXT & b)
{
    return static_cast<VkSurfaceCounterFlagsEXT>(static_cast<std::underlying_type<VkSurfaceCounterFlagsEXT>::type>(a) & static_cast<std::underlying_type<VkSurfaceCounterFlagsEXT>::type>(b));
}

inline VkSurfaceCounterFlagsEXT & operator&=(VkSurfaceCounterFlagsEXT & a, const VkSurfaceCounterFlagsEXT & b)
{
    a = static_cast<VkSurfaceCounterFlagsEXT>(static_cast<std::underlying_type<VkSurfaceCounterFlagsEXT>::type>(a) & static_cast<std::underlying_type<VkSurfaceCounterFlagsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSurfaceCounterFlagsEXT operator^(const VkSurfaceCounterFlagsEXT & a, const VkSurfaceCounterFlagsEXT & b)
{
    return static_cast<VkSurfaceCounterFlagsEXT>(static_cast<std::underlying_type<VkSurfaceCounterFlagsEXT>::type>(a) ^ static_cast<std::underlying_type<VkSurfaceCounterFlagsEXT>::type>(b));
}

inline VkSurfaceCounterFlagsEXT & operator^=(VkSurfaceCounterFlagsEXT & a, const VkSurfaceCounterFlagsEXT & b)
{
    a = static_cast<VkSurfaceCounterFlagsEXT>(static_cast<std::underlying_type<VkSurfaceCounterFlagsEXT>::type>(a) ^ static_cast<std::underlying_type<VkSurfaceCounterFlagsEXT>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkSurfaceTransformFlagsKHR>
{
    std::size_t operator()(const vk::VkSurfaceTransformFlagsKHR & t) const
    {
        return hash<std::underlying_type<vk::VkSurfaceTransformFlagsKHR>::type>()(static_cast<std::underlying_type<vk::VkSurfaceTransformFlagsKHR>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkSurfaceTransformFlagsKHR operator|(const VkSurfaceTransformFlagsKHR & a, const VkSurfaceTransformFlagsKHR & b)
{
    return static_cast<VkSurfaceTransformFlagsKHR>(static_cast<std::underlying_type<VkSurfaceTransformFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkSurfaceTransformFlagsKHR>::type>(b));
}

inline VkSurfaceTransformFlagsKHR & operator|=(VkSurfaceTransformFlagsKHR & a, const VkSurfaceTransformFlagsKHR & b)
{
    a = static_cast<VkSurfaceTransformFlagsKHR>(static_cast<std::underlying_type<VkSurfaceTransformFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkSurfaceTransformFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSurfaceTransformFlagsKHR operator&(const VkSurfaceTransformFlagsKHR & a, const VkSurfaceTransformFlagsKHR & b)
{
    return static_cast<VkSurfaceTransformFlagsKHR>(static_cast<std::underlying_type<VkSurfaceTransformFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkSurfaceTransformFlagsKHR>::type>(b));
}

inline VkSurfaceTransformFlagsKHR & operator&=(VkSurfaceTransformFlagsKHR & a, const VkSurfaceTransformFlagsKHR & b)
{
    a = static_cast<VkSurfaceTransformFlagsKHR>(static_cast<std::underlying_type<VkSurfaceTransformFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkSurfaceTransformFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSurfaceTransformFlagsKHR operator^(const VkSurfaceTransformFlagsKHR & a, const VkSurfaceTransformFlagsKHR & b)
{
    return static_cast<VkSurfaceTransformFlagsKHR>(static_cast<std::underlying_type<VkSurfaceTransformFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkSurfaceTransformFlagsKHR>::type>(b));
}

inline VkSurfaceTransformFlagsKHR & operator^=(VkSurfaceTransformFlagsKHR & a, const VkSurfaceTransformFlagsKHR & b)
{
    a = static_cast<VkSurfaceTransformFlagsKHR>(static_cast<std::underlying_type<VkSurfaceTransformFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkSurfaceTransformFlagsKHR>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkSwapchainCreateFlagsKHR>
{
    std::size_t operator()(const vk::VkSwapchainCreateFlagsKHR & t) const
    {
        return hash<std::underlying_type<vk::VkSwapchainCreateFlagsKHR>::type>()(static_cast<std::underlying_type<vk::VkSwapchainCreateFlagsKHR>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkSwapchainCreateFlagsKHR operator|(const VkSwapchainCreateFlagsKHR & a, const VkSwapchainCreateFlagsKHR & b)
{
    return static_cast<VkSwapchainCreateFlagsKHR>(static_cast<std::underlying_type<VkSwapchainCreateFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkSwapchainCreateFlagsKHR>::type>(b));
}

inline VkSwapchainCreateFlagsKHR & operator|=(VkSwapchainCreateFlagsKHR & a, const VkSwapchainCreateFlagsKHR & b)
{
    a = static_cast<VkSwapchainCreateFlagsKHR>(static_cast<std::underlying_type<VkSwapchainCreateFlagsKHR>::type>(a) | static_cast<std::underlying_type<VkSwapchainCreateFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSwapchainCreateFlagsKHR operator&(const VkSwapchainCreateFlagsKHR & a, const VkSwapchainCreateFlagsKHR & b)
{
    return static_cast<VkSwapchainCreateFlagsKHR>(static_cast<std::underlying_type<VkSwapchainCreateFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkSwapchainCreateFlagsKHR>::type>(b));
}

inline VkSwapchainCreateFlagsKHR & operator&=(VkSwapchainCreateFlagsKHR & a, const VkSwapchainCreateFlagsKHR & b)
{
    a = static_cast<VkSwapchainCreateFlagsKHR>(static_cast<std::underlying_type<VkSwapchainCreateFlagsKHR>::type>(a) & static_cast<std::underlying_type<VkSwapchainCreateFlagsKHR>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkSwapchainCreateFlagsKHR operator^(const VkSwapchainCreateFlagsKHR & a, const VkSwapchainCreateFlagsKHR & b)
{
    return static_cast<VkSwapchainCreateFlagsKHR>(static_cast<std::underlying_type<VkSwapchainCreateFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkSwapchainCreateFlagsKHR>::type>(b));
}

inline VkSwapchainCreateFlagsKHR & operator^=(VkSwapchainCreateFlagsKHR & a, const VkSwapchainCreateFlagsKHR & b)
{
    a = static_cast<VkSwapchainCreateFlagsKHR>(static_cast<std::underlying_type<VkSwapchainCreateFlagsKHR>::type>(a) ^ static_cast<std::underlying_type<VkSwapchainCreateFlagsKHR>::type>(b));

    return a;
}


} // namespace vk


namespace std
{


template<>
struct hash<vk::VkValidationCacheCreateFlagsEXT>
{
    std::size_t operator()(const vk::VkValidationCacheCreateFlagsEXT & t) const
    {
        return hash<std::underlying_type<vk::VkValidationCacheCreateFlagsEXT>::type>()(static_cast<std::underlying_type<vk::VkValidationCacheCreateFlagsEXT>::type>(t));
    }
};


} // namespace std


namespace vk
{


VKBINDING_CONSTEXPR inline VkValidationCacheCreateFlagsEXT operator|(const VkValidationCacheCreateFlagsEXT & a, const VkValidationCacheCreateFlagsEXT & b)
{
    return static_cast<VkValidationCacheCreateFlagsEXT>(static_cast<std::underlying_type<VkValidationCacheCreateFlagsEXT>::type>(a) | static_cast<std::underlying_type<VkValidationCacheCreateFlagsEXT>::type>(b));
}

inline VkValidationCacheCreateFlagsEXT & operator|=(VkValidationCacheCreateFlagsEXT & a, const VkValidationCacheCreateFlagsEXT & b)
{
    a = static_cast<VkValidationCacheCreateFlagsEXT>(static_cast<std::underlying_type<VkValidationCacheCreateFlagsEXT>::type>(a) | static_cast<std::underlying_type<VkValidationCacheCreateFlagsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkValidationCacheCreateFlagsEXT operator&(const VkValidationCacheCreateFlagsEXT & a, const VkValidationCacheCreateFlagsEXT & b)
{
    return static_cast<VkValidationCacheCreateFlagsEXT>(static_cast<std::underlying_type<VkValidationCacheCreateFlagsEXT>::type>(a) & static_cast<std::underlying_type<VkValidationCacheCreateFlagsEXT>::type>(b));
}

inline VkValidationCacheCreateFlagsEXT & operator&=(VkValidationCacheCreateFlagsEXT & a, const VkValidationCacheCreateFlagsEXT & b)
{
    a = static_cast<VkValidationCacheCreateFlagsEXT>(static_cast<std::underlying_type<VkValidationCacheCreateFlagsEXT>::type>(a) & static_cast<std::underlying_type<VkValidationCacheCreateFlagsEXT>::type>(b));

    return a;
}

VKBINDING_CONSTEXPR inline VkValidationCacheCreateFlagsEXT operator^(const VkValidationCacheCreateFlagsEXT & a, const VkValidationCacheCreateFlagsEXT & b)
{
    return static_cast<VkValidationCacheCreateFlagsEXT>(static_cast<std::underlying_type<VkValidationCacheCreateFlagsEXT>::type>(a) ^ static_cast<std::underlying_type<VkValidationCacheCreateFlagsEXT>::type>(b));
}

inline VkValidationCacheCreateFlagsEXT & operator^=(VkValidationCacheCreateFlagsEXT & a, const VkValidationCacheCreateFlagsEXT & b)
{
    a = static_cast<VkValidationCacheCreateFlagsEXT>(static_cast<std::underlying_type<VkValidationCacheCreateFlagsEXT>::type>(a) ^ static_cast<std::underlying_type<VkValidationCacheCreateFlagsEXT>::type>(b));

    return a;
}


} // namespace vk