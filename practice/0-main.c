#include <stdio.h>
#include "monty.h"
#include <stdlib.h>
/**
 *
 *
 */
int main(int argc, char **argv)

{
FILE *ourfile;
char str[10], **opcode;
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
if (fgets(str, 10, ourfile) != NULL)
parse(str, opcode);

}
return 0;
}
