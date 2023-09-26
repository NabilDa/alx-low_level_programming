#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to the 2d array of characters to print
 *
 * Return: Nothing.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (j % 10)
			{
				_putchar(' ');
			}

			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
