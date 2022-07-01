#include <stdio.h>

/**
 *main -Entry point
 *printing using putchar function
 *Return: Always 0 (System)
 */
int main(void)

{
int n;
char ch;
for (n = 0; n < 10; n++)
putchar((n % 10) + '0');
for (ch = 'a'; ch <= 'g'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
