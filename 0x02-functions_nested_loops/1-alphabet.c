#include "main.h"
/**
 * print alphabet - make the alphabet
 *
 * Return: Always (void)
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
