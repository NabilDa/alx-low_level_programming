#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string to manipulate
 */
void puts2(char *str)
{
	int i, j, len;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	len = i - 1;

	j = 0;
	while (j <= len)
	{
		_putchar(str[j]);

		j = j + 2;
	}
	_putchar('\n');
}
