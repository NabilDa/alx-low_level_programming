/**
 * _strncpy - copies a string into another one
 * @dest: the destination
 * @src: the source of the string to be copied
 * @n: the number of bytes to be copied from the source
 *
 * Return: a pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0' && dest[i] && '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n && dest[i] != '\0'; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
