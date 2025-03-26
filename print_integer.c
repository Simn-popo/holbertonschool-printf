#include "main.h"

/**
 * print_integer - Function that prints positif and negatif integer
 * @args: a the list set in _printf function
 * Return: length of the integer printed
 */

int print_integer(va_list args)
{
	int power = 1;
	int result = 0;
	long int num = va_arg(args, int);
	long int div;

	if (num < 0)
	{
		result += 1;
		_putchar('-');
		num *= -1;
	}
	/** check if num is negatif then make it positif and print a hypen before */
	if (num < 10)
	{
		return (result += _putchar(num + '0'));
	}
	/** check if num is less */
	div = num;
	while (div > 9)
	{
		power *= 10;
		div /= 10;
	}
	/** do a loop while div is greater than 10 to get the value of power */
	while (power >= 1)
	{
		result += (_putchar(((num / power) % 10) + '0'));
		power /= 10;
	}
	/** do a loop while div is greater than 1 to get character by character */
	/** starting at the left */
	return (result);
}
