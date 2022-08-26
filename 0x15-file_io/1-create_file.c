#include "main.h"

/**
*
*
*/
int create_file(const char *filename, char *text_content)
 
{
int fd, i, h, l = 0;
if (text_content == NULL)
return (-1);
fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (fd < 0)
return (-1);
for (i = 0; text_content[l] != '\0'; i++)
{
l++;
}
h = write(fd, text_content, l);
if (h < 0)
return (-1);
close(fd);
return (1);
}
