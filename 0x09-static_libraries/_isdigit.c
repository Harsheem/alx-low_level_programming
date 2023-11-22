#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks for numbers
 *
 * @c: number to be checked
 *
 * Return: 1 if number or else 0
 */
int _isdigit(int c)
{
	if ((c >= '0' && c <= '9') || (c == '-' && c >= '0' && c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * main - entry point
 *
 * Return: 1 on success or 0
 */
int main(void)
{
	int x;
	char y;

	y = '2';


	x = _isdigit(y);
	printf("%d\n", x);
	return (0);
}
