#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes to be taken from s2
 *
 * Description: concatenates two strings into a pointer that has nothing
 * to do with the two strings, so using malloc is a necessity
 * Return: NULL if malloc fails, and ptr otherwise.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size_s1, size_s2;
	char *ptr;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
		size_s1 = 0;
	}
	else if (s1 != NULL && s2 == NULL)
	{
		size_s1 = strlen(s1);
		ptr = malloc(sizeof(char) * size_s1);
		strcpy(ptr, s1);
		ptr[size_s1] = '\0';
	}
	else if (s1 == NULL && s2 != NULL)
	{
		size_s2 = strlen(s2);
		ptr = malloc(sizeof(char) * size_s2);
		strncpy(ptr, s2, n);
		ptr[n] = '\0';
	}
	else
	{
		size_s1 = strlen(s1);
		size_s2 = strlen(s2);

		ptr = malloc(sizeof(char) * (size_s1 + size_s2));
		if (ptr == NULL)
		{
			return (NULL);
		}

		strcpy(ptr, s1);
		strncpy(ptr + size_s1, s2, n);
		ptr[size_s1 + size_s2] = '\0';
	}

	return (ptr);
}
