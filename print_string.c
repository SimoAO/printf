#include "main.h"

/**
 * print_string - a function tht prints a string
 * @string: string to be printed
 *
 * Return: characters to be printed
 */

int print_string(char *string)
{
	int i = 0, count = 0;

	for (; string[i] != '\0'; i++)
	{
	count += _putchar(string[i]);
	}
	return (count);
}
