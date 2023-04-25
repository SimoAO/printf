#include "main.h"

/**
 * print_string - a function tht prints a string
 * @str: string to be printed
 *
 * Return: characters to be printed
 */

int print_str(char *str)
{
	char *q = str;

	while (*str)
	_putchar(*str++);
	return (str - q);
}
