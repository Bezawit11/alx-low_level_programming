#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *str_concat - concatenates strings
 *@s1: string 1
 *@s2: string 2
 *Return: returns pointer
 */
char *str_concat(char *s1, char *s2)

{
char *chr;
int size1 = 0;
int size2 = 0;
int i;
if (s1 == NULL)
{
size1 = 0;
}
else
{
for (i = 0; s1[i] != '\0'; i++)
{
size1 = size1 + 1;
}
}
if (s2 == NULL)
{
size2 = 0;
}
else
{
for (i = 0; s2[i] != '\0'; i++)
{
size2 = size2 + 1;
}
}
chr = malloc((size1 + size2) *sizeof(char) + 1);
if (chr == 0)
{
return (0);
}
else
{
for (i = 0; i < size1; i++)
chr[i] = s1[i];
for (i = size1; i < size2 + size1; i++)
chr[i] = s2[i - size1];
}
return (chr);
}
