#include "main.h"
/**
 * print_hex - prints hexadecimal num
 * @data: what to print
 * Return: length of the number
 */
int print_hex(va_list data)
{
	int count;
	char *bu;

	bu = itoa(va_arg(data, unsigned int), 16);

	count = print_ch((bu != NULL) ? bu : "NULL");

	return (count);
}
