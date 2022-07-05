#include <stdio.h>
#include "main.h"

/**
 *print_alphabet - prints the alphabet in lowercase
 *Prints the alphabet using for loop
 */
void print_alphabet(void)

{
char c;
for (c = 'a'; c <= 'z'; c++)
{
printf("%c", c);
}
printf("\n");
}
