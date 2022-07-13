#include <stdio.h>
#include "main.h"

/**
 *_strncpy - copies a string
 *@dest: pointer
 *@src: pointer
 *n: number of elements
 *Return: returns a value
 */
char *_strncpy(char *dest, char *src, int n)

{
int i;
for (i = 0; i <= n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
