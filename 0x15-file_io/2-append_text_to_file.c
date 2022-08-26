#include "main.h"

/**
 *append_text_to_file - appends text to the end of a file
 *@filename: name of file
 *@text_content: text to append
 *Return: 1 for success -1 for fail
 */
int append_text_to_file(const char *filename, char *text_content)

{
int fd, i, a, l = 0;
/*char c;*/
if (text_content == NULL && filename == NULL)
return (1);
if (text_content == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd < 0)
return (-1); 
for (i = 0; text_content[i] != '\0'; i++)
{
l++;
}
a = write(fd, text_content, l);
if (a < 0)
return (-1);
close (fd);
return (1);
}
