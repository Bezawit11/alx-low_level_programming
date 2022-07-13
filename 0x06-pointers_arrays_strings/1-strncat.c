#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_strncat - a function
 *@dest: pointer
 *@src: pointer
 *Return: returns a pointer
 */
char *_strncat(char *dest, char *src, int n)

{
int l, i;
l = strlen(dest);
for (i = 0; i < n; i++)
{
*(dest + l + i) = *(src + i);
}
return (dest);
}
