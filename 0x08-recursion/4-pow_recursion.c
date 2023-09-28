#include "main.h"

/**
 * _pow_recursion - calculates the value of x rased to the power of y
 * @x: the number to be raised
 * @y: the power
 *
 * Return: -1 if y is negative, and the power of x otherwise
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (x);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
