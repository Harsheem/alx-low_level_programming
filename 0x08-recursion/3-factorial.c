#include "main.h"
/**
 * factorial - returns a factorial of a given number
 *
 * @n: number taken in as a parameter
 * Return: factorial of a number or -1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
