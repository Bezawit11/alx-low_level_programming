#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 *linear_search - linear search function
 *@array: a pointer to the first element of the array to search in
 *@size: the number of elements in array
 *@value: the value to search for
 *Return: returns index if value is found, otherwise returns -1
 */
int linear_search(int *array, size_t size, int value)
{
size_t i;
for (i = 0; i < size; i++)
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);
if (array[i] == value)
return i;
}
return -1;
}
