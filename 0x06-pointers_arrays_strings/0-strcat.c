/**
 * _strcat - concatenates two strings
 * @dest: the first string
 * @src: the string to be concatenated in the first string
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int dest_len, i;

	dest_len = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
