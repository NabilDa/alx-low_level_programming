#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 *
 * Return: on success, a pointer to the duplicated string;
 * on failure, NULL.
 */
char *_strdup(char *str)
{
	unsigned int i, size;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	size = strlen(str);
	ptr = malloc(sizeof(char) * size + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = str[i];
	}
	ptr[size] = '\0';

	return (ptr);
}
