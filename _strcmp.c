#include "main.h"
/**
 * _strcmp - compare strings
 * @str1: string num 1
 * @str2: string num 2
 * Return: int
 */
int _strcmp(char *str1, char *str2)
{
	int q;

	for (q = 0; str1[q] != '\0'; q++)
	{
	if (str1[q] != str2[q])
	return (str1[q] - str2[q]);
	}
	return (0);
}
