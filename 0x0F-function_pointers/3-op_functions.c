#include <stdio.h>
#include "3-calc.h"

/**
 *op_add - adds integers
 *@a: integer 
 *@b: integer
 *Return: returns their sum
 */
int op_add(int a, int b)

{
return (a + b);
}

/**
 *op_sub - substracts b from a
 *@a: integer
 *@b: integer
 *Return: returns the difference
 */
int op_sub(int a, int b)

{
return (a - b);
}

/**
 *op_mul - multiplies a and b
 *@a: integer
 *@b: integer
 *Return: returns the product
 */
int op_mul(int a, int b)

{
return (a * b);
}

/**
 *op_div - divides a by b
 *@a: integer
 *@b: integer
 *Return: returns the result of the division
 */
int op_div(int a, int b)

{
return (a / b);
}

/**
 *op_mod - finds the remainder when a is divided by b
 *@a: integer
 *@b: integer
 *Return: returns remainder
 */
int op_mod(int a, int b)

{
return (a % b);
}
