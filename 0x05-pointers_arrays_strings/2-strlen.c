/**
 * _strlen - calculates the lenght of a string
 * @s: the string used for calculation
 *
 * Return: the lenght of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
