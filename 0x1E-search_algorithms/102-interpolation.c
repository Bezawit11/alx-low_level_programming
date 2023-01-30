#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 *
 *
 *
 */
int interpolation_search(int *array, size_t size, int value)
{
int a;
if (array == NULL)
return -1;
a = i_Search(array, 0, size - 1, value);
return a;
}

/**
 *i_Search - 
 *
 *
 */
int i_Search(int *array, int low, int high, int x)
{
int pos;
if (low <= high && x >= array[low] && x <= array[high])
{
pos = low + (((double)(high - low) / (array[high] - array[low])) * (x - array[low]));
if (array[pos] == x)
{
printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
return pos;
}
if (array[pos] < x)
{
printf("Value checked array[%d] = [%d]\n",pos, array[pos]);
return i_Search(array, pos + 1, high, x);
}
if (array[pos] > x)
{
printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
return i_Search(array, low, pos - 1, x);}
}
printf("Value checked array[%d] is out of range\n", array[pos]);
return -1;
}
