#include "main.h"

/**
 * print_modulo - Fonction that print a modulo character
 * @args: a the list set in _printf function
 * Return: length the modulo and a modulo
 */

int print_modulo(va_list args)
{
	(void)args;
	return (_putchar('%'));
}
