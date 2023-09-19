/**
 * swap_int - swaps two values
 * @a: the pointer to the first value
 * @b: the pointer to the second value
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
