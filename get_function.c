#include "main.h"

/**
 * get_fun - selects the right function for printing
 * @x: the next character after '%' in format string
 * Return: the coresponding function
 */

int (*get_fun(char *x))(va_list args)
{
	int i;

	func array[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_number},
		{"i", print_number},
		{"b", print_binary},
		{"u", print_unsigned},
		{"o", print_octal},
		{"x", print_hexa},
		{"X", print_hexa_up},
		{NULL, NULL}
	};
	for (i = 0 ; i < 10 ; i++)
	{
		if (_strcmp(array[i].ch, x) == 0)
			return (array[i].fn);
	}
	return (NULL);
}
