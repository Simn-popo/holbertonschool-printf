#include "main.h"
#include <stddef.h>

/**
 * get_specifier - returns a function corresponding to a specifier
 * @s: format specifier
 * @args: list argument
 * Return: pointer corresponding to the function or null
 */

int get_specifier(const char s, va_list args)
{
	int i = 0;

	types_t type[] = {
		{'c', _char},
		{'s', _string},
		{'%', _percent},
		{'d', _integer},
		{'i', _integer},
		{'\0', NULL}
	};
	while (type[i].specifier)/*looking the character after % for correct format*/
	{
		if (type[i].specifier == s)/*same*/
		{
			return (type[i].f(args));/*return the good format*/
		}
		i++;
	}
	_putchar('%');/*script that return modulo*/
	if (s != '%')
	{
		_putchar(s);
		return (2);
	}
	return (1);
}
