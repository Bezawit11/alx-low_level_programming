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
if (*(s + i) <= 0 && *(s + i) >= 9)
break;
printf("%d", *(s + i));
}
return (0);
}
