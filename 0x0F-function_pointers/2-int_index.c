#include <stdio.h>
#include "function_pointers.h"

/**
 *int_index - searches for an integer
 *@array: pointer to an array
 *@size: length of array
 *@cmp: function pointer
 *Return: returns an integer value
 */
int int_index(int *array, int size, int (*cmp)(int))

{
int i;
if (size <= 0 || array == NULL || cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
cmp(array[i]);
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
