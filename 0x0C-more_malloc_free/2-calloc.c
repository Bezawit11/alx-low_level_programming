#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *_calloc - allocates a specific amount of memory
 *@nmemb: number of elements
 *@size: number of bytes
 *Return: returns a value
 */
void *_calloc(unsigned int nmemb, unsigned int size)

{
char *array;
unsigned int i;
if (nmemb = 0 || size = 0)
return (NULL);
array = malloc(nmemb * size);
if (array == NULL)
return (NULL);
for (i = 0; i < nemb; i++)
{
array[i] = 0;
}
return (array);
}
