#include "main.h"
/**
 * is_prime_number - returns 1 if parameter is prime else 0
 *
 * @n: parameter n
 *
 * Return: a helper function
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_recursive(n, 2));
}
/**
 * is_prime_recursive - recursive helper function
 *
 * @n: the number to check for primality
 * @i: the current divisor to test
 *
 * Return: 1 if prime else 0
 */
int is_prime_recursive(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_recursive(n, i + 1));
}
