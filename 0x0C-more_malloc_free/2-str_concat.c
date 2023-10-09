#include "main.h"

/**
 * allocate_memory - allocates memory
 * @s1: a string that indicates the size of memory to be allocated
 * @s2: a string that indicates the additional size of memory to be allocated
 * @n: if less than s2, it plays the role of s2 on allocation,
 * otherwise, it's useless
 *
 * Return: a pointer to the memory allocated.
 */
char *allocate_memory(char *s1, char *s2, unsigned int n)
{
	unsigned int size_s1, size_s2;
	char *p;

	if (s1 != NULL)
	{
		size_s1 = strlen(s1);
	}
	else
	{
		size_s1 = 0;
	}

	if (s2 != NULL)
	{
		size_s2 = strlen(s2);
	}
	else
	{
		size_s2 = 0;
	}

	if (n < size_s2)
	{
		p = malloc(sizeof(char) * (size_s1 + n + 1));
	}
	else
	{
		p = malloc(sizeof(char) * (size_s1 + size_s2 + 1));
	}

	return (p);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the lenght of the string to be taken of s2
 *
 * Return: NULL on error, and a pointer to the concatenated string on success.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;

	p = allocate_memory(s1, s2, n);
	if (p == NULL)
	{
		return (NULL);
	}

	if (s1 != NULL && s2 != NULL)
	{
		strcpy(p, s1);
		strncat(p, s2, n);
	}
	else if (s1 != NULL && s2 == NULL)
	{
		strcpy(p, s1);
	}
	else if (s1 == NULL && s2 != NULL)
	{
		strncpy(p, s2, n);
	}

	return (p);
}
