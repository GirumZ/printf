#include "main.h"

/**
 * print_char - prints characters
 * @args: variable arguments
 * Return: number of characters writen
 */

int print_char(va_list args)
{
	char ch = va_arg(args, int);

	return (write(1, &ch, 1));
}

