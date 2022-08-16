#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *
 *
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)

{
listint_t *temp;
unsigned int i = 0;
temp = *head;
if (temp == NULL)
return (-1);
if (index == 0)
{
*head = temp->next;
return (1);
}
while (i < index)
{
temp = temp->next;
if (temp == NULL)
return (-1);
}
temp->next = temp->next->next;
return (1);
}
