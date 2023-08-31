#include "main.h"
#include <stdio.h>
/**
 * checker  - checks recursively for input from prime
 *
 * @n: iterator
 * @base: number to check
 * Return: 1 or 0
 */
int checker(int n, int base)
{
	if (base % n == 0 || base < 2)
	{
		return (0);
	}
	else if (n == base - 1)
	{
		return (1);
	}
	else if (base > n)
	{
		return (checker(n + 1, base));
	}
	else
	{
		return (1);
	}
}
/**
 * is_prime_number - checks for prime numbers
 * @n: number to check
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	return (checker(2, n));
}
