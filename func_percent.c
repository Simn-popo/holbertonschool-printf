#include "main.h"

/**
 * _percent - print character '%'
 * @args: list arg %
 * Return: print charactere
 */

int _percent(va_list args)
{
	(void)args;/* cancel the usage of args in function*/
	_putchar('%');
	return (1);
}
