#include "main.h"
/**
 * rev_string - a function that reverses a string
 *
 * @s: string to be reversed
 * Return: reversed string
 */
void rev_string(char *s)
{
	int length, begin, end;

	char var;

	length = _strlen(s);

	begin = 0;

	end = length - 1;

	while (begin <  end)
	{
		var = s[begin];
		s[begin] = s[end];
		s[end] = var;
		begin++;
		end--;
	}
}

/**
 * _strlen - prints the length of the string
 *
 * @s: string to be printed
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
