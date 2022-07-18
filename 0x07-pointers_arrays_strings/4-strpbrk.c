#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_strpbrk - a function
 *@s: pointer
 *@accept: pointer
 *Return: returns a value
 */
char *_strpbrk(char *s, char *accept)

{
int i, j, l1, l2;
char *r;
l1 = strlen(accept);
l2 = strlen(s);
for (i = 0; i < l2; i++)
{
for (j = 0; j < l1; j++)
{
if (*(s + i) == *(accept + j))
break;
}
if (*(s + i) == *(accept + j))
break;
}
if (i > l2)
r = NULL;
else
r = (s + i + 0);
return (r);
}
