#include "monty.h"

/**
 *
 *
 *
 *
 */
void (*instruction(char *str, int n, stack_t **c))(stack_t, unsigned int)

{
/*char **op;*/
instruction_t ins[] = {
{"push", op_push},
/*{"pall", op_pall},
{"pint", op_pint},
{"pop", op_pop},
{"swap", op_swap},
{"add", op_add },
{"nop", op_nop},*/
{NULL, NULL}
};
int i = 0;
while (i < 8)
{
if ((strcmp(ins[i].opcode, str) == 0) || (i == 7))
break;
i++;
}
if (i == 0)
{
c->n = n;
ins[i].f(c, n);
}
if (ins[i].f != NULL)
{
ins[i].f(c, n);
}
else if (ins[i].f == NULL){
fprintf(stderr, "%lu: unknown instruction %s", line_number, str);
exit(EXIT_FAILURE);}
}
