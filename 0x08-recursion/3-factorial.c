#include "main.h"

/**
 * factorial - calculates the factorial of an integer
 * @n: the integer that we'll get its factorial
 *
 * Return: -1 if n is negative, and the value of the factorial otherwise.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
