#include "common_config.h"
#include <stdio.h>
#include <stdarg.h>

// ANSI Color Codes
const char *RED = "\033[31m";
const char *GREEN = "\033[32m";
const char *YELLOW = "\033[33m";
const char *BLUE = "\033[34m";
const char *RESET = "\033[0m";

/**
 * @brief Logs a message with the specified log level.
 *
 * This function logs a message with the specified log level. The log level determines the color of the log message.
 *
 * @param level The log level of the message.
 * @param format The format string for the message.
 * @param ... Additional arguments to be formatted according to the format string.
 */
void logMessage(int level, const char *format, ...)
{
    if (level >= LOG_LEVEL)
    {
        va_list args;
        va_start(args, format);

        printf("[");
        switch (level)
        {
        case LOG_LEVEL_DEBUG:
            printf("%sDEBUG%s", BLUE, RESET);
            break;
        case LOG_LEVEL_INFO:
            printf("%sINFO%s", GREEN, RESET);
            break;
        case LOG_LEVEL_WARNING:
            printf("%sWARNING%s", YELLOW, RESET);
            break;
        case LOG_LEVEL_ERROR:
            printf("%sERROR%s", RED, RESET);
            break;
        }
        printf("] ");

        // Use vprintf to format the string and print it
        vprintf(format, args);
        printf("\n");

        va_end(args);
    }
}
