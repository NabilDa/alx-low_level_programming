#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 97;

	/* Printing alphabets from a to z. */
	while (c <= 122)
	{
		putchar(c);
		c++;
	}

	/* Printing alphabets from A to Z. */
	c = 65;
	while (c <= 90)
	{
		putchar(c);
		c++;
	}

	/* Lastly: New line character */
	putchar('\n');

	return (0);
}
