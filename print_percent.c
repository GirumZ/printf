#include "main.h"

/**
 * print_percent - prints the character '%'
 * @args: variable arguments
 * Return: number of characters printed
 */

int print_percent(va_list args)
{
	(void)args;

	return (write(1, "%", 1));
}
