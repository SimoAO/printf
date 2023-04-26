#include "main.h"
/**
 * print_HEX - hexadicemal number format
 * @data: num to print
 * Return: len of num
 */
int print_HEX(va_list data)
{
	char *bu;
	int count;

	bu = itoa(va_arg(data, unsigned int), 16);
	bu = str_to_upper(bu);

	count = print_ch((bu != NULL) ? bu : "NULL");
	return (count);
}
