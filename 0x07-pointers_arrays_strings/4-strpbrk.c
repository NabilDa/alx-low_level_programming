#include "main.h"

/**
 * _strbprk - locate the location in memory of a byte in s from accept
 * @s: the string to locate in
 * @accept: the string from which to compare bytes
 *
 * Return: the address of the first occurence of a character from accept;
 * if no occurence is found, return NULL;
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

n	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}

	return (0);
}
