#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *add_dnodeint - a function that adds a new node at the beginning of a list
 *@head: doubly lined list
 *@n: element of a node
 *Return: returns the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)

{
dlistint_t *new;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->prev = NULL;
new->next = *head;
*head = new;
return (*head);
}
