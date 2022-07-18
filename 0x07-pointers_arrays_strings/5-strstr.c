#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *
 *
 *
 *
 */
char *_strstr(char *haystack, char *needle)

{
int i, j, l1, l2, n, m = 0;
int k = 0;
char *r;
l1 = strlen(needle);
l2 = strlen(haystack);
for (i = k; i < l1; i++)
{
for (j = m; j < l2; j++)
{
if (*(needle + i) == *(haystack + j))
{
n = j;
break;
}
}
if (*(needle + i + 1) != *(haystack + j + 1))
m = n + 2;
k = 0;
}
if (j == l2)
r = NULL;
else
r = (haystack + m + 1);
return (r);
}
