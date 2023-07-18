#ifndef SUM_H
#define SUM_H
#include <stdio.h>

#define SUM(x, y) ((x) + (y))
/**
 * main - sum of numbers
 * Return: 0 (success)
*/
int main(void)
{
int num1 = 5;
int num2 = 10;
int result = SUM(num1, num2);

printf("%d\n", num1, num2, result);

return (0);
}

