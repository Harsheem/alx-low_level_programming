#include "main.h"
/**
 * _isupper - function that checks Uppercase character
 *
 * @c: character to be checked
 * Return: 1 if upperrcase otherwise 0
 */
int _isupper(int c)
{
	if (c < 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
