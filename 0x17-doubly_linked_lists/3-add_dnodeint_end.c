#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *add_dnodeint_end - a function that adds a new node at the end of a list
 *@head: doubly linked list
 *@n: element of a node
 *Return: returns the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)

{
dlistint_t *new;
dlistint_t *c = *head;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
if (c == NULL)
{
new->n = n;
new->next = NULL;
new->prev = *head;
*head = new;
return (*head);
}
new->n = n;
while (c->next != NULL)
{
c = c->next;
}
c->next = new;
new->next = NULL;
return (*head);
}
