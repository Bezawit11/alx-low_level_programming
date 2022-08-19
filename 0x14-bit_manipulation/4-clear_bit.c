#include <stdio.h>
#include "main.h"

/**
 *clear_bit - sets the value of a bit to 0 at a given index
 *@n: decimal number
 *@index: index, starting from 0 of the bit you want to set
 *Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)

{
unsigned long int r, *h, k, m, j = 0, i, l = 0;
unsigned long int p = 1, sum = 0;
if (n == NULL)
return (-1);
h = n;
k = *h;
m = k;
if (k == 0)
{
*n = 0;
return (1);
}
while (k != 0)
{
j = j + 1;
k = k / 2;
}
j--;
if (index > j)
return (-1);
while (m != 0)
{
r = m % 2;
if (index == 0)
{
r = 0;
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
p = 1;
}
*n = sum;
return (1);
}
