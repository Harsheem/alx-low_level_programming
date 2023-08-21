#include <stdio.h>
/**
 * _strlen - returns the length of the string
 *
 * @s: the string to be examined
 * Return: length of the string
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
