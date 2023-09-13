#include <stdio.h>
int _putchar(char c);

/**
 * print_to_98 - Prints numbers from n to 98
 * @n: The first number to be printed
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	_putchar('\n');
}
