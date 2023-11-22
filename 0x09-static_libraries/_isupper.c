#include "main.h"
#include <stdio.h>
/**
 * _isupper -  checcks for upper cased characters
 *
 * @c: character to be checked
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
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
 * Return: 1 0r 0
 */
int main(void)
{
	int x;
	char y;

	y = 'B';
	x = _isupper(y);
	printf("%d\n", x);
	return (0);
}
