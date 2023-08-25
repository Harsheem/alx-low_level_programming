#include "main.h"
/**
 * _strcmp - function that compares two strings
 *
 * @s1: string to be compared
 * @s2: string to be compared
 *
 * Return: string
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	if (*s1 < *s2)
	{
		return (-15);
	}
	else if (*s1 > *s2)
	{
		return (15);
	}
	return (0);
}
