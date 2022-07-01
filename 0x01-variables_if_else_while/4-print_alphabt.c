#include <stdio.h>

/**
 *main -Entry point
 *printing using puchar function
 *Return: Always 0 (Success)
 */
int main(void)

{
int x;
for (x = 'a'; x <= 'z'; x++)
{
if (x != 'e' && x != 'q')
putchar(x);
}
putchar('\n');
return (0);
}
