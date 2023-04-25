#include "main.h"

/**
 * _printf - printf functiion
 * @format: format string
 *
 * Return: printed chararacters
 */

int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list data;

	if (format == NULL)
	return (-1);
	va_start(data, format);
	for (; format[i] != '\0'; i++)
	{
	if (format[i] == '%')
	{
	i++;
	switch (format[i])
	{
	case 'c':
		count += _putchar(va_arg(data, int));
		break;
	case 's':
		count += print_string(va_arg(data, char *));
		break;
	case '%':
		count += _putchar('%');
		break;
	case '\0':
		va_end(data);
		return (-1);
	default:
		count += _putchar('%');
		count += _putchar(format[i]);
	}
	}
	else
	{
	count += _putchar(format[i]);
	}
	}
	va_end(data);
	return (count);
}
