#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to search within
 * @c: the character to be located
 *
 * Return: the address of the first occurence of the character c,
 * or NULL if there's no occurence
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	return (0);
}
