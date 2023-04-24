#include "main.h"

/**
 * _printf - printf functiion
 * @format: format string
 *
 * Return: printed chararacters
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list data;
	char *str;
	char c;

	va_start(data, format);

	for (; *format; format++)
	{
	if (*format == '%')
	{
	format++;
	switch (*format)
	{
	case 'c':
		c = va_arg(data, int);
		count += write(1, &c, 1);
		break;
	case 's':
		str = va_arg(data, char *);
		if (str == NULL)
		str = "(null)";
		count += write(1, str, strlen(str));
		break;
	case '%':
		count += write(1, "%", 1);
		break;
	default:
		count += write(1, "%", 1);
		count += write(1, format, 1);
		break;
	}
	}
	else
	{
	count += write(1, format, 1);
	}
	}
	va_end(data);
	return (count);
}
