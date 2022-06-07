#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: prints the letters of the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');

	return (0);
}
