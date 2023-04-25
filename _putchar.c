#include "main.h"

/**
 * _putchar - writes the character c
 * @c: character to be print
 *
 * Return: on success 1.
 * On fail, -1, and errno is set.
 */

int _putchar(int c)
{
	static int i;
	static char buf[OUTPUT_BUF_SIZE];

	if (c == BUFF_FLUSH || i >= OUTPUT_BUF_SIZE)
	{
	write(1,  buf, i);
	i = 0;
	}
	if (c != BUFF_FLUSH)
	buf[i++] = c;
	return (1);
}
