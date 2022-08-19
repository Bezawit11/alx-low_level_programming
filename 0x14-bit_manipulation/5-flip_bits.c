#include <stdio.h>
#include "main.h"

/**
 *flip_bits - flip bits to get from one number to another
 *@n: number before flipping
 *@m: number after
 *Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
unsigned int count = 0;
unsigned long int h = n ^ m;
while (h > 0)
{
count++;
h &= (h - 1);
}
return (count);
}
