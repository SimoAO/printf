#include "main.h"
/**
 * str_to_upper - function changes to upper case char
 * @str: string
 * Return: string upper char
 */
char *str_to_upper(char *str)
{
	int q;

	for (q = 0; str[q] != '\0'; q++)
	{
		if (is_lowercase(str[q]))
		{
			str[q] = str[q] - 32;
		}
	}
	return (s);
}
