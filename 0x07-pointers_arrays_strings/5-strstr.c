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
int i, j, l1, l2, m = 0;
char *r;
l1 = strlen(needle);
l2 = strlen(haystack);
for (i = 0; i < l1; i++)
{
for (j = m; j < l2; j++)
{
if (*(needle + i) == *(haystack + j))
{
break;
}
}
m = j;
if (*(needle + i + 1) != *(haystack + j + 1))
{
m = j;
i = 0;
}
}
if (j == l2)
r = NULL;
else
r = (haystack + m - l1 + 1);
return (r);
}
