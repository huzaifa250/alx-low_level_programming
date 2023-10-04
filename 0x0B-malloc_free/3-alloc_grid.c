#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **tab;
	int i, j;

	if (height <= 0 || width <= 0 || tab == 0)
		return (NULL);

	tab = (int **) malloc(sizeof(int *) * height);

	if (tab == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		tab[i] = (int *) malloc(sizeof(int) * width);
		if (tab[i] == NULL)
		{
			free(tab);
			for (j = 0; j <= i; j++)
				free(tab[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			tab[i][j] = 0;
		}
	}
	return (tab);
}
