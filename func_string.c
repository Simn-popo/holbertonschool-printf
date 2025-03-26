#include "main.h"

/**
 * print_str - Fonction that prints string using the args list
 * @args: a the list set in _printf function
 * Return: length of the intelength of the string printed
 */

int print_str(va_list args)
{
	int len = 0;

	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	/** check if str is null and print ("null") */
	while (*str)
	{
		_putchar(*str);
		str++;
		len++;
	}
	return (len);
}
