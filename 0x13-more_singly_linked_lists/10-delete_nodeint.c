#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *delete_nodeint_at_index - deletes the node at index
 *@head: linked list
 *@index: index of the node that should be deleted
 *Return: 1 for success -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)

{
listint_t *c = *head, *g = *head, *p = *head;
unsigned int i;
unsigned int l = 0;
if (*head == NULL || head == NULL)
{
return (-1);
}
while (g != NULL)
{
l++;
g = g->next;
}
if (index >= l)
return (-1);
if (index == 0)
{
c = c->next;
*head = c;
return (1);
}
for (i = 0; i < index; i++)
{
p = c;
c = c->next;
}
p->next = c->next;
c->next = NULL;
free(c);
free(p);
free(g);
return (1);
}
