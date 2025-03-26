#include "main.h"

/**
 * print_char - Prints a character
 * @args: The argument list containing the character
 *
 * Return: The number of characters printed
 */
<<<<<<< HEAD

int print_char(va_list args)
{
	char c = va_arg(args, int);
	_putchar(c);
	return (1);
=======
int print_char(va_list args)
{
    _putchar(va_arg(args, int));
    return (1);
>>>>>>> f4f01afc6e36518fe5a2981e5ad2100e4e372f0c
}
