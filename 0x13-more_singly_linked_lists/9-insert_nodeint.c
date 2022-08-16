#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *
 *
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

{
unsigned int i;
listint_t *temp, *new;
temp = *head;
for (i = 0; i < idx; i++)
{
temp = temp->next;
}
new->next = temp->next;
new->n = n;
temp->next = new;
return (new);
}
