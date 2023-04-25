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
	char *i;
	para_m par = PARAMS_INIT;

	va_start(data, format);

	if (!format || (format[0] == '%' && !format[1]))
	return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
	return (-1);
	for (i = (char *)format; *i; i++)
	{
	init_params(&par, data);
	if (*i != '%')
	{
	count += _putchar(*i);
	continue;
	}
	/**stt = i;
	i++;
	while (get_flag(i, &par))
	{
	i++;
	}
	i = get_width(i, &par, data);
	i = get_precision(i, &par, data);
	if (get_modifier(i, &par))
	i++;
	if (!get_specifier(i))
	count += print_from_to(stt, i, par.l_modifier
			 || par.h_modifier ? i - 1 : 0);
	count += get_print_func(i, data, &par);*/
	}
	_putchar(BUFF_FLUSH);
	va_end(data);
	return (count);
}
