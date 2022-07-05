#include <stdio.h>

/**
 *main - Entry point
 *prints the first 50 Fibonacci numbers
 *Return: 0 (Success)
 */
int main(void)
{
int x;
unsigned int c = 1;
unsigned int a = 0;
for (x = 1; x <= 45; x++)
{
c = c + a;
printf("%d", c);
printf(",");
printf(" ");
a = c - a;
}
for (x = 46; x <= 50; x++)
{
c = c + a;
printf("%u", c);
}
printf("\n");
return (0);
}
