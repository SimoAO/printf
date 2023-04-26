#include "main.h"

/**
 * _strlen - a function that calculate the length
 * of a string
 * @str: string
 *
 * Return: the length
 */

int _strlen(const char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	;

	return (i);
}
