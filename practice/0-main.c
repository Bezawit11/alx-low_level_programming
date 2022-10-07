#include "monty.h"

/**
 *
 *  
 *
 */
int main(int argc, char **argv)

{
if (argc != 2)
{
printf("USAGE: monty file\n");
exit(EXIT_FAILURE);
}
printf("call to read_cmd\n");
read_cmd(argv[1]);
return 1;
}
