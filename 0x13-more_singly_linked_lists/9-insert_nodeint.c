#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a node
 *@head: linked list
 *@idx: index where node is added
 *@n: data
 *Return: returns linked list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

{
unsigned int i;
listint_t *temp, *new;
temp = *head;
for (i = 1; i < idx; i++)
{
temp = temp->next;
if (temp == NULL)
return (NULL);
}
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
if (idx != 0)
{
new->next = temp->next;
new->n = n;
temp->next = new;
}
else
{
new->next = *head;
new->n = n;
*head = new;
return (*head);
}
return (new);
}
