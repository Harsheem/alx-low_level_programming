#include "main.h"
#include <stdio.h>
/**
 * _isalpha - checks for alphabetic characters
 *
 * @c: character to be checked
 *
 * Return: 1 if alpha char or 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c <= 'a' && c >= 'z'))
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
 * Return: 1 or 0;
 */
int main(void)
{
	int x;
	char y;

	y = 'B';
	x = _isalpha(y);
	printf("%d\n", x);
	return (0);
}
