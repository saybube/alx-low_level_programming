#include "main.h"

/**
 * print alphabet - prints alphabet
 *
 * print_alphabet: prints alphabet
 *
 * Return: void
 *
 */
void print_alphabet(void)
{
	char alph = 'a';
	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}

	_putchar('\n');
}
