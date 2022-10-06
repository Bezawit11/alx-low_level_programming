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
int i = 0, n = 0;/* r;*/
stack_t *c = malloc(sizeof(stack_t));
/*char **opcode;*/
FILE *ourfile;
char str[10] = {0};
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
printf("yayyyyy\n");
/*r = checker(opcode[1]);
if (r == 0)
{
printf("L<line_number>: usage: push integer");
exit(EXIT_FAILURE);
}*/
i++;
/*n = atoi(opcode[1]);*/
printf("while loop");
instruction(str, n, &c);
}
}
/*free_struct(c);*/
return 1;
}
