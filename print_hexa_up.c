#include "main.h"
/**
 * print_hexa_up - prints a number in hexadecimal uppercase format
 * @args: variable argument
 * Return: number of charaacters printed
 */

int print_hexa_up(va_list args)
{
	int i, j, byte, count = 0;
	unsigned int num, num2;
	char *rev_hexaup;

	num = va_arg(args, unsigned int);
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
	rev_hexaup = malloc(sizeof(char) * byte);
	if (rev_hexaup == NULL)
		return (-1);
	for (i = 0 ; num2 > 0 ; i++)
	{
		if ((num2 % 16) < 10)
			rev_hexaup[i] = (num2 % 16) + '0';
		if ((num2 % 16) >= 10)
			rev_hexaup[i] = (num2 % 16) - 10 + 'A';
		num2 /= 16;
	}
	for (j = i ; j >= 0 ; j--)
	{
		write(1, &rev_hexaup[j], 1);
		count++;
	}
	free(rev_hexaup);
	return (count);
}
