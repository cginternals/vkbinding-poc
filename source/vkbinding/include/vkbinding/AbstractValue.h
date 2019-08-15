
#pragma once


#include <vkbinding/vkbinding_api.h>


namespace vkbinding
{


/**
*  @brief
*    The AbstractValue class represents the superclass of a printable wrapper around a data type.
*
*    This class and its subclasses Value<T> are mainly used when callbacks of functions are used.
*/
class VKBINDING_API AbstractValue
{
public:
    /**
    *  @brief
    *    Constructor
    */
    AbstractValue();

    /**
    *  @brief
    *    Destructor for correct memory deallocation on subclasses
    */
    virtual ~AbstractValue();
};


} // namespace vkbinding