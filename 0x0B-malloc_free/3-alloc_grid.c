#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *alloc_grid - allocates mem for 2d
 *@width: column
 *@height: row
 *Return: returns an int type
 */
int **alloc_grid(int width, int height)

{
int **chr;
int i, j;
if (width <= 0 || height <= 0)
{
return (NULL);
}
chr = malloc(height * sizeof(int));
if (chr == 0)
{
free(chr);
return (NULL);
}
for (i = 0; i < height; i++)
{
chr[i] = malloc(width * sizeof(int));
if (chr[i] == NULL)
{
for (i = 0; i < height; i++)
{
free(chr[i]);
}
free(chr);
return (NULL);
}
for (j = 0; j <= width; j++)
{
chr[i][j] = 0;
}
}
return (chr);
}
