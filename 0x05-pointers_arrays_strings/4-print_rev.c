#include <stdio.h>
#include "main.h"

/**
 *print_rev - prints the reverse
 *@s: pointer
 *Return: void
 */
void print_rev(char *s)

{
int a = 1;
while (*s != '\0')
{
a = a + 1;
s++;
}
while (a >= 0)
{
_putchar(*(s + a));
a = a - 1;
}
_putchar('\n');
}
