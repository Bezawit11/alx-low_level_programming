#include <stdio.h>
#include "lists.h"

/**
 *reverse_listint - a function that reverses a listint_t linked list
 *@head: a linked list to be reversed
 *Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)

{
listint_t *c = NULL, *prev = *head;
while (prev != NULL)
{
add_nodeint(&c, prev->n);
prev = prev->next;
}
*head = c;
return (*head);
}

listint_t *add_nodeb(listint_t **head, const int n)

{
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->next = *head;
new->n = n;
*head = new;
return (*head);
}
