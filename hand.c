#include "main.h"

/**
 * hand - a function that controles formats
 * to be printed
 * @str: string
 * @data: arguments data
 *
 * Return: total arguments data
 */

int hand(const char *str, va_list data)
{
	int i = 0, x;
	int count = 0;

	for (; str[i] != '\0'; i++)
	{
	if (str[i] == '%')
	{
	x = percent_hand(str, data, &i);
	if (x == -1)
	return (-1);

	count += x;
	continue;
	}

	_putchar(str[i]);
	count++;
	}
	return (count);
}
