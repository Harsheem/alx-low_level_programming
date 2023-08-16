#include "main.h"
/**
 * _islower - check value for lower case char
 *
 *@c: The character to be checked
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
