#include <stdio.h>

/*
 *main - Entry point
 *printing using putchar function
 *Return: Always 0 (Success)
 */
int main(void)
{
int x;

for (x = 'a'; x <= 'z'; x++)
putchar(x);
for (x = 'A'; x<= 'Z'; x++)
putchar(x);
putchar('\n');
return (0);
}
