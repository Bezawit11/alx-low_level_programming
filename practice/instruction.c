#include "monty.h"

/**
 *
 *
 *
 *
 */
void (*instruction(char *str))(stack_t, unsigned int)

{
char **op;
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
op = parse(str, op);
while (i < 8)
{
if ((strcmp(ins[i].opcode, op[0]) == 0) || (i == 7))
break;
i++;
}
return (ins[i].f);
}
