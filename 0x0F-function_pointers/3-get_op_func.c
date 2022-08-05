#include <stdio.h>
#include "3-calc.h"

/**
 *get_op_func - returns a pointer to a function
 *@s: operator passed as an argument
 *Return: returns function pointers
 */
int (*get_op_func(char *s))(int, int)

{
op_t ops[] = 
{
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
while (i < 6)
{
if (*(ops[i].op) == *s || i == 5)
break;
i++;
}
return (ops[i].f);
}
