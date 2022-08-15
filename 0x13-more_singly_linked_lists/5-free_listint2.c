#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *
 *
 *
 */
void free_listint2(listint_t **head)

{
listint_t *d;
while (s != NULL)
{
d = *head->next;
free(*head);
*head = d;
}
}
