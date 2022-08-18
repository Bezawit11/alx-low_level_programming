#include <stdio.h>
#include "main.h"

/**
 *print_binary - prints the binary representation of a number
 *@n: decimal to be converted
 *Return: void
 */
void print_binary(unsigned long int n)

{
unsigned long int r;
char a;
if (n == 1)
r = 1;
if (n > 0)
{
r = n % 2;
print_binary(n / 2);
a = r + '0';
_putchar(a);
}
}
