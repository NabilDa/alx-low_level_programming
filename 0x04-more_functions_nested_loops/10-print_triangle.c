#include "main.h"

/**
 * print_triangle - prints a triangle on the terminal
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int i, j, l;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
		for (j = size - (i + 1); j > 0; j--)
		{
			_putchar(' ');
		}

		for (l = 0; l <= i; l++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
