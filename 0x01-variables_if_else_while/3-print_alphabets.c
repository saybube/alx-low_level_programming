#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet in lower then in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alph;

	for (alph = 97; alph <= 122; alph++)
	{
		putchar(alph);
	}

	for (alph = 65; alph <= 90; alph++)
	{
		putchar(alph);
	}

	putchar(10);

	return(0);
}
