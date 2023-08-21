#include "main.h"
/**
 * print_rev - prints a string in rerverse
 *
 * @s: string to be printed
 * Return: Reversed string
 */
void print_rev(char *s)
{
	int length, count;

	length = _strlen(s);

	count = length - 1;

	while (count >= 0)
	{
		_putchar(s[count]);
		count--;
	}
	_putchar('\n');
}
/**
 * _strlen - returns the length of the string
 *
 * @s: the string to be examined
 * Return: lenth of the string
 */
int _strlen(char *s)
{
	int count;

	count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
