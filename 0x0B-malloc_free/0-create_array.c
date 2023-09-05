#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array and initialises it with char
 *
 * @size: length of the array
 * @c:parameter thats a place holder for the initialized character
 *
 * Return: *ptr to arr or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int count;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ptr = malloc(size * sizeof(char));
		for (count = 0; count < size; count++)
		{
			ptr[count] = c;
		}
		return (ptr);
	}
}
