/**
 * _printf - Fonction that prints simple string or follow conversion specifiers
 *	%c : specifier that prints a single character
 *	%s : specifier that prints a string of characters
 *	%% : specifier that prints a modulo
 *	%d : specifier that prints a decimal base 10 number
 *	%i : specifier that prints an integer base 10
 * @format: number of arguments in the array
 * Return: the number of character printed if success, or -1 if failed
 */

int _printf(const char *format, ...)
{
	int x, len = 0;
	va_list args;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	if (format[0] == '%' && format[1] == ' ' && format[2] == '\0')
	{
		return (-1);
	}
	for (x = 0; format[x] != '\0' ; x++)
	{
		if (format[x] == '%')
		{
			len += get_specifier(format[x + 1], args);
			x++;
		}

		else
		{
			_putchar(format[x]);
			len++;
		}
	}
	va_end(args);
	return (len);
}
