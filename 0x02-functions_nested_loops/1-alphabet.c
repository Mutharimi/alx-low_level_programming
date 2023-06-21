#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
char letter;
for (char letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
}
int main(void)
{
print_alphabet();
return (0);
}
