#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter = 'a';

	while(letter <= 'z')
	{
		putchar(letter);
		putchar('\n');
		letter ++ ;
	}
	return (0);
}
