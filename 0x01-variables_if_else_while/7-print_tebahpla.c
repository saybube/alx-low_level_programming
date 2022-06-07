#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alph;

	for (alph = 122; alph > 96; alph--)
	{
		putchar(alph);
	}

	putchar(10);
	return (0);
}
