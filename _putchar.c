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
	static char buff[OUTPUT_BUFF_SIZE];

	if (c == BUFF_FLUSH || i >= OUTPUT_BUFF_SIZE)
	{
	write(1,  buff, i);
	i = 0;
	}
	if (c != BUFF_FLUSH)
	buff[i++] = c;
	return (1);
}
