#include "main.h"
#include <stdlib.h>
/**
 * _strlen - length of the string
 *
 * @s: string whose length we intend to find
 * Return: length of the string
 */
unsigned int _strlen(char *s)
{
	unsigned int count;

	count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
/**
 * _strdup -  duplicates string into a newly allocated memeory
 *
 * @str: string to be duplicated
 *
 * Return: *ptr to newly duplicated string
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int size, count;

	size = _strlen(str);

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ptr = malloc(size * sizeof(char) + 1);
		if (ptr == NULL)
		{
			return (NULL);
		}
		for (count = 0; count < size;  count++)
		{
			ptr[count] = str[count];
		}
		ptr[count] = '\0';
		return (ptr);
	}
}
