/*
*Author: Collins Ogera
*Date: 4/11/2023
*/
#include <stdlib.h>
/**
*alloc_grid - Pointer to 2d array
*@width: Size of width
*@height: Size of height
*
*Return: Pointer to 2d
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **rect;

	if (width <= 0 || height <= 0)
		return (NULL);

	rect = malloc(height * sizeof(int));

	if (rect == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		rect[i] = malloc(width * sizeof(int));
		if (rect[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			rect[i][j] = 0;
	}

	return (rect);
}
