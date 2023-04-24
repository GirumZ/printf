#include "main.h"
/**
 * _printf - prints output depanding on the format specifiers
 * @format: string containing the format specifiers
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	int i, j, len, writ_char = 0;
	int (*selected_fn)(va_list args);
	char *specifiers = "cs%";
	char spec[1];
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	len = strlen(format);
	for (i = 0 ; i < len ; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			if (format[i + 1] == ' ')
				continue;
			for (j = 0 ; j < 3 ; j++)
			{
				if (format[i + 1] == specifiers[j])
				{
					spec[0] = format[i + 1];
					selected_fn = get_fun(spec);
					writ_char += selected_fn(args);
					i++;
					break;
				}
				continue;
			}
			continue;
		}
		writ_char += write(1, &format[i], 1);
	}
	va_end(args);
	return (writ_char);
}
