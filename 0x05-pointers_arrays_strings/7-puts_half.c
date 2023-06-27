#include "main.h"
/**
 * puts_half - prints half of a string
 * n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */

void puts_half(char *str)
{
int a, n, longth;

longth = 0;

for (a = 0; str[a] != '\0'; a++)
longth++;

n = (longth / 2);

if ((longth % 2) == 1)
n = ((longth + 1) / 2);

for (a = n; str[a] != '\0'; a++)
_putchar(str[a]);
_putchar('\n');
}


