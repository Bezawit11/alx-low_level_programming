#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_puts-recursion -  a function
 *@s: a character pointer
 *Return: void
 */
void _puts_recursion(char *s)

{
int l;
l = strlen(s);
printf("%c", *s);
if (l > 0)
{
_puts_recursion(s + 1);
}
else
printf("\n");
}
