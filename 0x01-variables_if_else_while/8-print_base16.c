#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all base 16 numbers in lowercase
 *
 * Description: prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numb;

	for (numb = 0; numb < 48; numb++)
	{
		if (numb < 10)
			putchar(numb + '0');
		else if (numb > 41)
			putchar(numb - 10 + 'A');
	}

	putchar(10);
	return (0);
}
