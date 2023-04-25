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
	char *str;

	va_start(data, format);

	while (format && format[i])
	{
	if (format[i] == '%')
	{
	i++;
	switch (format[i])
	{
	case 'c':
		_putchar(va_arg(data, int));
		count++;
		break;
	case 's':
		str = va_arg(data, char *);
		if (str == NULL)
		str = "(null)";
		while (*str)
		{
		_putchar(*str);
		count++;
		str++;
		}
		break;
	case '%':
		_putchar('%');
		count++;
		break;
	default:
		_putchar('%');
		_putchar(format[i]);
		count += 2;
	}
	}
	else
	{
	_putchar(format[i]);
	count++;
	}
	i++;
	}

	va_end(data);
	return (count);
}
