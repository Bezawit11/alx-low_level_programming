#include <stdio.h>
#include "lists.h"

/**
 *
 *
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)

{
dlistint_t *new = head;
unsigned int i;
for (i = 0; i < index; i++)
{
new = new->next;
}
return new;
}
