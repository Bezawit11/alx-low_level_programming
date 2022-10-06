#include "monty.h"

/**
 *
 *
 *
 */
int checker(char *str)

{
int a, i;
for (i = 0; str[i] != '\0'; str++)
{
a = isdigit(*str);
if (a == 0)
{
return 0;
}
}
return 1;
}
