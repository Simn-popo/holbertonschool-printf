#include "main.h"

/**
 * print_char - Fonction that prints a character
 * @args: a the list set in _printf function
 * Return: length of the character printed
 */

int print_char(va_list args)
{
	char character = va_arg(args, int);

	return (_putchar(character));
}
