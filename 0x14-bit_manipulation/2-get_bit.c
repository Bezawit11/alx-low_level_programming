#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 *print_binary - prints the binary representation of a number
 *@n: decimal to be converted
 *Return: void
 */
int get_bit(unsigned long int n, unsigned int index)

{
unsigned long int r;
int b;
char a;
if (n == 1)
r = 1;
if (n > 0)
{
r = n % 2;
get_bit(n / 2, index - 1);
if (index == 0)
{
b = r;
}
a = r + '0';
_putchar(a);
}
return (b);
}
