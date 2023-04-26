#include "main.h"

/**
 * print_int - prints an integer
 * @data: data
 *
 * Return: legth of integer
 */

int print_int(va_list data)
{
	int count;
	char *bu;

	bu = itoa(va_arg(data, int), 10);
	count = print_ch((bu != NULL) ? bu : "NULL");
	return (count);
}
