#include "main.h"
/**
 * _strcat - concatenates a string
 *
 * @dest: destination string
 * @src: string to be added to the destination file
 * Return: Always ptr pointer to the destination
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
