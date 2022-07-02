#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: describes the number of members
 * @size: describes the number of bytes
 * Return: pointer to allocated memory and same as the string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i;
	char *j;

	if (nmemb == 0 || size == 0)
		return (NULL);
	
	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);

	j = arr;
	for (i = 0; i < nmemb * size; i++)
		j[i] = 0;
	return (arr);
}
