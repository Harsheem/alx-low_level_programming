#include "main.h"
/**
 * string_toupper - changes all lower case letters to upper
 *
 * @str: takes a string as a parameter
 * Return: a string with all letters sin upper case
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}
	return (str);
}
