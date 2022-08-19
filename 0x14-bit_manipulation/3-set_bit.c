#include <stdio.h>
#include "main.h"

/**
 *
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
  
{
unsigned long int r, h, k;
unsigned int j = 0;
int p = 1, sum = 0;
h = *n;
k = h;
while (h != 0)
{
j = j + 1;
h = h / 2;
}
j--;
if (index > j)
{
return (-1);
}
while (k != 0)
{
r = k % 2;
if (index == 0)
{
r = 1;
}
for (j = j + 0; j > 0; j--)
{
p = p * 2;
}
sum = sum + (r * p);
k = k / 2;
index--;
j--;
}
return (sum);
}
