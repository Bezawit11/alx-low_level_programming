#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_numbers - prints numbers
 *@separator: string to be printed between numbers
 *@n: number of integers passed
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)

{
unsigned int i;
va_list p;
va_start(p, n);
for (i = 0; i < n; i++)
{
printd("%i", va_arg(p, unsigned int);
if (i != n - 1 && separator != NULL)
break;
printf("%s", separator);
}
va_end(p);
printf("\n");
}
