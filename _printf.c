#include "main.h"

/**
 * _printf - print a string into a formatted output
 * @format: an array of character string
 *
 * Return: the sum of printed characters
 */

int _printf(const char *format, ...)
{
	int i = 0, sum = 0;
	va_list args;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '\0')
			{
				sum += _format(format[i + 1], args);
				i++;
			}
			else
				return (-1);
		}
		else
		{
			_putchar(format[i]);
			sum++;
		}
	}

	va_end(args);
	return (sum);

}
