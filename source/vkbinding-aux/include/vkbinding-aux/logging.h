
#pragma once


#include <set>

#include <vkbinding/FunctionCall.h>

#include <vkbinding-aux/vkbinding-aux_api.h>


namespace vkbinding { namespace aux
{


/**
*  @brief
*    The type of an entry in the log buffer is a FunctionCall *
*/
using LogEntry = FunctionCall *;


/**
*  @brief
*    Resizes the global log buffer
*
*  @param[in] newSize
*    The new size of the buffer
*/
VKBINDING_AUX_API void resize(unsigned int newSize);

/**
*  @brief
*    Start logging to a file globally
*
*  @remarks
*    This function generates a file name and uses this as output
*/
VKBINDING_AUX_API void start();

/**
*  @brief
*    Start logging to a file globally
*
*  @param[in] filepath
*    The file to store the log into
*/
VKBINDING_AUX_API void start(const std::string & filepath);

/**
*  @brief
*    Start logging to a file globally, except for blacklisted functions
*
*  @param blackList
*    The blacklist of function names
*
*  @remarks
*    This function generates a file name and uses this as output
*/
VKBINDING_AUX_API void startExcept(const std::set<std::string> & blackList);

/**
*  @brief
*    Start logging to a file globally, except for blacklisted functions
*
*  @param[in] filepath
*    The file to store the log into
*  @param[in] blackList
*    The blacklist of function names
*/
VKBINDING_AUX_API void startExcept(const std::string & filepath, const std::set<std::string> & blackList);

/**
*  @brief
*    Stops logging and flushing log file
*/
VKBINDING_AUX_API void stop();

/**
*  @brief
*    Pauses logging for later stopping or resuming
*
*  @remarks
*    While logging is started but paused, no OpenGL function calls are considered for the log file
*/
VKBINDING_AUX_API void pause();

/**
*  @brief
*    Resumes paused logging
*/
VKBINDING_AUX_API void resume();

/**
*  @brief
*    Add a function call to the log
*
*  @remarks
*    This function is intended to get used by glbinding and not by a user of glbinding
*/
VKBINDING_AUX_API void log(LogEntry call);


} } // namespace vkbinding::aux
