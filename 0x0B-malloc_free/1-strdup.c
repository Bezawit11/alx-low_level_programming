#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *_strdup - returns a pointer to copied str
 *@str: string pointer
 *Return: returns a pointer
 */
char *_strdup(char *str)

{
char *chr;
int size = 0;
int i;
if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{
size = size + 1;
}
chr = malloc((size) *sizeof(char) + 1);
if (chr == 0)
{
return (NULL);
}
else
{
for (i = 0; i < size; i++)
chr[i] = str[i];
}
return (chr);
}
