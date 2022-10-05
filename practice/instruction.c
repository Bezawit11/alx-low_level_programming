#include "monty.h"

/**
 *
 *
 *
 *
 */
void (*instruction(char *op))(stack_t, unsigned int)

{
instruction_t ins[] = {
{"push", op_push},
{"pall", op_pall},
{"pint", op_pint},
{"pop", op_pop},
{"swap", op_swap},
{"add", op_add },
{"nop", op_nop},
{NULL, NULL}
};
int i = 0;
while (i < 8)
{
if (*(ins[i].opcode) == str || i == 7)
break;
i++;
}
return (ins[i].f);
}
