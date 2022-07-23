#include <stdio.h>

/**
 *main - Entry point
 *printing using putchar function
 *Return: Always 0 (Success)
 */
int main(void)

{
int f, s, t, z;
for (f = 0; f <= 9; f++)
{
for (s = 0; f <= 8; s++)
{	
for (t = 0; t <= 9; t++)
{
for (z = 1; z <= 9; z++)
{
if (s >= z && f == t)
continue;
putchar((f % 10) + '0');
putchar((s % 10) + '0');
putchar(' ');
putchar((t % 10) + '0');
putchar((z % 10) + '0');
putchar(',');
if (f != 9 && s != 8)
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
