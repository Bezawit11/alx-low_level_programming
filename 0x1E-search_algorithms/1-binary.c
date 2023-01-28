#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 *binary_search - Binary search function
 *@array: a pointer to the first element of the array to search in
 *@size: the number of elements in array
 *@value: the value to search for
 *Return: returns index if value is found, otherwise returns -1
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
 *search - recursive binary search
 *@low: lowest index
 *@high: highest index
 *@value: the value to search for
 *Return: returns the value if found else returns -1
 */
int search(int *array, size_t low, size_t high, int value)
{
size_t a = (high + low) / 2, r, j;
printf("Searching in array: ");
for (j = low; j < high; j++){
printf("%d, ", array[j]);
}
printf("%d \n", array[high]);
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
