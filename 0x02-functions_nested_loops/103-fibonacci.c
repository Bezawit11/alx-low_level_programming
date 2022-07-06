#include <stdio.h>

/**
 *main - Entry point
 *prints sum
 *Return: 0 (Success)
 */
int main(void)

{
long int c = 1;
long int a = 0;
long int s = 0;
if (c < 4000000)
{
c = c + a;
if (c % 2 == 0)
{
s += c;
}
}
printf("%ld", s);
return (0);
}
