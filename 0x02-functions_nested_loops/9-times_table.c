#include <stdio.h>
#include "main.h"

/**
 *times_table - a function that prints a table
 *Return: void
 */
void times_table(void)

{
int i, n, f;
for (i = 0; i <= 9; i++)
{
for (n = 0; n <= 9; n++)
{
f = i * n;
if ((i <= 1 && n != 9) || (i == 2 && n <= 3) || (i == 3 && n <= 2) || (n == 0) || (i == 4 && n <= 1))
{
printf("%d", f);
printf(",");
printf(" ");
printf(" ");
}
else if (n == 9)
{
printf("%d\n", f);
}
else
{
printf("%d", f);
printf(",");
printf(" ");
}
}
}
}
