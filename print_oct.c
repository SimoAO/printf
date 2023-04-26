#include "main.h"

/**
 * print_oct - a function that print an octal
 * @data: data
 *
 * Return: the number
 */

int print_oct(va_list data)
{
	int count;
	char *bu;

	bu = itoa(va_arg(data, unsigned int), 8);
	count = print_ch((bu != NULL) ? bu : "NULL");

	return (count);
}
