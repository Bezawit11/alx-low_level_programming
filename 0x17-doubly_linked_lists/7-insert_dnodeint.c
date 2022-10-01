#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *insert_dnodeint_at_index - inserts a new node at a given position
 *@h: doubly linked list
 *@idx: index of the list where the new node should be added
 *@n: element of a node
 *Return: returns the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)

{
dlistint_t *new, *c = *h, *g = *h;
unsigned int i, l = 0;
if (h == NULL)
return (NULL);
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
while (g != NULL)
{
l++;
g = g->next;
}
if (idx > l)
return (NULL);
if (idx == l && l != 0)
{
while (c->next != NULL)
{
c = c->next;
}
c->next = new;
new->prev = c;
new->next = NULL;
return (new);
}
if (idx == 0)
{
new->prev = NULL;
new->next = *h;
if ((*h) != NULL)
{
(*h)->prev = new;
}
*h = new;
return (*h);
}
for (i = 1; i < idx; i++)
{
c = c->next;
}
new->prev = c;
new->next = c->next;
c->next->prev = new;
c->next = new;
return (new);
}
