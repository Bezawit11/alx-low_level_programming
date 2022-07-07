#include <stdio.h>
#include "main.h"

/**
 *print_square - prints squares
 *@size: input
 *Return: void
 */
void print_square(int size)

{
int i;
int j = 0;
while (j <= size)
{
for (i = 0; i < size; i++)
{
if (size >= 0)
_putchar(35);
else
_putchar('\n');
}
_putchar('\n');
j++;
}
}
