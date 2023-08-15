#include <stdio.h>

/**
 * main - Entry Point
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter = 'z';

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}		
