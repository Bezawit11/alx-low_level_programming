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
if (*head == NULL || head == NULL)
return (-1);
temp = *head;
if (index == 0)
{
if (temp->next == NULL)
{
*head = NULL;
}
else
{
*head = temp->next;
}
free(temp);
return (1);
}
while (index > 0)
{
if (temp->next == NULL)
{
return (-1);
}
temp = temp->next;
--index;
}
if (temp->next->next != NULL)
{
temp->next = temp->next->next;
}
else 
{
temp->next = NULL;
}
free(temp);
return (1);
}
