#include "main.h"
/**
 * puts2 - prints every other character from a string
 *
 * @str: string to be passed to the puts2 function
 * Return: characters of a string
 */
void puts2(char *str)
{
	int index;

	int length;

	char stri;

	index = 0;

	length = _strlen(str);

	while (*str != '\0')
	{
		stri = str[index];
		_putchar(stri);
		if (index != length)
		{
			index = index + 2;
		}
		else if (index == length)
		{
			break;
		}

	}
	_putchar('\n');
}
/**
 * _strlen - prints length of the string
 * @s: string to be examined
 * Return: length of the string
 */
int _strlen(char *s)
{
	int count;

	count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
