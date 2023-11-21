#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _strlen - retuns the length of the string
 *
 * @s:string whose length will be returned
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
/**
 * str_concat - concatenates 2 strings
 *
 * @s1: string to be concatanated
 * @s2: string to be contanated to s1
 *
 * Return: ptr to a the new string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	ptr = (char *) malloc((_strlen(s1) + _strlen(s2) + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < _strlen(s1); i++)
		{
			ptr[i] = s1[i];
		}
		for (j = 0; j < _strlen(s2); j++)
		{
			ptr[_strlen(s1) + j] =  s2[j];
		}
		ptr[_strlen(s1) + _strlen(s2)] = '\0';
	}
	return (ptr);
}
