#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes a character to stdout
 * @c: the character to print
 * Return: on succes 1 on err -1
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
