#include <stdio.h>
#include "main.h"

/**
 *
 *
 *
 */
int _strlen(char *s)

{
int a = 0;
while (*s != '\0')
{
a = a + 1;
s++;
}
return (a);
}
