#include "main.h"

/**
 * print_string - Prints a string of characters
 * @args: The argument list containing the string
 *
 * Return: The number of characters printed
 */
int print_string(va_list args)
{
    char *s = va_arg(args, char *);
    int count = 0;

    if (s == NULL)
        s = "(null)";  /* Handle NULL strings */

    while (*s)
    {
        _putchar(*s);
        s++;
        count++;
    }

    return (count);
}
