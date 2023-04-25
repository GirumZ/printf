#include "main.h"
/**
 * print_unsigned - prints unsigned integer
 * @args: variable argument
 * Return: number of characteers printed
 */

int print_unsigned(va_list args)
{
	int num, count;

	num = va_arg(args, int);
	if (num < 0)
		num *= (-1);
	count = digit_counter(num);
	real_print(num);
	return (count);
}
