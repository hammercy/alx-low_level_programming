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
	arr2d = NULL;
	if (width < 1 || height < 1)
		return (arr2d);

	arr2d = (int **) malloc(height * sizeof(int *));
	if (arr2d == NULL)
		return (arr2d);
	for (i = 0; i < width; i++)
	{
		arr2d[i] = (int *) malloc(width * sizeof(int));
		if (arr2d[i] == NULL)
		{
			for (j = i; j > -1; j--)
				free(arr2d[i]);
			free(arr2d);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr2d[i][j] = 0;
	}
	return (arr2d);
}
