#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

char _putchar(char character);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_str(va_list args);
int print_modulo(va_list args);
int print_integer(va_list args);
int get_specifier(const char format, va_list args);

/**
 * struct spe - a structure that check specifier
 * @specifier: the character of the specifier
 * @f: a pointer function pointing to _printf
 */

typedef struct spe
{
	char specifier;
	int (*f)(va_list);

} specifier_t;

#endif
