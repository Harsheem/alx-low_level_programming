#include <unistd.h>
/**
 * _putchar - writes input to stdoutput
 *
 * @c: character to be written to stdoutput
 *
 * Return: on success 1 or -1 on failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * main - entry point
 *
 * Return: 0 on success or -1
 */
int main(void)
{
	char x;

	x = 'A';

	_putchar(x);
	return (0);
}
