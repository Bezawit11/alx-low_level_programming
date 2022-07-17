#include <stdio.h>

/**
 *
 *
 */
int main(void)

{
long int n, i, a;
for (n = 2; n <= 1231; n++)
{
for (i = 2; i <= n; i++)
{
if (n % i == 0 && n != i)
{
break;
}
if (n % i != 0)
continue;
a = n;
if (1231 % a == 0)
{
printf("%ld", a);
printf(",");
}
}
}
printf("\n");
return (0);
}
