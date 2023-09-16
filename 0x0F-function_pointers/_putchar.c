#include "function_pointers.h"
#include <unistd.h>
/**
 * _putchar - writes characters to standard output
 * @c: character to be printed out
 * Return: on success the number of characters written
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
