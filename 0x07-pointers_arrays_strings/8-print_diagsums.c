#include <stdio.h>
#include "main.h"

/**
 *print_diagsums - adds diagonals of matrix
 *@a: a pointer to the matrix
 *@size: the size of the array
 *Return: void
 */
void print_diagsums(int *a, int size)

{
int sum1 = 0, sum2 = 0;
int s, d, b, j, i, h;
s = size * size;
j = size + 1;
h = size - 1;
for (i = 0; i < s; i += j)
{
d = *(a + i);
sum1 = sum1 + d;
}
for (i = h; i < s - h; i += h)
{
b = *(a + i);
sum2 = sum2 + b;
}
printf("%d, %d\n", sum1, sum2);
}
