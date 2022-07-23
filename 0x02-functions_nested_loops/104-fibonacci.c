#include <stdio.h>

/**
 *main - Entry point
 *prints 98 Fibonacci numbers
 *Return: 0
 */
int main(void)

{
unsigned long int c = 1, a = 0;
int i;
for (i = 0; i <= 97; i++)
{
c = c + a;
printf("%lu", c);
a = c - a;
if (i != 97)
{
printf(",");
printf(" ");
}
}
printf("\n");
return (0);
}
