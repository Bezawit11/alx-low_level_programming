#include <stdio.h>
#include "lists.h"

/**
 *get_dnodeint_at_index - returns the nth node of a dlinked list
 *@head: doubly linked list
 *@index: the index of the node, starting from 0
 *Return: returns the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)

{
dlistint_t *new = head, *c = head;
unsigned int i, l = 0;
while (c != NULL)
{
l++;
c = c->next;
}
if (index >= l)
return (NULL);
for (i = 0; i < index; i++)
{
new = new->next;
}
return (new);
}
