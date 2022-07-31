#include <stdio.h>

/**
 *main - prints largest prime factor
 *Return: returns an int
 */
int main(void)

{
unsigned int long n, i, a, b;
unsigned int long d = 612852475143;
for (n = 2; n <= d; n++)
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
if (d % n == 0)
{
b = a + 0;
/*printf("%lu", b);*/
}
}
}
printf("%lu\n", b);
return (0);
}
