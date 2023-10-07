#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: the amount of bytes to allocate
 *
 * Return: a pointer to the address of the allocated memory
 * if malloc doesn't fail.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
