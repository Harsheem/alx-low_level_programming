#include "main.h"
/**
 * _puts -  prints a string followed  by a new line character
 * @str: character to be printed
 *
 * Return: the string  and a new line character
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
