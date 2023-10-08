#include "main.h"

/**
 * allocate_memory - allocates memory
 * @s1: a string that indicates the size of memory to be allocated
 * @s2: a string that indicates the additional size of memory to be allocated
 *
 * Return: a pointer to the memory allocated.
 */
char *allocate_memory(char *s1, char *s2)
{
	int size_s1, size_s2;
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

	p = malloc(size_s1 + size_s2 + 1);

	return (p);
}

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: NULL on error, and a pointer to the concatenated string on success
 */
char *str_concat(char *s1, char *s2)
{
	char *p;

	p = allocate_memory(s1, s2);
	if (p == NULL)
	{
		return (NULL);
	}

	if (s1 != NULL && s2 != NULL)
	{
		strcpy(p, s1);
		strcat(p, s2);
	}
	else if (s1 != NULL && s2 == NULL)
	{
		strcpy(p, s1);
	}
	else if (s1 == NULL && s2 != NULL)
	{
		strcpy(p, s2);
	}

	return (p);
}
