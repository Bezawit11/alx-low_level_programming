#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 *get_bit -  returns the value of a bit at a given index.
 *@n: decimal to be converted
 *@index: index, starting from 0 of the bit you want to get
 *Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)

{
unsigned long int r, h;
unsigned int j = 0;
h = n;
while (h != 0)
{
j = j + 1;
h = h / 2;
}
if (index > j)
{
return (-1);
}
j--;
j = j - index;
while (n != 0)
{
r = n % 2;
if (j == 0)
{
return (r);
}
n = n / 2;
j--;
}
return (r);
}
