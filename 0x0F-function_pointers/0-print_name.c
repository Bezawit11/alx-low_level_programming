#include <stdio.h>
#include "function_pointers.h"

/**
 *
 *
 *
 *
 */
void print_name(char *name, void (*f)(char *))

{
(*f) = {print_name_as_is, print_name_uppercase};
}
