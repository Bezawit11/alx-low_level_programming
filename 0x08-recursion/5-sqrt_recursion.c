#include <stdio.h>
#include "main.h"

/**
 *_sqrt_recursion - a function
 *@n: integer
 *Return: returns integer
 */
int _sqrt_recursion(int n)
{
return (sqroot(n, 0));
}

/**
 *square - find square root
 *@n: int to find square root
 *@val: square root
 *Return: int
 */
int sqroot(int n, int x)

{
if (x *x == n)
return (x);
else if (x *x < n)
return  (sqroot(n, x + 1));
else
return (-1);
}
