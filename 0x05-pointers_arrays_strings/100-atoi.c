#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *
 *
 *
 */
int _atoi(char *s)

{
int l, i, a, m;
int n = 0;
int t = 1;
l = strlen(s);
for (i = 0; i <= l; i++)
{
if (s[i] == '-' && (s[i + 1] >= '0' && s[i + 1] <= '9'))
t = t * -1;
if (s[i] >= '0' && s[i] <= '9') 
{
n = n * 10;
a = s[i] - '0';
n = n + a;
if (s[i + 1] == ' ')
break;
}
}
m = t * n;
return (m);
}
