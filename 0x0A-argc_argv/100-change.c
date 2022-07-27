#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 *
 *
 *
 */
int quo(int n)

{
int i, sum = 0;
int c[] = {25, 10, 5, 2, 1};
for (i = 0; c[i] != '\0'; i++)
{
if  (n / c[i] > 0)
break;
}
a = argv[1] / c[i];
b = argv[1] % c[i];
if (b == c[0] || b == c[1] || b == c[2] || b == c[3] || b == c[4])
{
sum = a + b;
return(sum);
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
 *
 *
 *
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
if (n < 0)
{
printf("0\n");
}
s = quo(a);
return (s);
}
