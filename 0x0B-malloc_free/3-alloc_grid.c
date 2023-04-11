#include <stdlib.h>
#include <stdio.h>
#include  "main.h"

/**
 * alloc_grid -  create 2 dimentional array & intialize to 0
 * @width: length of width of 2d-array
 * @height: length of  height of 2d-array
 *
 * Return: 2d-array pointer;
 */
int **alloc_grid(int width, int height)
{
	int h, i, w, **arr2d;

	arr2d = NULL;
	if (width < 1 || height < 1)
		return (arr2d);

	arr2d = (int **) malloc(height * sizeof(int *));
	if (arr2d == NULL)
		return (arr2d);
	for (h = 0; h < height; h++)
	{
		arr2d[h] = (int *) malloc(width * sizeof(int));
		if (arr2d[h] == NULL)
		{
			for (i = h; i > -1; i--)
				free(arr2d[i]);
			free(arr2d);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			arr2d[h][w] = 0;
	}
	return (arr2d);
}
