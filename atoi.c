#include "main.h"

/**
 * atoi - a function that convert an
 * integer to  ASCII
 * @n: number
 * @b: base
 *
 * Return: a string
 */

char *itoa(long int n, int b)
{
	static char *arr = "0123456789abcdef";
	unsigned long m = n;
	static char bu[50];
	char *p;
	char s = 0;

	if (n < '\0')
	{
	m = -n;
	s = '-';
	}
	p = &bu[49];
	*p = '\0';

	do{
		*--p = arr[m % b];
		m /= b;
	} while (m != 0);

	if (s)
	*--p = s;
	return (p);
}
