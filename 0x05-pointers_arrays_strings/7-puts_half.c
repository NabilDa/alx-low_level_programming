#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the pointer to the string to be printed
 */
void puts_half(char *str)
{
	int i, len, n;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	len = i - 1;

	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
	}
	else
	{
		n = len / 2;
	}

	for (i = len - n; i <= len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
