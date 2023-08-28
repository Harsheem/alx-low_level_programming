#include "main.h"
/**
 * _memset - function that fills n bytes of *s by constant b
 * @s: variable to store the memory space
 * @b: character to fill memory pointed by *s
 * @n: number of bytes of b to fill memory *s
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*ptr = b;
		ptr++;
		n--;
	}
	return (s);
}
