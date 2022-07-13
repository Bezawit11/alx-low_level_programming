#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_strcat -
 *@dest:
 *@src:
 *Return:
 */
char *_strcat(char *dest, char *src)

{
int i, l;
l = strlen(src);
for (i = 0; i < l; i++)
{
*(dest + i + 6) = *(src + i);
}
return(dest);
}
