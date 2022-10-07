#include "monty.h"

/**
 *
 *
 *
 */
void instruction(char *cmd)

{
stack_t **c = NULL;
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
while (i < 7)
{
if ((strcmp(ins[i].opcode, cmd) == 0)){
break;}
i++;
}
if (i == 7){
fprintf(stderr, "Error: %s command not found\n", cmd);
}
ins[i].f(c, 1);
}
