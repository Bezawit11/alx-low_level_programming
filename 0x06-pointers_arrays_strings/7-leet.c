#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *
 *
 *
 */
char *leet(char *c)

{
int d, i;
d = strlen(c);
for (i = 0; i <= d; i++)
{
if (c[i] == 'e' || c[i] == 'a' || c[i] == 'o' || c[i] == 'l' || c[i] == 't')/* || c[i] == 'E' || c[i] == 'A' || c[i] == 'O' || c[i] == 'L' || c[i] == 'T')*/
c[i] = c[i] - 32;
else if (c[i] == 'E')
c[i] = c[i] - 18;
}
/*
for (i = 0; i <= l; i++)
{
c[i] = c[i] - 18;
}*/
return (c);
}
