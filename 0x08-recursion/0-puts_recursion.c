#include <stdio.h>
#include "main.h"

/**
 *_puts_recursion - a function
 *@s: a character pointer
 *Return: void
 */
void _puts_recursion(char *s)

{
if (*s != '\0')
{
printf("%c", *s);
_puts_recursion(s + 1);
}
else
printf("\n");
}
