#include "main.h"
/**
 * _sqrt_recursion - function that returns the square root of a number
 * @n: input number
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 1));
}

/**
 * actual_sqrt_recursion - finds the natural square root of a number
 * @n: input number
 * @j: iterator
 * Return: square root
 */

int _sqrt_recursion(int n, int j)
{
	if (j * j > n)
		return (-1);
	if (j * j == n)
		return (j);
	return (actual_sqrt_recursion(n, j + 1));
}
