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
unsigned int i = 0, j, p = 1, dec = 0;
const char *c;
if (b == NULL)
return (0);
c = b;
while (*b != '\0')
{
if (*b != '0' && *b != '1')
return (0);
i = i + 1;
b++;
}
i = i - 1;
if (i == 0)
{
if (*c == '0')
return (0);
if (*c == '1')
return (1);
}
while (*c != '\0')
{
j = i;
if (*c == '1')
{
while (j > 0)
{
p = p * 2;
j--;
}
dec = dec + (1 * p);
}
else if (*c == '0')
{
dec = dec + (0);
}
else
{
return (0);
}
c++;
i--;
p = 1;
}
return (dec);
}
