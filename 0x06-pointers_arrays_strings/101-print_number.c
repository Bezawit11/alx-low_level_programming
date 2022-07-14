#include <stdio.h>
#include "main.h"

/**
 *print_number - prints integer
 *@n: input
 *Return: void
 */
void print_number(int n)

{
if (n < 10)
{
_putchar(n + '0');
}
else
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
}
