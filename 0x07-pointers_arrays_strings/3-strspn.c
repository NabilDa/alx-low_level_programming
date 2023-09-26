#include "main.h"

/**
 * _strspn - gets the length of a substring from s
 * @s: the sring in which to look for characters that match
 * @accept: the string that contains the characters to be matched
 *
 * Description: calculates the length of the first set of characters
 * in the string s that contains only character from the string accept
 * Return: the number of bytes in the first segment of s which contains
 * only bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n, len;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		n = len;
		for (j = 0; accept[j] != '\0'; j++)
		{
			n = len;
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}

		if (len == n)
		{
			return (len);
		}
	}

	return (len);
}
