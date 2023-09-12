#include "main.h"

/**
 * _islower - Checks wheter a character is lowercase or not
 *
 * Return: 1 if the character is lowercase, and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
