#include "main.h"
/**
 * print_numbers - function that prints numbers from 0 - 9
 *
 * Return: numbers from 0 -9
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
