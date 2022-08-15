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
temp = malloc(sizeof(listint_t));
if (temp == NULL)
{
return (0);
}
temp = *head;
(*head) = (*head)->next;
n = temp->n;
return (n);
}
