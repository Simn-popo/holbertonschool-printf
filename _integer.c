#include "main.h"

/**
 * print_int - Prints an integer to stdout
 * @ap: Argument list containing the integer to print
 *
 * Return: The number of characters printed
 */

int print_int(va_list ap)
{
	int num = va_arg(ap, int);
	int count = 0;
	int divisor = 1, digit;
	int temp = num;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		count++;
	}

	if (num == 0)
	{
		_putchar('0');
		return count + 1;
	}

	while (temp / 10 != 0)
	{
		divisor *= 10;
		temp /= 10;
	}

	while (divisor > 0)
	{
		digit = num / divisor;
		_putchar(digit + '0');
		num %= divisor;
		divisor /= 10;
		count++;
	}

	return count;
}
