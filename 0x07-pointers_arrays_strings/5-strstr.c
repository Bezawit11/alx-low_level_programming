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
int i, j, k, l1, l2, m = 0;
char *r;
l1 = strlen(needle);
l2 = strlen(haystack);
for (i = 0; i < l1; i++)
{
for (j = m; j < l2 && i < l1; j++)
{
if (*(needle + i) == *(haystack + j))
i++;
else
break;
}
if (i == l1 - 1)
{
k = j;
break;
}
if (j == l2)
break;
i = 0;
m = j;
}
if (j == l2)
r = NULL;
else
r = (haystack + k - l1);
return (r);
}
