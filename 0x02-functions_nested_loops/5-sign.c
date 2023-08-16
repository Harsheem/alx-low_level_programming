#include "main.h"
/**
 * print_sign - print the sign of the number
 *
 * @n: The character to be checked
 * Return: 1, 0 -1 depending on the sign
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
