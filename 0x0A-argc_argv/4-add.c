#include <stdio.h>
#include <stdlib.h>

/**
 *main - adds positive numbers
 *@argc: arg count
 *@argv: array
 *Return: returns 1 or 0.
 */
int main(int argc, char **argv)

{
int i, n = 0;
for (i = 0; i < argc; i++)
{
if (atoi(argv[i]) == 0)
break;
if (argc == 1)
return (0);
n = n + atoi(argv[i]);
}
if (atoi(argv[i]) == 0)
printf("Error\n");
return (1);
else
printf("%i", n);
}
