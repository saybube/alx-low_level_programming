#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int ten = 10;
	char alph = 'a';

	while (ten < 10)
	{
		alph = 'a';
		while (alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}
		_putchar('\n');

		ten++;
	}
}
