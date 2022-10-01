#include <stdio.h>
#include "lists.h"

/**
 *_print_dlistint_backward - prints starting from last node
 *@h: doubly linked list
 *Return: returns the no of nodes
 */
size_t _print_dlistint_backward(const dlistint_t *h)

{
size_t i = 0;
while (h->next != NULL)
{
i++;
h = h->next;
}
while (h->prev != NULL){
printf("%d\n", h->n);
h = h->prev;
}
return (i);
}
