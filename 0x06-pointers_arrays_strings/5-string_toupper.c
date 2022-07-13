#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *string_toupper - converts to upper case
 *@c: char pointer
 *Return: returns char value
 */
char *string_toupper(char *c)

{
int i, l;
l = strlen(c);
for (i = 0; i <= l; i++)
{
if (c[i] >= 'a' && c[i] <= 'z')
c[i] = c[i] - 32;
}
return (c);
}
