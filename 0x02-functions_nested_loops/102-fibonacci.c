#include <stdio.h>

/**
 *main - Entry point
 *prints the first 50 Fibonacci numbers
 *Return: 0 (Success)
 */
int main(void)
int x;
int f =0;
for (x = 1; x <= 50; x++)
{
f += x;
printf("%d", f);
printf(",");
printf(" ");
}
printf("\n");
return (0);
}
