#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: pointer to allocated memory
 */
int *array_range(int min, int max)
{
	int *arr, sol, num, j;

	if (min > max)
		return (NULL);
	sol = max - min + 1;
	arr = malloc(sol * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (num = min, j = 0; num <= max && j < sol; num++, j++)
		arr[j] = num;

	return (arr);
}
