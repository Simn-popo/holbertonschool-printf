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

	if (!format || (format[0] == '%' && !format[1]))/* check if string is empty */
		return (-1);

	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	va_start(args, format);/* init of the variadic function*/

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')/* check if the string contain '%'*/
		{
			if (format[i + 1] != '\0')
			{
				sum += get_specifier(format[i + 1], args);
				i++;
			}
			else
				return (-1);
		}
		else/* just in case if the format string are a simple string*/
		{
			_putchar(format[i]);
			sum++;
		}
	}

	va_end(args);
	return (sum);

}
