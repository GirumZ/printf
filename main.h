#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>

int _printf(const char *format, ...);
int _strlen(char *str);
int _strcmp(char *s1, char *s2);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_number(va_list args);
int digit_counter(int n);
int real_print(int num);
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
