#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a 2-dimensional array
 * @width: width of the grid
 * @height: height of the grid
 * Return: the pointer to the 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(height * sizeof(int *));
	i = 0, j = 0, k = 0;

	if (arr == NULL)
		return (NULL);
	for (; k < height; k++)
	{
		*(arr + k) = (int *)malloc(width * sizeof(int));
		if (arr[k] == NULL)
		{
			k--;
			for (; k >= 0; k--)
				free(arr[k]);
			free(arr);
			return (NULL);
		}
	}
	while (j < height)
	{
		while (i < width)
		{
			*(*(arr + j) + i) = 0;
			i++;
		}
		j++;
	}
	return (arr);
}
