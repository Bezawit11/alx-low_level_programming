#include <stdio.h>
#include "main.h"

/**
 *
 *
 *
 */
int is_prime_number(int n)

{
return (prime(n, 2));
}

/**
 *prime - a function
 *@n: integer
 *@x: integer
 *Return: returns value
 */
int prime(int n, int x)

{
if ((n != x && n % x == 0) || n <= 1)
return (0);
else if (x >= n && n > 1)
return (1);
else
return (prime(n, x + 1));
}
