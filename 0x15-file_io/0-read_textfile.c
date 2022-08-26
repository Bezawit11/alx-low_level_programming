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
ssize_t fd, a, b;
char *let;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd < -1)
{
return (0);
}
let = malloc(sizeof(char) * letters);
if (let == NULL)
return (0);
a = read
if (i < 0)
{
		free(buf);
		return (0);
}
return (0);

}
