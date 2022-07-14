#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *cap_string - capitalizes words
 *@c: character pointer
 *Return: returns value
 */
char *cap_string(char *c)

{
int i, l;
l = strlen(c);
for (i = 0; i < l; i++)
{
if (c[i] >= 'a' && c[i] <= 'z')
{
if (c[i - 1] != ' ' && c[i - 1] != '\n' && c[i - 1] != '\t' && c[i - 1] != '.')
if (c[i - 1] != ',' && c[i - 1] != ';' && c[i - 1] != '!' && c[i - 1] != '?')
if (c[i - 1] != '(' && c[i - 1] != ')' && c[i - 1] != '{' && c[i - 1] != '}')
if (c[i - 1] != '"' && i != 0)
continue;
c[i] = c[i] - 32;
}
}
return (c);
}
