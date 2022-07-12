#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *puts2 - prints every other character
 *@str: pointer
 *Return: void
 */
void puts2(char *str)

{
int i, l;
l = strlen(str);
for (i =  0; i <= l / 2; i++)
{
_putchar(*(str + i + i));
}
_putchar('\n');
}
