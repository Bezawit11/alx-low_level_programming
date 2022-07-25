#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *create_array - creates an array of specific char
 *@size: size of array
 *@c: the initializer
 *Return: returns a pointer
 */
char *create_array(unsigned int size, char c)

{
int i;
char *chr;
chr = malloc((size) * sizeof(char));
if (size == 0 || chr == '\0')
{
return (0);
}
else
{
for (i = 0; i < size; i++)
chr[i] = c;
return (chr);
}
}
