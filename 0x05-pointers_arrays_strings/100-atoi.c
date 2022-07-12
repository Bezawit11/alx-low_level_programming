#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *
 *
 *
 */
int _atoi(char *s)

{
int l, i;
l = strlen(s);
for (i = 0; i <= l; i++)
{
if (*(s + i) <= 57 && *(s + i) >= 57)
break;
printf("%d", *(s + i));
}
return (0);
}
