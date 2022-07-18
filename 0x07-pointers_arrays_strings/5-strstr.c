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
int i, j, l1, l2, n, m = 0;
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
n = j;
if (*(needle + i + 1) != *(haystack + n + 1))
{
m = n + 1;
i = 0;
}
else
{
m = j - l1 + 1;
}
}
if (j == l2 || m < 0)
r = NULL;
else
r = (haystack + m + 0);
return (r);
}
