#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *
 *
 */
int pop_listint(listint_t **head)

{
int n;
listint_t *temp;
if (head == NULL)
return (0);
temp = *head;
if (temp == NULL)
{
return (0);
}
(*head) = (*head)->next;
n = temp->n;
return (n);
}
