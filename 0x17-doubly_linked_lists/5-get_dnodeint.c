#include <stdio.h>
#include "lists.h"

/**
 *get_dnodeint_at_index - a function that returns the nth node of a dlinked list
 *@head: doubly linked list
 *@index: the index of the node, starting from 0
 *Return: returns the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)

{
dlistint_t *new = head;
unsigned int i;
for (i = 0; i < index; i++)
{
new = new->next;
}
return (new);
}
