#include "main.h"

/**
 * square - calculates the square root of an integer
 * @i: used to find the square root of n
 * @n: the integer we want to find its square root
 *
 * Return: -1 if either the square root of n is not an integer,
 * or if n is negative;
 * 0 if n is 0;
 * 1 if n is 1;
 * otherwise, return i, which will be the square root of n.
 */
int square(int i, int n)
{
	if (i == n)
	{
		return (-1);
	}

	if (n < 1)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		if (i * i == n)
		{
			return (i);
		}
		else
		{
			return (square((i + 1), n));
		}
	}
}

/**
 * _sqrt_recursion - sends the integer n to the function square
 * @n: the integer we want its square root
 *
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	int i;

	i = 2;

	return (square(i, n));
}
