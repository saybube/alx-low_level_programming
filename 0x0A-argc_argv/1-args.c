#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: (0)
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int num = argc - 1;

	printf("%d\n", num);
	return (0);
}
