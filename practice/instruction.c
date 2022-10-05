#include "monty.h"

/**
 *
 *
 *
 *
 */
stack_t (*instruction(char *op))(stack_t, unsigned int)

{
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
<<<<<<< HEAD
if ((strcmp(ins[i].opcode, op) == 0) || (i == 7))
=======
if (strcmp(ins[i].opcode, op) == 0) || i == 7)
>>>>>>> 5f759f47b437dc4b396b398540a5c49240f1fd36
break;
i++;
}
return (ins[i].f);
}
