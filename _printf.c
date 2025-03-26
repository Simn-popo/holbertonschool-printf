#include "main.h"
#include <stdarg.h>

/**
 * _printf - Function that produces output according to a format
 * @format: The format string
 * @...: The variable arguments
 *
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
    int len = 0;
    int x;
    va_list args;

    /* Array of supported specifiers and their corresponding functions */
    specifier_t specifiers[] = {
        {'c', print_char},
        {'s', print_string},
        {'%', print_percent},
        {'d', print_integer},
        {'i', print_integer},
        {'p', print_pointer},
        {'\0', NULL} /* End of list */
    };

    va_start(args, format);

    if (format == NULL)
        return (-1);

    /* Loop through the format string */
    for (x = 0; format[x] != '\0'; x++)
    {
        if (format[x] == '%')
        {
            int specifier_found = 0;
            /* Check for valid specifier */
            for (int i = 0; specifiers[i].spec != '\0'; i++)
            {
                if (format[x + 1] == specifiers[i].spec)
                {
                    len += specifiers[i].f(args);
                    specifier_found = 1;
                    break;
                }
            }
            /* If no specifier found, print the '%' character */
            if (!specifier_found)
            {
                len += _putchar(format[x]);
            }
            x++;  /* Skip the specifier */
        }
        else
        {
            len += _putchar(format[x]);
        }
    }

    va_end(args);
    return (len);
}
