#include "main.h"
/**
 * _strcmp - compare strings
 * @str1: string num 1
 * @str2: string num 2
 * Return: int
 */
int _strcmp(char *str1, char *str2);

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
/**
 * print_pointer - print num in hex
 * @data: num to print
 * Return: len of num
 */
int print_pointer(va_list data)
{
	int count;
	char *bu;

	bu = itoa(va_arg(data, unsigned long int), 16);

	if (!_strcmp(bu, "0"))
		return (print("(nil)"));

	count = print("0x");

	if (!_strcmp(bu, "-1"))
		count += print("ffffffffffffffff");
	else
		count += print(bu);
	return (count);
}
