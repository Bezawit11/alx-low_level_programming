#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 *main - check the code
 *@argc: argument count
 *@argv: arg variable
 *Return: Always 0.
 */
int main(int argc, char **argv)

{
int a, b, k;
char *s;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
s = argv[2];
if ((*s != '+' && *s != '-' && *s != '*' && *s != '/' && *s != '%') || get_op_func(argv[2]) == NULL || strlen(s) != 1)
{
printf("Error\n");
exit(99);
}
if ((*s == '/' && b == 0) || (*s == '%' && b == 0))
{
printf("Error\n");
exit(100);
}
k = get_op_func(s)(a, b);
printf("%d\n", k);
return (0);
}
