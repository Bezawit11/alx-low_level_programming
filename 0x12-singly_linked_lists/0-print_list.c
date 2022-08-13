#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *print_list - prinys all the elements
 *@h: node pointer
 *Return: returns size
 */
size_t print_list(const list_t *h)

{
size_t l = 0;
if (h == NULL)
return (0);
if (h->str == NULL)
{
printf("[0] (nil)");
h = h->next;
l++;
}
while (h != NULL)
{
printf("[%d] ", h->len);
printf("%s\n", h->str);
h = h->next;
l++;
}
return (l);
}
