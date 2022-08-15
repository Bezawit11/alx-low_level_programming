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
return (NULL);
temp = *head;
head = temp->next;
n = temp->n;
return (n);
}
