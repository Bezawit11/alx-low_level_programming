#include <stdio.h>

/**
 *
 *
 */
int main(void)

{
int c = 1, a = 0;
int i;
for (i = 1; i <= 98; i++)
{
c = c + a;
printf("%d", c);
printf(",");
printf(" ");
a = c - a;
}
printf("\n");
return (0);
}
