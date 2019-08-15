
#pragma once


#include <vkbinding/AbstractState.h>


namespace vkbinding
{


/**
*  @brief
*    The State class represents the configuration of a function for one thread.
*    This includes the driver function pointer (is allowed to differ between contexts) and the callback mask
*/
class VKBINDING_API State : public AbstractState
{
public:
    /**
    *  @brief
    *    Constructor
    */
    State() = default;

    /**
    *  @brief
    *    Resolve a function and save its address
    *
    *  @param[in] name
    *    Name of the function to be resolved
    */
    virtual void resolve(const char * name) override;
};


} // namespace vkbinding