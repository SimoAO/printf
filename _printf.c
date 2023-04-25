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

	va_start(data, format);

	for (; format[i] != '\0';)
	{
	if (format[i] == '%' && format[i + 1] != ' ')
	{
	switch (format[i + 1])
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
	default:
		break;

	}
	i += 2;
	}
	else
	{
	count += _putchar(format[i]);
	i++;
	}
	}
	return (count);
}
