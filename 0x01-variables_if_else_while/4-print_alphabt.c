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
	int alph;

	for (alph = 97; alph <= 122; alph++)
	{
		if (alph != 101 && alph != 113)
		{
			putchar(alph);
		}
	}
	putchar(10);
	return (0);
}
