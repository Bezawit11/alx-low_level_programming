#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *
 *
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
unsigned int i;
listint_t *temp;
temp = head;
if (temp == NULL)
return (NULL);
for (i = 0; i < index; i++)
{
temp = temp->next;
}
return (temp);
}
