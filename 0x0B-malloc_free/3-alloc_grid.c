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
chr = malloc(height * sizeof(int));
if (width <= 0 || height <= 0 || chr == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
chr[i] = malloc(width * sizeof(int));
if (chr[i] == NULL)
{
for (i = 0; i < height; i++)
{
free (chr[i]);
}
return (NULL);
}
for (j = 0; j <= width; j++)
{
chr[i][j] = 0;
}
}
return (chr);
}
