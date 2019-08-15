
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