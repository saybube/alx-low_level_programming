#include <stdio.h>

/**
 * main - print single digit numbers
 *
 * Description: print all possible combos of single digits with
 * commas
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numb;

	for (numb = 48; numb < 58; numb++)
	{
		putchar(numb);
		if (numb != 57)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar(10);
	return (0);
}
