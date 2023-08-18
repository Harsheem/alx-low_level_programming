#include <unistd.h>
/**
 * _putchar - writes a charcters to standard output
 *
 * @c: the character to be written
 * Return: 1 - on sucess otherwise 0
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
