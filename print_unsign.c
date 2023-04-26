#include "main.h"
/**
 * print_unsign - print unsined int
 * @data: what to print
 * Return: length of num
 */
int print_unsign(va_list data)
{
	int count;
	char *bu;

	bu = itoa(va_arg(data, unsigned int), 10);

	count = print_ch((bu != NULL) ? bu : "NULL");

	return (count);
}
