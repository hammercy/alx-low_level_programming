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
	int i, j, **arr2d;

	if (width < 1 || height < 1)
		return (NULL);

	arr2d = (int **) malloc(height * sizeof(int *));
	if (arr2d == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		arr2d[i] = (int *) malloc(width * sizeof(int));
		if (arr2d[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr2d[i][j] = 0;
	}
	return (arr2d);
}
