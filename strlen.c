#include "main.h"
/**
 * _strlen - calculates the length of a string
 * @str: the string
 * Return: the length of the string
 */

int _strlen(const char *str)
{
	int i;

	if (str == NULL)
		return (6);
	for (i = 0 ; str[i] != '\0' ; i++)
		;
	return (i);
}
