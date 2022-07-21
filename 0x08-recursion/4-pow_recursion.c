#include <stdio.h>
#include "main.h"

/**
 *_pow_recursion - a function
 *@x: integer
 *@y: integer
 *Return: returns a value
 */
int _pow_recursion(int x, int y)

{
int n = x;
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
if (y > 1)
{
n = n *_pow_recursion(x, y - 1);
}
return (n);
}
