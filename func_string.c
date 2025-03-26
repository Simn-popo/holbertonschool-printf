#include "main.h"
#include <stdlib.h>

/**
 * print_string - print a string of charactere
 * @s: string to print
 * Return: number of printed characters
 */

int print_string(int i, va_list args)
{
	char *s = va_arg(args, char *);
	int sum = 0;

	if (s != NULL)
	{
		while (s[i])
		{
			_putchar(s[i]);
			sum++;
			i++;
		}
	}
	return (sum);
}
