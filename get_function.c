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
		{NULL, NULL}
	};
	for (i = 0 ; i < 3 ; i++)
	{
		if (strcmp(array[i].ch, x) == 0)
			return (array[i].fn);
	}
	return (NULL);
}