#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **tap, i, j;

	tap = malloc(sizeof(*tab) * height);
	if (width == 0 || height == 0 || tab == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			tab[i] = malloc(sizeof(**tab) * width);
			if (tap[i] == 0)
			{
				while (i--)
					free(tap[i]);
				free(tap);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				tap[i][j] = 0;
		}
	}
	return (tap);
}
