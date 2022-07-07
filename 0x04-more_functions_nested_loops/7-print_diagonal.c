#include <stdio.h>
#include "main.h"

/**
 *print_diagonal - draws a diagonal line
 *@n: input
 *Return: void
 */
void print_diagonal(int n)

{
int i;
int j;
if (n > 0)
{
for (i = 1; i <= n; i++)
{
_putchar(92);
_putchar('\n');
for (j = 1 ; j <= i; j++)
{
if (n != 1 && i != n)
_putchar(32);
}
}
}
else
{
_putchar('\n');
}
}
