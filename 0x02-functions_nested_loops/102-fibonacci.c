#include <stdio.h>

/**
 *main - Entry point
 *prints the first 50 Fibonacci numbers
 *Return: 0 (Success)
 */
int main(void)
{
int x;
long int c = 1;
long int a = 0;
for (x = 1; x <= 45; x++)
{
c = c + a;
printf("%ld", c);
printf(",");
printf(" ");
a = c - a;
}
for (x = 46; x <= 50; x++)
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
