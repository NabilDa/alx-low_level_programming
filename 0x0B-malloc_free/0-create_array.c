#include "main.h"

/**
 * create_array - creates an array and initializes
 * all its elements with a character
 * @size: the size of the array
 * @c: the character to be stored in each element of the array
 *
 * Return: if size is 0, return NULL. Otherwise, return array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = malloc(sizeof(char) * size);

	if (size == 0 || p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	return (p);
}
