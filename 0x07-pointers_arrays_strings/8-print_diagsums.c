#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - print the sum of two diagonals
 * @a: XX
 * @size: XX
 */
void print_diagsums(int *a, int size)
{
	int sum_1 = 0;
	int sum_2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum_1 += a[i * size + i];
		sum_2 += a[i * size + (size - 1 - i)];
	}
	printf("%d\n", sum_1);
	printf("%d\n", sum_2);
}
