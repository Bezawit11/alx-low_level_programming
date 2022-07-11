#include <stdio.h>
#include "main.h"

/**
 *print_rev - prints the reverse
 *@s: pointer
 *Return: void
 */
void print_rev(char *s)

{
int a = 63;
while (a >= 0)
{
_putchar(*(s + a));
a = a - 1;
}
_putchar('\n');
}
