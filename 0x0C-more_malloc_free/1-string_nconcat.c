#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *string_nconcat - concatenates strings
 *@s1: string 1
 *@s2: string 2
 *@n: int
 *Return: returns a pointer to char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)

{
char* p;
unsigned int count1 = 0, count2 = 0;
unsigned int i;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (i = 0; s1[i] != '\0'; i++)
{
count1 = count1 + 1;
}
for (i = 0; s2[i] != '\0'; i++)
{
count2 = count2 + 1;
}
if (n >= count)
{
n = count2 + 0;
}
p = (char*)malloc(sizeof(char) * (n + count1 + 1));
if (p == NULL)
{
return (0);
}
for (i = 0; i < count1; i++)
{
*(p + i) = *(s1 + i);
}
for (i = 0; i < n; i++)
{
*(p + count1 + i) = *(s2 + i);
}
return (p);
}
