#include "main.h"

/**
 * print_string - Prints a string of characters
 * @args: The argument list containing the string
 *
 * Return: The number of characters printed
 */
<<<<<<< HEAD

int print_string(va_list args)
{
	char *s = va_arg(args, char *);
	int sum = 0;
	int i = 0;
=======
int print_string(va_list args)
{
    char *s = va_arg(args, char *);
    int count = 0;
>>>>>>> f4f01afc6e36518fe5a2981e5ad2100e4e372f0c

    if (s == NULL)
        s = "(null)";  /* Handle NULL strings */

    while (*s)
    {
        _putchar(*s);
        s++;
        count++;
    }

    return (count);
}
