#include <stdio.h>
#include <stdlib.h>

/**
 *main - multiplies two no.
 *@argc: arg. count
 *@argv: array
 *Return: returns 1 or 0.
 */
int main(int argc, char **argv)

{
(void)argc;
if (argc != 3)
{
printf("Error\n");
return (1);
}
printf("%i\n", atoi(argv[2]) * atoi(argv[1]));
return (0);
}
