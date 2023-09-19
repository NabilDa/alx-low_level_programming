#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string to manipulate
 */
void puts2(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i--;

	j = 0;
	while (j < i)
	{
		_putchar(str[j]);

		j++;
	}
	_putchar('\n');
}
