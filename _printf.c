#include "main.h"

/**
 * _printf - printf functiion
 * @format: format string
 *
 * Return: number of printed chararacters
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list data;
	
	if (format == NULL)
	return (-1);

	count = _strlen(format);
	if (count < 1)
	return (0);

	va_start(data, format);
	count = hand(format, data);

	_putchar(-1);
	va_end(data);
	return (count);
}
