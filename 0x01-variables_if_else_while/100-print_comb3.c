#include <stdio.h>

/**
 *main - Entry point
 *printing using putchar function
 *Return: Always 0 (Success)
 */
int main(void)

{
int n;
int m;
for (n = 0; n <= 9; n++)
{
for (m = 1; m <= 9; m++)
{
if (n < m)
{
putchar((n % 10) + '0');
putchar((m % 10) + '0');
if (n < 8)
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
