#include "main.h"
#include <stddef.h>

/**
 * get_specifier - returns a function corresponding to a specifier
 * @specifier: format specifier
 * @args: list arguments
 * Return: pointer corresponding to the function or null 
 */

int get_specifier(char specifier, va_list args)
{
	int i = 0;

	op_t op[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL}
	};

	for (i = 0; op[i].specifier != NULL; i++)
	{
		if (op[i].specifier[0] == specifier)
		{
			return(op[i].func(args));
		}
	}
	return (1);
}