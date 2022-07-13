#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *
 *
 *
 *
 */
void reverse_array(int *a, int n)

{
int i, t;
for (i = 0; i < n / 2; i++)
{
t = a[i];
a[i] = a [n - 1 - i];
a[n - 1 - i] = t;
}
}
