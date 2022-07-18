#include <stdio.h>
#include "main.h"

/**
 *
 *
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)

{
int unsigned i;
for (i = 0; i <= n; i++)
{
*(dest + i) = *(src + i);
}
return (dest)
}
