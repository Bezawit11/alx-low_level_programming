#include <stdio.h>
#include "monty.h"
#include <stdlib.h>

/**
 *
 *  
 *
 */
int main(int argc, char **argv)

{
FILE *ourfile;
char str[10], **opcode;
stack_t stack;
if (argc != 2)
{
printf("USAGE: monty file\n");
exit(EXIT_FAILURE);
}
ourfile = fopen(argv[1], "r");
if (ourfile == NULL){
printf("Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}
else{
while (fgets(str, 10, ourfile)){
opcode = parse(str, opcode);
i++;
instruction(opcode[0])(stack, i);
}
}
return 0;
}
