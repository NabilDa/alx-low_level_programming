#include "main.h"

/**
 * is_prime_number - checks whether an integer is a prime number or notn
 * @n: the integer to be checked
 *
 * Return: 1 if n is a prime number, and 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	if (n == 2 || n == 3)
	{
		return (1);
	}

	if (((n * n) - 1) % 24 == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
