#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *
 *
 *
 */
int **alloc_grid(int width, int height)

{
int **chr;
int i, j;
if (width <= 0 || height <= 0)
{
return (0);
}
if (chr == 0)
{
return (0);
}
for (i = 0; i < height; i++)
{
chr[i] = malloc((width * sizeof(int));
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
chr[i][j] = 0;
}
return (chr);
}
