#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdint.h>

/**
  * struct types - specifiers characters and their associated functions.
  *
  * @specifier: A specifier character associated to a data type.
  * @f: A function pointer that process data type specified by `types`.
  */
typedef struct types
{
	char specifier;
	int (*f)(va_list);
} types_t;

int _format(const char specifier, va_list args);
int _percent(va_list args);
int _putchar(char c);
int _char(va_list args);
int _string(va_list args);
int _printf(const char *format, ...);
int _int(va_list args);


#endif
