#include <stdio.h>

/**
 *main - Entry point
 *prints sum of numbers that are multiples of 3 or 5
 *Return: 0 (Success)
 */
int main(void)

{
int i;
int a = 0, b = 0;
for (i = 3; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
a += i;
}
}
printf("%d\n", a);
return (0);
}
