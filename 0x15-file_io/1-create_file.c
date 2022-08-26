#include "main.h"

/**
 *create_file - creates a new file
 *@text_content: text to be written
 *Return: returns 1 on success, -1 if fail
 */
int create_file(const char *filename, char *text_content)
 
{
int fd, i, h, l = 0;
if (filename == NULL)
return (-1);
if (text_content == NULL)
{
fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
return (1);
}
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
