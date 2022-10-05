#include "monty.h"

/**
 *
 *
 *
 */
void op_push(stack_t **stack, unsigned int line_number)

{
stack_t *new;
new = malloc(sizeof(stack_t));
if(*stack == NULL)
{
printf("Stack overflow");
}
new->n = line_number;
new->prev = NULL;
new->next = *stack;
if ((*stack) != NULL)
{
(*stack)->prev = new;
}
*stack = new;
free(new);
}

/**
 *
 *
 *
 */
/*void op_pall(stack_t **stack, unsigned int line_number)

{

}

**
 *
 *
 *
 */
/*void op_pint(stack_t **stack, unsigned int line_number)

{

}

**
 *
 *
 */
/*void op_pop(stack_t **stack, unsigned int line_number)

{

}

**
 *
 *
 */
/*void op_swap(stack_t **stack, unsigned int line_number)

{

}

void op_add(stack_t **stack, unsigned int line_number)

{

}

void op_nop(stack_t **stack, unsigned int line_number)

{

}*/
