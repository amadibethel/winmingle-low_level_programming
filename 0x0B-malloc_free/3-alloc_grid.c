#include "main.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
    int **grid;
    int r, c;

    if (width <= 0 || height <= 0)
        return (NULL);

    grid = malloc(height * sizeof(int *));
    if (grid == NULL)
        return (NULL);

    for (r = 0; r < height; r++)
    {
        grid[r] = malloc(width * sizeof(int));
        if (grid[r] == NULL)
        {
            while (r--)
                free(grid[r]);
            free(grid);
            return (NULL);
        }

        for (c = 0; c < width; c++)
            grid[r][c] = 0;
    }

    return (grid);
}

