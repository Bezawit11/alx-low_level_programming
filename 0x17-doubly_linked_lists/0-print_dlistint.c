#include <stdio.h>
#include "lists.h"

/**
 *print_dlistint - a function that prints all the elements of a list
 *@h: doubly linked list
 *Return: returns the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)

{
size_t i = 0;
while (h != NULL)
{
i++;
printf("%d\n", h->n);
h = h->next;
}
return (i);
}
