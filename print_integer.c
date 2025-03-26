#include "main.h"

/**
 * get_specifier - Function that checks for the right specifier tu use
 * %c, %s, %%, %d, %i
 * @format: the string set in _printf function
 * @args: a the list set in _printf function
 * Return: the length of the called pointer function pointed by f
 */

int get_specifier(const char format, va_list args)
{
	int x;
	specifier_t spe[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_modulo},
		{'d', print_integer},
		{'i', print_integer},
		{'\0', NULL},
	};
	/** initialise every argument of the the array spe */
	x = 0;
	while (spe[x].specifier)
	{
		if (format == spe[x].specifier)
		{
			return (spe[x].f(args));
		}
		x++;
	}
	/** incrementation of the array until it is the null character */
	/** then checked if one of the argument of format is the same one of spe **/
	_putchar('%');
	_putchar(format);
	return (2);
}
