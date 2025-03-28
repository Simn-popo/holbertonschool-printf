#include "main.h"
#include <stdlib.h>

/**
 * _string - print a string of character
 * @args: list of arguments
 * Return: number of printed characters
 */

int _string(va_list args)
{
	char *s = va_arg(args, char *);
	int sum = 0, i = 0;

	if (s == NULL)/*check if its NULL*/
		s = "(null)";/*return the string exercice*/
	if (s != NULL)
	{
		while (s[i])
		{
			_putchar(s[i]);/*print the string*/
			sum++;
			i++;
		}
	}
	return (sum);
}
