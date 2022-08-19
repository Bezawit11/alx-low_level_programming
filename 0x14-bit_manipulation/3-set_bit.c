#include <stdio.h>
#include "main.h"

/**
 *
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
  
{
unsigned long int r, h;
unsigned int j = 0;
h = *n;
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
j = j - index;
while (n != 0)
{
r = n % 2;
if (index == 0)
{
r = 1;
}
n = n / 2;
index--;
}
