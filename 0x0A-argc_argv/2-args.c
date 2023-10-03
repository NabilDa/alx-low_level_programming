#include "main.h"

/**
 * main - prints out its arguments
 * @argc: the number of arguments to print
 * @argv: array of arguments to print
 *
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
