#include "main.h"

/**
 *
 *
 */
int append_text_to_file(const char *filename, char *text_content)

{
int fd, i, j, l = 0;
char c;
fd = open(filename, O_WRONLY);
if (fd < 0)
return (-1); 
for (i = 0; text_content[i] != '\0'; i++)
{
l++;
}
while (j = read(fd, filename, l) > 0)
{
text_content++;
if (text_content == '\0')
break;
}
write(
}
