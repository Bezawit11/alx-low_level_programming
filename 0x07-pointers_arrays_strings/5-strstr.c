#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_strstr - a function
 *@haystack: pointer
 *@needle: pointer
 *Return: returnc char
 */
char *_strstr(char *haystack, char *needle)

{
int i, j, l1, l2, a, z, b = 0;
l1 = strlen(needle);
l2 = strlen(haystack);
for (i = b; i < l1; i++)
{
for (j = 0; j < l2; j++)
{
if (needle[i] == haystack[j])
a = j;
for (z = 1; z < l1; z++)
{
if (needle[z] != haystack[z + j])
break;
}
if (z == l1)
{
a = j;
return (haystack + a);
}
}
b = 0;
}
return (NULL);
}
