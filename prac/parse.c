#include "monty.h"

/**
 *
 *
 *
 *
 */
char **parse(char *str, char **opcode)

{
	int i;
	char *tok = malloc(50);
	opcode = malloc(50 * sizeof(char *));
	printf("parse\n");
	if (opcode == NULL)
		return NULL;
	tok = strtok(str, " ");
	while (tok != NULL)
	{
		opcode[i] = tok;
		tok = strtok(NULL, " ");
		i = i + 1;
	}
	opcode[i] = NULL;
	free(tok);
	return (opcode);
}
