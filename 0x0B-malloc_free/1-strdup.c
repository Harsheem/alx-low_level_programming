#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _strlen - returns the length of a string
 *
 * @s: string whose length should be returned
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
/**
 * _strdup - returns a ptr to new space in mem containing a copy of a str
 *
 * @str: copy of a string
 * Return: ptr to copy of string or NULL
 */
char *_strdup(char *str)
{
	char *ptr;
	int i;

	ptr = (char *) malloc(_strlen(str) + 1 * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= (_strlen(str) + 1); i++)
		{
			ptr[i] = str[i];
		}
		return (ptr);
	}
}
