#include "main.h"

/**
 * main - prints numbers from 1 to 100 with some exceptions
 *
 * Description: prints numbers from 1 to 100 followed by a new line;
 * but for multiples of 3 prints Fizz instead of 3,
 * for multiples of 5 prints Buzz instead of 5,
 * and for multiples of both 3 and 5 prints FizzBuzz
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
