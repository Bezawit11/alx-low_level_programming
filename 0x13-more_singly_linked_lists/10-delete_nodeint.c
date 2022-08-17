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
listint_t *temp;
if (*head == NULL || head == NULL)
{
return (-1);
}
temp = *head;
if (index == 0)
{
*head = temp->next;
free(temp);
return (1);
}
for (i = 0; i < index - 1; i++)
{
if (temp->next == NULL)
return (-1);
temp = temp->next;
}
if (temp->next->next == NULL)
{
*head = temp;
}
else
{
temp->next = temp->next->next;
*head = temp;
}
free(temp);
return (1);
}
