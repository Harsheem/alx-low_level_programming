#include "main.h"
#include "stddef.h"
/**
 * _strstr - finds the first occurrence of the substring needle
 *
 * @needle: string to be found
 * @haystack: initial string to be searched
 *
 * Return: pointer to the start of the substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
