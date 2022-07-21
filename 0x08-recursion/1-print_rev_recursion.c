#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_print_rev_recursion - a function
 *@s: a pointer
 *Return: void
 */
void _print_rev_recursion(char *s)

{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
printf("%c", *s);
}
}
