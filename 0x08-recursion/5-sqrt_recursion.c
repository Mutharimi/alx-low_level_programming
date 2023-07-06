#include "main.h"

/**
 *_sqrt_recursion - function that retuns square root of a number
 *@n: input number
 *Return: square root
*/

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - find nature square root
 * @n: input number
 * @j: iterator
 *
 * Return: square root
 */

int actual_sqrt_recursion(int n, int j)
{
if (j * j > n)
return (-1);
if (j * j == n)
return (j);
return (_sqrt_recursion(n, j + 1));
}



