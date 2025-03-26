#include "main.h"
#include <stdlib.h>

/**
 * print_char - print a charactere to stdout
 * @c: charactere to print
 * Return: charatere(s) whitout the null byte
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);
	_putchar(c);
	return (1);
}
