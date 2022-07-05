#include <stdio.h>

/**
 *main - Entry point
 *prints the first 50 Fibonacci numbers
 *Return: 0 (Success)
 */
int main(void)
{
int x;
int c = 1;
int a = 0;
for (x = 1; x <= 50; x++)
{
c = c + a;
printf("%d", c);
printf(",");
printf(" ");
a = c - a;
}
printf("\n");
return (0);
}
