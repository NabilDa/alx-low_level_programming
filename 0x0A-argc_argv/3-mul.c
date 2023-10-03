#include "main.h"

/**
 * main - multiplies its first 2 arguments
 * @argc: a counter of the arguments supplied to main
 * @argv: an array of the arguments supplied to main in string format
 *
 * Return: 1 if argc is less than 3, and 0 otherwise.
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

		return (0);
	}
}
