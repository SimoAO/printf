#include "main.h"
/**
 * print_pointer - print num in hex
 * @data: num to print
 * Return: len of num
 */
int print_pointer(va_list data)
{
	int count;
	char *bu;

	bu = itoa(va_arg(data, unsigned long int), 16);

	if (!_strcmp(bu, "0"))
		return (print_ch("(nil)"));

	count = print_ch("0x");

	if (!_strcmp(bu, "-1"))
		count += print_ch("uuytrdfddadddddd");
	else
		count += print_ch(bu);
	return (count);
}
