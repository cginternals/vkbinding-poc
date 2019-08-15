
#pragma once


#include <set>
#include <vector>
#include <functional>
#include <string>

#include <vkbinding/vkbinding_api.h>
#include <vkbinding/vkbinding_features.h>

#include <vkbinding/CallbackMask.h>
#include <vkbinding/ProcAddress.h>


namespace vkbinding
{


class AbstractFunction;
class FunctionCall;


using SimpleFunctionCallback = std::function<void(const AbstractFunction &)>;
using FunctionCallback = std::function<void(const FunctionCall &)>;
using FunctionLogCallback = std::function<void(FunctionCall *)>;

_API void initialize(vkbinding::GetProcAddress functionPointerResolver, bool resolveFunctions = true);
_API void registerAdditionalFunction(AbstractFunction * function);
_API ProcAddress resolveFunction(const char * name);
_API void resolveFunctions();

_API void setCallbackMask(CallbackMask mask);
_API void setCallbackMaskExcept(CallbackMask mask, const std::set<std::string> & blackList);
_API void addCallbackMask(CallbackMask mask);
_API void addCallbackMaskExcept(CallbackMask mask, const std::set<std::string> & blackList);
_API void removeCallbackMask(CallbackMask mask);
_API void removeCallbackMaskExcept(CallbackMask mask, const std::set<std::string> & blackList);
_API SimpleFunctionCallback unresolvedCallback();
_API void setUnresolvedCallback(SimpleFunctionCallback callback);
_API FunctionCallback beforeCallback();
_API void setBeforeCallback(FunctionCallback callback);
_API FunctionCallback afterCallback();
_API void setAfterCallback(FunctionCallback callback);
_API FunctionLogCallback logCallback();
_API void setLogCallback(FunctionLogCallback callback);


} // namespace vkbinding