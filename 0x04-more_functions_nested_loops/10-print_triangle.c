#include <stdio.h>
#include "main.h"

/**
 *print_triangle - prints a triangle
 *@size: input
 *Return: 0
 */
void print_triangle(int size)

{
int a = 1, b;
int i, j;
int n = 1;
b = size - 1;
while (n <= size)
{
for (i = 0; i < b; i++)
{
_putchar(' ');
}
b = b - 1;
for (j = 0; j < a; j++)
{
_putchar(35);
}
_putchar('\n');
a = a + 1;
n++;
}
if (size <= 0)
{
_putchar('\n');
}
}
