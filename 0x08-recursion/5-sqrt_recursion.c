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
 *sqroot - a function
 *@n: integer
 *@x: integer
 *Return: returns int
 */
int sqroot(int n, int x)

{
if (x * x == n)
return (x);
else if (x * x < n)
return  (sqroot(n, x + 1));
else
return (-1);
}
