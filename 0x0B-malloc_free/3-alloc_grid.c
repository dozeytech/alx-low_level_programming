#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - nested loop to make grid
* @width: width input
* @height: height input
* Return: pointer to 2 dim. array
*/
int **alloc_grid(int width, int height)
{
	int **mee;
	int p, q;

	if (width <= 0 || height <= 0)
		return (NULL);

	mee = malloc(sizeof(int *) * height);

	if (mee == NULL)
		return (NULL);

	for (p = 0; p < height; p++)
	{
		mee[p] = malloc(sizeof(int) * width);

		if (mee[p] == NULL)
		{
			for (; p >= 0; p--)
				free(mee[p]);

			free(mee);
			return (NULL);
		}
	}

	for (p = 0; p < height; p++)
	{

		for (q = 0; q < width; q++)
			mee[p][q] = 0;
	}
	return (mee);
}

