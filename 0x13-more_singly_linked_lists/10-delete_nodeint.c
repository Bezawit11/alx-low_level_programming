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
listint_t *temp;
unsigned int i;
temp = *head;
if (*head == NULL)
{
return (-1);
}
if (index == 0)
{
*head = temp->next;
free(temp);
return (1);
}
while (i < index)
{
temp = temp->next;
if (temp == NULL)
{
return (-1);
}
}
temp->next = temp->next->next;
free(temp);
return (1);
}
