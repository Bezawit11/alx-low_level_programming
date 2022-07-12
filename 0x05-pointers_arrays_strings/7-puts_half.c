#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *puts_half - prints half a string
 *@str: pointer
 *Return: void
 */
void puts_half(char *str)

{
int l, a;
l = strlen(str);
if (l % 2 == 0)
{
for (a = l / 2; a < l; a++)
{
_putchar(*(str + a));
}
}
else
{
for (a = (l + 1) / 2; a <= l; a++)
_putchar(*(str + a));
}
_putchar('\n');
}
