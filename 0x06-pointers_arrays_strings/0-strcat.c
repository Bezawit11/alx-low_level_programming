#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_strcat - concatenates strings
 *@dest: pointer
 *@src: pointer
 *Return: returns char
 */
char *_strcat(char *dest, char *src)

{
int i, l1, l2;
l1 = strlen(src);
l2 = strlen(dest);
for (i = 0; i < l1; i++)
{
*(dest + l2 + i) = *(src + i);
}
return(dest);
}
