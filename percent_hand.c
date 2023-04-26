#include "main.h"

/**
 * percent_hand - a function that controles
 * a specific format
 * @str: string
 * @data: arguments data
 * @i: iterator
 *
 * Return: specs of printed format
 */

int percent_hand(const char *str, va_list data, int *i)
{
	int count, k, nform;

	form forms[] = {
		{'c', print_char}, {'s', print_string},
		{'d', print_int}
	};

	*i = *i + 1;

	if (str[*i] == 0)
	return (-1);

	if (str[*i] == '%')
	{
	_putchar('%');
	return (1);
	}

	nform = sizeof(forms) / sizeof(forms[0]);
	for (count = k = 0; k < nform; k++)
	{
	if (str[*i] == forms[k].spec)
	{
	count = forms[k].f(data);
	return (count);
	}
	}

	_putchar('%');
	_putchar(str[*i]);

	return (2);
}
