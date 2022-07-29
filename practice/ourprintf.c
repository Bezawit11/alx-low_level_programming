#include <stdio.h>
#include <stdarg.h>

/**
 *
 *
 *
 */
void _printf(char* format, ...)

{
char* c;
int v;
va_list arg;
va_start(arg, format);
for (c = format; *c != '\0'; c++)
{
for (c = format; *c != %; c++)
{
putchar(*c);
}
c++;
if (*c == 'd')
v = va_arg(arg, int);
putchar(v);
if (*c == ''x')
v = va_arg(arg, 
}
}
