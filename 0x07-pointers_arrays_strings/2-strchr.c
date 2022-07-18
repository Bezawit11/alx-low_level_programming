#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_strchr - a function
 *@s: pointer
 *@: char
 *Return: returns a value
 */
char *_strchr(char *s, char c)

{
int i, l;
char b;
char *r;
l = strlen(s);
for (i = 0; i <= l; i++)
{
b = *(s + i);
if (b == c)
break;
}
r = (s + i + 0);
return (r);
}
