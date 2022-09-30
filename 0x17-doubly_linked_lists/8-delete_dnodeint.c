#include <stdio.h>
#include "lists.h"

/**
 *
 *
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)

{
dlistint_t *c = *head, *g = *head, *p = *head;
unsigned int i;
unsigned int l = 0;
if (*head == NULL)
{
return -1;
}
while (g != NULL)
{
l++;
g = g->next;
}
if (index >= l)
return -1;
if (index == 0)
{
c = c->next;
*head = c;
return 1;
}
for (i = 0; i < index; i++)
{
p = c;
c = c->next;
}
p->next = c->next;
c->next = NULL;
c->prev = NULL;
return 1;
}
