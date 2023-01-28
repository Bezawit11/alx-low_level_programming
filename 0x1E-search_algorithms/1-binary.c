#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 *binary_search - Binary search function
 *
 *
 */
int binary_search(int *array, size_t size, int value)
{
int a;
if (array == NULL)
return (-1);
a = search(array, 0, size - 1, value);
return (a);
}

/**
 *
 *
 *
 */
int search(int *array, size_t low, size_t high, int value)
{
size_t a = (high + low) / 2, r;
if (low == high)
return (-1);
if (array[a] == value)
return (a);
else if (array[a] > value)
{
r = search(array, low, a - 1, value);
}
else
{
r = search(array, a + 1, high, value);
}
return (r);
}
