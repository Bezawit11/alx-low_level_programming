#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *rev_string - a function
 *@s: pointer
 *Return: void
 */
void rev_string(char *s)

{
int l, i;
char str;
l = strlen(s);
for (i = 0; i < l / 2; i++)
{
str = s[i];
s[i] = s [l - 1 - i];
s[l - 1 - i] = str;
}
}
