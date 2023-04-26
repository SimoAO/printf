#include "mian.h"
/**
 * print_rev - function prints str in reverse
 * @data: arguments
 * Return: length of string
 */
int print_rev(va_list data)
{
	const char *str;
	int q, count;

	str = va_arg(data, const char *);

	count = _strlen(str);

	for (q = count - 1; q >= 0; q--)
		_putchar(str[q]);

	return (count);
}
