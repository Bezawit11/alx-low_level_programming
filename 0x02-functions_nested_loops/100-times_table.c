#include <stdio.h>
#include "main.h"

/**
 *print_times_table - a function that prints a table
 *@n: int
 *Return: void
 */
void print_times_table(int n)

{
int i, j, f;
if (n <= 15 || n > 0)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
f = i * j;
if ((i <= 1 && j != n) || (i == 2 && j <= 3) || (i == 3 && j <= 2) || (j == 0) || (i == 4 && j <= 1))
{
printf("%d", f);
if (i != n && j != n)
printf(",");
printf(" ");
printf(" ");
printf(" ");
}
else if (j == n)
{
printf("%d\n", f);
}
else if (j >= 11 && i >= 9)
{
printf("%d", f);
printf(",");
printf(" ");
}
else
{
printf("%d", f);
printf(",");
printf(" ");
printf(" ");
}
}
}
}
}
