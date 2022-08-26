#include <stdio.h>
#include "main.h"

/**
 *main - copies contents of one file to another
 *@ac: argument count
 *@av: argument variable
 *Return: returns int
 */
int main(int ac, char *av[])
 
{
int to_fd, fro_fd;
if (ac != 3)
{
dprintf(SE, "Usage: cp file_from file_to\n"), exit(97);
}
fd = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, mode);

}
