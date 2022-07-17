#include <stdio.h>

/**
 *
 *
 */
int main(void)

{
int n, i, a;
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
a = n;
}
if (1231952 % a == 0)
{
printf("%d", a);
printf(",");
}
}
printf("\n");
return (0);
}
