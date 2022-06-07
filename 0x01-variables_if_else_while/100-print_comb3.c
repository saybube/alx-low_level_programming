#include <stdio.h>

/**
 * main - print double digit combos
 *
 * Description: print double digit combos
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	for (a = 48; b = 48; a < 58; a++)
	{
		b = a + 1;
		for (b < 58; b++)
		{
			putchar(a);
			putchar(b);

			if (a < 56 || b < 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}

	putchar(10);
	return (0);
}
