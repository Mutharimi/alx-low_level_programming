#include "main.h"

/**
 * is_prime_number - if an integer is a prime number or not
 * @n: number to be evaluated
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (actual_prime(n, n - 1));
}