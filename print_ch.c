#include "main.h"

/**
 * print_ch - a function tht prints a char
 * @str: string to be printed
 *
 * Return: characters to be printed
 */

int print_ch(char *str)
{
	int q = 0;

	for (; str[q] != '\0'; ++q)
	_putchar(str[q]);

	return (q);
}
