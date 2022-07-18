#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_strspn - a function
 *@s: pointer
 *@accept: pointer
 *Return: return a value
 */
unsigned int _strspn(char *s, char *accept)

{
unsigned int a = 0, b = 0;
int i, j, l1, l2;
l1 = strlen(accept);
l2 = strlen(s);
for (i = 0; i <= l2; i++)
{
for (j = 0; j <= l1; j++)
{
if (*(s + i) == *(accept + j))
a = a + 1;
}
if (a == b)
{
break;
}
b = a + 0;
}
return (a);
}
