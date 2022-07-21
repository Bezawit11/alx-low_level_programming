#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *
 *
 *
 */
void _print_rev_recursion(char *s)

{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
printf("%c", *s);
}
else
printf("\n");
}
