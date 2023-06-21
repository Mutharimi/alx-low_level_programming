#include "main.h"

/**
 * main print_sign - prints the sign of a number
 * @n: The input number to be checked
 * Return: 1 for positive, 0 for zero, -1 for negative
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
int main(void)
{
int number = 10;
int result = print_sign(number);
return (0);
}

