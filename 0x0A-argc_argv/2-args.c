#include <stdio.h>

/**
 *main - prints all arguments
 *@argc: argument count
 *@argv: array of arg
 *Return: returns int
 */
int main(int argc, char **argv)

{
int i;
for (i = 0; i < argc; i++)
{
printf("%S\n", argv[i]);
}
return (0);
}
