#include <stdio.h>
#include <string.h>
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
int i, a;
for (i = 0; i <= n; i++) 
{
/*if (i < n)*/
*(dest + i) = *(src + i);
/*else 
dest[n] = '\0';
}*/
}
return (dest);
}
