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
unsigned long int r;
int b;
if (n == 1)
r = 1;
if (n > 0)
{
r = n % 2;
get_bit(n / 2, index);
if (index != 0)
{
index = index - 1;
}
if (index == 1)
{
b = r;
return (b);
}
if (index == 0)
{
b = r;
return (b);
}
}
return (-1);
}
