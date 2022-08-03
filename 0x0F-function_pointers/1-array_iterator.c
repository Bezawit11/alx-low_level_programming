#include <stdio.h>
#include "function_pointers.h"

/**
 *array_iterator - executes a function given as a parameter
 *@array: array pointer
 *@size : length of array
 *@action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))

{
size_t i;
if (action != NULL && array != NULL)
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
