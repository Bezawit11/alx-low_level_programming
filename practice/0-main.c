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
int n = 0, h;
stack_t *c = malloc(sizeof(stack_t));
/*char **opcode;*/
FILE *ourfile;
char s[10];
char *str = malloc(50 *sizeof(char *));
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
fgets(s, 10, ourfile);
while (str != NULL){
strcpy(str, s);
h = strlen(str);
if (str[h - 1] == '\n')
{
str[h - 1] = '\0';
}
printf("yayyyyy %s", str);
printf("woohoo\n");
instruction(str, n, &c);
/*fgets(s, 10, ourfile);*/
break;
}
}
fclose(ourfile);
/*free_struct(c);*/
return 1;
}
