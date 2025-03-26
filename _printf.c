#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * print_specifier - Handles the correct format specifier.
 * @specifier: The format specifier character.
 * @args: The list of arguments to process.
 *
 * Return: The number of characters printed, or -1 on failure.
 */
int print_specifier(char specifier, va_list args)
{
	if (specifier == 'c')
		return (_putchar(va_arg(args, int)));
	if (specifier == 's')
		return (print_string(va_arg(args, char *)));
	if (specifier == '%')
		return (_putchar('%'));
	return (_putchar('%') + _putchar(specifier)); 
}

/**
 * _printf - Custom implementation of printf
 * @format: The format string containing conversion specifiers.
 *
 * Return: Number of characters printed, or -1 on error.
 */
int _printf(const char *format, ...)
{
	int x, len = 0;
	va_list args;

	if (!format)
		return (-1);
	if (format[0] == '%' && format[1] == '\0') 
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && format[2] == '\0') 

	va_start(args, format);
	for (x = 0; format[x] != '\0'; x++)
	{
		if (format[x] == '%')
		{
			x++; 
			if (format[x] == '\0') 
				return (-1);
			len += print_specifier(format[x], args);
		}
		else
		{
			_putchar(format[x]);
			len++;
		}
	}
	va_end(args);
	return (len);
}
