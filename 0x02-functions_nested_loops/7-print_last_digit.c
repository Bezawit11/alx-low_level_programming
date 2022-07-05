#include <stdio.h>
#include "main.h"

/**
 *print_last_digit - prints last digits
 *@n: our iput from where we will extract last digit
 *Return:returns the assigned value
 */
int print_last_digit(int n)

{
n = n % 10;
if (n >= 0)
{
_putchar('0' + n);
return (n);
}
else
{
_putchar('0' - n);
n = -1 * n;
return (n);
}
}
