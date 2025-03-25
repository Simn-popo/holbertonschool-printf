#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 *print_integer - function that prints negative and positive integers
 *@n : The integer to print
 * Return: Numbers of integers printed
 */

int print_integer(int n)
{
	int count = 0;
	unsigned int num;

	if (n < 0)
	{
		_putchar ('-');
		count++;
		num = -n;
	}
	else
		num = n;

	if (num / 10)
		count += print_integer(num / 10);

	_putchar((num % 10) + '0');
	count++;

Return: (count);

}
