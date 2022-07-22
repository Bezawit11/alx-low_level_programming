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
if (argc == 1)
printf("0\n");
if (atoi(argv[i]) == 0)
printf("Error\n");
return (1);
n = n + atoi(argv[i]);
}
printf("%i\n", n);
return (0);
}
