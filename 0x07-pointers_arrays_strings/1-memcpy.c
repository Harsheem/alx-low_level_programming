#include "main.h"
/**
 * _memcpy - copies n bytes from memory  area src to memory areaa dest
 * @dest: points to the destination memory
 * @src:points to the source memory
 * @n: bytes to be copied from src to dest
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *temp_dest = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (temp_dest);
}
