#include <unistd.h>
/**
 * _putchar - writes character too stdout
 *
 * @c: the character to be written
 *
 * Return: on success 0 or -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
