#include <stdio.h>

/**
 *
 *  
 *
 */
int main(void)

{
unsigned long int n, i, a, b;
for (n = 2; n <= 612852475143; n++)
{
for (i = 2; i <= n; i++)
{
if (n % i == 0 && n != i)
{
break;
}
if (n % i != 0)
{
continue;
}
a = n;
if (612852475143 % a == 0)
b = a;
}
}
printf("%lu\n", b);
return (0);
}
