#include "main.h"
#include <stdio.h>
/**
 * _abs - returns the absolute value of a number
 *
 * @n: number whose abs value is to be checked
 *
 * Return: abs value of parameter
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}
/**
 * main - entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	int x;
	int y;

	y = -2;

	x = _abs(y);
	printf("%d\n", x);
	return (0);
}
