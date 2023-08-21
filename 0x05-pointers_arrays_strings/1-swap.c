#include "main.h"
/**
 * swap_int - swaps the values of a and b
 *
 * @a: one of the charcter to be swapped
 * @b: one of the othe character to be swapped
 * Return: value of characters to be swapped
 */
void swap_int(int *a, int *b)
{
	int harsheem;

	harsheem = *a;
	*a = *b;
	*b = harsheem;
}
