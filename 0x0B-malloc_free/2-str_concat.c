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
	unsigned int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
/**
 * str_concat - concatenates two strings
 *
 * @s1: first string to be concatanated
 * @s2: the second string
 * Return: *ptr to the newly concatanated string
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int len1, len2, total_length, count;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	total_length = len1 + len2;

	if (s1 ==  NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	ptr = malloc(total_length * sizeof(char) + 1);
	if (ptr ==  NULL)
	{
		return (NULL);
	}
	for (count = 0; count < len1; count++)
	{
		ptr[count] = s1[count];
	}
	for (count = 0; count < len2; count++)
	{
		ptr[len1 + count] = s2[count];
	}
	ptr[total_length] = '\0';
	return (ptr);
}
