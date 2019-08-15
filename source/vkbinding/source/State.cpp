
#include <vkbinding/State.h>

#include <vkbinding/Binding.h>


namespace vkbinding
{


void State::resolve(const char * name)
{
    if (m_initialized)
    {
        return;
    }

    m_address = Binding::resolveFunction(name);
    m_initialized = true;
}


} // namespace vkbinding