#include "main.h"
/**
 * print_octal - prints octal numbers
 * @args: variable argument
 * Return: number of characters printed
 */

int print_octal(va_list args)
{
	int num, num2, i, j, count = 0, byte;
	char *rev_octal;

	num = va_arg(args, int);
	num2 = num;
	if (num == 0)
	{
		write(1, "0", 1);
		count = 1;
	}
	for (i = 0 ; num > 0 ; i++)
	{
		num /= 8;
		byte++;
	}
	rev_octal = malloc(sizeof(char) * byte);
	if (rev_octal == NULL)
		return (-1);
	for (i = 0 ; num2 > 0 ; i++)
	{
		rev_octal[i] = (num2 % 8) + '0';
		num2 /= 8;
	}
	for (j = i - 1 ; j >= 0 ; j--)
	{
		write(1, &rev_octal[j], 1);
		count++;
	}
	free(rev_octal);
	return (count);
}
