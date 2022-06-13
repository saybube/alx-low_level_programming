#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: n is an integer
 *
 * Return: 1 (+ve), 0 (for zero), -1 (-ve)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
