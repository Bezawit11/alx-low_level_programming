#include <stdio.h>
#include "main.h"

/**
 *flip_bits - returns the number of bits you would need to flip to get from one number to another
 *@n: number before flipping
 *@m: number after
 *Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
  
unsigned int f = 0;  
while(a > 0 || b > 0)
{
int t1 = (n&1);
int t2 = (m&1);
if(t1 != t2)
{
f++;
}
n>>=1;
m>>=1;
}
return (f);
} 
