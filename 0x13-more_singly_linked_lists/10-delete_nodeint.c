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
unsigned int i;
listint_t *temp, *prev;
if (*head == NULL || head == NULL)
{
return (-1);
}
temp = *head;
if (index == 0)
{
if (temp->next == NULL)
return (-1);
*head = temp->next;
free (temp);
return (1);
}
for (i = 0; i < index; i++)
{
if (temp->next == NULL)
return (-1);
prev = temp;
temp = temp->next;
}
prev->next = temp->next;
*head = prev;
return (1);
}
