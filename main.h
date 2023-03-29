#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <stdarg.h>

typedef struct specifier
{
	char *valid;
	int (*f)(va_list);
} spec;

int _printf(const char *format, ...);
char* convert(unsigned int, int);
int _putchar(char c);
int (*get_func(char x))(va_list args);

#endif
