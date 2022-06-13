#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: n is an integer
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int numb = n % 10;

	if (n < 0)
		numb = numb * -1;

	_putchar('0' + numb);

	return (numb);
}
