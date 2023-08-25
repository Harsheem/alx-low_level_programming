#include "main.h"
/**
 * _strncpy - a function that copies a string
 * @dest: final copy
 * @src: string to be copied
 * @n: copies a string up to n characters
 *
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (ptr);
}
