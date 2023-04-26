#include "main.h"
/**
 * rot13 - encode string
 * @st: string
 * Return: string
 */
int rot13(char *st)
{
	int q, w;

	char *eadi, *rot13;

	rot13 = "MNOPQRSTUVWXYZABCDEFGHIJKLmnopqrstuvwxyzabcdefghijkl";
	eadi = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	for (q = 0; st[q] != '\0'; q++)
	{
		for (w = 0; eadi[w] != '\0'; w++)
		{
			if (st[q] == eadi[w])
			{
				_putchar(rot13[w]);
				break;
			}
		}
		if (!eadi[w])
			_putchar(st[q]);
	}
	return (q);
}
