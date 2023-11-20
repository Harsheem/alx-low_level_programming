#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - creates an array of characters and initialises it
 *
 * @size: size of array
 * @c: chars to contain the array
 * Return: NULL or a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ptr = (char *) malloc(size * sizeof(c));
		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				ptr[i] = c;
			}
			return (ptr);
		}
	}
}
