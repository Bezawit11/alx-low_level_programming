#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *
 *
 *
 */
char *_strdup(char *str)

{
char *chr;
int size = 0;
int i;
for (i = 0; str[i] != '\0'; i++)
{
size = size + 1;
}
chr = malloc((size) * sizeof(char) + 1);
if (str == NULL || chr == 0)
return (NULL);
else
{
for (i = 0; i < size; i++)
chr[i] = str[i];
}
return (chr);
}
