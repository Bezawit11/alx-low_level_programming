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
int i = 0, n, r;
char **opcode;
char *s = "push";
FILE *ourfile;
char str[10];
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
while(fgets(str, 12, ourfile)){
printf("%s", str);}
instruction(s, 1);
}
/*free_struct(c);*/
return 1;
}
