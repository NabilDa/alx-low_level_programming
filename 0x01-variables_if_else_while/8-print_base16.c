#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48;

	while (n <= 102)
	{
		if (n == 58)
			n = 97;

		putchar(n);
		n++;
	}
	putchar(10);

	return (0);
}
