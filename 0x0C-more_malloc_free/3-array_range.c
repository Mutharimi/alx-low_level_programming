#include <stdlib.h>
#include "main.h"

/**
 * *array_range - array of integers
 * @min: minimum values stored
 * @max: maximum range of value stored
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *ptr;
	int k, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (k = 0; min <= max; k++)
		ptr[k] = min++;

	return (ptr);
}


