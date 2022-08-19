#include <stdio.h>
#include "main.h"

/**
 *set_bit - sets the value of a bit to 1 at a given index
 *@n: decimal number
 *@index: the index, starting from 0 of the bit you want to set
 *Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
  
{
unsigned long int r, *h, k, m;
unsigned int j = 0, i, l = 0;
int p = 1, sum = 0;
h = n;
k = *h;
m = k;
while (k != 0)
{
j = j + 1;
k = k / 2;
}
j--;
if (index > j)
{
return (-1);
}
while (m != 0)
{
r = m % 2;
if (index == 0)
{
r = 1;
}
for (i = 0; i < l ; i++)
{
p = p * 2;
}
sum = sum + (r * p);
m = m / 2;
index--;
j--;
l++;
}
return (sum);
}
