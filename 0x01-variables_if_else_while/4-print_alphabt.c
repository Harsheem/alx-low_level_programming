#include <stdio.h>

/**
 * main - Entry Point
 * Return: Always 0 (sucess)
 */
int main(void)
{
	char letter, e, q;
	letter = 'a';

	e = 'e';
	q = 'q';

	while (letter <= 'z')
	{
		if (letter != e && letter != q)
		{
			putchar(letter);
			letter++;
		}
	}
	putchar('\n');
	return (0);
}
