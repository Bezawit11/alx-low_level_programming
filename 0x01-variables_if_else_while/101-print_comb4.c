#include <stdio.h>

/**
 *main - Entry point
 *printing using putchar function
 */
int main(void)

{
int f, s, t;
for (f = 0; f <= 7; f++)
{
for (s = f + 1; s <= 8; s++)
{
for (t = s + 1; t <= 9; t++)
{
putchar((f % 10) + '0');
putchar((s % 10) + '0');
putchar((t % 10) + '0');
if (f == 7 && s == 8 && t == 9)
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
