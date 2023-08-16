#include <unistd.h>
/**
 * _putchar - writes the chaaracter c to stdout
 * &c : The charcter to print
 * Return: On successs 1
 * on error, -1  is returned  and rerrno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
