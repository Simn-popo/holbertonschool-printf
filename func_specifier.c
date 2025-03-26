#include "main.h"
#include <stddef.h>

/**
 * get_specifier - returns a function corresponding to a specifier
 * @specifier: format specifier
 * @args: list arguments
 * Return: pointer corresponding to the function or null 
 */

int get_specifier(char specifier, va_list agrs)
{
	int i = 0;

	op_t ops[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL}
	};
	
	}
	return (0);
}