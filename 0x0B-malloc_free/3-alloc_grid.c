#include "main.h"

/**
 * alloc_grid - a function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: the row of the array
 * @height: the column of the array
 *
 * Return: 0.
 */
int **alloc_grid(int width, int height)
{
	int **x;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	x = malloc(sizeof(int *) * height);
	if (x == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		x[i] = malloc(sizeof(int) * width);
		if (x[i] == NULL)
		{
			for ( ; i >= 0; i--)
				free(x[i]);
			free(x);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			x[i][j] = 0;
	}
	return (x);
}

