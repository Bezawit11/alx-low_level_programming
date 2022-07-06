#include <stdio.h>

/**
 *main - Entry point
 *prints sum
 *Return: 0 (Success)
 */
int main(void)

{
long int c;
long int a = 0;
long int s = 0;
while (c < 4000000)
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
