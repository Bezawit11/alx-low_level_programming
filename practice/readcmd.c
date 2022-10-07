#define _GNU_SOURCE
#include "monty.h"

/**
 *
 *
 */
void read_cmd(char *file)
  
{
FILE *stream;
/*stack_t *stack = NULL;*/
char *buffer, **tokenz;
size_t t = 0;
int line_number = 1;
printf("stream");
stream = fopen(file, "r");
if (stream == NULL){
    printf("Error: Can't open file %s\n", file);
    exit(EXIT_FAILURE);
}
printf("call to getline");
while (getline(&buffer, &t, stream) != -1)
{
printf("call to parse");
tokenz = parse(buffer, tokenz);
instruction(tokenz);
line_number++;
}
}
