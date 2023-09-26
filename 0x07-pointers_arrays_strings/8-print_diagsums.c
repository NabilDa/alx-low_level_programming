#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the address of the first element of the matrix
 * @size: the size of the square matrix
 *
 * Return: nothing.
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += *(a + (size * i) + i);
	}

	j = size - 1;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum2 += *(a + (size * i) + j - i);
		j--;
	}

	printf("%d, %d\n", sum1, sum2);
}
