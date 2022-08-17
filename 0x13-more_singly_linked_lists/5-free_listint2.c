#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *free_listint2 - frees a listint_t
 *@head: linked list
 *Return: void
 */
void free_listint2(listint_t **head)

{
listint_t *d;
if (head == NULL)
return;
while (*head != NULL)
{
d = *head;
*head = (*head)->next;
free(d);
}
}
