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
unsigned long int r, k, m, j = 0, p = 1, sum = 0;
unsigned int i, l = 0;
if (n == NULL)
return (-1);
k = *n;
m = k;
if (k == 0)
{
for (i = 0; i < index ; i++)
{
p = p * 2;
}
sum = sum + (1 * p);
}
while (k != 0)
{
j = j + 1;
k = k / 2;
}
j--;
if (index > 63)
return (-1);
if (index > j && index <= 63)
{
for (i = 0; i < index ; i++)
{
p = p * 2;
}
sum = sum + (1 *p);
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
sum = sum + (r *p);
m = m / 2;
index--;
j--;
l++;
p = 1;
}
*n = sum;
return (1);
}
