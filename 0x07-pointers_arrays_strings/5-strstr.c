#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_strstr - a function
 *@haystack: pointer
 *@needle: pointer
 *Return: returnc char
 */
char *_strstr(char *haystack, char *needle)

{
int i, j, a, z;
/*l1 = strlen(needle);
l2 = strlen(haystack);*/
for (i = 0; needle[i] != '\0'; i++)
{
for (j = 0; haystack[j] != '\0'; j++)
{
if (needle[i] == haystack[j])
a = j;
for (z = 0; needle[z] != '\0'; z++)
{
if (needle[z] != haystack[z + j])
break;
}
if (needle[z] == '\0')
{
return (haystack + a);
}
}
if (haystack[j] == '\0')
break;
}
return (0);
}
