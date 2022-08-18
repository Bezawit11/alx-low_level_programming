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
unsigned int i, d, dec = 0;
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
d = *c - '0';
if (d == 1 || d == 0)
{
dec = dec + (d * (2 , i));
}
else
{
return (0);
}
c++;
}
return (dec);
}
