// This file contains the configuration for the common library.
#ifndef COMMON_CONFIG_H
#define COMMON_CONFIG_H

#ifdef __cplusplus
extern "C"
{
#endif
// Define log levels
#define LOG_LEVEL_DEBUG 1
#define LOG_LEVEL_INFO 2
#define LOG_LEVEL_WARNING 3
#define LOG_LEVEL_ERROR 4

#define LOG_LEVEL LOG_LEVEL_DEBUG
    // Function to log messages with color
    // Function to log messages with color and formatted text
    /**
     * @brief Logs a message with the specified level.
     *
     * This function logs a message with the specified level. The message can be formatted using
     * a format string and additional arguments.
     *
     * @param level The level of the message to be logged.
     * @param format The format string for the message.
     * @param ... Additional arguments to be formatted according to the format string.
     */
    void logMessage(int level, const char *format, ...);

    // Macros for easy logging

#define LOG_DEBUG(...) logMessage(LOG_LEVEL_DEBUG, __VA_ARGS__)
#define LOG_INFO(...) logMessage(LOG_LEVEL_INFO, __VA_ARGS__)
#define LOG_WARNING(...) logMessage(LOG_LEVEL_WARNING, __VA_ARGS__)
#define LOG_ERROR(...) logMessage(LOG_LEVEL_ERROR, __VA_ARGS__)

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
