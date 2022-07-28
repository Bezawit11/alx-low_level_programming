#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *
 *
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)

{
char *p = (char *)malloc(sizeof(char) * unsigned int n);
int i, count1 = 0;
int count2 = 0;
for (i = 0; s1[i] = '\0'; i++)
{
count1 = count1 + 1;
}
for (i = 0; s2[i] = '\0'; i++)
{
count2 = count2 + 1;
}
for (i = 0; i < count2; i++)
{
*(s1 + count1 + i) = *(s2 + i);
}
}
