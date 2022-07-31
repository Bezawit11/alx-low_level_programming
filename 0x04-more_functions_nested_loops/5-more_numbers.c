#include <stdio.h>
#include "main.h"

/**
 *more_numbers - prints 10 times
 *Return: void
 */
void more_numbers(void)

{
int j, i = 0;
int n;
while (i < 10)
{
for (n = 48; n <= 62; n++)
{
j = n;
if (n >= 58)
{
_putchar(49);
n = n - 10;
}
_putchar(n);
if (j >= 58)
n = n + 10;
}
_putchar('\n');
i++;
}
}
