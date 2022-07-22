#include <stdio.h>

/**
 *main - prints no. of arguments
 *@argc: number of arguments
 *@argv: array
 *Return: returns an int
 */
int main(int argc, char const **argv)

{
(void)argv;
printf("%i\n", argc - 1);
return (0);
}
