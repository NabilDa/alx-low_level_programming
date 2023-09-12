int _putchar(int c);

/**
 * print_last_digit - Prints the last digit of a given integer
 * @n: The given integer
 *
 * Return: The last digit of the given integer (of n)
 */
int print_last_digit(int n)
{
	n %= 10;

	_putchar('0' + n);

	return (n);
}
