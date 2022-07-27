#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 *quo - a recrusive function that finds min. no. coins
 *@n: amount of cents
 *Return: returns a value int
 */
int quo(int n)

{
int i, a, b, h, sum = 0;
int c[] = {25, 10, 5, 2, 1};
for (i = 0; c[i] != '\0'; i++)
{
h = c[i];
if (n / h > 0)
break;
}
a = n / h;
b = n % h;
if (b == 25 || b == 10 || b == 5 || b == 2 || b == 1)
{
sum = a + 1;
return (sum);
}
else if (b == 0)
{
return (a);
}
else
{
sum = a + quo(b);
return (sum);
}
}
/**
 *main - prints min no. of coins
 *@argc: argument count
 *@argv: argument variable
 *Return: returns 0
 */
int main(int argc, char **argv)

{
int a, s;
if (argc != 2)
{
printf("Error\n");
return (1);
}
a = atoi(argv[1]);
if (a >= 0)
{
s = quo(a);
printf("%d\n", s);
}
else
printf("0\n");
return (0);
}
