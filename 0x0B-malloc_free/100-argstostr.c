#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *
 *
 *
 */
char *argstostr(int ac, char **av)

{
char *s;
int i;
av = (char **) malloc(ac * sizeof(char));
for (i = 0; i < ac; i++)
{
s[i] = *(av + i);
}
return (s);
}
