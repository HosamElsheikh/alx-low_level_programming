#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Pointer to the first element of the square matrix
 * @size: The size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1;
	int sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += a[i + i * size];
		sum2 += a[i * size + (size - i - 1)];
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
