#include "main.h"
/**
 * _strspn - gets the length of the prefix of a substring
 *
 * @s:pointer to the initial string s
 * @accept: contains characters considered valid for the prefix
 * Return: number of bytes in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				count++;
				break;
			}
			a++;
		}
		if (*a == '\0')
		{
			break;
		}
		s++;
	}
	return (count);
}
