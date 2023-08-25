#include "main.h"
/**
 * _strncat - concatenates strings except for n bytes
 *
 * @dest: destination string
 * @src: source string
 * @n: bytes to be used from src string
 * Return: pointer *ptr to the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (ptr);
}
