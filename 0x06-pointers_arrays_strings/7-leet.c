#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *leet - encoding
 *@c: character pointer
 *Return: returns a value
 */
char *leet(char *c)

{
int d, i;
char s[] = "aeotlAEOTL";
char C[] = "4307143071";
for (i = 0; c[i] != '\0'; i++)
{
for (d = 0; d < 10; d++)
{
if (c[i] == s[d])
{
c[i] = C[d];
break;
}
}
}
return (c);
}
