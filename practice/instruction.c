#include "monty.h"

/**
 *
 *
 *
 *
 */
stack_t (*instruction(char *str))(stack_t, unsigned int)

{
char **opcode;
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
opcode = parse(str, opcode);
while (i < 8)
{
if ((strcmp(ins[i].opcode[0], op) == 0) || (i == 7))
break;
i++;
}
return (ins[i].f);
}
