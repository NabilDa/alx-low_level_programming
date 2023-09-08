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

	/* Assigning a random value to n. */
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Getting and storing the last digit of the variable n
	   into another variable */
	int last_digit;
	last_digit = n % 10;

	/* Conditions. */
	if (last_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n",\
		       n, last_digit);
	else if (last_digit < 6 && last_digit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n",\
		       n, last_digit);
	else
		printf("Last digit of %d is %d and is 0\n", n, last_digit);

	return (0);
}