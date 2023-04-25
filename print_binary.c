#include "main.h"
/**
 * print_binary - prints a number in binary
 * @args: variable arguments
 * Return: number of characters printed
 */

int print_binary(va_list args)
{
	unsigned int number;
	int i, j, count = 0;
	char *rev_binary;

	number = va_arg(args, unsigned int);
	if (number == 0)
	{
		write(1, "0", 1);
		count = 1;
	}
	rev_binary = malloc(sizeof(int) * 8);
	if (rev_binary == NULL)
		return (-1);
	for (i = 0 ; number > 0 ; i++)
	{
		rev_binary[i] = (number % 2) + '0';
		number /= 2;
	}
	for (j = i - 1 ; j >= 0 ; j--)
	{
		write(1, &rev_binary[j], 1);
		count++;
	}
	free(rev_binary);
	return (count);
}
