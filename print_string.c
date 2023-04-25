#include "main.h"

int print_string(char *string)
{
	int i = 0, count = 0;
	
	for (; string[i] != '\0'; i++)
	{
	count += _putchar(string[i]);
	}
	return (count);
}
