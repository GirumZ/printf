#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>

int _printf(const char *format, ...);
int _strlen(const char *str);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int (*get_fun(char *x))(va_list args);

/**
 * struct function_list - list of functions
 * @ch: specifier
 * @fn: associated function
 */
typedef struct function_list
{
	char *ch;
	int (*fn)(va_list args);
} func;

#endif /* MAIN_H */
