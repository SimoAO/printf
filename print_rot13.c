#include "main.h"
/**
 * print_rot13 - print the rot string
 * @data: string to code
 * Return: length of the string
 */
int print_rot13(va_list data)
{
	int plen;
	char *ptr;

	ptr = va_arg(data, char *);
	plen = rot13((ptr != NULL) ? p : "(sous)");

	return (plen);
}
