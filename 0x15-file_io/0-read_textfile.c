#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 *
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
 
{
if (filename == NULL)
return (0);
open(filename
}
