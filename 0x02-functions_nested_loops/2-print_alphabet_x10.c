#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lowercase 10 times
 *
 * Description: Prints alphabets in lowercase from 'a' to 'z'
 * followed by a new line.
 * And it repeats that 10 times.
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');

		i++;
	}
}
