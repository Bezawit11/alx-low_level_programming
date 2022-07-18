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
unsigned int a = 0;
int i, j, l1, l2, b = 0;
l1 = strlen(accept);
l2 = strlen(s);
for (i = 0; i <= l1; i++)
{
for (j = 0; j <= l2; j++)
{
if (*(s + i) == *(accept + j))
a = a + 1;
else
b = b + 1;
}
if (b == l1)
break;
b = 0;
}
return (a);
}
