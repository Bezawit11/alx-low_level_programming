#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_strcmp - compares a string
 *@s1: character pointer
 *@s2: character pointer
 *Return: return an integer
 */
int _strcmp(char *s1, char *s2)

{
int l, i, r, a, b;
l = strlen (s1);
for (i = 0; i < l; i++)
{
if (*(s1 + i) != *(s2 + i))
{
break;
}
}
a = s1[i];
b = s2[i];
r = a - b;
return (r);
}
