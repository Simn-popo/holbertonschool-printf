#include "main.h"
#include <stdlib.h>

/**
 * print_string - print a string of charactere
 * @s: string to print
 * Return: number of printed characters
 */

int print_string(char*s)
{
	int i = 0;
	int sum = 0;

	if (s!= NULL)
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
