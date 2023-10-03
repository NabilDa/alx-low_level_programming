#include "main.h"

/**
 * main - prints the number of arguments passed to it
 * @argc: the number of arguments
 * @argv: array that holds the command line arguments
 *
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
