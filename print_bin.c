#include "main.h"
/**
 * print_binary - function prints num in base 2
 * @data: nums to print
 * Return: number in binary
 */
int print_binary(va_list data)
{
	int count;
	char *bu;

	bu = itoa(va_arg(data, unsigned int), 2);

	count = print_ch(bu);

	return (count);
}
