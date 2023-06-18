#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * print alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
char CH = 'A';
char ch = 'a';

/*prints a - z */
while (ch <= 'z')
{
putchar(ch);
++ch;
}

/* print A - Z */
while (CH <= 'Z')
{
putchar(CH);
++CH;
}
putchar('\n');

return (0);
}
