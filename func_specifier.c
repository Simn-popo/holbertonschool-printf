#include "main.h"
#include <stddef.h>

/**
 * get_specifier - returns a function corresponding to a specifier
 * @s: format specifier
 * @args: list argument
 * Return: pointer corresponding to the function or null
 */

int get_specifier(char s, va_list args)
{
	int i = 0;

	types_t type[] = {
		{'c', _char},
		{'s', _string},
		{'%', _percent},
		{'d', _int},
		{'i', _int},
		{'\0', NULL}
	};
	while (type[i].specifier)
	{
		if (s == type[i].f)
		{
			return (type[i].f(args));
		}
		i++;
	}
	_putchar('%');
	if (s != '%')
	{
		_putchar(s);
		return (2);
	}
	return (1);
}
