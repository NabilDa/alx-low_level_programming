int _putchar(char c);

/**
 * jack_bauer - Prints every minute of the day
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	/* h means hours and m means minutes */
	int h, m, h_tens, h_ones, m_tens, m_ones;

	h = 0;
	while (h <= 23)
	{
		h_tens = h / 10;
		h_ones = h % 10;

		m = 0;
		while (m <= 59)
		{
			_putchar('0' + h_tens);
			_putchar('0' + h_ones);
			_putchar(':');

			m_tens = m / 10;
			m_ones = m % 10;

			_putchar('0' + m_tens);
			_putchar('0' + m_ones);
			_putchar('\n');

			m++;
		}

		h++;
	}
}
