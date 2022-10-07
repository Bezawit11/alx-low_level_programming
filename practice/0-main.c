#define _GNU_SOURCE
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
FILE *stream;
if (argc != 2)
{
printf("USAGE: monty file\n");
exit(EXIT_FAILURE);
}
stream = fopen(argv[1], "r");
if (stream == NULL){
printf("Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}
else
{
read_cmd(stream);
}
fclose(stream);
return 1;
}
