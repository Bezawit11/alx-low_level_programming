#include <stdio.h>

/**
 *
 *
 */
int main(void)

{
int n, i, p;
for (n = 2; n <= 1231952; n++)
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
p = n;
if (1231952 % p == 0)
{
printf("%d", p);
printf(",");
}
}
}
return (0);
}
