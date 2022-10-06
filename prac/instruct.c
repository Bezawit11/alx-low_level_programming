#include "monty.h"

/**
 *
 *
 *
 *
 */
void instruction(char *str, int n)

{
char **op = NULL;
op = parse(str, op);
printf("%s", op[0]);
}
