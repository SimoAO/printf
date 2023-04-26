#include "main.h"

/**
 * _putchar - writes the character c
 * @c: character to be print
 *
 * Return: on success 1.
 * On fail, -1, and errno is set.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
