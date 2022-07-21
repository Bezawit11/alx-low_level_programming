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
int l, i;
l = strlen(s);
for (i = 0; i < l; i++)
{
printf("%c", *(s + i));
}
printf("\n");
}
