#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: points to the destination to where to copy
 * @src: the source of what to copy
 * @n: the number of bytes to copy
 *
 * Return: a pointer to bytes copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
