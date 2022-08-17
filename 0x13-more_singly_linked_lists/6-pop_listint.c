#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *pop_listint - deletes the head node
 *@head: linked list
 *Return: head node's data
 */
int pop_listint(listint_t **head)

{
int n;
listint_t *temp;
if (head == NULL)
{
return (0);
}
temp = *head;
if (temp == NULL)
{
return (0);
}
(*head) = (*head)->next;
n = temp->n;
free(temp);
return (n);
}
