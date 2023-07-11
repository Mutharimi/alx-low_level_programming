#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - loop to make grid
 * @width: input
 * @height: input
 * Return: pointer to 2 dimensional
 */
int **alloc_grid(int width, int height)
{
	int **allocat;
	int m, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	allocat = malloc(sizeof(int *) * height);

	if (allocat == NULL)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		allocat[m] = malloc(sizeof(int) * width);

		if (allocat[m] == NULL)
		{
			for (; m >= 0; m--)
				free(allocat[m]);

			free(allocat);
			return (NULL);
		}
	}

	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
			allocat[m][n] = 0;
	}

	return (allocat);
}

