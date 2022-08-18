#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 *
 *
 *
 */
unsigned int binary_to_uint(const char *b)

{
unsigned int i, j, p = 1, d, dec = 0;
const char *c;
if (b == NULL)
return (0);
c = b;
while (*b != '\0')
{
i = i + 1;
b++;
}
i = i - 1;
while (*c != '\0')
{
j = i;
d = *c - '0';
if (d == 1 || d == 0)
{
while (j > 0)
{
p = p * 2;
j--;
}
dec = dec + (d * p);
}
else
{
return (0);
}
c++;
i--;
}
return (dec);
}
