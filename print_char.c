#include "main.h"

/**
 * print_char - print a char
 * @data: data
 *
 * Return: 1
 */

int print_char(va_list data)
{
	int x;

	x = va_arg(data, int);
	_putchar(x);
	return (1);
}
