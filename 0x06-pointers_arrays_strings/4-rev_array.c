#include "main.h"
/**
 * reverse_array - reverses the contents of an integer
 *
 * @a: array to be reversed
 * @n: size of the array
 */
void reverse_array(int *a, int n)
{
	int begin = 0;

	int end = n - 1;

	while (begin < end)
	{
		int temp = a[begin];

		a[begin] = a[end];
		a[end] = temp;
		begin++;
		end--;
	}
}
