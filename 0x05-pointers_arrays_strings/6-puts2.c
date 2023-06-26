
#include "main.h"
/**
 * puts2 - function print only one character of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longth = 0;
	int t = 0;
	char *y = str;
	int m;

	while (*y != '\0')
	{
		y++;
		longth++;
	}
	t = longth - 1;
	for (m = 0 ; m <= t ; m++)
	{
		if (m % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}

