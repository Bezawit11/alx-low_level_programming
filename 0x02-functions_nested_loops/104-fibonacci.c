#include <stdio.h>

/**
 *main - Entry point
 *prints 98 Fibonacci numbers
 *Return: 0
 */
int main(void)

{
unsigned long int c = 1, a = 0;
unsigned long int i;
for (i = 1; i <= 88; i++)
{
c = c + a;
if (c <= 420196140727489673)
{
printf("%lu", c);
}
if (i == 88)
continue;
printf(",");
printf(" ");
a = c - a;
}
printf("\n");
return (0);
}
