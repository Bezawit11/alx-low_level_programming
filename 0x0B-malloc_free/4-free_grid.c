#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *free_grid - alloc_grid
 *@grid: double pointer
 *@height: array
 *Return: void
 */
void free_grid(int **grid, int height)

{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free (grid);
}/*
height--;
while (height >= 0)
{
free(*(grid + height));
height--;
}
free(grid);
}*/
