#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any sets of bytes
 *
 * @s: string we want to search
 * @accept: string containing bytes that r a match in s
 * Return: n
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
