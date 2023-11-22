#include "main.h"
#include <stdio.h>
/**
 * _islower - checkes whether character is of lower case
 *
 * @c: character to be checked
 *
 * Return: true or false
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
/**
 * main - entry point
 *
 * Return: 0 on success or 1
 */
int main(void)
{
	int r_value;
	char small_cap;

	small_cap = 'a';

	r_value = _islower(small_cap);
	printf("%d\n", r_value);
	return (0);
}
