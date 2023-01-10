#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function that returns pointer to a 
 * 2 dimensional array of integers
 * @width: An input integer at number of coloumns
 * @height: An nput integer at number of rows
 * Retun: pointer to a 2d array, NUL on failure
 */

int **alloc_grid(int width, int height)
{
	int **array, i = 0, j = 0;

	if (width <= 0 || height <=0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
		for (; j < width; j++)
			array[i][j] = 0;
	return (array);
}