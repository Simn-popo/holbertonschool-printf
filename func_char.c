#include "main.h"
#include <stdlib.h>

/**
 * _char - print a charactere to stdout
 * @args: charactere to print
 * Return: charatere(s) whitout the null byte
 */

int _char(va_list args)
{
	char c = va_arg(args, int);/*c variable looking for va_list */

	_putchar (c);
	return (1);
}
