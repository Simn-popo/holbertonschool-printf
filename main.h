#ifndef main_h
#define main_h
#include <stdarg.h>

typedef struct op
{
	char *specifier;
	int (*func)(va_list);
}op_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_integer(va_list args);
int get_specifier(char specifier, va_list args);

#endif
