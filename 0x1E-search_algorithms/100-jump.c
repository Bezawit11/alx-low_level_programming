#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 *jump_search - Jump search functions
 *@array: array to be searched
 *@size: size of array
 *@value: value to find
 *Return: returns the value if found else returns -1
 */
int jump_search(int *array, size_t size, int value)

{
size_t j = sqrt(size), i, k;
for (i = 0; i < size; i = i + j)
{
if (array[i] >= value)
{
printf("Value found between indexes [%ld] and [%ld]\n", i - j, i);
for (k = i - j; k <= i; k++){
printf("Value checked array[%ld] = [%d]\n", k, array[k]);
if (array[k] == value)
return (k);
}
}
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
}
return -1;
}
