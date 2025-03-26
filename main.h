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
int print_char(char c);
int print_string(char *s);
int print_percent(char c);
int print_integer(int n);

#endif
