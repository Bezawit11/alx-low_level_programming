#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_nodeint_end - adds a new node at the end
 *@head: head node
 *@n: data
 *Return: returns a node struct
 */
listint_t *add_nodeint_end(listint_t **head, const int n)

{
listint_t *new, *temp;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->next = NULL;
new->n = n;
if (*head == NULL)
{
*head = new;
return (new);
}
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new;
return (new);
}
