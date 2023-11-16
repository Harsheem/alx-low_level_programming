#include "main.h"
/**
 * factorial - returns a factorial of a given number
 *
 * @n: number whose factorial will be returned
 *
 * Return: factorial of number or -1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
