int _putchar(char c);

/**
 * print_sign - prints the sign of n
 * @n: The number to be checked for the sign
 *
 * Return: 1 if positive, 0 if null, and -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}
	else if (n == 1)
	{
		_putchar('0');

		return (0);
	}
	else
	{
		_putchar('-');

		return (-1);
	}
}
