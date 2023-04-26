#include "main.h"

/**
 * print_string - print a string
 * @data: data
 *
 * Return: string length
 */

int print_string(va_list data)
{
	int sl;
	char *s;

	s = va_arg(data, char *);
	sl = print_ch((s != NULL) ? s : "(null)");

	return (sl);
}
