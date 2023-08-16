#include "main.h"
/**
 * _isalpha - check value for lower case char
 *
 * Return: 1 - lower case or 0 - any other value
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
