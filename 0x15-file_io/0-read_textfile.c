#include "main.h"

/**
 *read_textfile - reads a text file
 *@letters: number of letters it should read and print
 *Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
 
{
int fd, a, b;
char *let;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd < 0)
{
return (0);
}
let = malloc(sizeof(char) * letters);
if (let == NULL)
return (0);
a = read(fd, let, letters);
if (a < 0)
{
free(let);
return (0);
}
let[a] = '\0';
close(fd);
b = write(STDOUT_FILENO, let, a);
if (b < 0)
{
free(let);
return (0);
}
free(let);
return (b);
}
