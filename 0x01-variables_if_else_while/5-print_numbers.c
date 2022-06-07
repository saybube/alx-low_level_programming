#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int numb;

	for (numb = 48; numb <= 58; numb++)
	{
		putchar(numb);
	}

	putchar(10);
	return (0);
}
