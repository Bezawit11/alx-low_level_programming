#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *list_len - prints all the elements
 *@h: node pointer
 *Return: returns size
 */
size_t list_len(const list_t *h)

{
size_t l = 0;
if (h == NULL)
return (0);
if (h->str == NULL)
{
h = h->next;
l++;
}
while (h != NULL)
{
h = h->next;
l++;
}
return (l);
}
