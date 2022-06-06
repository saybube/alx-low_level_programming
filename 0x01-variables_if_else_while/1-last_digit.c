#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - print the last digit of the number stored 
 * in the variable n
 *
 * Description: program will assign a random number to 
 * the variable n each time it is executed
 *
 * Return 0 (Success)
 */
int main(void)
{
	int n, mod;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	mod = n % 10;
	if (mod > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, mod);
	else if (mod == 0)
		printf("Last digit of %d is %d and is 0\n", n, mod);
	else if (mod < 6 && mod != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, mod)
	return (0);
}
