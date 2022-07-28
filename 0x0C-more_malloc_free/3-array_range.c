#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *array_range - creates an array
 *@min: min value
 *@max: max value
 *Return: returns an int
 */
int *array_range(int min, int max)

{
int *array;
int i;
if (min > max)
{
return (NULL);
}
if (min < 0 || max < 0)
{
return (NULL);
}
array = malloc(sizeof(int) * (max - min + 1));
if (array == NULL)
{
return (NULL);
}
for (i = 0; min <= max; i++)
{
array[i] = min;
min++;
}
return (array);
}
