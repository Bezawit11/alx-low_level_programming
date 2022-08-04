#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_numbers - prints numbers
 *@separator: string to be printed between strings
 *@n: number of strings passed
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)

{
unsigned int i;
va_list p;
char *a;
va_start(p, n);
for (i = 0; i < n; i++)
{
a = va_arg(p, char);
if (a != NULL)
printf("%s", a);
else
printf("(nil)");
if (i != n - 1 && separator != NULL)
printf("%s", separator);
}
va_end(p);
printf("\n");
}
