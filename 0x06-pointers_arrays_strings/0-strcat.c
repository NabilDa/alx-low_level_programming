#include "main.h"

char *_strcat(char *dest, char *src)
{
	int i, j;

	dest_len = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[dest_len + j] = src [j];
	}
	dest[dest_len + j] = '\n';

	return (char *dest);
}
