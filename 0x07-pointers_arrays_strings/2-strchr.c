#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: string parameter
 * @c: charracter to be located
 * Return: pointer to the first occurence of c in s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
