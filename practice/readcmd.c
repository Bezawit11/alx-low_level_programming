#include "monty.h"


/**
 *
 *
 */
void read_cmd(char *file)
  
{
FILE *stream;
stack_t *stack = NULL;
char *buffer = NULL;
size_t t = 0;
stream = fopen(file, "r");
if (stream == NULL){
    printf("Error: Can't open file %s\n", argv[1]);
    exit(EXIT_FAILURE);
}
while (getline(&buffer, &t, stream) != -1)
{
parse(buffer, line_number);
}
}
