#include "main.h"

/**
 * _printf - printf functiion
 * @format: format string
 *
 * Return: printed chararacters
 */

int _printf(const char *format, ...)
{
	int i, len;
	va_list data;
	char *str;
	char c;

	va_start(data, format);

	for (i = 0, len = 0; format && format[i]; i++)
	{
	if (format[i] == '%')
	{
	i++;
	switch (format[i])
	{
	case 'c':
		c = va_arg(data, int);
		write(1, &c, 1);
		len++;
		break;
	case 's':
		str = va_arg(data, char *);
		write(1, str, strlen(str));
		len += strlen(str);
		break;
	case '%':
		write(1, "%", 1);
		len++;
		break;
	}
	}
	else
	{
	write(1, &format[i], 1);
	len++;
	}
	}
	va_end(data);
	return (len);
}
