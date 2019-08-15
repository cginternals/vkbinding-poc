
#include <vkbinding/FunctionCall.h>

#include <vkbinding/AbstractFunction.h>
#include <vkbinding/AbstractValue.h>
#include <vkbinding/CallbackMask.h>


namespace vkbinding
{


FunctionCall::FunctionCall(const AbstractFunction * _function)
: function(_function)
, returnValue(nullptr)
{
    if (function->isAnyEnabled(CallbackMask::Timestamp))
    {
        timestamp = std::chrono::system_clock::now();
    }
}

FunctionCall::FunctionCall(FunctionCall && other)
: function(std::move(other.function))
, timestamp(std::move(other.timestamp))
, parameters(std::move(other.parameters))
, returnValue(std::move(other.returnValue))
{
}

FunctionCall::~FunctionCall()
{
}

FunctionCall & FunctionCall::operator=(FunctionCall && other)
{
    function = std::move(other.function);
    timestamp = std::move(other.timestamp);
    parameters = std::move(other.parameters);
    returnValue = std::move(other.returnValue);

    return *this;
}


} // namespace vkbinding