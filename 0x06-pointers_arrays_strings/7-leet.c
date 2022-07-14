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
int l, i;
l = strlen(c);
for (i = 0; i <= l; i++)
{
if (c[i] == 'e' && c[i] == 'E')
c[i] = 51;
if (c[i] == 'a' && c[i] == 'A')
c[i] = 52;
if (c[i] == 'o' && c[i] == 'O')
c[i] = 48;
if (c[i] == 't' && c[i] == 'T')
c[i] = 55;
if (c[i] == 'l' && c[i] == 'L')
c[i] = 49;
}
return (c);
}
