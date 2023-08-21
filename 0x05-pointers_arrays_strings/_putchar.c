#include <unistd.h>
/**
 * _putchar - prints characters to stdout
 *
 */
int _putchar(char c)
{
	return write(1,&c,1);
}
