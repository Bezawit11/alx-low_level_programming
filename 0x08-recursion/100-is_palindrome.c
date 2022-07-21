#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *
 *
 *
 */
int is_palindrome(char *s)

{
int l;
l = strlen(s);
return (compare(s, 0, l - 1, l % 2));
}

/**
 *compare - a function
 *@a: int
 *@z: int
 *@d: int
 *Return: returns an int
 */
int compare(char *s, int a, int z, int d)
{
if (s[a] != s[z])
return (0);
if ((a == z && d != 0) || ( a == z + 1 && d == 0))
return (1);
else
return (compare(s, a + 1, z - 1, d));
}
