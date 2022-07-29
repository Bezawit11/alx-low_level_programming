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
char* string;
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
else if (*c == 'x')
v = va_arg(arg, 
putchar
else if (*c == 's')
v = va_arg(arg, char*)
puts(v);
else if (*c == '
}
}
