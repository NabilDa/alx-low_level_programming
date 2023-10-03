#include "main.h"

/**
 * main - prints the name of the program
 * @argc: a counter of the number of command line arguments
 * @argv: array of strings that contains the command line arguments
 *
 * Return: always 0 (success).
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
