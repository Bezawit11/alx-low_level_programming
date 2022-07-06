#include <stdio.h>

/**
 *main - Entry point
 *prints 98 Fibonacci numbers
 *Return: 0
 */
int main(void)

{
long int c = 1, a = 0;
while (c <= 1100087778366101931)
{
c = c + a;
printf("%ld", c);
a = c - a;
if (c == 1100087778366101931)
continue;
printf(",");
printf(" ");
}
printf("\n");
return (0);
}
