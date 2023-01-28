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
a = search(array, 0, size - 1, value);
return a;
}

/**
 *
 *
 *
 */
int search(int *array, size_t low, size_t high, int value)
{
size_t a = (high + low) / 2;
if (low == high){
return -1;
}
if (array[a] == value){
return a;
}
else if (array[a] > value){
search(array, low, a - 1, value);
}
else{
search(array, a + 1, high, value);
}
}
