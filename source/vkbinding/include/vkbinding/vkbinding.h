
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

VKBINDING_API void initialize(vkbinding::GetProcAddress functionPointerResolver, bool resolveFunctions = true);
VKBINDING_API void registerAdditionalFunction(AbstractFunction * function);
VKBINDING_API ProcAddress resolveFunction(const char * name);
VKBINDING_API void resolveFunctions();

VKBINDING_API void setCallbackMask(CallbackMask mask);
VKBINDING_API void setCallbackMaskExcept(CallbackMask mask, const std::set<std::string> & blackList);
VKBINDING_API void addCallbackMask(CallbackMask mask);
VKBINDING_API void addCallbackMaskExcept(CallbackMask mask, const std::set<std::string> & blackList);
VKBINDING_API void removeCallbackMask(CallbackMask mask);
VKBINDING_API void removeCallbackMaskExcept(CallbackMask mask, const std::set<std::string> & blackList);
VKBINDING_API SimpleFunctionCallback unresolvedCallback();
VKBINDING_API void setUnresolvedCallback(SimpleFunctionCallback callback);
VKBINDING_API FunctionCallback beforeCallback();
VKBINDING_API void setBeforeCallback(FunctionCallback callback);
VKBINDING_API FunctionCallback afterCallback();
VKBINDING_API void setAfterCallback(FunctionCallback callback);
VKBINDING_API FunctionLogCallback logCallback();
VKBINDING_API void setLogCallback(FunctionLogCallback callback);


} // namespace vkbinding