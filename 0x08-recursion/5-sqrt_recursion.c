#include "main.h"
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The natural square root of n, or -1 if it doesn't exist
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_sqrt(n, 0));
}
/**
 * find_sqrt - helper function to find the sqrt of a number
 *
 * @n: number to find the sqrt of
 *
 * @i: int to test the sqrt
 *
 * Return:  the natural sqrt of n or -1 if it does not exist
 */
int find_sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (find_sqrt(n, i + 1));
	}
}
