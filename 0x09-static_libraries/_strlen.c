#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns length of a string
 *
 * @s: string whose length will be returned
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		s++;
		count++;
	}
	return (count);
}
/**
 * main - entry point
 *
 * Return: 1 or 0
 */
int main(void)
{
	char abc[3] = "abc";
	int x;

	x = _strlen(abc);
	printf("%d\n", x);
	return (0);
}
