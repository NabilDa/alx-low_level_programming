/**
 * _strncat - Concatenate two strings
 * @dest: pointer to the first string
 * @src: pointer to the second string
 * @n: the number of bytes to be concatenated
 *
 * Description: concatenates n bytes from the second string
 * to the second string
 * Return: pointer to the string concatenated
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	dest_len = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
