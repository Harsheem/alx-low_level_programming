#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number whose sqrt the function returns
 *
 * Return: sqrt of n or -1
 */
int _sqrt_recursion(int n)
{
	return (checker(1, n));
}
/**
 * checker - checks the input from n to base
 * @n: number parameter
 * @base: base number to check
 * Return: natural sqrt of a number
 */
int checker(int n, int base)
{
	if (n * n == base)
	{
		return (n);
	}
	if (n * n > base)
	{
		return (-1);
	}
	else
	{
		return (checker(n + 1, base));
	}
}
