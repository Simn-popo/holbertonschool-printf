#include "main.h"

/**
 * _integer - Prints an integer to stdout
 * @ap: Argument list containing the integer to print
 *
 * Return: The number of characters printed
 */

int _integer(va_list args)
{
	int num = va_arg(args, int);
	int count = 0;
	int divisor;
	int multiplication = 1;

	if (num < 0)
	{
		count += _putchar('-');
		num *= -1;

	}
	if (num < 10)
{
		return (count += _putchar(num + '0'));
}
				divisor = num; 
				while (divisor > 9)
				{	
				multiplication *= 10;
				divisor /= 10;
				}
				while (multiplication >= 1)
				{	
				count += _putchar (((num /multiplication) %10) + '0');
				multiplication /= 10;
				}

				return (count);
				}
