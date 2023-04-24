#include "main.h"

/**
 * _printf - printf functiion
 * @format: format string
 *
 * Return: printed chararacters
 */

int _printf(const char *format, ...)
{
	int i, count = 0;
	va_list data;
	char *str;

	va_start(data, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
	if (format[i] == '%')
	{
	i++;
	switch (format[i])
	{
	case 'c':
		count += write(1, va_arg(data, int*), 1);
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
		count += write(1, &(format[i - 1]), 2);
		break;
	}
	}
	else
	{
	count += write(1, &(format[i]), 1);
	}
	}
	va_end(data);
	return (count);
}
