#include <stdio.h>
#include "lists.h"

/**
 *free_listint - frees a listint_t
 *@head: linked list
 *Return: void
 */
void free_list(list_t *head)

{
list_t *s, *d;
s = head;
while (s != NULL)
{
d = s->next;
free(s);
s = d;
}
}
