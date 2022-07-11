#include <stdio.h>
#include "main.h"

/**
 *swap_int - swaps integers
 *@a: first integer
 *@b: second integer
 *Return - void
 */
void swap_int(int *a, int *b)

{
int m;
m = *a;
*a = *b;
*b = m;
}
