#include "main.h"
/**
 * digit_counter - counts the number of digits in an integer
 * @n: the integer
 * Return: the number of digits
 */
int digit_counter(int n)
{
	int num = n, count = 0;

	if (num == 0)
		count = 1;
	while (num != 0)
	{
		num = num / 10;
		count++;
	}
	return (count);
}
/**
 * real_print - prints an integer
 * @num: the integer to be printed
 * Return: number of characters printed
 */

int real_print(int num)
{
	int printable = digit_counter(num);
	int num_cpy = num;
	int x;

	if (num_cpy < 0)
	{
		printable += 1;
		num_cpy *= (-1);
		write(1, "-", 1);
	}
	if (num_cpy > 9)
		real_print(num_cpy / 10);
	x = (num_cpy % 10) + '0';
	write(1, &x, 1);
	return (printable);
}

/**
 * print_number - prints any integer
 * @args: variable argument
 * Return: the number of characters printed
 */

int print_number(va_list args)
{
	int number = va_arg(args, int);

	return (real_print(number));
}
