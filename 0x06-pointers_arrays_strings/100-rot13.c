#include <stdio.h>
#include "main.h"

/**
 *rot13 - encode
 *@c: char pointer
 *Return: returns a value
 */
char *rot13(char *c)

{
int i, d;
char s[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char p[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
for (i = 0; c[i] != '\0'; i++)
{
for (d = 0; d <= 53; d++)
{
if ((c[i] == s[d]) && ((c[i] >= 'a' && c[i] <= 'z') || (c[i] >= 'A' && c[i] <= 'Z')))
{
c[i] = p[d];
break;
}
}
}
return (c);
}

