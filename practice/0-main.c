#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 *
 *  
 *
 */
int main(int argc, char **argv)

{
int n = 0;/* r;*/
stack_t *c = malloc(sizeof(stack_t));
/*char **opcode;*/
FILE *ourfile;
char str[10];
/*size_t t;*/
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
fgets(str, 10, ourfile);
while (str != NULL){
printf("yayyyyy %s\n", str);
instruction(str, n, &c);
fgets(str, 10, ourfile);
}
}
fclose(ourfile);
/*free_struct(c);*/
return 1;
}
