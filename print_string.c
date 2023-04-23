#include "main.h"

/**
 * print_string - prints a string
 * @args: variable arguments
 * Return: number of characters writen
 */

int print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	return (write(1, str, strlen(str)));
}
