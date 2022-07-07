#include <stdio.h>
#include "main.h"

/**
 *more_numbers - prints 10 times
 *Return: void
 */
void more_numbers(void)

{
int i = 0;
int n;
while (i < 10)
{
for (n = 48; n <= 57; n++)
{
_putchar(n);
}
for (n = 58; n <= 62; n++)
{
_putchar(49);
_putchar(n - 10);
}
i++;
}
}
