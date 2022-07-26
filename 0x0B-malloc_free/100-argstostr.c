#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *argstostr - a function
 *@ac: integer
 *@av: pointer
 *Return: returns a char pointer
 */
char *argstostr(int ac, char **av)

{
char *s;
int i, j, k = 0;
int strl = 1;
s = malloc(ac * sizeof(char));
if (ac == 0 || av == NULL || s == NULL)
{
return (NULL);
}
for(i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
strl = strl + 1;
}
strl = strl + 1;
}
for (i = 0; i < ac; i++)
{
for (j = 0; j < strl; j++)
{
s[k] = av[i][j];
k++;
}
s[k] = '\n';
}
s[k] = '\0';
return (s);
}
