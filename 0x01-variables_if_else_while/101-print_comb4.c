#include<stdio.h>

/**
 * main - Entry point
 *
 * print all possible different
 * combinations of two digits.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
int i = 0;
int j, k;

while (i <= 9)
{
j = 0;
while (j <= 9)
{
k = 0;
while (k <= 9)
{
if (i != j &&
i < j &&
j != k &&
j < k)
{
putchar(i + 48);
putchar(j + 48);
putchar(k + 48);

if (i + j + k != 24)

{  
putchar(',');
putchar(' ');
}
}
++i;
}
++j;
}
++k;
}
putchar('\n');

return (0);
}

