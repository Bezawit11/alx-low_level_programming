#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - adds positive numbers
 *@argc: arg count
 *@argv: array
 *Return: returns 1 or 0.
 */
int main(int argc, char **argv)

{
int b, n = 0;
int a = 1;
if (argc == 1)
{
printf("0\n");
return (0);
}
while (argc > 1)
{
b = 0;
while (argv[a][b])
{
if (!isdigit(argv[a][b]))
{
printf("Error\n");
return (1);
}
b++;
}
n = n + atoi(argv[a]);
a++;
argc--;
}
printf("%i\n", n);
return (0);
}
