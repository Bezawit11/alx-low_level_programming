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
for (i = 1; i <= 98; i++)
{
c = c + a;
printf("%lu", c);
if (i == 98)
continue;
printf(",");
printf(" ");
a = c - a;
}
printf("\n");
return (0);
}
