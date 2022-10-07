#include "monty.h"

/**
 *
 *
 *
 */
void op_push(stack_t **stack, unsigned int line_number)

{
int data = 3;
stack_t *top;

	(void)line_number;



		top = malloc(sizeof(stack_t));

			if (top == NULL)

					{

								fprintf(stderr, "Error: malloc failed\n");

										exit(EXIT_FAILURE);

											}



				top->n = data;

					top->next = *stack;

						top->prev = NULL;

							if (*stack != NULL)

			(*stack)->prev = top;
*stack = top;
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
