#include <stdio.h>
#include "main.h"

/**
 *print_rev - prints the reverse
 *@s: pointer
 *Return: void
 */
void print_rev(char *s)

{
int i = 0;
while (s[i])
i++;
while (i--)
{
_putchar(s[i]);
}
_putchar('\n');
}