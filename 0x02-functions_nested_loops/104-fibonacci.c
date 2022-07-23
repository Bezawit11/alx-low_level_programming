#include <stdio.h>

/**
 *main - Entry point
 *prints 98 Fibonacci numbers
 *Return: 0
 */
int main(void)

{
long int c = 1, a = 0;
int i;
for (i = 0; i < 98; i++)
{
c = c + a;
printf("%ld", c);
a = c - a;
printf(",");
printf(" ");
}
printf("\n");
return (0);
}
