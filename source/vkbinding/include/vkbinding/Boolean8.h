
#pragma once


#include <functional>

#include <vkbinding/vkbinding_api.h>
#include <vkbinding/vkbinding_features.h>


namespace vkbinding
{


/**
*  @brief
*    Boolean type based on an 8-bit integer
*/
class VKBINDING_API Boolean8
{
public:
    using underlying_type = unsigned char; ///< Type used for storing the value

public:
    /**
    *  @brief
    *    Constructor
    *
    *  @remark
    *    The value is set to `false`
    */
    VKBINDING_CONSTEXPR inline Boolean8();

    /**
    *  @brief
    *    Constructor
    *
    *  @param[in] on
    *    Initial value
    */
    VKBINDING_CONSTEXPR inline Boolean8(bool on);

    /**
    *  @brief
    *    Constructor
    *
    *  @param[in] on
    *    Initial value
    */
    VKBINDING_CONSTEXPR inline Boolean8(char on);

    /**
    *  @brief
    *    Constructor
    *
    *  @param[in] on
    *    Initial value
    */
    VKBINDING_CONSTEXPR inline Boolean8(unsigned char on);

    /**
    *  @brief
    *    Constructor
    *
    *  @param[in] on
    *    Initial value
    */
    VKBINDING_CONSTEXPR inline Boolean8(int on);

    /**
    *  @brief
    *    Constructor
    *
    *  @param[in] on
    *    Initial value
    */
    VKBINDING_CONSTEXPR inline Boolean8(unsigned int on);

    /**
    *  @brief
    *    Type cast operator
    *
    *  @return
    *    %Value as `bool`
    */
    VKBINDING_CONSTEXPR inline explicit operator bool() const;

    /**
    *  @brief
    *    Type cast operator
    *
    *  @return
    *    %Value as `char`
    */
    VKBINDING_CONSTEXPR inline explicit operator char() const;

    /**
    *  @brief
    *    Type cast operator
    *
    *  @return
    *    %Value as `unsigned char`
    */
    VKBINDING_CONSTEXPR inline explicit operator unsigned char() const;

    /**
    *  @brief
    *    Type cast operator
    *
    *  @return
    *    %Value as `int`
    */
    VKBINDING_CONSTEXPR inline explicit operator int() const;

    /**
    *  @brief
    *    Type cast operator
    *
    *  @return
    *    %Value as `unsigned int`
    */
    VKBINDING_CONSTEXPR inline explicit operator unsigned int() const;

    /**
    *  @brief
    *    Copy assignment operator
    *
    *  @param[in] other
    *    %Value to copy from
    *
    *  @return
    *    This
    */
    inline Boolean8 & operator=(const Boolean8 & other);

    /**
    *  @brief
    *    Comparison operator
    *
    *  @param[in] other
    *    Other value
    *
    *  @return
    *    Result of comparing internal values
    *
    *  @remark
    *    Comparison uses numeric comparison of #underlying_type
    */
    VKBINDING_CONSTEXPR inline bool operator<(const Boolean8 & other) const;

    /**
    *  @brief
    *    Comparison operator
    *
    *  @param[in] other
    *    Other value
    *
    *  @return
    *    Result of comparing internal values
    *
    *  @remark
    *    Comparison uses numeric comparison of #underlying_type
    */
    VKBINDING_CONSTEXPR inline bool operator>(const Boolean8 & other) const;

    /**
    *  @brief
    *    Comparison operator
    *
    *  @param[in] other
    *    Other value
    *
    *  @return
    *    Result of comparing internal values
    *
    *  @remark
    *    Comparison uses numeric comparison of #underlying_type
    */
    VKBINDING_CONSTEXPR inline bool operator<=(const Boolean8 & other) const;

    /**
    *  @brief
    *    Comparison operator
    *
    *  @param[in] other
    *    Other value
    *
    *  @return
    *    Result of comparing internal values
    *
    *  @remark
    *    Comparison uses numeric comparison of #underlying_type
    */
    VKBINDING_CONSTEXPR inline bool operator>=(const Boolean8 & other) const;

    /**
    *  @brief
    *    Comparison operator
    *
    *  @param[in] other
    *    Other value
    *
    *  @return
    *    Result of comparing internal values
    *
    *  @remark
    *    Comparison uses numeric comparison of #underlying_type
    */
    VKBINDING_CONSTEXPR inline bool operator==(const Boolean8 & other) const;

    /**
    *  @brief
    *    Comparison operator
    *
    *  @param[in] other
    *    Other value
    *
    *  @return
    *    Result of comparing internal values
    *
    *  @remark
    *    Comparison uses numeric comparison of #underlying_type
    */
    VKBINDING_CONSTEXPR inline bool operator!=(const Boolean8 & other) const;

public:
    underlying_type m_value; ///< %Value
};


} // namespace gl


#include <vkbinding/Boolean8.inl>