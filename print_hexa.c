#include "main.h"
/**
 * print_hexa - prints a number in hexadecimal
 * @args: variable arguments
 * Return: number of characters
 */

int print_hexa(va_list args)
{
	int i, j, byte, num, num2, count = 0;
	char *rev_hexa;

	num = va_arg(args, int);
	num2 = num;
	if (num == 0)
	{
		write(1, "0", 1);
		count = 1;
	}
	for (i = 0 ; num > 0 ; i++)
	{
		num /= 16;
		byte++;
	}
	rev_hexa = malloc(sizeof(char) * byte);
	if (rev_hexa == NULL)
		return (-1);
	for (i = 0 ; num2 > 0 ; i++)
	{
		if ((num2 % 16) < 10)
			rev_hexa[i] = (num2 % 16) + '0';
		else
			rev_hexa[i] = (num2 % 16) - 10 + 'a';
		num2 /= 16;
	}
	for (j = i - 1 ; j >= 0 ; j--)
	{
		write(1, &rev_hexa[j], 1);
		count++;
	}
	free(rev_hexa);
	return (count);
}
