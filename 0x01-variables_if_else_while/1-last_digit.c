#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int last;

	/* Assigning a random value to n. */
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last = n % 10;

	/* Conditions. */
	if (last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	else if (last < 6 && last != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	else
		printf("Last digit of %d is %d and is 0\n", n, last);

	return (0);
}
