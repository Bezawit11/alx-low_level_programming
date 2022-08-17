#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_nodeint - adds a new node at the beginning
 *@head: linked list
 *@n: data
 *Return: returns address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)

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
