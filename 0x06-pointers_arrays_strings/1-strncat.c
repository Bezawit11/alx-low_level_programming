#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *
 *
 *
 *
 */
char *_strncat(char *dest, char *src, int n)

{
int l2, i;
l2 = strlen(dest);
for (i = 0; i < n; i++)
{
*(dest + l2 + i) = *(src + i);
}
return (dest);
}
