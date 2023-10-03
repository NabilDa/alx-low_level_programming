#include "main.h"

/**
 * main - adds numbers from command line arguments
 * @argc: counts the number of arguments
 * @argv: array of the arguments, in this case the numbers, to add
 *
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");

				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}

	return (0);
}
