#include "monty.h"

/**
 *parse - tokenization
 *@str: line from a file
 *Return: returns a tokenized line
 */
char *parse(char *str, unsigned int line_number)

{
char *tok;
printf("L%d: usage: push integer\n", line_number);
tok = strtok(str, "\n");
if (tok == NULL)
return NULL;
tok = strtok(str, " ");
/*free(tok);*/
return (tok);
}
