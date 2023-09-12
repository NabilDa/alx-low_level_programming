/**
 * _isalpha - Checks whether a character is alphabetical or not
 * @c: The Character to be checked
 *
 * Return: 1 if the character is alphabetical and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
