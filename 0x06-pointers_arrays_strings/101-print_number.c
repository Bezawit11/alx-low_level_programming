#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 *print_number - prints integer
 *@n: input
 *Return: void
 */
void print_number(int n)

{
int a = 1;
int h, d, c;
int i = 0;
d = n + 0;
if (n < 10 && n > 0)
{
_putchar(n + '0');
}
else 
{
if (n < 0)
{
_putchar(45);
n = n * -1;
}
while (d != 0)
{
i++;
d = d / 10;
}
i = i - 1;
for (c = 0; c < i; c++)
{
a = a * 10;
}
_putchar((n / a) + '0');
for (h = 0; h <= i - 1; h++)
{
a = a / 10;
_putchar(((n / a) % 10) + '0');
}
}
}
