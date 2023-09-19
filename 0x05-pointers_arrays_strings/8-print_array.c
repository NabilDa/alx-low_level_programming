#include <stdio.h>

/**
 * print_array - prints n element of an array of type int
 * @a: pointer to the first element of the array
 * n: the number of elements to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));

		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
