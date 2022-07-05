#include <stdio.h>
#include "main.h"

/**
 *print_to_98 - prints all natural numbers upto 98
 *@n: parameter
 */
void print_to_98(int n)

{
int x;
if (n == 98)
{
printf("98");
}
else
{
for (x = n; x <= 98; x++)
{
printf("%d", x);
if (x == 98)
continue;
printf(",");
printf(" ");
}
for (x = n; x >= 98; --x)
{
printf("%d", x);
if (x == 98)
continue;
printf(",");
printf(" ");
}
}
printf("\n");
}
