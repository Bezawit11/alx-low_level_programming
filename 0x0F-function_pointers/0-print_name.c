#include <stdio.h>
#include "function_pointers.h"

/**
 *print_name - prints name by calling a fun pointer
 *@name: string pointer
 *@f: function pointer
 */
void print_name(char *name, void (*f)(char *))

{
if (f != NULL)
f(name);
}
