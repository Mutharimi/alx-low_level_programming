#include "main.h"

/**
 * main - check the code
 *description: prints the alphabet, in lowercase, followed by a new line
 * Return: Always 0.
 */

void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
int main(void)
{
print_alphabet();
return (0);
}
