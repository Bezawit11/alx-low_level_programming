#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 *reverse_listint - a function that reverses a listint_t linked list
 *@head: a linked list to be reversed
 *Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)

{
listint_t *p, *c;
if (*head == NULL)
return (NULL);
c = *head;
p = (*head)->next;
*head = (*head)->next;
c->next = NULL;
while(*head != NULL)
{
*head = (*head)->next;
p->next = c;
c = p;
p = (*head);
}
*head = c;
return (*head);
}
