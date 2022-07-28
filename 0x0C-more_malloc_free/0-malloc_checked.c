#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *malloc_checked - function
 *@b: integer
 *Return: returns void
 */
void *malloc_checked(unsigned int b)

{
unsigned int *c = malloc(b);
unsigned int n = 98;
if (c == NULL)
return (n);
else
return (c);
}
