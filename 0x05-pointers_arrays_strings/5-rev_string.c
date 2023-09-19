#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the first character of the string
 */

void rev_string(char *s)
{
	int i, j, len;

	/* Calculate the lenght of the string */
	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	i--; /* subtract the count of the NULL character */

	len = i;
	char *str;
	for (j = 0; j <= len; j++)
	{
		str[j] = *(s + j);
	}

	j = len;
	for (i = 0; i <= len; i++)
	{
		*(s + i) = str[j];
		j--;
	}
}
