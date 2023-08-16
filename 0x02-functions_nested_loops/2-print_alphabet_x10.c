#include "main.h"
/**
 * print_alphabet_x10 - make the alphabet
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int n = 0;
	char letter = 'a';

	while (n < 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		letter = 'a';
		n++;
		_putchar('\n');
	}

}
