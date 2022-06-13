#include "main.h"

/**
 * main - prints putchar
 *
 * Description: prints putchar
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char word[8] = "_putchar";
	int i = 0;

	for (i = 0; i < 7; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');

	return (0);
}

