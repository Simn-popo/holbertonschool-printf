#include "main.h"

/**
 * print_char - Prints a character
 * @args: The argument list containing the character
 *
 * Return: The number of characters printed
 */
int print_char(va_list args)
{
    _putchar(va_arg(args, int));
    return (1);
}
