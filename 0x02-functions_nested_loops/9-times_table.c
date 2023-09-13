int _putchar(char c);

void times_table(void)
{
	int i, j, count;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			count = i * j;

			if (count < 10)
			{
				_putchar('0' + count);
			}
			else
			{
				_putchar('0' + (count / 10));
				_putchar('0' + (count % 10));
			}

			if (j != 9 && i * (j + 1) < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (j != 9 && i * (j + 1) >= 10)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
