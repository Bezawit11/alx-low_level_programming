#include <stdio.h>

/**
 *main - Entry point
 *prints 98 Fibonacci numbers
 *Return: 0
 */
int main(void)

{
long int c = 1, a = 0;
long int i;
for (i = 1; i <= 92; i++)
{
c = c + a;
printf("%ld", c);
printf(",");
printf(" ");
a = c - a;
}
printf("\n");
return (0);
}
