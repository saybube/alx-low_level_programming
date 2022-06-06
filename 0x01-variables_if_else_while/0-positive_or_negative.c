#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/** 
 * main - checks whether number stored in the variable n is positive or negative
 *
 * Description: program will assign a random number to the variable n each time it is executed
 *
 * Return: Always (0) - Success
 *
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else 
		printf("%d is negative\n",n);
	return (0);
}
