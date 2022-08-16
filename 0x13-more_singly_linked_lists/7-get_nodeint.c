#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *get_nodeint_at_index - function
 *@head: struct
 *@index: integer
 *Return: returns a node pointer
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
if (temp == NULL)
return (NULL);
}
return (temp);
}
