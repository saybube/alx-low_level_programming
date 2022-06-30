#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: void
 */
void jack_bauer(void)
{
	int hb;
	int hs;
	int mb;
	int ms;
	int i = 9;

	hs = 0;
	while (hs <= 2)
	{
		if (hs == 2)
		{
			i = 3;
		}
		hb = 0;
		while (hb <= i)
		{
			ms = 0;
			while (ms <= 5)
			{
				mb = 0;
				while (mb <= 9)
				{
					_putchar('0' + hs);
					_putchar('0' + hb);
					_putchar(':');
					_putchar('0' + ms);
					_putchar('0' + mb);
					_putchar('\n');
					mb++;
				}
				ms++;
			}
			hb++;
		}
		hs++;
	}
}
